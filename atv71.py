#!/usr/bin/python
# -*- coding: utf-8 -*-
# The MIT License (MIT)
# Copyright (c) 2018 Bruno Tibério
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

import canopen
import sys
import logging

class ATV71:

    network = None
    logger = None
    _connected = False
    # CANopen defined error codes and Maxon codes also
    errorIndex = {0x00000000:  'Error code: no error',
                  0x06020000:  'Error code: object does not exist',
                  0x06090011:  'Error code: subindex does not exist',
                  0x05040005:  'Error code: out of memory',
                  0x06010000:  'Error code: Unsupported access to an object',
                  0x06010001:  'Error code: Attempt to read a write-only object',
                  0x06010002:  'Error code: Attempt to write a read-only object',
                  0x06040043:  'Error code: general parameter incompatibility',
                  0x06040047:  'Error code: general internal incompatibility in the device',
                  0x06060000:  'Error code: access failed due to an hardware error',
                  0x06090030:  'Error code: value range of parameter exeeded',
                  0x06090031:  'Error code: value of parameter written is too high',
                  0x06090032:  'Error code: value of parameter written is too low',
                  0x06090036:  'Error code: maximum value is less than minimum value',
                  0x08000000:  'Error code: General error',
                  0x08000020:  'Error code: Data cannot be transferred or stored to the application',
                  0x08000021:  'Error code: Data cannot be transferred or stored to the application because of local control',
                  0x08000022:  'Error code: Wrong Device State',
                  # Maxon defined error codes
                  0x0f00ffc0:  'Error code: wrong NMT state',
                  0x0f00ffbf:  'Error code: rs232 command illegeal',
                  0x0f00ffbe:  'Error code: password incorrect',
                  0x0f00ffbc:  'Error code: device not in service mode',
                  0x0f00ffB9:  'Error code: error in Node-ID'
                  }
    state = {0: 'start', 1: 'not ready to switch on', 2: 'switch on disable',
             3: 'ready to switch on', 4: 'switched on', 5: 'refresh',
             6: 'measure init', 7: 'operation enable', 8: 'quick stop active',
             9: 'fault reaction active (disabled)', 10: 'fault reaction active (enable)', 11: 'fault',
             -1: 'Unknown'}

    def __init__(self, _network=None, debug=False):
        # check if network is passed over or create a new one
        if not _network:
            self.network = canopen.Network()
        else:
            self.network = _network

        self.logger = logging.getLogger('ATV71')
        if debug:
            self.logger.setLevel(logging.DEBUG)
        else:
            self.logger.setLevel(logging.INFO)
        
    def begin(self, nodeID, _channel='can0', _bustype='socketcan', objectDictionary=None):
        '''Initialize ATV71 device

        Configure and setup ATV71 device.

        Args:
            nodeID:    Node ID of the device.
            channel (optional):   Port used for communication. Default can0
            bustype (optional):   Port type used. Default socketcan.
            objectDictionary (optional):   Name of EDS file, if any available.
        Return:
            bool: A boolean if all went ok.
        '''
        try:
            self.node = self.network.add_node(
                nodeID, object_dictionary=objectDictionary)
            self.network.connect(channel=_channel, bustype=_bustype)
            self._connected = True
        except Exception as e:
            self.logger.info('[ATV71:{0}] Exception caught:{1}\n'.format(
                sys._getframe().f_code.co_name, str(e)))
            self._connected = False
        finally:
            return self._connected

    def disconnect(self):
        self.network.disconnect
        return
    
    #--------------------------------------------------------------
    # Basic set of functions
    #--------------------------------------------------------------
    def readObject(self, index, subindex):
        '''Reads an object

         Request a read from dictionary object referenced by index and subindex.

         Args:
             index:     reference of dictionary object index
             subindex:  reference of dictionary object subindex
         Returns:
             bytes:  message returned by ATV71 or empty if unsucessfull
        '''
        if self._connected:
            try:
                return self.node.sdo.upload(index, subindex)
            except Exception as e:
                self.logger.info('[ATV71:{0}] Exception caught:{1}\n'.format(
                    sys._getframe().f_code.co_name, str(e)))
                return None
        else:
            self.logger.info('[ATV71:{0}] Error: ATV71 is not connected\n'.format(
                sys._getframe().f_code.co_name))
            return None

    def writeObject(self, index, subindex, data):
        '''Write an object

         Request a write to dictionary object referenced by index and subindex.

         Args:
             index:     reference of dictionary object index
             subindex:  reference of dictionary object subindex
             data:      data to be stored
         Returns:
             bool:      boolean if all went ok or not
        '''
        if self._connected:
            try:
                self.node.sdo.download(index, subindex, data)
                return True
            except canopen.SdoAbortedError as e:
                text = "Code 0x{:08X}".format(e.code)
                if e.code in self.errorIndex:
                    text = text + ", " + self.errorIndex[e.code]
                self.logger.info('[ATV71:{0}] SdoAbortedError: '.format(sys._getframe().f_code.co_name) + text)
                return False
            except canopen.SdoCommunicationError:
                self.logger.info('[ATV71:{0}] SdoAbortedError: Timeout or unexpected response'.format(sys._getframe().f_code.co_name))
                return False
        else:
            self.logger.info('[ATV71:{0}] Error: ATV71 is not connected\n'.format(
                sys._getframe().f_code.co_name))
            return False

    #------------------------------------------------------------------------------
    # High level functions
    #------------------------------------------------------------------------------
    def readStatusWord(self):
        try:
            statusword = self.node.sdo['Statusword'].raw
            return statusword, True
        
        except canopen.SdoAbortedError as e:
            text = "Code 0x{:08X}".format(e.code)
            if e.code in self.errorIndex:
                text = text + ", " + self.errorIndex[e.code]
            self.logger.info('[ATV71:{0}] SdoAbortedError: '.format(sys._getframe().f_code.co_name) + text)
            return None, False
        except canopen.SdoCommunicationError:
            self.logger.info('[ATV71:{0}] SdoAbortedError: Timeout or unexpected response'.format(sys._getframe().f_code.co_name))
            return None, False


    def writeControlWord(self, controlword):
        '''Send controlword to device

        Args:
            controlword: word to be sent.

        Returns:
            bool: a boolean if all went ok.
        '''
        # sending new controlword
        self.logger.debug('[ATV:{0}] Sending controlword Hex={1:#06X} Bin={1:#018b}'.format(
            sys._getframe().f_code.co_name, controlword))
        controlword = controlword.to_bytes(2, 'little')
        return self.writeObject(0x6040, 0, controlword)

    def readControlWord(self):
        try:
            controlword = self.node.sdo['Controlword'].raw
            return controlword, True
        
        except canopen.SdoAbortedError as e:
            text = "Code 0x{:08X}".format(e.code)
            if e.code in self.errorIndex:
                text = text + ", " + self.errorIndex[e.code]
            self.logger.info('[ATV71:{0}] SdoAbortedError: '.format(sys._getframe().f_code.co_name) + text)
            return None, False
        except canopen.SdoCommunicationError:
            self.logger.info('[ATV71:{0}] SdoAbortedError: Timeout or unexpected response'.format(sys._getframe().f_code.co_name))
            return None, False
    
    
    def changeATVState(self, newState):
        '''Change ATV state

        Change ATV state using controlWord object

        To change ATV state, a write to controlWord object is made.
        The bit change in controlWord is made as shown in the following table:

        +-------------------+--------------------------------+
        | State             | LowByte of Controlword [binary]|
        +===================+================================+
        | shutdown          | 0xxx x110                      |
        +-------------------+--------------------------------+
        | switch on         | 0xxx x111                      |
        +-------------------+--------------------------------+
        | disable voltage   | 0xxx xx0x                      |
        +-------------------+--------------------------------+
        | quick stop        | 0xxx x01x                      |
        +-------------------+--------------------------------+
        | disable operation | 0xxx 0111                      |
        +-------------------+--------------------------------+
        | enable operation  | 0xxx 1111                      |
        +-------------------+--------------------------------+
        | fault reset       | 1xxx xxxx                      |
        +-------------------+--------------------------------+

        see section 8.1.3 of firmware for more information

        Args:
            newState: string with state witch user want to switch.

        Returns:
            bool: boolean if all went ok and no error was received.
        '''
        stateOrder = ['shutdown', 'switch on', 'disable voltage', 'quick stop',
                      'disable operation', 'enable operation', 'fault reset']

        if not (newState in stateOrder):
            logging.info('[ATV:{0}] Unkown state: {1}'.format(sys._getframe().f_code.co_name, newState))
            return False
        else:
            controlword, Ok = self.readControlWord()
            if not Ok:
                logging.info('[ATV:{0}] Failed to retreive controlword'.format(sys._getframe().f_code.co_name))
                return False
            # shutdown  0xxx x110
            if newState == 'shutdown':
                # clear bits
                mask = not ( 1<<7 | 1<<0 )
                controlword = controlword & mask
                # set bits
                mask  = ( 1<< 2 | 1<<1 )
                controlword = controlword | mask
                return self.writeControlWord(controlword)
            # switch on 0xxx x111
            if newState == 'switch on':
                # clear bits
                mask = not ( 1<<7 )
                controlword = controlword & mask
                # set bits
                mask  = ( 1<< 2 | 1<<1 | 1<<0 )
                controlword = controlword | mask
                return self.writeControlWord(controlword)
            # disable voltage 0xxx xx0x
            if newState == 'switch on':
                # clear bits
                mask = not ( 1<<7 | 1 << 1 )
                controlword = controlword & mask
                return self.writeControlWord(controlword)
            # quick stop 0xxx x01x
            if newState == 'quick stop':
                # clear bits
                mask = not ( 1<<7 | 1 << 2)
                controlword = controlword & mask
                # set bits
                mask  = ( 1<<1 )
                controlword = controlword | mask
                return self.writeControlWord(controlword)
            # disable operation 0xxx 0111
            if newState == 'disable operation':
                # clear bits
                mask = not ( 1<<7 | 1 << 3)
                controlword = controlword & mask
                # set bits
                mask  = ( 1<<2 | 1<< 1 | 1<<0 )
                controlword = controlword | mask
                return self.writeControlWord(controlword)
            # enable operation 0xxx 1111
            if newState == 'enable operation':
                # clear bits
                mask = not ( 1<<7 )
                controlword = controlword & mask
                # set bits
                mask  = ( 1<< 3 | 1 << 2 | 1 << 1 | 1 << 0 )
                controlword = controlword | mask
                return self.writeControlWord(controlword)
            # fault reset 1xxx xxxx
            if newState == 'fault reset':
                # set bits
                mask  = ( 1<<7 )
                controlword = controlword | mask
                return self.writeControlWord(controlword)


    def checkATVState(self):
        '''Check current state of ATV

        Ask the StatusWord of ATV and parse it to return the current state of ATV.

        +----------------------------------+-----+---------------------+
        | State                            | ID  | Statusword [binary] |
        +==================================+=====+=====================+
        | Start                            | 0   | x0xx xxx0  x000 0000|
        +----------------------------------+-----+---------------------+
        | Not Ready to Switch On           | 1   | x0xx xxx1  x000 0000|
        +----------------------------------+-----+---------------------+
        | Switch on disabled               | 2   | x0xx xxx1  x100 0000|
        +----------------------------------+-----+---------------------+
        | ready to switch on               | 3   | x0xx xxx1  x010 0001|
        +----------------------------------+-----+---------------------+
        | switched on                      | 4   | x0xx xxx1  x010 0011|
        +----------------------------------+-----+---------------------+
        | refresh                          | 5   | x1xx xxx1  x010 0011|
        +----------------------------------+-----+---------------------+
        | measure init                     | 6   | x1xx xxx1  x011 0011|
        +----------------------------------+-----+---------------------+
        | operation enable                 | 7   | x0xx xxx1  x011 0111|
        +----------------------------------+-----+---------------------+
        | quick stop active                | 8   | x0xx xxx1  x001 0111|
        +----------------------------------+-----+---------------------+
        | fault reaction active (disabled) | 9   | x0xx xxx1  x000 1111|
        +----------------------------------+-----+---------------------+
        | fault reaction active (enabled)  | 10  | x0xx xxx1  x001 1111|
        +----------------------------------+-----+---------------------+
        | Fault                            | 11  | x0xx xxx1  x000 1000|
        +----------------------------------+-----+---------------------+

        see section 8.1.1 of firmware manual for more details.

        Returns:
            int: numeric identification of the state or -1 in case of fail.
		'''
        statusword, ok = self.readStatusWord()
        if not ok:
            self.logger.info('[ATV:{0}] Failed to request StatusWord\n'.format(
                sys._getframe().f_code.co_name))
        else:

            # state 'start' (0)
			# statusWord == x0xx xxx0  x000 0000
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 0):
                ID = 0
                return ID

		# state 'not ready to switch on' (1)
		# statusWord == x0xx xxx1  x000 0000
            bitmask = 0b0100000101111111
            if (bitmask & statusword == 256):
            	ID = 1
            	return ID

            # state 'switch on disabled' (2)
            # statusWord == x0xx xxx1  x100 0000
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 320):
            	ID = 2
            	return ID

            # state 'ready to switch on' (3)
            # statusWord == x0xx xxx1  x010 0001
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 289):
            	ID = 3
            	return ID

            # state 'switched on' (4)
            # statusWord == x0xx xxx1  x010 0011
            bitmask = 0b0000000101111111
            if(bitmask & statusword == 291):
            	ID = 4
            	return ID

            # state 'refresh' (5)
            # statusWord == x1xx xxx1  x010 0011
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 16675):
            	ID = 5
            	return ID

            # state 'measure init' (6)
            # statusWord == x1xx xxx1  x011 0011
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 16691):
            	ID = 6
            	return ID
            # state 'operation enable' (7)
            # statusWord == x0xx xxx1  x011 0111
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 311):
            	ID = 7
            	return ID

            # state 'Quick Stop Active' (8)
            # statusWord == x0xx xxx1  x001 0111
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 279):
            	ID = 8
            	return ID

            # state 'fault reaction active (disabled)' (9)
            # statusWord == x0xx xxx1  x000 1111
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 271):
            	ID = 9
            	return ID

            # state 'fault reaction active (enabled)' (10)
            # statusWord == x0xx xxx1  x001 1111
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 287):
            	ID = 10
            	return ID

            # state 'fault' (11)
            # statusWord == x0xx xxx1  x000 1000
            bitmask = 0b0100000101111111
            if(bitmask & statusword == 264):
            	ID = 11
            	return ID

        # in case of unknown state or fail
        return -1

    def printATVState (self):
        ID = self.checkATVState()
        if ID is -1:
            print('[ATV:{0}] Error: Unknown state\n'.format(sys._getframe().f_code.co_name))
        else:
            print('[ATV:{0}] Current state [ID]:{1} [{2}]\n'.format( sys._getframe().f_code.co_name, self.state[ID], ID))
        return



    def printStatusWord(self):
        statusword, Ok = self.readStatusWord()
        if not Ok:
            print('[ATV71:{0}] Failed to retreive statusword\n'.format(sys._getframe().f_code.co_name))
            return
        else:
            print("[ATV71:{1}] The statusword is Hex={0:#06X} Bin={0:#018b}\n".format(
            statusword, sys._getframe().f_code.co_name))
            print('Bit 15: Direction of rotation [0 Foward | 1 Reverse]:          {0}'.format((statusword & (1 << 15))>>15))
            print('Bit 14: STOP via stop key:                                     {0}'.format((statusword & (1 << 14))>>14))
            print('Bit 13: Reserved:                                              {0}'.format((statusword & (1 << 13))>>13))
            print('Bit 12: Reserved:                                              {0}'.format((statusword & (1 << 12))>>12))
            print('Bit 11: Internal limit active:                                 {0}'.format((statusword & (1 << 11))>>11))
            print('Bit 10: Target reached:                                        {0}'.format((statusword & (1 << 10))>>10))
            print('Bit 09: Command or reference via the network:                  {0}'.format((statusword & (1 << 9 ))>>9))
            print('Bit 08: Reserved:                                              {0}'.format((statusword & (1 << 8 ))>>8))
            print('Bit 07: Warning:                                               {0}'.format((statusword & (1 << 7 ))>>7))
            print('Bit 06: Switch on disable:                                     {0}'.format((statusword & (1 << 6 ))>>6))
            print('Bit 05: Quick stop:                                            {0}'.format((statusword & (1 << 5 ))>>5))
            print('Bit 04: Voltage enabled (power stage on):                      {0}'.format((statusword & (1 << 4 ))>>4))
            print('Bit 03: Fault:                                                 {0}'.format((statusword & (1 << 3 ))>>3))
            print('Bit 02: Operation enable:                                      {0}'.format((statusword & (1 << 2 ))>>2))
            print('Bit 01: Switched on:                                           {0}'.format((statusword & (1 << 1 ))>>1))
            print('Bit 00: Ready to switch on:                                    {0}'.format(statusword & 1))
        return

    def printControlWord(self, controlword=None):
        '''Print the meaning of controlword

        Check the meaning of current controlword of device or check the meaning of your own controlword.
        Usefull to check your own controlword before actually sending it to device.

        Args:
            controlword (optional): If None, request the controlword of device.

        '''
        if not controlword:
            controlword, Ok = self.readControlWord()
            if not Ok:
                print('[ATV:{0}] Failed to retreive controlword\n'.format(sys._getframe().f_code.co_name))
                return
        print("[ATV:{1}] The controlword is Hex={0:#06X} Bin={0:#018b}\n".format(
            controlword, sys._getframe().f_code.co_name))
        
        print('Bit 15: Can be assigned to command:                     {0}'.format((controlword & (1 << 15 ))>>15))
        print('Bit 14: Can be assigned to command:                     {0}'.format((controlword & (1 << 14 ))>>14))
        print('Bit 13: Can be assigned to command:                     {0}'.format((controlword & (1 << 13 ))>>13))
        print('Bit 12: Can be assigned to command:                     {0}'.format((controlword & (1 << 12 ))>>12))
        print('Bit 11: Direction of rotation [0 Foward | 1 Reverse]:   {0}'.format((controlword & (1 << 11 ))>>11))
        print('Bit 10: Reserved:                                       {0}'.format((controlword & (1 << 10 ))>>10))
        print('Bit 09: Reserved:                                       {0}'.format((controlword & (1 << 9 ))>>9))
        print('Bit 08: Halt:                                           {0}'.format((controlword & (1 << 8 ))>>8))
        print('Bit 07: Fault reset:                                    {0}'.format((controlword & (1 << 7 ))>>7))
        print('Bit 06: Reserved:                                       {0}'.format((controlword & (1 << 6 ))>>6))
        print('Bit 05: Reserved:                                       {0}'.format((controlword & (1 << 5 ))>>5))
        print('Bit 04: Reserved:                                       {0}'.format((controlword & (1 << 4 ))>>4))
        print('Bit 03: Enable operation:                               {0}'.format((controlword & (1 << 3 ))>>3))
        print('Bit 02: Quick stop:                                     {0}'.format((controlword & (1 << 2 ))>>2))
        print('Bit 01: Enable voltage:                                 {0}'.format((controlword & (1 << 1 ))>>1))
        print('Bit 00: Switch on:                                      {0}'.format(controlword & 1))
        return


def main():
    '''Test ATV71 CANopen communication with some examples.

    Use a few examples to test communication with ATV71 device using
    a few functions. Also resets the fault error if present.

    Show sample using also the EDS file.
    '''

    import argparse
    if (sys.version_info < (3, 0)):
        print("Please use python version 3")
        return

    parser = argparse.ArgumentParser(add_help=True,
                                     description='Test ATV71 CANopen Communication')
    parser.add_argument('--channel', '-c', action='store', default='can0',
                        type=str, help='Channel to be used', dest='channel')
    parser.add_argument('--bus', '-b', action='store',
                        default='socketcan', type=str, help='Bus type', dest='bus')
    parser.add_argument('--rate', '-r', action='store', default=None,
                        type=int, help='bitrate, if applicable', dest='bitrate')
    parser.add_argument('--nodeID', action='store', default=2, type=int,
                        help='Node ID [ must be between 1- 127]', dest='nodeID')
    parser.add_argument('--objDict', action='store', default='TEATV7111E.eds',
                        type=str, help='Object dictionary file', dest='objDict')
    args = parser.parse_args()


    # set up logging to file - see previous section for more details
    logging.basicConfig(level=logging.INFO,
                    format='[%(asctime)s.%(msecs)03d] [%(name)-12s]: %(levelname)-8s %(message)s',
                    datefmt='%d-%m-%Y %H:%M:%S',
                    filename='atv.log',
                    filemode='w')
    # define a Handler which writes INFO messages or higher
    console = logging.StreamHandler()
    console.setLevel(logging.INFO)
    # set a format which is simpler for console use
    formatter = logging.Formatter('%(name)-12s: %(levelname)-8s %(message)s')
    # tell the handler to use this format
    console.setFormatter(formatter)
    # add the handler to the root logger
    logging.getLogger('').addHandler(console)

    # instanciate object
    atv = ATV71()

    if not (atv.begin(args.nodeID, objectDictionary=args.objDict)):
        logging.info('Failed to begin connection with ATV71 device')
        logging.info('Exiting now')
        return

    # check if EDS file is supplied and print it
    if args.objDict:
        print('----------------------------------------------------------', flush=True)
        print('Printing EDS file entries')
        print('----------------------------------------------------------', flush=True)
        for obj in atv.node.object_dictionary.values():
            print('0x%X: %s' % (obj.index, obj.name))
        if isinstance(obj, canopen.objectdictionary.Record):
            for subobj in obj.values():
                print('  %d: %s' % (subobj.subindex, subobj.name))
        print('----------------------------------------------------------', flush=True)
        # test record a single record
        error_log = atv.node.sdo['Error History']
        # Iterate over arrays or record
        for error in error_log.values():
            print("Error 0x%X was found in the log" % error.raw)

        print('----------------------------------------------------------', flush=True)

    # use simple hex values
    # try to read status word
    statusword = atv.readObject(0x6041, 0)
    if not statusword:
        print("[ATV71] Error trying to read ATV71 statusword\n")
        return
    else:
        print('----------------------------------------------------------', flush=True)
        print("The statusword is \n Hex={0:#06X} Bin={0:#018b}".format(
            int.from_bytes(statusword, 'little')))

    # test printStatusWord and state
    print('----------------------------------------------------------', flush=True)
    print('Testing print of StatusWord and State and ControlWord')
    print('----------------------------------------------------------', flush=True)
    # atv.printATV71State()
    print('----------------------------------------------------------', flush=True)
    atv.printStatusWord()
    print('----------------------------------------------------------', flush=True)
    atv.printControlWord()
    print('----------------------------------------------------------', flush=True)
    return

if __name__ == '__main__':
    main()