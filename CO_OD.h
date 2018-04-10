/*******************************************************************************

   File - CO_OD.c/CO_OD.h
   CANopen Object Dictionary.

   Copyright (C) 2004-2008 Janez Paternoster

   License: GNU Lesser General Public License (LGPL).

   <http://canopennode.sourceforge.net>

   (For more information see <CO_SDO.h>.)

   This file is part of CANopenNode, an opensource CANopen Stack.
   Project home page is <https://github.com/CANopenNode/CANopenNode>.
   For more information on CANopen see <http://www.can-cia.org/>.
 
   CANopenNode is free and open source software: you can redistribute
   it and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 2 of the
   License, or (at your option) any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.
  
   Following clarification and special exception to the GNU General Public
   License is included to the distribution terms of CANopenNode:
  
   Linking this library statically or dynamically with other modules is
   making a combined work based on this library. Thus, the terms and
   conditions of the GNU General Public License cover the whole combination.
  
   As a special exception, the copyright holders of this library give
   you permission to link this library with independent modules to
   produce an executable, regardless of the license terms of these
   independent modules, and to copy and distribute the resulting
   executable under terms of your choice, provided that you also meet,
   for each linked independent module, the terms and conditions of the
   license of that module. An independent module is a module which is
   not derived from or based on this library. If you modify this
   library, you may extend this exception to your version of the
   library, but you are not obliged to do so. If you do not wish
   to do so, delete this exception statement from your version.
 
   This file was automatically generated with libedssharp Object
   Dictionary Editor v0.6-xdd-alpha-81-gb562769
   DON'T EDIT THIS FILE MANUALLY !!!!
*******************************************************************************/


#pragma once

/*******************************************************************************
   CANopen DATA DYPES
*******************************************************************************/
   typedef bool_t       BOOLEAN;
   typedef uint8_t      UNSIGNED8;
   typedef uint16_t     UNSIGNED16;
   typedef uint32_t     UNSIGNED32;
   typedef uint64_t     UNSIGNED64;
   typedef int8_t       INTEGER8;
   typedef int16_t      INTEGER16;
   typedef int32_t      INTEGER32;
   typedef int64_t      INTEGER64;
   typedef float32_t    REAL32; 
   typedef float64_t    REAL64; 
   typedef char_t       VISIBLE_STRING;
   typedef oChar_t      OCTET_STRING;
   typedef domain_t     DOMAIN;


/*******************************************************************************
   FILE INFO:
      FileName:     TEATV71_01303E.eds
      FileVersion:  1
      CreationTime: 09:59AM
      CreationDate: 11-30-2009
      CreatedBy:    S.T.I.E.
******************************************************************************/


/*******************************************************************************
   DEVICE INFO:
      VendorName:     Telemecanique
      VendorNumber    33554522
      ProductName:    ATV71_V3.3
      ProductNumber:  71
******************************************************************************/


/*******************************************************************************
   FEATURES
*******************************************************************************/
  #define CO_NO_SYNC                     1   //Associated objects: 1005-1007
  #define CO_NO_EMERGENCY                1   //Associated objects: 1014, 1015
  #define CO_NO_SDO_SERVER               0   //Associated objects: 1200-127F
  #define CO_NO_SDO_CLIENT               0   //Associated objects: 1280-12FF
  #define CO_NO_LSS_SERVER               0   //LSS Slave
  #define CO_NO_LSS_CLIENT               0   //LSS Master
  #define CO_NO_RPDO                     3   //Associated objects: 14xx, 16xx
  #define CO_NO_TPDO                     3   //Associated objects: 18xx, 1Axx
  #define CO_NO_NMT_MASTER               0


/*******************************************************************************
   OBJECT DICTIONARY
*******************************************************************************/
   #define CO_OD_NoOfElements             115


/*******************************************************************************
   TYPE DEFINITIONS FOR RECORDS
*******************************************************************************/
/*1018    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     vendorID;
               UNSIGNED32     productCode;
               UNSIGNED32     revisionNumber;
               }              OD_identityObject_t;
/*1400    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     COB_ID;
               UNSIGNED8      transmissionType;
               }              OD_receivePDO1Parameter_t;
/*1401    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     COB_ID;
               UNSIGNED8      transmissionType;
               }              OD_receivePDO2Parameter_t;
/*1402    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     COB_ID;
               UNSIGNED8      transmissionType;
               }              OD_receivePDO3Parameter_t;
/*1600    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     1MappedObject;
               UNSIGNED32     2MappedObject;
               UNSIGNED32     3MappedObject;
               UNSIGNED32     4MappedObject;
               }              OD_receivePDO1Mapping_t;
/*1601    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     1MappedObject;
               UNSIGNED32     2MappedObject;
               UNSIGNED32     3MappedObject;
               UNSIGNED32     4MappedObject;
               }              OD_receivePDO2Mapping_t;
/*1602    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     1MappedObject;
               UNSIGNED32     2MappedObject;
               UNSIGNED32     3MappedObject;
               UNSIGNED32     4MappedObject;
               }              OD_receivePDO3Mapping_t;
/*1800    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     COB_ID;
               UNSIGNED8      transmissionType;
               UNSIGNED16     inhibitTimer;
               UNSIGNED16     eventTimer;
               }              OD_transmitPDO1Parameter_t;
/*1801    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     COB_ID;
               UNSIGNED8      transmissionType;
               UNSIGNED16     inhibitTimer;
               UNSIGNED16     eventTimer;
               }              OD_transmitPDO2Parameter_t;
/*1802    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     COB_ID;
               UNSIGNED8      transmissionType;
               UNSIGNED16     inhibitTimer;
               UNSIGNED16     eventTimer;
               }              OD_transmitPDO3Parameter_t;
/*1a00    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     1MappedObject;
               UNSIGNED32     2MappedObject;
               UNSIGNED32     3MappedObject;
               UNSIGNED32     4MappedObject;
               }              OD_transmitPDO1Mapping_t;
/*1a01    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     1MappedObject;
               UNSIGNED32     2MappedObject;
               UNSIGNED32     3MappedObject;
               UNSIGNED32     4MappedObject;
               }              OD_transmitPDO2Mapping_t;
/*1a02    */ typedef struct {
               UNSIGNED8      numberOfMappedObjects;
               UNSIGNED32     1MappedObject;
               UNSIGNED32     2MappedObject;
               UNSIGNED32     3MappedObject;
               UNSIGNED32     4MappedObject;
               }              OD_transmitPDO3Mapping_t;
/*2000    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     powerIdentification;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     standardMotFreq;
               UNSIGNED16     IMAX;
               UNSIGNED16     ratedDriveCurrent;
               UNSIGNED16     VMAX;
               UNSIGNED16     FMAX;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               }              OD_base_interne_t;
/*2001    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     switchingFreq;
               UNSIGNED16     maxFrequency;
               UNSIGNED16     highSpeed;
               UNSIGNED16     lowSpeed;
               UNSIGNED16     referenceTemplate;
               UNSIGNED16     noiseReduction;
               UNSIGNED16     RV_Inhibition;
               UNSIGNED16     sinusFilter;
               UNSIGNED16     catchOnTheFly;
               UNSIGNED16     sensitivity;
               UNSIGNED16     IGBTTest;
               UNSIGNED16     operatingtReset;
               UNSIGNED16     resetPastFaults;
               }              OD_base_t;
/*2002    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     ETAStateWord;
               INTEGER16      outputFrequency;
               INTEGER16      frequencyRef;
               UNSIGNED16     motorCurrent;
               INTEGER16      motorTorque;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     motorVoltage;
               UNSIGNED16     drvThermalState;
               INTEGER16      motorPower;
               UNSIGNED16     THR1;
               UNSIGNED16     THR2;
               UNSIGNED16     THR3;
               INTEGER16      OTRN;
               INTEGER16      SLC;
               INTEGER16      measuredOutputFr;
               INTEGER16      RFRI;
               INTEGER16      RFRQ;
               INTEGER16      FRHT;
               INTEGER16      MMFQ;
               UNSIGNED16     motorCurrentScope;
               INTEGER16      outputFreqScope;
               INTEGER16      motorTorqueScope;
               INTEGER16      SMMF;
               UNSIGNED16     SULN;
               UNSIGNED16     consumption;
               UNSIGNED16     runTime;
               UNSIGNED16     RTHI;
               UNSIGNED16     powerOnTime;
               UNSIGNED16     UNT;
               UNSIGNED16     IGBTAlarmCounter;
               UNSIGNED16     reserved;
               UNSIGNED16     LRS1;
               UNSIGNED16     LRS2;
               UNSIGNED16     LRS3;
               UNSIGNED16     LRS4;
               UNSIGNED16     LRS5;
               UNSIGNED16     LRS6;
               UNSIGNED16     LRS7;
               UNSIGNED16     LRS8;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     WR4;
               INTEGER16      SOPR;
               }              OD_base_monitoring_t;
/*2003    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     reserved;
               UNSIGNED16     drvSoftVer;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     PAN0;
               UNSIGNED16     PAN1;
               UNSIGNED16     PAN2;
               UNSIGNED16     PAN3;
               UNSIGNED16     PAN4;
               UNSIGNED16     PAN5;
               UNSIGNED16     PAN6;
               UNSIGNED16     PAN7;
               }              OD_product_version_t;
/*2004    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               }              OD_reserved_t;
/*200a    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     LI1OnDelay;
               UNSIGNED16     LI2OnDelay;
               UNSIGNED16     LI3OnDelay;
               UNSIGNED16     LI4OnDelay;
               UNSIGNED16     LI5OnDelay;
               UNSIGNED16     LI6OnDelay;
               UNSIGNED16     LI7OnDelay;
               UNSIGNED16     LI8OnDelay;
               UNSIGNED16     LI9OnDelay;
               UNSIGNED16     LI10OnDelay;
               UNSIGNED16     LI11OnDelay;
               UNSIGNED16     LI12OnDelay;
               UNSIGNED16     LI13OnDelay;
               UNSIGNED16     LI14OnDelay;
               }              OD_logical_inputs_configuration_t;
/*200c    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     R1ActiveAt;
               UNSIGNED16     R2ActiveAt;
               UNSIGNED16     R3ActiveAt;
               UNSIGNED16     R4ActiveAt;
               UNSIGNED16     LO1ActiveAt;
               UNSIGNED16     LO2ActiveAt;
               UNSIGNED16     LO3ActiveAt;
               UNSIGNED16     LO4ActiveAt;
               UNSIGNED16     R1HoldingTime;
               UNSIGNED16     R2HoldingTime;
               UNSIGNED16     R3HoldingTime;
               UNSIGNED16     R4HoldingTime;
               UNSIGNED16     LO1HoldingTime;
               UNSIGNED16     LO2HoldingTime;
               UNSIGNED16     LO3HoldingTime;
               UNSIGNED16     LO4HoldingTime;
               UNSIGNED16     R1DelayTime;
               UNSIGNED16     R2DelayTime;
               UNSIGNED16     R3DelayTime;
               UNSIGNED16     R4DelayTime;
               UNSIGNED16     LO1DelayTime;
               UNSIGNED16     LO2DelayTime;
               UNSIGNED16     LO3DelayTime;
               UNSIGNED16     LO4DelayTime;
               UNSIGNED16     DO1ActiveAt;
               UNSIGNED16     DO1HoldingTime;
               UNSIGNED16     DO1DelayTime;
               }              OD_logical_outputs_configuration_t;
/*200e    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     AI1Type;
               UNSIGNED16     AI2Type;
               UNSIGNED16     AI3Type;
               UNSIGNED16     AI4Type;
               UNSIGNED16     AI1MinValue;
               UNSIGNED16     AI2MinValue;
               UNSIGNED16     AI4MinValue;
               UNSIGNED16     AI1MaxValue;
               UNSIGNED16     AI2MaxValue;
               UNSIGNED16     AI4MaxValue;
               UNSIGNED16     AI2MinValue;
               UNSIGNED16     AI3MinValue;
               UNSIGNED16     AI4MinValue;
               UNSIGNED16     AI2MaxValue;
               UNSIGNED16     AI3MaxValue;
               UNSIGNED16     AI4MaxValue;
               UNSIGNED16     AI1Filter;
               UNSIGNED16     AI2Filter;
               UNSIGNED16     AI3Filter;
               UNSIGNED16     AI4Filter;
               UNSIGNED16     AI1IntermPointX;
               UNSIGNED16     AI2IntermPointX;
               UNSIGNED16     AI3IntermPointX;
               UNSIGNED16     AI4IntermPointX;
               UNSIGNED16     AI1IntermPointY;
               UNSIGNED16     AI2IntermPointY;
               UNSIGNED16     AI3IntermPointY;
               UNSIGNED16     AI4IntermPointY;
               UNSIGNED16     AI2Range;
               UNSIGNED16     AI3Range;
               UNSIGNED16     AI4Range;
               }              OD_analog_inputs_configuration_t;
/*2010    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     AO1Type;
               UNSIGNED16     AO2Type;
               UNSIGNED16     AO3Type;
               UNSIGNED16     AO1Filter;
               UNSIGNED16     AO2Filter;
               UNSIGNED16     AO3Filter;
               UNSIGNED16     AO1MinOutput;
               UNSIGNED16     AO2MinOutput;
               UNSIGNED16     AO3MinOutput;
               UNSIGNED16     AO1MaxOutput;
               UNSIGNED16     AO2MaxOutput;
               UNSIGNED16     AO3MaxOutput;
               UNSIGNED16     AO1MinOutput;
               UNSIGNED16     AO2MinOutput;
               UNSIGNED16     AO3MinOutput;
               UNSIGNED16     AO1MaxOutput;
               UNSIGNED16     AO2MaxOutput;
               UNSIGNED16     AO3MaxOutput;
               UNSIGNED16     scalingAO1Min;
               UNSIGNED16     scalingAO2Min;
               UNSIGNED16     scalingAO3Min;
               UNSIGNED16     scalingAO1Max;
               UNSIGNED16     scalingAO2Max;
               UNSIGNED16     scalingAO3Max;
               }              OD_analog_outputs_configuration_t;
/*2014    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     R1Assignment;
               UNSIGNED16     R2Assignment;
               UNSIGNED16     R3Assignment;
               UNSIGNED16     R4Assignment;
               UNSIGNED16     LO1Assignment;
               UNSIGNED16     LO2Assignment;
               UNSIGNED16     LO3Assignment;
               UNSIGNED16     LO4Assignment;
               UNSIGNED16     AO1Assignment;
               UNSIGNED16     AO2Assignment;
               UNSIGNED16     AO3Assignment;
               UNSIGNED16     DO1Assignment;
               }              OD_outputs_affectations_t;
/*2016    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     reserved;
               UNSIGNED16     IL1R;
               UNSIGNED16     reserved;
               UNSIGNED16     OL1R;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      AI1R;
               INTEGER16      AI2R;
               INTEGER16      AI3R;
               INTEGER16      AI4R;
               INTEGER16      AI1;
               INTEGER16      AI2;
               INTEGER16      AI3;
               INTEGER16      AI4;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      AO1R;
               INTEGER16      AO2R;
               INTEGER16      AO3R;
               INTEGER16      AO1;
               INTEGER16      AO2;
               INTEGER16      AO3;
               INTEGER16      AIV1;
               UNSIGNED16     AINetChannel;
               INTEGER16      SAI1;
               INTEGER16      SAI2;
               INTEGER16      SAI3;
               INTEGER16      SAI4;
               INTEGER16      SAO1;
               INTEGER16      SAO2;
               INTEGER16      SAO3;
               }              OD_IO_values_t;
/*201a    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     numberOfPulses;
               UNSIGNED16     encoderCheck;
               UNSIGNED16     encoderUsage;
               UNSIGNED16     encoderCoupling;
               UNSIGNED16     encoderType;
               UNSIGNED16     encoderCheckTime;
               UNSIGNED16     PDI;
               UNSIGNED16     PUC;
               UNSIGNED16     ENF;
               }              OD_encoder_management_t;
/*201e    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     modbusAddress;
               UNSIGNED16     modbusBaudRate;
               UNSIGNED16     modbusFormat;
               UNSIGNED16     modbusTimeOut;
               UNSIGNED16     mbNET_CRCErrors;
               UNSIGNED16     mbNETFramesNb;
               UNSIGNED16     HMIBaudRate;
               UNSIGNED16     HMIFormat;
               UNSIGNED16     mbHMI_CRCErrors;
               UNSIGNED16     mbHMIFramesNb;
               UNSIGNED16     CANopenAddress;
               UNSIGNED16     CANopenBitRate;
               UNSIGNED16     errorCode;
               UNSIGNED16     canopenNMTState;
               UNSIGNED16     TX_ErrorCounter;
               UNSIGNED16     RX_ErrorCounter;
               }              OD_product_communication_t;
/*2022    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     O01;
               UNSIGNED16     O02;
               UNSIGNED16     O03;
               UNSIGNED16     O04;
               UNSIGNED16     O05;
               UNSIGNED16     O06;
               UNSIGNED16     O07;
               UNSIGNED16     O08;
               UNSIGNED16     O09;
               UNSIGNED16     O10;
               UNSIGNED16     O11;
               UNSIGNED16     O12;
               UNSIGNED16     O13;
               UNSIGNED16     O14;
               UNSIGNED16     O15;
               UNSIGNED16     O16;
               UNSIGNED16     O17;
               UNSIGNED16     O18;
               UNSIGNED16     O19;
               UNSIGNED16     O20;
               UNSIGNED16     O21;
               UNSIGNED16     O22;
               UNSIGNED16     O23;
               UNSIGNED16     O24;
               UNSIGNED16     O25;
               UNSIGNED16     O26;
               UNSIGNED16     O27;
               UNSIGNED16     O28;
               UNSIGNED16     O29;
               UNSIGNED16     O30;
               UNSIGNED16     O31;
               UNSIGNED16     O32;
               UNSIGNED16     O33;
               UNSIGNED16     O34;
               UNSIGNED16     O35;
               UNSIGNED16     O36;
               UNSIGNED16     O37;
               UNSIGNED16     O38;
               UNSIGNED16     O39;
               UNSIGNED16     O40;
               UNSIGNED16     O41;
               UNSIGNED16     O42;
               UNSIGNED16     O43;
               UNSIGNED16     O44;
               UNSIGNED16     O45;
               UNSIGNED16     O46;
               UNSIGNED16     O47;
               UNSIGNED16     O48;
               UNSIGNED16     O49;
               UNSIGNED16     O50;
               }              OD_customer_t;
/*2024    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     address;
               UNSIGNED16     protocol;
               UNSIGNED16     bitRate;
               UNSIGNED16     format;
               UNSIGNED16     networkTimeOut;
               UNSIGNED16     peerCopNode;
               UNSIGNED16     globalTx;
               UNSIGNED16     commandStation;
               UNSIGNED16     numberOfRegisters;
               UNSIGNED16     CONSOLE_P01;
               UNSIGNED16     CONSOLE_P02;
               UNSIGNED16     CONSOLE_P03;
               UNSIGNED16     CONSOLE_P04;
               UNSIGNED16     CONSOLE_P05;
               UNSIGNED16     CONSOLE_P06;
               UNSIGNED16     CONSOLE_P07;
               UNSIGNED16     CONSOLE_P08;
               UNSIGNED16     modbusAddPrgC;
               UNSIGNED16     modbusAddComC;
               UNSIGNED16     dataRateUsed;
               }              OD_option_communication_t;
/*2027    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     PIL1;
               UNSIGNED16     POL1;
               UNSIGNED16     AI51;
               UNSIGNED16     AI52;
               UNSIGNED16     AO51;
               UNSIGNED16     AO52;
               UNSIGNED16     PAV1;
               UNSIGNED16     PAV2;
               UNSIGNED16     PAV3;
               UNSIGNED16     PAV4;
               UNSIGNED16     PAV5;
               UNSIGNED16     PAV6;
               UNSIGNED16     PAV7;
               UNSIGNED16     PAV8;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               }              OD_prog_Card_IO_Values_t;
/*2028    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     inputPhaseLoss;
               UNSIGNED16     AI2420mALoss;
               UNSIGNED16     underVPrevention;
               UNSIGNED16     loadSlipDetection;
               UNSIGNED16     externalFaultMgt;
               UNSIGNED16     overtempFaultMgt;
               UNSIGNED16     overloadFaultMgt;
               UNSIGNED16     modbusFaultMgt;
               UNSIGNED16     CANopenFaultMgt;
               UNSIGNED16     autotuneFaultMgt;
               UNSIGNED16     AI3420mALoss;
               UNSIGNED16     AI4420mALoss;
               UNSIGNED16     networkFaultMgt;
               UNSIGNED16     brakeResFaultMgt;
               UNSIGNED16     fallbackSpeed;
               UNSIGNED16     outPhTimeDetect;
               UNSIGNED16     externalFaultConfig;
               }              OD_fault_behaviour_t;
/*2029    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     lastFaultOccurred;
               UNSIGNED16     automaticRestart;
               UNSIGNED16     maxRestartTime;
               UNSIGNED16     faultReset;
               UNSIGNED16     faultInhibitAssign;
               UNSIGNED16     productReset;
               UNSIGNED16     productResetAssig;
               UNSIGNED16     CIC;
               UNSIGNED16     externalFaultAss;
               UNSIGNED16     networkFault;
               UNSIGNED16     applicationFault;
               UNSIGNED16     internalLinkFault1;
               UNSIGNED16     internalLinkFault2;
               }              OD_fault_management_t;
/*202a    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     pastFault1;
               UNSIGNED16     pastFault1;
               UNSIGNED16     pastFault2;
               UNSIGNED16     pastFault3;
               UNSIGNED16     pastFault4;
               UNSIGNED16     pastFault5;
               UNSIGNED16     pastFault6;
               UNSIGNED16     pastFault7;
               UNSIGNED16     pastFault8;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETAStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     ETIStateWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               UNSIGNED16     cmdWord;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      motorCurrent;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               INTEGER16      outputFrequency;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     elapsedTime;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               UNSIGNED16     chCmdAndRef;
               }              OD_last_fault_records_t;
/*202b    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     MD0;
               UNSIGNED16     MD1;
               UNSIGNED16     MD2;
               UNSIGNED16     MD3;
               UNSIGNED16     MD4;
               UNSIGNED16     MD5;
               UNSIGNED16     MD6;
               UNSIGNED16     MD7;
               UNSIGNED16     MD8;
               UNSIGNED16     DM0;
               UNSIGNED16     DM1;
               UNSIGNED16     DM2;
               UNSIGNED16     DM3;
               UNSIGNED16     DM4;
               UNSIGNED16     DM5;
               UNSIGNED16     DM6;
               UNSIGNED16     DM7;
               UNSIGNED16     DM8;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     DAY;
               UNSIGNED16     TIME;
               UNSIGNED16     FNB;
               }              OD_last_fault_records_2_t;
/*2032    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     SCS;
               UNSIGNED16     FCS;
               UNSIGNED16     configActive;
               UNSIGNED16     2Configurations;
               UNSIGNED16     3Configurations;
               UNSIGNED16     multimotors;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     CO1C;
               UNSIGNED16     CO1G;
               UNSIGNED16     CO2C;
               UNSIGNED16     CO2G;
               UNSIGNED16     CEBH;
               }              OD_configuration_management_t;
/*2036    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     profile;
               UNSIGNED16     copyChannel12;
               UNSIGNED16     CSB;
               UNSIGNED16     ref2Switching;
               UNSIGNED16     ref1BSwitching;
               UNSIGNED16     ref1Channel;
               UNSIGNED16     ref2Channel;
               UNSIGNED16     ref1BChannel;
               UNSIGNED16     cmdSwitching;
               UNSIGNED16     cmdChannel1;
               UNSIGNED16     cmdChannel2;
               UNSIGNED16     forcedLocalAssign;
               UNSIGNED16     forcedLocalRef;
               UNSIGNED16     timeOutForcLocal;
               UNSIGNED16     referenceChannel;
               UNSIGNED16     CCC;
               UNSIGNED16     refMemoAss;
               }              OD_channel_management_t;
/*2037    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     cmdValue;
               INTEGER16      HMI_FrequencyRef;
               UNSIGNED16     HMI_PIDReference;
               UNSIGNED16     CMI;
               INTEGER16      HMITorqueRef;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               INTEGER16      reserved;
               UNSIGNED16     reserved;
               }              OD_command_t;
/*2038    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     CMDD;
               INTEGER16      LFRD;
               UNSIGNED16     ETAD;
               INTEGER16      RFRD;
               INTEGER16      FRHD;
               UNSIGNED16     ERRD;
               UNSIGNED16     SMIL;
               UNSIGNED16     SMIH;
               UNSIGNED16     SMAL;
               UNSIGNED16     SMAH;
               UNSIGNED16     SPAL;
               UNSIGNED16     SPAH;
               UNSIGNED16     SPAT;
               UNSIGNED16     SPDL;
               UNSIGNED16     SPDH;
               UNSIGNED16     SPDT;
               INTEGER16      LFD1;
               INTEGER16      LFD2;
               INTEGER16      LFD3;
               INTEGER16      LFD4;
               INTEGER16      FROD;
               UNSIGNED16     SPFN;
               UNSIGNED16     SPFD;
               UNSIGNED16     QSTD;
               UNSIGNED16     DOTD;
               }              OD_drivecom_t;
/*203c    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     acceleration;
               UNSIGNED16     deceleration;
               UNSIGNED16     decRampAdapt;
               UNSIGNED16     rampType;
               UNSIGNED16     beginAccRound;
               UNSIGNED16     endAccRound;
               UNSIGNED16     beginDecRound;
               UNSIGNED16     endDecRound;
               UNSIGNED16     rampSwitchAss;
               UNSIGNED16     ramp2Threshold;
               UNSIGNED16     acceleration2;
               UNSIGNED16     deceleration2;
               UNSIGNED16     rampIncrement;
               INTEGER16      FRO;
               INTEGER16      FROT;
               }              OD_ramps_t;
/*203d    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     speedPropGain;
               UNSIGNED16     speedTimeIntegral;
               UNSIGNED16     KSpeedLoopFilter;
               }              OD_speed_loop_t;
/*203e    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     currentLimitation;
               UNSIGNED16     currentLimit2;
               UNSIGNED16     I_Limit2Value;
               UNSIGNED16     torqueLimitActiv;
               UNSIGNED16     motoringTorqueLim;
               UNSIGNED16     genTorqueLim;
               UNSIGNED16     analogLimitAct;
               UNSIGNED16     torqueRefAssign;
               UNSIGNED16     torqueIncrement;
               UNSIGNED16     trqSpdSwitching;
               UNSIGNED16     torqueRefChannel;
               UNSIGNED16     torqueRefSign;
               UNSIGNED16     negativeDeadband;
               UNSIGNED16     positiveDeadband;
               UNSIGNED16     torqueRatio;
               UNSIGNED16     torqueRampTime;
               UNSIGNED16     torqueControlStop;
               UNSIGNED16     torqCtrlFaultMgt;
               UNSIGNED16     torqueCtrlTimeOut;
               UNSIGNED16     spinTime;
               INTEGER16      torqueReference;
               INTEGER16      TRO;
               UNSIGNED16     trqILimitStop;
               UNSIGNED16     trqILimitTimeOut;
               UNSIGNED16     INT;
               INTEGER16      LTCR;
               }              OD_torque_current_management_t;
/*2042    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     rpmIncrement;
               UNSIGNED16     ratedMotorVolt;
               UNSIGNED16     ratedMotorFreq;
               UNSIGNED16     ratedMotCurrent;
               UNSIGNED16     ratedMotorSpeed;
               UNSIGNED16     nominalMotorSlip;
               UNSIGNED16     NSLI;
               UNSIGNED16     motorControlType;
               UNSIGNED16     autoTuning;
               UNSIGNED16     autoTuningState;
               UNSIGNED16     autoTuneAssign;
               UNSIGNED16     outputPhaseLoss;
               UNSIGNED16     motorProtectType;
               UNSIGNED16     ratedMotorPower;
               UNSIGNED16     automaticAutotune;
               UNSIGNED16     polesPairNumber;
               UNSIGNED16     motThermCurrent;
               UNSIGNED16     IRCompensation;
               UNSIGNED16     slipCompensation;
               UNSIGNED16     motorThermalState;
               UNSIGNED16     statorRMeasured;
               UNSIGNED16     RSMI;
               UNSIGNED16     custStatorResist;
               UNSIGNED16     RSAI;
               UNSIGNED16     RSTU;
               UNSIGNED16     IDTU;
               UNSIGNED16     idr;
               UNSIGNED16     IDMI;
               UNSIGNED16     idw;
               UNSIGNED16     IDAI;
               UNSIGNED16     LFTU;
               UNSIGNED16     lfr;
               UNSIGNED16     LFMI;
               UNSIGNED16     lfw;
               UNSIGNED16     LFAI;
               UNSIGNED16     TRTU;
               UNSIGNED16     T2r;
               UNSIGNED16     TRMI;
               UNSIGNED16     custRotortConst;
               UNSIGNED16     TRAI;
               UNSIGNED16     nominalISync;
               UNSIGNED16     nomMotorSpdsync;
               UNSIGNED16     polePairs;
               UNSIGNED16     synEMFConstant;
               UNSIGNED16     autotuneLdAxis;
               UNSIGNED16     autotuneLqAxis;
               UNSIGNED16     nominalFreqSync;
               UNSIGNED16     R1rS;
               UNSIGNED16     RMSI;
               UNSIGNED16     custStatorRSyn;
               UNSIGNED16     RASI;
               UNSIGNED16     FMX;
               }              OD_motor_1_t;
/*2046    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     brakeAssignment;
               INTEGER16      brakeEngageFreq;
               UNSIGNED16     brakeReleaseTime;
               UNSIGNED16     brakeEngageTime;
               UNSIGNED16     brakeReleaseI_FW;
               UNSIGNED16     brakeImpulse;
               UNSIGNED16     movementType;
               UNSIGNED16     brakeContact;
               UNSIGNED16     brakeEngageDelay;
               UNSIGNED16     brakeReleaseI_Rev;
               INTEGER16      brakeReleaseFreq;
               INTEGER16      jumpAtReversal;
               INTEGER16      brakeEngageAt0;
               UNSIGNED16     currentRampTime;
               UNSIGNED16     engageAtReversal;
               UNSIGNED16     timeToRestart;
               UNSIGNED16     BRH;
               UNSIGNED16     weightSensorAss;
               UNSIGNED16     point1X;
               INTEGER16      point1Y;
               UNSIGNED16     point2X;
               INTEGER16      point2Y;
               UNSIGNED16     ibr420MALoss;
               }              OD_brake_sequence_t;
/*204a    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     autoDCInjection;
               UNSIGNED16     autoDCInjTime1;
               UNSIGNED16     autoDCInjLevel1;
               UNSIGNED16     autoDCInjTime2;
               UNSIGNED16     autoDCInjLevel2;
               UNSIGNED16     DCInjectionAngle;
               }              OD_automatic_DC_Injection_t;
/*2050    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     currentThreshold;
               UNSIGNED16     motorThermLevel;
               UNSIGNED16     freqThreshold;
               UNSIGNED16     freqThreshold2;
               UNSIGNED16     motor2ThermLevel;
               UNSIGNED16     motor3ThermLevel;
               UNSIGNED16     drvThermStateAl;
               INTEGER16      lowTorqueThd;
               INTEGER16      highTorqueThd;
               UNSIGNED16     thermalAlarmStop;
               }              OD_threshold_t;
/*2051    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     23WireControl;
               UNSIGNED16     2WireType;
               UNSIGNED16     RUN;
               UNSIGNED16     forward;
               UNSIGNED16     reverseAssign;
               UNSIGNED16     JOG;
               UNSIGNED16     jogFrequency;
               UNSIGNED16     jogDelay;
               }              OD_terminal_block_control_t;
/*2052    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     typeOfStop;
               UNSIGNED16     freewheelStopAss;
               UNSIGNED16     DCInjectionAssign;
               UNSIGNED16     fastStopAssign;
               UNSIGNED16     DCInjectLevel1;
               UNSIGNED16     DCInjectionTime2;
               UNSIGNED16     DCInjectLevel2;
               UNSIGNED16     DCInjectionTime1;
               UNSIGNED16     freewheelStopThd;
               UNSIGNED16     rampDivider;
               }              OD_stop_settings_t;
/*2053    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     skipFrequency;
               UNSIGNED16     skipFrequency2;
               UNSIGNED16     3rdSkipFrequency;
               UNSIGNED16     skipFreqHysteresis;
               }              OD_jump_frequency_t;
/*2054    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     2PresetSpeeds;
               UNSIGNED16     4PresetSpeeds;
               UNSIGNED16     8PresetSpeeds;
               UNSIGNED16     16PresetSpeeds;
               UNSIGNED16     presetSpeed2;
               UNSIGNED16     presetSpeed3;
               UNSIGNED16     presetSpeed4;
               UNSIGNED16     presetSpeed5;
               UNSIGNED16     presetSpeed6;
               UNSIGNED16     presetSpeed7;
               UNSIGNED16     presetSpeed8;
               UNSIGNED16     presetSpeed9;
               UNSIGNED16     presetSpeed10;
               UNSIGNED16     presetSpeed11;
               UNSIGNED16     presetSpeed12;
               UNSIGNED16     presetSpeed13;
               UNSIGNED16     presetSpeed14;
               UNSIGNED16     presetSpeed15;
               UNSIGNED16     presetSpeed16;
               }              OD_preset_speeds_t;
/*2055    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     speedAssignment;
               UNSIGNED16     speedAssignment;
               UNSIGNED16     referenceSaved;
               UNSIGNED16     PMV;
               UNSIGNED16     speedLimitation;
               UNSIGNED16     PBT;
               UNSIGNED16     speedAssignment;
               UNSIGNED16     speedAssignment;
               }              OD_upper_and_lower_speed_t;
/*2056    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     stopFWLimitSw;
               UNSIGNED16     stopRVLimitSw;
               UNSIGNED16     stopType;
               }              OD_limit_switch_management_t;
/*2057    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     lowSpeedTimeOut;
               }              OD_stop_on_prolonged_speed_t;
/*2058    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     summingRef2;
               UNSIGNED16     summingRef3;
               UNSIGNED16     subtractRef2;
               UNSIGNED16     subtractRef3;
               UNSIGNED16     multiplierRef2;
               UNSIGNED16     multiplierRef3;
               UNSIGNED16     multiplyingCoeff;
               UNSIGNED16     MFR1;
               UNSIGNED16     MFR2;
               UNSIGNED16     MFR3;
               UNSIGNED16     MFR4;
               }              OD_summing_reference_t;
/*2059    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     PIDFeedbackAss;
               UNSIGNED16     PIDFbkScaleFactor;
               UNSIGNED16     minPIDFeedback;
               UNSIGNED16     maxPIDFeedback;
               UNSIGNED16     minPIDReference;
               UNSIGNED16     maxPIDReference;
               UNSIGNED16     actInternalPIDRef;
               UNSIGNED16     2PresetPIDRef;
               UNSIGNED16     4PresetPIDRef;
               UNSIGNED16     internalPIDRef;
               UNSIGNED16     presetRefPID2;
               UNSIGNED16     presetRefPID3;
               UNSIGNED16     presetRefPID4;
               UNSIGNED16     PIDCorrectReverse;
               UNSIGNED16     PIDPropGain;
               UNSIGNED16     PIDIntegralGain;
               UNSIGNED16     PIDDerivativeGain;
               UNSIGNED16     PIDIntegralReset;
               UNSIGNED16     speedRefAssign;
               UNSIGNED16     speedInput;
               INTEGER16      minPIDOutput;
               INTEGER16      maxPIDOutput;
               UNSIGNED16     manualReference;
               UNSIGNED16     PIDWakeUpThresh;
               UNSIGNED16     minFbkAlarm;
               UNSIGNED16     maxFbkAlarm;
               UNSIGNED16     PIDErrorAlarm;
               UNSIGNED16     autoManualAssign;
               INTEGER16      PIDError;
               UNSIGNED16     PIDFeedback;
               UNSIGNED16     PIDReference;
               INTEGER16      PID_Output;
               UNSIGNED16     PIDRamp;
               }              OD_PI_regulator_t;
/*205a    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     motorSpeed;
               }              OD_customer_Unit_t;
/*205b    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     ENASystem;
               INTEGER16      ENAAvgSpeed;
               UNSIGNED16     ENAPropGain;
               UNSIGNED16     ENAIntegralGain;
               UNSIGNED16     reductionRatio;
               }              OD_ENA_System_t;
/*205c    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     yarnControl;
               UNSIGNED16     traverseFreqHigh;
               UNSIGNED16     traverseFreqLow;
               UNSIGNED16     quickStepHigh;
               UNSIGNED16     quickStepLow;
               UNSIGNED16     traverseCtrlAccel;
               UNSIGNED16     traverseCtrlDecel;
               UNSIGNED16     reelTime;
               UNSIGNED16     EBOT;
               UNSIGNED16     initTraverseCtrl;
               UNSIGNED16     decreaseRefSpeed;
               UNSIGNED16     counterWobble;
               UNSIGNED16     endReel;
               UNSIGNED16     syncWobble;
               }              OD_traverse_control_t;
/*205d    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     highSpeedHoisting;
               UNSIGNED16     highSpeedI_Limit;
               UNSIGNED16     motorSpeedCoeff;
               UNSIGNED16     genSpeedCoeff;
               UNSIGNED16     measurementSpd;
               UNSIGNED16     I_LimitFrequency;
               UNSIGNED16     loadMeasuringTm;
               UNSIGNED16     dynLoadThreshold;
               INTEGER16      dynamicLoadTime;
               UNSIGNED16     dynLoadMgt;
               UNSIGNED16     ropeSlackConfig;
               UNSIGNED16     ropeSlackTrqLevel;
               }              OD_high_speed_hoisting_t;
/*205e    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     U0;
               UNSIGNED16     U1;
               UNSIGNED16     freqPt1on5ptV_F;
               UNSIGNED16     U2;
               UNSIGNED16     F2;
               UNSIGNED16     U3;
               UNSIGNED16     F3;
               UNSIGNED16     U4;
               UNSIGNED16     F4;
               UNSIGNED16     U5;
               UNSIGNED16     F5;
               }              OD_volts_per_hertz_control_type_t;
/*205f    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     stopFWLimitSw;
               UNSIGNED16     stopRVLimitSw;
               UNSIGNED16     slowdownForward;
               UNSIGNED16     slowdownReverse;
               UNSIGNED16     decelerationType;
               UNSIGNED16     stopType;
               UNSIGNED16     disableLimitSw;
               UNSIGNED16     stopLimitConfig;
               UNSIGNED16     slowdownLimitCfg;
               UNSIGNED16     ratedLinearSpeed;
               UNSIGNED16     stopDistance;
               UNSIGNED16     stopCorrector;
               }              OD_positioning_by_switches_t;
/*2060    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     motorSurgeLimit;
               UNSIGNED16     voltSurgeLimitOpt;
               }              OD_surge_voltage_on_motor_cables_t;
/*2061    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     scanIN1Address;
               UNSIGNED16     scanIN2Address;
               UNSIGNED16     scanIN3Address;
               UNSIGNED16     scanIN4Address;
               UNSIGNED16     scanIN5Address;
               UNSIGNED16     scanIN6Address;
               UNSIGNED16     scanIN7Address;
               UNSIGNED16     scanIN8Address;
               UNSIGNED16     scanOut1Address;
               UNSIGNED16     scanOut2Address;
               UNSIGNED16     scanOut3Address;
               UNSIGNED16     scanOut4Address;
               UNSIGNED16     scanOut5Address;
               UNSIGNED16     scanOut6Address;
               UNSIGNED16     scanOut7Address;
               UNSIGNED16     scanOut8Address;
               UNSIGNED16     comScanIn1Val;
               UNSIGNED16     comScanIn2Val;
               UNSIGNED16     comScanIn3Val;
               UNSIGNED16     comScanIn4Val;
               UNSIGNED16     comScanIn5Val;
               UNSIGNED16     comScanIn6Val;
               UNSIGNED16     comScanIn7Val;
               UNSIGNED16     comScanIn8Val;
               UNSIGNED16     comScanOut1Val;
               UNSIGNED16     comScanOut2Val;
               UNSIGNED16     comScanOut3Val;
               UNSIGNED16     comScanOut4Val;
               UNSIGNED16     comScanOut5Val;
               UNSIGNED16     comScanOut6Val;
               UNSIGNED16     comScanOut7Val;
               UNSIGNED16     comScanOut8Val;
               }              OD_com_Scanner_t;
/*2063    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     utilisedParamSet;
               UNSIGNED16     reserved;
               UNSIGNED16     2ParameterSets;
               UNSIGNED16     3ParameterSets;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               UNSIGNED16     reserved;
               }              OD_parameter_switching_t;
/*2064    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     receivedPD031;
               UNSIGNED16     receivedPD032;
               UNSIGNED16     receivedPD033;
               UNSIGNED16     receivedPD034;
               UNSIGNED16     NRP3;
               UNSIGNED16     transmitPDO31;
               UNSIGNED16     transmitPDO32;
               UNSIGNED16     transmitPDO33;
               UNSIGNED16     transmitPDO34;
               UNSIGNED16     NTP3;
               UNSIGNED16     receivedPD021;
               UNSIGNED16     receivedPD022;
               UNSIGNED16     receivedPD023;
               UNSIGNED16     receivedPD024;
               UNSIGNED16     NRP2;
               UNSIGNED16     transmitPDO21;
               UNSIGNED16     transmitPDO22;
               UNSIGNED16     transmitPDO23;
               UNSIGNED16     transmitPDO24;
               UNSIGNED16     NTP2;
               UNSIGNED16     receivedPD011;
               UNSIGNED16     receivedPD012;
               UNSIGNED16     receivedPD013;
               UNSIGNED16     receivedPD014;
               UNSIGNED16     NRP1;
               UNSIGNED16     transmitPDO11;
               UNSIGNED16     transmitPDO12;
               UNSIGNED16     transmitPDO13;
               UNSIGNED16     transmitPDO14;
               UNSIGNED16     NTP1;
               UNSIGNED16     numberOfTX_PDO;
               UNSIGNED16     numberOfRX_PDO;
               }              OD_CANopen_parameters_1131_t;
/*2065    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     delayToMotorRun;
               UNSIGNED16     delayToOpenCont;
               UNSIGNED16     outputContactFdbk;
               UNSIGNED16     outContactorAss;
               }              OD_downstream_contactor_t;
/*2066    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     PTC1Probe;
               UNSIGNED16     PTC2Probe;
               UNSIGNED16     LI6PTCProbe;
               UNSIGNED16     PT3V;
               UNSIGNED16     PTCI;
               }              OD_PTC_treatment_t;
/*2067    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     referenceType;
               INTEGER16      RPMinValue;
               UNSIGNED16     RPMaxValue;
               UNSIGNED16     RPFilter;
               INTEGER16      PIFR;
               UNSIGNED16     PFRI;
               UNSIGNED16     RPInput;
               INTEGER16      freqMinValue;
               UNSIGNED16     freqMaxValue;
               UNSIGNED16     freqSignalFilter;
               INTEGER16      EIFR;
               INTEGER16      EFRC;
               INTEGER16      IFRC;
               }              OD_pulse_input_t;
/*2068    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     outputPhRotation;
               }              OD_output_phase_rotation_t;
/*2069    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     F1KeyAssignment;
               UNSIGNED16     F2KeyAssignment;
               UNSIGNED16     F3KeyAssignment;
               UNSIGNED16     F4KeyAssignment;
               UNSIGNED16     FJOG;
               UNSIGNED16     FPS1;
               UNSIGNED16     FPS2;
               UNSIGNED16     FPR1;
               UNSIGNED16     FPR2;
               UNSIGNED16     FUSP;
               UNSIGNED16     FDSP;
               UNSIGNED16     FTK;
               UNSIGNED16     HMICmd;
               }              OD_function_keys_management_t;
/*206a    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     driveLock;
               UNSIGNED16     lineContactorAss;
               UNSIGNED16     mainsVTimeOut;
               }              OD_input_line_contactor_t;
/*206c    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     mainsVoltage;
               UNSIGNED16     undervoltageLevel;
               UNSIGNED16     underVFaultMgt;
               UNSIGNED16     undervoltTimeOut;
               UNSIGNED16     preventionLevel;
               UNSIGNED16     DCBusMaintainTm;
               UNSIGNED16     underVRestartTm;
               UNSIGNED16     maxStopTime;
               UNSIGNED16     regenConnection;
               UNSIGNED16     evacuationAssign;
               UNSIGNED16     evacuationInputV;
               UNSIGNED16     evacuationFreq;
               UNSIGNED16     prechargeContAss;
               UNSIGNED16     CONSOLE_DCT;
               }              OD_DC_bus_management_t;
/*206d    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     fluxingAssignment;
               UNSIGNED16     motorFluxing;
               UNSIGNED16     actionBoost;
               INTEGER16      boost;
               }              OD_motor_fluxing_t;
/*206e    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     PPII;
               UNSIGNED16     pairingPassword;
               }              OD_drive_boards_group_t;
/*206f    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     brakingLevel;
               UNSIGNED16     brakingBalance;
               UNSIGNED16     DBResProtection;
               UNSIGNED16     DB_ResistorPower;
               UNSIGNED16     DB_ResistorValue;
               UNSIGNED16     DBRThermalState;
               }              OD_braking_transistor_t;
/*2070    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     vectorControl2pt;
               UNSIGNED16     VConstantPower;
               UNSIGNED16     freqConstPower;
               }              OD_vector_control_2_points_t;
/*2071    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     loadSharing;
               UNSIGNED16     loadCorrection;
               UNSIGNED16     correctionMinSpd;
               UNSIGNED16     correctionMaxSpd;
               UNSIGNED16     torqueOffset;
               UNSIGNED16     sharingFilter;
               }              OD_load_sharing_t;
/*2074    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     frequencyMeter;
               UNSIGNED16     pulseScalDivisor;
               UNSIGNED16     pulseInWorkFreq;
               UNSIGNED16     overspdPulseThd;
               UNSIGNED16     pulseOverspdDelay;
               UNSIGNED16     levelFrPulseCtrl;
               UNSIGNED16     pulseThdWoRun;
               UNSIGNED16     pulseWoRunDelay;
               UNSIGNED16     pulseWarningThd;
               }              OD_frequency_meter_t;
/*2075    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED16     halfFloorSpeed;
               }              OD_half_floor_speed_t;
/*6048    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     deltaSpeed;
               UNSIGNED16     deltaTime;
               }              OD_velocityAcceleration_t;
/*6049    */ typedef struct {
               UNSIGNED8      numberOfEntries;
               UNSIGNED32     deltaSpeed;
               UNSIGNED16     deltaTime;
               }              OD_velocityDeceleration_t;

/*******************************************************************************
   TYPE DEFINITIONS FOR OBJECT DICTIONARY INDEXES

   some of those are redundant with CO_SDO.h CO_ObjDicId_t <Common CiA301 object 
   dictionary entries>
*******************************************************************************/
/*1000 */
        #define OD_1000_deviceType                                  0x1000

/*1001 */
        #define OD_1001_errorRegister                               0x1001

/*1003 */
        #define OD_1003_preDefinedErrorField                        0x1003

        #define OD_1003_0_preDefinedErrorField_maxSubIndex          0
        #define OD_1003_1_preDefinedErrorField_standardErrorField   1

/*1005 */
        #define OD_1005_COB_ID_SYNCMessage                          0x1005

/*1008 */
        #define OD_1008_deviceName                                  0x1008

/*100b */
        #define OD_100b_nodeID                                      0x100b

/*100c */
        #define OD_100c_guardTime                                   0x100c

/*100d */
        #define OD_100d_lifeTimeFactor                              0x100d

/*100e */
        #define OD_100e_nodeGuardingIdentifier                      0x100e

/*100f */
        #define OD_100f_numberOfSDOSupported                        0x100f

/*1014 */
        #define OD_1014_COB_ID_EmergencyMessage                     0x1014

/*1016 */
        #define OD_1016_consumerHeartbeatTime                       0x1016

        #define OD_1016_0_consumerHeartbeatTime_maxSubIndex         0
        #define OD_1016_1_consumerHeartbeatTime_consumerHeartbeatTime 1

/*1017 */
        #define OD_1017_producerHeartbeatTime                       0x1017

/*1018 */
        #define OD_1018_identityObject                              0x1018

        #define OD_1018_0_identityObject_maxSubIndex                0
        #define OD_1018_1_identityObject_vendorID                   1
        #define OD_1018_2_identityObject_productCode                2
        #define OD_1018_3_identityObject_revisionNumber             3

/*1400 */
        #define OD_1400_receivePDO1Parameter                        0x1400

        #define OD_1400_0_receivePDO1Parameter_maxSubIndex          0
        #define OD_1400_1_receivePDO1Parameter_COB_ID               1
        #define OD_1400_2_receivePDO1Parameter_transmissionType     2

/*1401 */
        #define OD_1401_receivePDO2Parameter                        0x1401

        #define OD_1401_0_receivePDO2Parameter_maxSubIndex          0
        #define OD_1401_1_receivePDO2Parameter_COB_ID               1
        #define OD_1401_2_receivePDO2Parameter_transmissionType     2

/*1402 */
        #define OD_1402_receivePDO3Parameter                        0x1402

        #define OD_1402_0_receivePDO3Parameter_maxSubIndex          0
        #define OD_1402_1_receivePDO3Parameter_COB_ID               1
        #define OD_1402_2_receivePDO3Parameter_transmissionType     2

/*1600 */
        #define OD_1600_receivePDO1Mapping                          0x1600

        #define OD_1600_0_receivePDO1Mapping_maxSubIndex            0
        #define OD_1600_1_receivePDO1Mapping_1MappedObject          1
        #define OD_1600_2_receivePDO1Mapping_2MappedObject          2
        #define OD_1600_3_receivePDO1Mapping_3MappedObject          3
        #define OD_1600_4_receivePDO1Mapping_4MappedObject          4

/*1601 */
        #define OD_1601_receivePDO2Mapping                          0x1601

        #define OD_1601_0_receivePDO2Mapping_maxSubIndex            0
        #define OD_1601_1_receivePDO2Mapping_1MappedObject          1
        #define OD_1601_2_receivePDO2Mapping_2MappedObject          2
        #define OD_1601_3_receivePDO2Mapping_3MappedObject          3
        #define OD_1601_4_receivePDO2Mapping_4MappedObject          4

/*1602 */
        #define OD_1602_receivePDO3Mapping                          0x1602

        #define OD_1602_0_receivePDO3Mapping_maxSubIndex            0
        #define OD_1602_1_receivePDO3Mapping_1MappedObject          1
        #define OD_1602_2_receivePDO3Mapping_2MappedObject          2
        #define OD_1602_3_receivePDO3Mapping_3MappedObject          3
        #define OD_1602_4_receivePDO3Mapping_4MappedObject          4

/*1800 */
        #define OD_1800_transmitPDO1Parameter                       0x1800

        #define OD_1800_0_transmitPDO1Parameter_maxSubIndex         0
        #define OD_1800_1_transmitPDO1Parameter_COB_ID              1
        #define OD_1800_2_transmitPDO1Parameter_transmissionType    2
        #define OD_1800_3_transmitPDO1Parameter_inhibitTimer        3
        #define OD_1800_5_transmitPDO1Parameter_eventTimer          5

/*1801 */
        #define OD_1801_transmitPDO2Parameter                       0x1801

        #define OD_1801_0_transmitPDO2Parameter_maxSubIndex         0
        #define OD_1801_1_transmitPDO2Parameter_COB_ID              1
        #define OD_1801_2_transmitPDO2Parameter_transmissionType    2
        #define OD_1801_3_transmitPDO2Parameter_inhibitTimer        3
        #define OD_1801_5_transmitPDO2Parameter_eventTimer          5

/*1802 */
        #define OD_1802_transmitPDO3Parameter                       0x1802

        #define OD_1802_0_transmitPDO3Parameter_maxSubIndex         0
        #define OD_1802_1_transmitPDO3Parameter_COB_ID              1
        #define OD_1802_2_transmitPDO3Parameter_transmissionType    2
        #define OD_1802_3_transmitPDO3Parameter_inhibitTimer        3
        #define OD_1802_5_transmitPDO3Parameter_eventTimer          5

/*1a00 */
        #define OD_1a00_transmitPDO1Mapping                         0x1a00

        #define OD_1a00_0_transmitPDO1Mapping_maxSubIndex           0
        #define OD_1a00_1_transmitPDO1Mapping_1MappedObject         1
        #define OD_1a00_2_transmitPDO1Mapping_2MappedObject         2
        #define OD_1a00_3_transmitPDO1Mapping_3MappedObject         3
        #define OD_1a00_4_transmitPDO1Mapping_4MappedObject         4

/*1a01 */
        #define OD_1a01_transmitPDO2Mapping                         0x1a01

        #define OD_1a01_0_transmitPDO2Mapping_maxSubIndex           0
        #define OD_1a01_1_transmitPDO2Mapping_1MappedObject         1
        #define OD_1a01_2_transmitPDO2Mapping_2MappedObject         2
        #define OD_1a01_3_transmitPDO2Mapping_3MappedObject         3
        #define OD_1a01_4_transmitPDO2Mapping_4MappedObject         4

/*1a02 */
        #define OD_1a02_transmitPDO3Mapping                         0x1a02

        #define OD_1a02_0_transmitPDO3Mapping_maxSubIndex           0
        #define OD_1a02_1_transmitPDO3Mapping_1MappedObject         1
        #define OD_1a02_2_transmitPDO3Mapping_2MappedObject         2
        #define OD_1a02_3_transmitPDO3Mapping_3MappedObject         3
        #define OD_1a02_4_transmitPDO3Mapping_4MappedObject         4

/*2000 */
        #define OD_2000_base_interne                                0x2000

        #define OD_2000_0_base_interne_maxSubIndex                  0
        #define OD_2000_3_base_interne_reserved                     3
        #define OD_2000_4_base_interne_reserved                     4
        #define OD_2000_5_base_interne_reserved                     5
        #define OD_2000_7_base_interne_reserved                     7
        #define OD_2000_10_base_interne_powerIdentification         10
        #define OD_2000_12_base_interne_reserved                    12
        #define OD_2000_13_base_interne_reserved                    13
        #define OD_2000_14_base_interne_reserved                    14
        #define OD_2000_15_base_interne_reserved                    15
        #define OD_2000_16_base_interne_standardMotFreq             16
        #define OD_2000_17_base_interne_IMAX                        17
        #define OD_2000_18_base_interne_ratedDriveCurrent           18
        #define OD_2000_19_base_interne_VMAX                        19
        #define OD_2000_20_base_interne_FMAX                        20
        #define OD_2000_23_base_interne_reserved                    23
        #define OD_2000_51_base_interne_reserved                    51
        #define OD_2000_52_base_interne_reserved                    52
        #define OD_2000_53_base_interne_reserved                    53
        #define OD_2000_54_base_interne_reserved                    54

/*2001 */
        #define OD_2001_base                                        0x2001

        #define OD_2001_0_base_maxSubIndex                          0
        #define OD_2001_3_base_switchingFreq                        3
        #define OD_2001_4_base_maxFrequency                         4
        #define OD_2001_5_base_highSpeed                            5
        #define OD_2001_6_base_lowSpeed                             6
        #define OD_2001_7_base_referenceTemplate                    7
        #define OD_2001_8_base_noiseReduction                       8
        #define OD_2001_9_base_RV_Inhibition                        9
        #define OD_2001_10_base_sinusFilter                         10
        #define OD_2001_11_base_catchOnTheFly                       11
        #define OD_2001_12_base_sensitivity                         12
        #define OD_2001_13_base_IGBTTest                            13
        #define OD_2001_21_base_operatingtReset                     21
        #define OD_2001_22_base_resetPastFaults                     22

/*2002 */
        #define OD_2002_base_monitoring                             0x2002

        #define OD_2002_0_base_monitoring_maxSubIndex               0
        #define OD_2002_2_base_monitoring_ETAStateWord              2
        #define OD_2002_3_base_monitoring_outputFrequency           3
        #define OD_2002_4_base_monitoring_frequencyRef              4
        #define OD_2002_5_base_monitoring_motorCurrent              5
        #define OD_2002_6_base_monitoring_motorTorque               6
        #define OD_2002_7_base_monitoring_ETIStateWord              7
        #define OD_2002_8_base_monitoring_mainsVoltage              8
        #define OD_2002_9_base_monitoring_motorVoltage              9
        #define OD_2002_10_base_monitoring_drvThermalState          10
        #define OD_2002_12_base_monitoring_motorPower               12
        #define OD_2002_13_base_monitoring_THR1                     13
        #define OD_2002_14_base_monitoring_THR2                     14
        #define OD_2002_15_base_monitoring_THR3                     15
        #define OD_2002_17_base_monitoring_OTRN                     17
        #define OD_2002_18_base_monitoring_SLC                      18
        #define OD_2002_20_base_monitoring_measuredOutputFr         20
        #define OD_2002_21_base_monitoring_RFRI                     21
        #define OD_2002_22_base_monitoring_RFRQ                     22
        #define OD_2002_23_base_monitoring_FRHT                     23
        #define OD_2002_24_base_monitoring_MMFQ                     24
        #define OD_2002_25_base_monitoring_motorCurrentScope        25
        #define OD_2002_26_base_monitoring_outputFreqScope          26
        #define OD_2002_27_base_monitoring_motorTorqueScope         27
        #define OD_2002_29_base_monitoring_SMMF                     29
        #define OD_2002_30_base_monitoring_SULN                     30
        #define OD_2002_31_base_monitoring_consumption              31
        #define OD_2002_32_base_monitoring_runTime                  32
        #define OD_2002_33_base_monitoring_RTHI                     33
        #define OD_2002_34_base_monitoring_powerOnTime              34
        #define OD_2002_35_base_monitoring_UNT                      35
        #define OD_2002_36_base_monitoring_IGBTAlarmCounter         36
        #define OD_2002_41_base_monitoring_reserved                 41
        #define OD_2002_51_base_monitoring_LRS1                     51
        #define OD_2002_52_base_monitoring_LRS2                     52
        #define OD_2002_53_base_monitoring_LRS3                     53
        #define OD_2002_54_base_monitoring_LRS4                     54
        #define OD_2002_55_base_monitoring_LRS5                     55
        #define OD_2002_56_base_monitoring_LRS6                     56
        #define OD_2002_57_base_monitoring_LRS7                     57
        #define OD_2002_58_base_monitoring_LRS8                     58
        #define OD_2002_71_base_monitoring_reserved                 71
        #define OD_2002_72_base_monitoring_reserved                 72
        #define OD_2002_73_base_monitoring_reserved                 73
        #define OD_2002_74_base_monitoring_WR4                      74
        #define OD_2002_91_base_monitoring_SOPR                     91

/*2003 */
        #define OD_2003_product_version                             0x2003

        #define OD_2003_0_product_version_maxSubIndex               0
        #define OD_2003_2_product_version_reserved                  2
        #define OD_2003_3_product_version_drvSoftVer                3
        #define OD_2003_4_product_version_reserved                  4
        #define OD_2003_5_product_version_reserved                  5
        #define OD_2003_6_product_version_reserved                  6
        #define OD_2003_12_product_version_reserved                 12
        #define OD_2003_13_product_version_reserved                 13
        #define OD_2003_14_product_version_reserved                 14
        #define OD_2003_15_product_version_reserved                 15
        #define OD_2003_21_product_version_reserved                 21
        #define OD_2003_22_product_version_reserved                 22
        #define OD_2003_23_product_version_reserved                 23
        #define OD_2003_24_product_version_reserved                 24
        #define OD_2003_25_product_version_reserved                 25
        #define OD_2003_26_product_version_reserved                 26
        #define OD_2003_27_product_version_reserved                 27
        #define OD_2003_28_product_version_reserved                 28
        #define OD_2003_29_product_version_reserved                 29
        #define OD_2003_30_product_version_reserved                 30
        #define OD_2003_31_product_version_reserved                 31
        #define OD_2003_32_product_version_reserved                 32
        #define OD_2003_33_product_version_reserved                 33
        #define OD_2003_34_product_version_reserved                 34
        #define OD_2003_35_product_version_reserved                 35
        #define OD_2003_36_product_version_reserved                 36
        #define OD_2003_41_product_version_PAN0                     41
        #define OD_2003_42_product_version_PAN1                     42
        #define OD_2003_43_product_version_PAN2                     43
        #define OD_2003_44_product_version_PAN3                     44
        #define OD_2003_45_product_version_PAN4                     45
        #define OD_2003_46_product_version_PAN5                     46
        #define OD_2003_47_product_version_PAN6                     47
        #define OD_2003_48_product_version_PAN7                     48

/*2004 */
        #define OD_2004_reserved                                    0x2004

        #define OD_2004_0_reserved_maxSubIndex                      0
        #define OD_2004_2_reserved_reserved                         2
        #define OD_2004_3_reserved_reserved                         3
        #define OD_2004_4_reserved_reserved                         4
        #define OD_2004_5_reserved_reserved                         5
        #define OD_2004_6_reserved_reserved                         6
        #define OD_2004_7_reserved_reserved                         7
        #define OD_2004_8_reserved_reserved                         8
        #define OD_2004_9_reserved_reserved                         9
        #define OD_2004_10_reserved_reserved                        10
        #define OD_2004_11_reserved_reserved                        11
        #define OD_2004_12_reserved_reserved                        12
        #define OD_2004_13_reserved_reserved                        13
        #define OD_2004_14_reserved_reserved                        14
        #define OD_2004_22_reserved_reserved                        22
        #define OD_2004_23_reserved_reserved                        23
        #define OD_2004_24_reserved_reserved                        24
        #define OD_2004_25_reserved_reserved                        25
        #define OD_2004_26_reserved_reserved                        26
        #define OD_2004_27_reserved_reserved                        27
        #define OD_2004_28_reserved_reserved                        28
        #define OD_2004_29_reserved_reserved                        29
        #define OD_2004_30_reserved_reserved                        30
        #define OD_2004_31_reserved_reserved                        31
        #define OD_2004_32_reserved_reserved                        32
        #define OD_2004_33_reserved_reserved                        33
        #define OD_2004_34_reserved_reserved                        34

/*2005 */
        #define OD_2005_reserved                                    0x2005

        #define OD_2005_0_reserved_maxSubIndex                      0
        #define OD_2005_2_reserved_reserved                         2
        #define OD_2005_4_reserved_reserved                         4
        #define OD_2005_6_reserved_reserved                         6
        #define OD_2005_7_reserved_reserved                         7
        #define OD_2005_8_reserved_reserved                         8
        #define OD_2005_9_reserved_reserved                         9
        #define OD_2005_22_reserved_reserved                        22
        #define OD_2005_24_reserved_reserved                        24
        #define OD_2005_26_reserved_reserved                        26
        #define OD_2005_27_reserved_reserved                        27
        #define OD_2005_28_reserved_reserved                        28
        #define OD_2005_29_reserved_reserved                        29
        #define OD_2005_42_reserved_reserved                        42
        #define OD_2005_62_reserved_reserved                        62

/*2006 */
        #define OD_2006_reserved                                    0x2006

        #define OD_2006_0_reserved_maxSubIndex                      0
        #define OD_2006_2_reserved_reserved                         2
        #define OD_2006_3_reserved_reserved                         3
        #define OD_2006_4_reserved_reserved                         4
        #define OD_2006_5_reserved_reserved                         5
        #define OD_2006_6_reserved_reserved                         6
        #define OD_2006_7_reserved_reserved                         7
        #define OD_2006_8_reserved_reserved                         8
        #define OD_2006_9_reserved_reserved                         9
        #define OD_2006_10_reserved_reserved                        10
        #define OD_2006_11_reserved_reserved                        11
        #define OD_2006_12_reserved_reserved                        12
        #define OD_2006_13_reserved_reserved                        13
        #define OD_2006_14_reserved_reserved                        14
        #define OD_2006_15_reserved_reserved                        15
        #define OD_2006_16_reserved_reserved                        16
        #define OD_2006_17_reserved_reserved                        17
        #define OD_2006_18_reserved_reserved                        18
        #define OD_2006_19_reserved_reserved                        19
        #define OD_2006_20_reserved_reserved                        20
        #define OD_2006_21_reserved_reserved                        21
        #define OD_2006_22_reserved_reserved                        22
        #define OD_2006_23_reserved_reserved                        23
        #define OD_2006_24_reserved_reserved                        24
        #define OD_2006_25_reserved_reserved                        25
        #define OD_2006_26_reserved_reserved                        26
        #define OD_2006_27_reserved_reserved                        27
        #define OD_2006_28_reserved_reserved                        28
        #define OD_2006_29_reserved_reserved                        29
        #define OD_2006_30_reserved_reserved                        30
        #define OD_2006_31_reserved_reserved                        31
        #define OD_2006_32_reserved_reserved                        32
        #define OD_2006_33_reserved_reserved                        33
        #define OD_2006_42_reserved_reserved                        42
        #define OD_2006_43_reserved_reserved                        43
        #define OD_2006_44_reserved_reserved                        44
        #define OD_2006_45_reserved_reserved                        45
        #define OD_2006_46_reserved_reserved                        46
        #define OD_2006_47_reserved_reserved                        47
        #define OD_2006_48_reserved_reserved                        48
        #define OD_2006_49_reserved_reserved                        49
        #define OD_2006_50_reserved_reserved                        50
        #define OD_2006_51_reserved_reserved                        51
        #define OD_2006_52_reserved_reserved                        52
        #define OD_2006_53_reserved_reserved                        53
        #define OD_2006_54_reserved_reserved                        54
        #define OD_2006_55_reserved_reserved                        55
        #define OD_2006_56_reserved_reserved                        56
        #define OD_2006_57_reserved_reserved                        57
        #define OD_2006_58_reserved_reserved                        58
        #define OD_2006_59_reserved_reserved                        59
        #define OD_2006_60_reserved_reserved                        60
        #define OD_2006_61_reserved_reserved                        61
        #define OD_2006_62_reserved_reserved                        62
        #define OD_2006_63_reserved_reserved                        63
        #define OD_2006_64_reserved_reserved                        64
        #define OD_2006_65_reserved_reserved                        65
        #define OD_2006_66_reserved_reserved                        66
        #define OD_2006_67_reserved_reserved                        67
        #define OD_2006_68_reserved_reserved                        68
        #define OD_2006_69_reserved_reserved                        69
        #define OD_2006_70_reserved_reserved                        70
        #define OD_2006_71_reserved_reserved                        71
        #define OD_2006_72_reserved_reserved                        72
        #define OD_2006_73_reserved_reserved                        73

/*200a */
        #define OD_200a_logical_inputs_configuration                0x200a

        #define OD_200a_0_logical_inputs_configuration_maxSubIndex  0
        #define OD_200a_2_logical_inputs_configuration_LI1OnDelay   2
        #define OD_200a_3_logical_inputs_configuration_LI2OnDelay   3
        #define OD_200a_4_logical_inputs_configuration_LI3OnDelay   4
        #define OD_200a_5_logical_inputs_configuration_LI4OnDelay   5
        #define OD_200a_6_logical_inputs_configuration_LI5OnDelay   6
        #define OD_200a_7_logical_inputs_configuration_LI6OnDelay   7
        #define OD_200a_8_logical_inputs_configuration_LI7OnDelay   8
        #define OD_200a_9_logical_inputs_configuration_LI8OnDelay   9
        #define OD_200a_10_logical_inputs_configuration_LI9OnDelay  10
        #define OD_200a_11_logical_inputs_configuration_LI10OnDelay 11
        #define OD_200a_12_logical_inputs_configuration_LI11OnDelay 12
        #define OD_200a_13_logical_inputs_configuration_LI12OnDelay 13
        #define OD_200a_14_logical_inputs_configuration_LI13OnDelay 14
        #define OD_200a_15_logical_inputs_configuration_LI14OnDelay 15

/*200c */
        #define OD_200c_logical_outputs_configuration               0x200c

        #define OD_200c_0_logical_outputs_configuration_maxSubIndex 0
        #define OD_200c_2_logical_outputs_configuration_R1ActiveAt  2
        #define OD_200c_3_logical_outputs_configuration_R2ActiveAt  3
        #define OD_200c_4_logical_outputs_configuration_R3ActiveAt  4
        #define OD_200c_5_logical_outputs_configuration_R4ActiveAt  5
        #define OD_200c_10_logical_outputs_configuration_LO1ActiveAt 10
        #define OD_200c_11_logical_outputs_configuration_LO2ActiveAt 11
        #define OD_200c_12_logical_outputs_configuration_LO3ActiveAt 12
        #define OD_200c_13_logical_outputs_configuration_LO4ActiveAt 13
        #define OD_200c_22_logical_outputs_configuration_R1HoldingTime 22
        #define OD_200c_23_logical_outputs_configuration_R2HoldingTime 23
        #define OD_200c_24_logical_outputs_configuration_R3HoldingTime 24
        #define OD_200c_25_logical_outputs_configuration_R4HoldingTime 25
        #define OD_200c_30_logical_outputs_configuration_LO1HoldingTime 30
        #define OD_200c_31_logical_outputs_configuration_LO2HoldingTime 31
        #define OD_200c_32_logical_outputs_configuration_LO3HoldingTime 32
        #define OD_200c_33_logical_outputs_configuration_LO4HoldingTime 33
        #define OD_200c_42_logical_outputs_configuration_R1DelayTime 42
        #define OD_200c_43_logical_outputs_configuration_R2DelayTime 43
        #define OD_200c_44_logical_outputs_configuration_R3DelayTime 44
        #define OD_200c_45_logical_outputs_configuration_R4DelayTime 45
        #define OD_200c_50_logical_outputs_configuration_LO1DelayTime 50
        #define OD_200c_51_logical_outputs_configuration_LO2DelayTime 51
        #define OD_200c_52_logical_outputs_configuration_LO3DelayTime 52
        #define OD_200c_53_logical_outputs_configuration_LO4DelayTime 53
        #define OD_200c_62_logical_outputs_configuration_DO1ActiveAt 62
        #define OD_200c_72_logical_outputs_configuration_DO1HoldingTime 72
        #define OD_200c_82_logical_outputs_configuration_DO1DelayTime 82

/*200e */
        #define OD_200e_analog_inputs_configuration                 0x200e

        #define OD_200e_0_analog_inputs_configuration_maxSubIndex   0
        #define OD_200e_3_analog_inputs_configuration_AI1Type       3
        #define OD_200e_4_analog_inputs_configuration_AI2Type       4
        #define OD_200e_5_analog_inputs_configuration_AI3Type       5
        #define OD_200e_6_analog_inputs_configuration_AI4Type       6
        #define OD_200e_13_analog_inputs_configuration_AI1MinValue  13
        #define OD_200e_14_analog_inputs_configuration_AI2MinValue  14
        #define OD_200e_16_analog_inputs_configuration_AI4MinValue  16
        #define OD_200e_23_analog_inputs_configuration_AI1MaxValue  23
        #define OD_200e_24_analog_inputs_configuration_AI2MaxValue  24
        #define OD_200e_26_analog_inputs_configuration_AI4MaxValue  26
        #define OD_200e_34_analog_inputs_configuration_AI2MinValue  34
        #define OD_200e_35_analog_inputs_configuration_AI3MinValue  35
        #define OD_200e_36_analog_inputs_configuration_AI4MinValue  36
        #define OD_200e_44_analog_inputs_configuration_AI2MaxValue  44
        #define OD_200e_45_analog_inputs_configuration_AI3MaxValue  45
        #define OD_200e_46_analog_inputs_configuration_AI4MaxValue  46
        #define OD_200e_53_analog_inputs_configuration_AI1Filter    53
        #define OD_200e_54_analog_inputs_configuration_AI2Filter    54
        #define OD_200e_55_analog_inputs_configuration_AI3Filter    55
        #define OD_200e_56_analog_inputs_configuration_AI4Filter    56
        #define OD_200e_63_analog_inputs_configuration_AI1IntermPointX 63
        #define OD_200e_64_analog_inputs_configuration_AI2IntermPointX 64
        #define OD_200e_65_analog_inputs_configuration_AI3IntermPointX 65
        #define OD_200e_66_analog_inputs_configuration_AI4IntermPointX 66
        #define OD_200e_73_analog_inputs_configuration_AI1IntermPointY 73
        #define OD_200e_74_analog_inputs_configuration_AI2IntermPointY 74
        #define OD_200e_75_analog_inputs_configuration_AI3IntermPointY 75
        #define OD_200e_76_analog_inputs_configuration_AI4IntermPointY 76
        #define OD_200e_84_analog_inputs_configuration_AI2Range     84
        #define OD_200e_85_analog_inputs_configuration_AI3Range     85
        #define OD_200e_86_analog_inputs_configuration_AI4Range     86

/*2010 */
        #define OD_2010_analog_outputs_configuration                0x2010

        #define OD_2010_0_analog_outputs_configuration_maxSubIndex  0
        #define OD_2010_2_analog_outputs_configuration_AO1Type      2
        #define OD_2010_3_analog_outputs_configuration_AO2Type      3
        #define OD_2010_4_analog_outputs_configuration_AO3Type      4
        #define OD_2010_12_analog_outputs_configuration_AO1Filter   12
        #define OD_2010_13_analog_outputs_configuration_AO2Filter   13
        #define OD_2010_14_analog_outputs_configuration_AO3Filter   14
        #define OD_2010_22_analog_outputs_configuration_AO1MinOutput 22
        #define OD_2010_23_analog_outputs_configuration_AO2MinOutput 23
        #define OD_2010_24_analog_outputs_configuration_AO3MinOutput 24
        #define OD_2010_32_analog_outputs_configuration_AO1MaxOutput 32
        #define OD_2010_33_analog_outputs_configuration_AO2MaxOutput 33
        #define OD_2010_34_analog_outputs_configuration_AO3MaxOutput 34
        #define OD_2010_42_analog_outputs_configuration_AO1MinOutput 42
        #define OD_2010_43_analog_outputs_configuration_AO2MinOutput 43
        #define OD_2010_44_analog_outputs_configuration_AO3MinOutput 44
        #define OD_2010_52_analog_outputs_configuration_AO1MaxOutput 52
        #define OD_2010_53_analog_outputs_configuration_AO2MaxOutput 53
        #define OD_2010_54_analog_outputs_configuration_AO3MaxOutput 54
        #define OD_2010_62_analog_outputs_configuration_scalingAO1Min 62
        #define OD_2010_63_analog_outputs_configuration_scalingAO2Min 63
        #define OD_2010_64_analog_outputs_configuration_scalingAO3Min 64
        #define OD_2010_72_analog_outputs_configuration_scalingAO1Max 72
        #define OD_2010_73_analog_outputs_configuration_scalingAO2Max 73
        #define OD_2010_74_analog_outputs_configuration_scalingAO3Max 74

/*2012 */
        #define OD_2012_reserved                                    0x2012

        #define OD_2012_0_reserved_maxSubIndex                      0
        #define OD_2012_2_reserved_reserved                         2
        #define OD_2012_3_reserved_reserved                         3
        #define OD_2012_4_reserved_reserved                         4
        #define OD_2012_5_reserved_reserved                         5
        #define OD_2012_6_reserved_reserved                         6
        #define OD_2012_7_reserved_reserved                         7
        #define OD_2012_8_reserved_reserved                         8
        #define OD_2012_9_reserved_reserved                         9
        #define OD_2012_10_reserved_reserved                        10
        #define OD_2012_11_reserved_reserved                        11
        #define OD_2012_12_reserved_reserved                        12
        #define OD_2012_13_reserved_reserved                        13
        #define OD_2012_14_reserved_reserved                        14
        #define OD_2012_15_reserved_reserved                        15
        #define OD_2012_22_reserved_reserved                        22
        #define OD_2012_23_reserved_reserved                        23
        #define OD_2012_24_reserved_reserved                        24
        #define OD_2012_25_reserved_reserved                        25
        #define OD_2012_62_reserved_reserved                        62
        #define OD_2012_72_reserved_reserved                        72
        #define OD_2012_73_reserved_reserved                        73

/*2014 */
        #define OD_2014_outputs_affectations                        0x2014

        #define OD_2014_0_outputs_affectations_maxSubIndex          0
        #define OD_2014_2_outputs_affectations_R1Assignment         2
        #define OD_2014_3_outputs_affectations_R2Assignment         3
        #define OD_2014_4_outputs_affectations_R3Assignment         4
        #define OD_2014_5_outputs_affectations_R4Assignment         5
        #define OD_2014_10_outputs_affectations_LO1Assignment       10
        #define OD_2014_11_outputs_affectations_LO2Assignment       11
        #define OD_2014_12_outputs_affectations_LO3Assignment       12
        #define OD_2014_13_outputs_affectations_LO4Assignment       13
        #define OD_2014_22_outputs_affectations_AO1Assignment       22
        #define OD_2014_23_outputs_affectations_AO2Assignment       23
        #define OD_2014_24_outputs_affectations_AO3Assignment       24
        #define OD_2014_32_outputs_affectations_DO1Assignment       32

/*2016 */
        #define OD_2016_IO_values                                   0x2016

        #define OD_2016_0_IO_values_maxSubIndex                     0
        #define OD_2016_2_IO_values_reserved                        2
        #define OD_2016_3_IO_values_IL1R                            3
        #define OD_2016_12_IO_values_reserved                       12
        #define OD_2016_13_IO_values_OL1R                           13
        #define OD_2016_23_IO_values_reserved                       23
        #define OD_2016_24_IO_values_reserved                       24
        #define OD_2016_25_IO_values_reserved                       25
        #define OD_2016_26_IO_values_reserved                       26
        #define OD_2016_33_IO_values_AI1R                           33
        #define OD_2016_34_IO_values_AI2R                           34
        #define OD_2016_35_IO_values_AI3R                           35
        #define OD_2016_36_IO_values_AI4R                           36
        #define OD_2016_43_IO_values_AI1                            43
        #define OD_2016_44_IO_values_AI2                            44
        #define OD_2016_45_IO_values_AI3                            45
        #define OD_2016_46_IO_values_AI4                            46
        #define OD_2016_52_IO_values_reserved                       52
        #define OD_2016_53_IO_values_reserved                       53
        #define OD_2016_54_IO_values_reserved                       54
        #define OD_2016_62_IO_values_AO1R                           62
        #define OD_2016_63_IO_values_AO2R                           63
        #define OD_2016_64_IO_values_AO3R                           64
        #define OD_2016_72_IO_values_AO1                            72
        #define OD_2016_73_IO_values_AO2                            73
        #define OD_2016_74_IO_values_AO3                            74
        #define OD_2016_82_IO_values_AIV1                           82
        #define OD_2016_83_IO_values_AINetChannel                   83
        #define OD_2016_92_IO_values_SAI1                           92
        #define OD_2016_93_IO_values_SAI2                           93
        #define OD_2016_94_IO_values_SAI3                           94
        #define OD_2016_95_IO_values_SAI4                           95
        #define OD_2016_96_IO_values_SAO1                           96
        #define OD_2016_97_IO_values_SAO2                           97
        #define OD_2016_98_IO_values_SAO3                           98

/*201a */
        #define OD_201a_encoder_management                          0x201a

        #define OD_201a_0_encoder_management_maxSubIndex            0
        #define OD_201a_5_encoder_management_numberOfPulses         5
        #define OD_201a_6_encoder_management_encoderCheck           6
        #define OD_201a_7_encoder_management_encoderUsage           7
        #define OD_201a_8_encoder_management_encoderCoupling        8
        #define OD_201a_9_encoder_management_encoderType            9
        #define OD_201a_10_encoder_management_encoderCheckTime      10
        #define OD_201a_11_encoder_management_PDI                   11
        #define OD_201a_12_encoder_management_PUC                   12
        #define OD_201a_13_encoder_management_ENF                   13

/*201e */
        #define OD_201e_product_communication                       0x201e

        #define OD_201e_0_product_communication_maxSubIndex         0
        #define OD_201e_2_product_communication_modbusAddress       2
        #define OD_201e_4_product_communication_modbusBaudRate      4
        #define OD_201e_5_product_communication_modbusFormat        5
        #define OD_201e_6_product_communication_modbusTimeOut       6
        #define OD_201e_11_product_communication_mbNET_CRCErrors    11
        #define OD_201e_12_product_communication_mbNETFramesNb      12
        #define OD_201e_24_product_communication_HMIBaudRate        24
        #define OD_201e_25_product_communication_HMIFormat          25
        #define OD_201e_31_product_communication_mbHMI_CRCErrors    31
        #define OD_201e_32_product_communication_mbHMIFramesNb      32
        #define OD_201e_52_product_communication_CANopenAddress     52
        #define OD_201e_54_product_communication_CANopenBitRate     54
        #define OD_201e_57_product_communication_errorCode          57
        #define OD_201e_58_product_communication_canopenNMTState    58
        #define OD_201e_59_product_communication_TX_ErrorCounter    59
        #define OD_201e_60_product_communication_RX_ErrorCounter    60

/*2022 */
        #define OD_2022_customer                                    0x2022

        #define OD_2022_0_customer_maxSubIndex                      0
        #define OD_2022_2_customer_O01                              2
        #define OD_2022_3_customer_O02                              3
        #define OD_2022_4_customer_O03                              4
        #define OD_2022_5_customer_O04                              5
        #define OD_2022_6_customer_O05                              6
        #define OD_2022_7_customer_O06                              7
        #define OD_2022_8_customer_O07                              8
        #define OD_2022_9_customer_O08                              9
        #define OD_2022_10_customer_O09                             10
        #define OD_2022_11_customer_O10                             11
        #define OD_2022_12_customer_O11                             12
        #define OD_2022_13_customer_O12                             13
        #define OD_2022_14_customer_O13                             14
        #define OD_2022_15_customer_O14                             15
        #define OD_2022_16_customer_O15                             16
        #define OD_2022_17_customer_O16                             17
        #define OD_2022_18_customer_O17                             18
        #define OD_2022_19_customer_O18                             19
        #define OD_2022_20_customer_O19                             20
        #define OD_2022_21_customer_O20                             21
        #define OD_2022_22_customer_O21                             22
        #define OD_2022_23_customer_O22                             23
        #define OD_2022_24_customer_O23                             24
        #define OD_2022_25_customer_O24                             25
        #define OD_2022_26_customer_O25                             26
        #define OD_2022_27_customer_O26                             27
        #define OD_2022_28_customer_O27                             28
        #define OD_2022_29_customer_O28                             29
        #define OD_2022_30_customer_O29                             30
        #define OD_2022_31_customer_O30                             31
        #define OD_2022_32_customer_O31                             32
        #define OD_2022_33_customer_O32                             33
        #define OD_2022_34_customer_O33                             34
        #define OD_2022_35_customer_O34                             35
        #define OD_2022_36_customer_O35                             36
        #define OD_2022_37_customer_O36                             37
        #define OD_2022_38_customer_O37                             38
        #define OD_2022_39_customer_O38                             39
        #define OD_2022_40_customer_O39                             40
        #define OD_2022_41_customer_O40                             41
        #define OD_2022_42_customer_O41                             42
        #define OD_2022_43_customer_O42                             43
        #define OD_2022_44_customer_O43                             44
        #define OD_2022_45_customer_O44                             45
        #define OD_2022_46_customer_O45                             46
        #define OD_2022_47_customer_O46                             47
        #define OD_2022_48_customer_O47                             48
        #define OD_2022_49_customer_O48                             49
        #define OD_2022_50_customer_O49                             50
        #define OD_2022_51_customer_O50                             51

/*2024 */
        #define OD_2024_option_communication                        0x2024

        #define OD_2024_0_option_communication_maxSubIndex          0
        #define OD_2024_2_option_communication_address              2
        #define OD_2024_3_option_communication_protocol             3
        #define OD_2024_4_option_communication_bitRate              4
        #define OD_2024_5_option_communication_format               5
        #define OD_2024_6_option_communication_networkTimeOut       6
        #define OD_2024_7_option_communication_peerCopNode          7
        #define OD_2024_8_option_communication_globalTx             8
        #define OD_2024_9_option_communication_commandStation       9
        #define OD_2024_10_option_communication_numberOfRegisters   10
        #define OD_2024_11_option_communication_CONSOLE_P01         11
        #define OD_2024_12_option_communication_CONSOLE_P02         12
        #define OD_2024_13_option_communication_CONSOLE_P03         13
        #define OD_2024_14_option_communication_CONSOLE_P04         14
        #define OD_2024_15_option_communication_CONSOLE_P05         15
        #define OD_2024_16_option_communication_CONSOLE_P06         16
        #define OD_2024_17_option_communication_CONSOLE_P07         17
        #define OD_2024_18_option_communication_CONSOLE_P08         18
        #define OD_2024_51_option_communication_modbusAddPrgC       51
        #define OD_2024_52_option_communication_modbusAddComC       52
        #define OD_2024_61_option_communication_dataRateUsed        61

/*2026 */
        #define OD_2026_reserved                                    0x2026

        #define OD_2026_0_reserved_maxSubIndex                      0
        #define OD_2026_2_reserved_reserved                         2
        #define OD_2026_3_reserved_reserved                         3
        #define OD_2026_4_reserved_reserved                         4
        #define OD_2026_5_reserved_reserved                         5
        #define OD_2026_6_reserved_reserved                         6
        #define OD_2026_7_reserved_reserved                         7
        #define OD_2026_8_reserved_reserved                         8
        #define OD_2026_9_reserved_reserved                         9
        #define OD_2026_22_reserved_reserved                        22
        #define OD_2026_23_reserved_reserved                        23
        #define OD_2026_24_reserved_reserved                        24
        #define OD_2026_25_reserved_reserved                        25
        #define OD_2026_26_reserved_reserved                        26
        #define OD_2026_27_reserved_reserved                        27
        #define OD_2026_28_reserved_reserved                        28
        #define OD_2026_29_reserved_reserved                        29
        #define OD_2026_42_reserved_reserved                        42
        #define OD_2026_43_reserved_reserved                        43
        #define OD_2026_44_reserved_reserved                        44
        #define OD_2026_45_reserved_reserved                        45
        #define OD_2026_46_reserved_reserved                        46
        #define OD_2026_47_reserved_reserved                        47
        #define OD_2026_48_reserved_reserved                        48
        #define OD_2026_49_reserved_reserved                        49
        #define OD_2026_62_reserved_reserved                        62
        #define OD_2026_63_reserved_reserved                        63
        #define OD_2026_64_reserved_reserved                        64
        #define OD_2026_65_reserved_reserved                        65
        #define OD_2026_66_reserved_reserved                        66
        #define OD_2026_67_reserved_reserved                        67
        #define OD_2026_68_reserved_reserved                        68
        #define OD_2026_69_reserved_reserved                        69

/*2027 */
        #define OD_2027_prog_Card_IO_Values                         0x2027

        #define OD_2027_0_prog_Card_IO_Values_maxSubIndex           0
        #define OD_2027_2_prog_Card_IO_Values_PIL1                  2
        #define OD_2027_12_prog_Card_IO_Values_POL1                 12
        #define OD_2027_43_prog_Card_IO_Values_AI51                 43
        #define OD_2027_44_prog_Card_IO_Values_AI52                 44
        #define OD_2027_72_prog_Card_IO_Values_AO51                 72
        #define OD_2027_73_prog_Card_IO_Values_AO52                 73
        #define OD_2027_82_prog_Card_IO_Values_PAV1                 82
        #define OD_2027_83_prog_Card_IO_Values_PAV2                 83
        #define OD_2027_84_prog_Card_IO_Values_PAV3                 84
        #define OD_2027_85_prog_Card_IO_Values_PAV4                 85
        #define OD_2027_86_prog_Card_IO_Values_PAV5                 86
        #define OD_2027_87_prog_Card_IO_Values_PAV6                 87
        #define OD_2027_88_prog_Card_IO_Values_PAV7                 88
        #define OD_2027_89_prog_Card_IO_Values_PAV8                 89
        #define OD_2027_91_prog_Card_IO_Values_reserved             91
        #define OD_2027_92_prog_Card_IO_Values_reserved             92

/*2028 */
        #define OD_2028_fault_behaviour                             0x2028

        #define OD_2028_0_fault_behaviour_maxSubIndex               0
        #define OD_2028_3_fault_behaviour_inputPhaseLoss            3
        #define OD_2028_4_fault_behaviour_AI2420mALoss              4
        #define OD_2028_5_fault_behaviour_underVPrevention          5
        #define OD_2028_6_fault_behaviour_loadSlipDetection         6
        #define OD_2028_7_fault_behaviour_externalFaultMgt          7
        #define OD_2028_9_fault_behaviour_overtempFaultMgt          9
        #define OD_2028_10_fault_behaviour_overloadFaultMgt         10
        #define OD_2028_11_fault_behaviour_modbusFaultMgt           11
        #define OD_2028_12_fault_behaviour_CANopenFaultMgt          12
        #define OD_2028_13_fault_behaviour_autotuneFaultMgt         13
        #define OD_2028_14_fault_behaviour_AI3420mALoss             14
        #define OD_2028_15_fault_behaviour_AI4420mALoss             15
        #define OD_2028_16_fault_behaviour_networkFaultMgt          16
        #define OD_2028_17_fault_behaviour_brakeResFaultMgt         17
        #define OD_2028_81_fault_behaviour_fallbackSpeed            81
        #define OD_2028_82_fault_behaviour_outPhTimeDetect          82
        #define OD_2028_91_fault_behaviour_externalFaultConfig      91

/*2029 */
        #define OD_2029_fault_management                            0x2029

        #define OD_2029_0_fault_management_maxSubIndex              0
        #define OD_2029_2_fault_management_reserved                 2
        #define OD_2029_3_fault_management_reserved                 3
        #define OD_2029_4_fault_management_reserved                 4
        #define OD_2029_5_fault_management_reserved                 5
        #define OD_2029_6_fault_management_reserved                 6
        #define OD_2029_22_fault_management_lastFaultOccurred       22
        #define OD_2029_23_fault_management_automaticRestart        23
        #define OD_2029_24_fault_management_maxRestartTime          24
        #define OD_2029_25_fault_management_faultReset              25
        #define OD_2029_26_fault_management_faultInhibitAssign      26
        #define OD_2029_29_fault_management_productReset            29
        #define OD_2029_30_fault_management_productResetAssig       30
        #define OD_2029_31_fault_management_CIC                     31
        #define OD_2029_32_fault_management_externalFaultAss        32
        #define OD_2029_33_fault_management_networkFault            33
        #define OD_2029_34_fault_management_applicationFault        34
        #define OD_2029_35_fault_management_internalLinkFault1      35
        #define OD_2029_36_fault_management_internalLinkFault2      36

/*202a */
        #define OD_202a_last_fault_records                          0x202a

        #define OD_202a_0_last_fault_records_maxSubIndex            0
        #define OD_202a_1_last_fault_records_pastFault1             1
        #define OD_202a_2_last_fault_records_pastFault1             2
        #define OD_202a_3_last_fault_records_pastFault2             3
        #define OD_202a_4_last_fault_records_pastFault3             4
        #define OD_202a_5_last_fault_records_pastFault4             5
        #define OD_202a_6_last_fault_records_pastFault5             6
        #define OD_202a_7_last_fault_records_pastFault6             7
        #define OD_202a_8_last_fault_records_pastFault7             8
        #define OD_202a_9_last_fault_records_pastFault8             9
        #define OD_202a_11_last_fault_records_ETAStateWord          11
        #define OD_202a_12_last_fault_records_ETAStateWord          12
        #define OD_202a_13_last_fault_records_ETAStateWord          13
        #define OD_202a_14_last_fault_records_ETAStateWord          14
        #define OD_202a_15_last_fault_records_ETAStateWord          15
        #define OD_202a_16_last_fault_records_ETAStateWord          16
        #define OD_202a_17_last_fault_records_ETAStateWord          17
        #define OD_202a_18_last_fault_records_ETAStateWord          18
        #define OD_202a_19_last_fault_records_ETAStateWord          19
        #define OD_202a_21_last_fault_records_ETIStateWord          21
        #define OD_202a_22_last_fault_records_ETIStateWord          22
        #define OD_202a_23_last_fault_records_ETIStateWord          23
        #define OD_202a_24_last_fault_records_ETIStateWord          24
        #define OD_202a_25_last_fault_records_ETIStateWord          25
        #define OD_202a_26_last_fault_records_ETIStateWord          26
        #define OD_202a_27_last_fault_records_ETIStateWord          27
        #define OD_202a_28_last_fault_records_ETIStateWord          28
        #define OD_202a_29_last_fault_records_ETIStateWord          29
        #define OD_202a_31_last_fault_records_cmdWord               31
        #define OD_202a_32_last_fault_records_cmdWord               32
        #define OD_202a_33_last_fault_records_cmdWord               33
        #define OD_202a_34_last_fault_records_cmdWord               34
        #define OD_202a_35_last_fault_records_cmdWord               35
        #define OD_202a_36_last_fault_records_cmdWord               36
        #define OD_202a_37_last_fault_records_cmdWord               37
        #define OD_202a_38_last_fault_records_cmdWord               38
        #define OD_202a_39_last_fault_records_cmdWord               39
        #define OD_202a_41_last_fault_records_motorCurrent          41
        #define OD_202a_42_last_fault_records_motorCurrent          42
        #define OD_202a_43_last_fault_records_motorCurrent          43
        #define OD_202a_44_last_fault_records_motorCurrent          44
        #define OD_202a_45_last_fault_records_motorCurrent          45
        #define OD_202a_46_last_fault_records_motorCurrent          46
        #define OD_202a_47_last_fault_records_motorCurrent          47
        #define OD_202a_48_last_fault_records_motorCurrent          48
        #define OD_202a_49_last_fault_records_motorCurrent          49
        #define OD_202a_51_last_fault_records_outputFrequency       51
        #define OD_202a_52_last_fault_records_outputFrequency       52
        #define OD_202a_53_last_fault_records_outputFrequency       53
        #define OD_202a_54_last_fault_records_outputFrequency       54
        #define OD_202a_55_last_fault_records_outputFrequency       55
        #define OD_202a_56_last_fault_records_outputFrequency       56
        #define OD_202a_57_last_fault_records_outputFrequency       57
        #define OD_202a_58_last_fault_records_outputFrequency       58
        #define OD_202a_59_last_fault_records_outputFrequency       59
        #define OD_202a_61_last_fault_records_elapsedTime           61
        #define OD_202a_62_last_fault_records_elapsedTime           62
        #define OD_202a_63_last_fault_records_elapsedTime           63
        #define OD_202a_64_last_fault_records_elapsedTime           64
        #define OD_202a_65_last_fault_records_elapsedTime           65
        #define OD_202a_66_last_fault_records_elapsedTime           66
        #define OD_202a_67_last_fault_records_elapsedTime           67
        #define OD_202a_68_last_fault_records_elapsedTime           68
        #define OD_202a_69_last_fault_records_elapsedTime           69
        #define OD_202a_71_last_fault_records_mainsVoltage          71
        #define OD_202a_72_last_fault_records_mainsVoltage          72
        #define OD_202a_73_last_fault_records_mainsVoltage          73
        #define OD_202a_74_last_fault_records_mainsVoltage          74
        #define OD_202a_75_last_fault_records_mainsVoltage          75
        #define OD_202a_76_last_fault_records_mainsVoltage          76
        #define OD_202a_77_last_fault_records_mainsVoltage          77
        #define OD_202a_78_last_fault_records_mainsVoltage          78
        #define OD_202a_79_last_fault_records_mainsVoltage          79
        #define OD_202a_81_last_fault_records_motorThermalState     81
        #define OD_202a_82_last_fault_records_motorThermalState     82
        #define OD_202a_83_last_fault_records_motorThermalState     83
        #define OD_202a_84_last_fault_records_motorThermalState     84
        #define OD_202a_85_last_fault_records_motorThermalState     85
        #define OD_202a_86_last_fault_records_motorThermalState     86
        #define OD_202a_87_last_fault_records_motorThermalState     87
        #define OD_202a_88_last_fault_records_motorThermalState     88
        #define OD_202a_89_last_fault_records_motorThermalState     89
        #define OD_202a_91_last_fault_records_chCmdAndRef           91
        #define OD_202a_92_last_fault_records_chCmdAndRef           92
        #define OD_202a_93_last_fault_records_chCmdAndRef           93
        #define OD_202a_94_last_fault_records_chCmdAndRef           94
        #define OD_202a_95_last_fault_records_chCmdAndRef           95
        #define OD_202a_96_last_fault_records_chCmdAndRef           96
        #define OD_202a_97_last_fault_records_chCmdAndRef           97
        #define OD_202a_98_last_fault_records_chCmdAndRef           98
        #define OD_202a_99_last_fault_records_chCmdAndRef           99

/*202b */
        #define OD_202b_last_fault_records_2                        0x202b

        #define OD_202b_0_last_fault_records_2_maxSubIndex          0
        #define OD_202b_1_last_fault_records_2_MD0                  1
        #define OD_202b_2_last_fault_records_2_MD1                  2
        #define OD_202b_3_last_fault_records_2_MD2                  3
        #define OD_202b_4_last_fault_records_2_MD3                  4
        #define OD_202b_5_last_fault_records_2_MD4                  5
        #define OD_202b_6_last_fault_records_2_MD5                  6
        #define OD_202b_7_last_fault_records_2_MD6                  7
        #define OD_202b_8_last_fault_records_2_MD7                  8
        #define OD_202b_9_last_fault_records_2_MD8                  9
        #define OD_202b_11_last_fault_records_2_DM0                 11
        #define OD_202b_12_last_fault_records_2_DM1                 12
        #define OD_202b_13_last_fault_records_2_DM2                 13
        #define OD_202b_14_last_fault_records_2_DM3                 14
        #define OD_202b_15_last_fault_records_2_DM4                 15
        #define OD_202b_16_last_fault_records_2_DM5                 16
        #define OD_202b_17_last_fault_records_2_DM6                 17
        #define OD_202b_18_last_fault_records_2_DM7                 18
        #define OD_202b_19_last_fault_records_2_DM8                 19
        #define OD_202b_21_last_fault_records_2_reserved            21
        #define OD_202b_22_last_fault_records_2_reserved            22
        #define OD_202b_23_last_fault_records_2_reserved            23
        #define OD_202b_24_last_fault_records_2_reserved            24
        #define OD_202b_25_last_fault_records_2_reserved            25
        #define OD_202b_26_last_fault_records_2_reserved            26
        #define OD_202b_27_last_fault_records_2_reserved            27
        #define OD_202b_28_last_fault_records_2_reserved            28
        #define OD_202b_29_last_fault_records_2_reserved            29
        #define OD_202b_92_last_fault_records_2_DAY                 92
        #define OD_202b_93_last_fault_records_2_TIME                93
        #define OD_202b_94_last_fault_records_2_FNB                 94

/*2032 */
        #define OD_2032_configuration_management                    0x2032

        #define OD_2032_0_configuration_management_maxSubIndex      0
        #define OD_2032_2_configuration_management_SCS              2
        #define OD_2032_3_configuration_management_FCS              3
        #define OD_2032_21_configuration_management_configActive    21
        #define OD_2032_22_configuration_management_2Configurations 22
        #define OD_2032_23_configuration_management_3Configurations 23
        #define OD_2032_26_configuration_management_multimotors     26
        #define OD_2032_42_configuration_management_reserved        42
        #define OD_2032_43_configuration_management_reserved        43
        #define OD_2032_92_configuration_management_CO1C            92
        #define OD_2032_93_configuration_management_CO1G            93
        #define OD_2032_94_configuration_management_CO2C            94
        #define OD_2032_95_configuration_management_CO2G            95
        #define OD_2032_96_configuration_management_CEBH            96

/*2036 */
        #define OD_2036_channel_management                          0x2036

        #define OD_2036_0_channel_management_maxSubIndex            0
        #define OD_2036_2_channel_management_profile                2
        #define OD_2036_3_channel_management_copyChannel12          3
        #define OD_2036_4_channel_management_CSB                    4
        #define OD_2036_12_channel_management_ref2Switching         12
        #define OD_2036_13_channel_management_ref1BSwitching        13
        #define OD_2036_14_channel_management_ref1Channel           14
        #define OD_2036_15_channel_management_ref2Channel           15
        #define OD_2036_16_channel_management_ref1BChannel          16
        #define OD_2036_22_channel_management_cmdSwitching          22
        #define OD_2036_24_channel_management_cmdChannel1           24
        #define OD_2036_25_channel_management_cmdChannel2           25
        #define OD_2036_32_channel_management_forcedLocalAssign     32
        #define OD_2036_33_channel_management_forcedLocalRef        33
        #define OD_2036_34_channel_management_timeOutForcLocal      34
        #define OD_2036_42_channel_management_referenceChannel      42
        #define OD_2036_43_channel_management_CCC                   43
        #define OD_2036_92_channel_management_refMemoAss            92

/*2037 */
        #define OD_2037_command                                     0x2037

        #define OD_2037_0_command_maxSubIndex                       0
        #define OD_2037_2_command_cmdValue                          2
        #define OD_2037_3_command_HMI_FrequencyRef                  3
        #define OD_2037_4_command_HMI_PIDReference                  4
        #define OD_2037_5_command_CMI                               5
        #define OD_2037_6_command_HMITorqueRef                      6
        #define OD_2037_11_command_reserved                         11
        #define OD_2037_12_command_reserved                         12
        #define OD_2037_13_command_reserved                         13
        #define OD_2037_14_command_reserved                         14
        #define OD_2037_15_command_reserved                         15
        #define OD_2037_20_command_reserved                         20
        #define OD_2037_21_command_reserved                         21
        #define OD_2037_22_command_reserved                         22
        #define OD_2037_23_command_reserved                         23
        #define OD_2037_24_command_reserved                         24
        #define OD_2037_25_command_reserved                         25
        #define OD_2037_30_command_reserved                         30
        #define OD_2037_32_command_reserved                         32
        #define OD_2037_33_command_reserved                         33
        #define OD_2037_34_command_reserved                         34
        #define OD_2037_35_command_reserved                         35
        #define OD_2037_40_command_reserved                         40
        #define OD_2037_42_command_reserved                         42
        #define OD_2037_43_command_reserved                         43
        #define OD_2037_44_command_reserved                         44
        #define OD_2037_45_command_reserved                         45
        #define OD_2037_52_command_reserved                         52
        #define OD_2037_53_command_reserved                         53
        #define OD_2037_54_command_reserved                         54
        #define OD_2037_55_command_reserved                         55
        #define OD_2037_60_command_reserved                         60
        #define OD_2037_100_command_reserved                        100

/*2038 */
        #define OD_2038_drivecom                                    0x2038

        #define OD_2038_0_drivecom_maxSubIndex                      0
        #define OD_2038_2_drivecom_CMDD                             2
        #define OD_2038_3_drivecom_LFRD                             3
        #define OD_2038_4_drivecom_ETAD                             4
        #define OD_2038_5_drivecom_RFRD                             5
        #define OD_2038_6_drivecom_FRHD                             6
        #define OD_2038_7_drivecom_ERRD                             7
        #define OD_2038_8_drivecom_SMIL                             8
        #define OD_2038_9_drivecom_SMIH                             9
        #define OD_2038_10_drivecom_SMAL                            10
        #define OD_2038_11_drivecom_SMAH                            11
        #define OD_2038_12_drivecom_SPAL                            12
        #define OD_2038_13_drivecom_SPAH                            13
        #define OD_2038_14_drivecom_SPAT                            14
        #define OD_2038_15_drivecom_SPDL                            15
        #define OD_2038_16_drivecom_SPDH                            16
        #define OD_2038_17_drivecom_SPDT                            17
        #define OD_2038_32_drivecom_LFD1                            32
        #define OD_2038_33_drivecom_LFD2                            33
        #define OD_2038_34_drivecom_LFD3                            34
        #define OD_2038_35_drivecom_LFD4                            35
        #define OD_2038_42_drivecom_FROD                            42
        #define OD_2038_43_drivecom_SPFN                            43
        #define OD_2038_44_drivecom_SPFD                            44
        #define OD_2038_52_drivecom_QSTD                            52
        #define OD_2038_53_drivecom_DOTD                            53

/*203a */
        #define OD_203a_reserved                                    0x203a

        #define OD_203a_0_reserved_maxSubIndex                      0
        #define OD_203a_2_reserved_reserved                         2
        #define OD_203a_3_reserved_reserved                         3
        #define OD_203a_4_reserved_reserved                         4
        #define OD_203a_5_reserved_reserved                         5
        #define OD_203a_6_reserved_reserved                         6
        #define OD_203a_7_reserved_reserved                         7
        #define OD_203a_8_reserved_reserved                         8
        #define OD_203a_9_reserved_reserved                         9
        #define OD_203a_10_reserved_reserved                        10
        #define OD_203a_11_reserved_reserved                        11
        #define OD_203a_12_reserved_reserved                        12
        #define OD_203a_13_reserved_reserved                        13
        #define OD_203a_14_reserved_reserved                        14
        #define OD_203a_15_reserved_reserved                        15
        #define OD_203a_16_reserved_reserved                        16
        #define OD_203a_17_reserved_reserved                        17
        #define OD_203a_18_reserved_reserved                        18
        #define OD_203a_19_reserved_reserved                        19
        #define OD_203a_20_reserved_reserved                        20
        #define OD_203a_21_reserved_reserved                        21
        #define OD_203a_22_reserved_reserved                        22
        #define OD_203a_23_reserved_reserved                        23
        #define OD_203a_24_reserved_reserved                        24
        #define OD_203a_25_reserved_reserved                        25
        #define OD_203a_26_reserved_reserved                        26
        #define OD_203a_27_reserved_reserved                        27

/*203c */
        #define OD_203c_ramps                                       0x203c

        #define OD_203c_0_ramps_maxSubIndex                         0
        #define OD_203c_2_ramps_acceleration                        2
        #define OD_203c_3_ramps_deceleration                        3
        #define OD_203c_4_ramps_decRampAdapt                        4
        #define OD_203c_5_ramps_rampType                            5
        #define OD_203c_6_ramps_beginAccRound                       6
        #define OD_203c_7_ramps_endAccRound                         7
        #define OD_203c_8_ramps_beginDecRound                       8
        #define OD_203c_9_ramps_endDecRound                         9
        #define OD_203c_11_ramps_rampSwitchAss                      11
        #define OD_203c_12_ramps_ramp2Threshold                     12
        #define OD_203c_13_ramps_acceleration2                      13
        #define OD_203c_14_ramps_deceleration2                      14
        #define OD_203c_21_ramps_rampIncrement                      21
        #define OD_203c_22_ramps_FRO                                22
        #define OD_203c_23_ramps_FROT                               23

/*203d */
        #define OD_203d_speed_loop                                  0x203d

        #define OD_203d_0_speed_loop_maxSubIndex                    0
        #define OD_203d_4_speed_loop_speedPropGain                  4
        #define OD_203d_5_speed_loop_speedTimeIntegral              5
        #define OD_203d_6_speed_loop_KSpeedLoopFilter               6

/*203e */
        #define OD_203e_torque_current_management                   0x203e

        #define OD_203e_0_torque_current_management_maxSubIndex     0
        #define OD_203e_2_torque_current_management_currentLimitation 2
        #define OD_203e_3_torque_current_management_currentLimit2   3
        #define OD_203e_4_torque_current_management_I_Limit2Value   4
        #define OD_203e_11_torque_current_management_torqueLimitActiv 11
        #define OD_203e_12_torque_current_management_motoringTorqueLim 12
        #define OD_203e_13_torque_current_management_genTorqueLim   13
        #define OD_203e_14_torque_current_management_analogLimitAct 14
        #define OD_203e_15_torque_current_management_torqueRefAssign 15
        #define OD_203e_16_torque_current_management_torqueIncrement 16
        #define OD_203e_21_torque_current_management_trqSpdSwitching 21
        #define OD_203e_22_torque_current_management_torqueRefChannel 22
        #define OD_203e_23_torque_current_management_torqueRefSign  23
        #define OD_203e_24_torque_current_management_negativeDeadband 24
        #define OD_203e_25_torque_current_management_positiveDeadband 25
        #define OD_203e_26_torque_current_management_torqueRatio    26
        #define OD_203e_27_torque_current_management_torqueRampTime 27
        #define OD_203e_28_torque_current_management_torqueControlStop 28
        #define OD_203e_29_torque_current_management_torqCtrlFaultMgt 29
        #define OD_203e_30_torque_current_management_torqueCtrlTimeOut 30
        #define OD_203e_31_torque_current_management_spinTime       31
        #define OD_203e_32_torque_current_management_torqueReference 32
        #define OD_203e_33_torque_current_management_TRO            33
        #define OD_203e_41_torque_current_management_trqILimitStop  41
        #define OD_203e_42_torque_current_management_trqILimitTimeOut 42
        #define OD_203e_61_torque_current_management_INT            61
        #define OD_203e_62_torque_current_management_LTCR           62

/*2041 */
        #define OD_2041_reserved                                    0x2041

        #define OD_2041_0_reserved_maxSubIndex                      0
        #define OD_2041_2_reserved_reserved                         2
        #define OD_2041_3_reserved_reserved                         3
        #define OD_2041_4_reserved_reserved                         4
        #define OD_2041_5_reserved_reserved                         5
        #define OD_2041_6_reserved_reserved                         6
        #define OD_2041_7_reserved_reserved                         7
        #define OD_2041_8_reserved_reserved                         8
        #define OD_2041_9_reserved_reserved                         9
        #define OD_2041_10_reserved_reserved                        10
        #define OD_2041_11_reserved_reserved                        11
        #define OD_2041_12_reserved_reserved                        12
        #define OD_2041_13_reserved_reserved                        13
        #define OD_2041_14_reserved_reserved                        14
        #define OD_2041_15_reserved_reserved                        15
        #define OD_2041_16_reserved_reserved                        16
        #define OD_2041_17_reserved_reserved                        17
        #define OD_2041_18_reserved_reserved                        18
        #define OD_2041_19_reserved_reserved                        19
        #define OD_2041_20_reserved_reserved                        20
        #define OD_2041_21_reserved_reserved                        21
        #define OD_2041_22_reserved_reserved                        22
        #define OD_2041_23_reserved_reserved                        23
        #define OD_2041_24_reserved_reserved                        24
        #define OD_2041_25_reserved_reserved                        25
        #define OD_2041_26_reserved_reserved                        26
        #define OD_2041_27_reserved_reserved                        27
        #define OD_2041_28_reserved_reserved                        28
        #define OD_2041_29_reserved_reserved                        29
        #define OD_2041_30_reserved_reserved                        30
        #define OD_2041_31_reserved_reserved                        31
        #define OD_2041_32_reserved_reserved                        32
        #define OD_2041_33_reserved_reserved                        33
        #define OD_2041_34_reserved_reserved                        34
        #define OD_2041_35_reserved_reserved                        35
        #define OD_2041_36_reserved_reserved                        36
        #define OD_2041_37_reserved_reserved                        37
        #define OD_2041_38_reserved_reserved                        38
        #define OD_2041_39_reserved_reserved                        39
        #define OD_2041_40_reserved_reserved                        40
        #define OD_2041_41_reserved_reserved                        41
        #define OD_2041_42_reserved_reserved                        42
        #define OD_2041_43_reserved_reserved                        43
        #define OD_2041_44_reserved_reserved                        44
        #define OD_2041_45_reserved_reserved                        45
        #define OD_2041_46_reserved_reserved                        46
        #define OD_2041_47_reserved_reserved                        47
        #define OD_2041_48_reserved_reserved                        48
        #define OD_2041_49_reserved_reserved                        49

/*2042 */
        #define OD_2042_motor_1                                     0x2042

        #define OD_2042_0_motor_1_maxSubIndex                       0
        #define OD_2042_1_motor_1_rpmIncrement                      1
        #define OD_2042_2_motor_1_ratedMotorVolt                    2
        #define OD_2042_3_motor_1_ratedMotorFreq                    3
        #define OD_2042_4_motor_1_ratedMotCurrent                   4
        #define OD_2042_5_motor_1_ratedMotorSpeed                   5
        #define OD_2042_6_motor_1_nominalMotorSlip                  6
        #define OD_2042_7_motor_1_NSLI                              7
        #define OD_2042_8_motor_1_motorControlType                  8
        #define OD_2042_9_motor_1_autoTuning                        9
        #define OD_2042_10_motor_1_autoTuningState                  10
        #define OD_2042_11_motor_1_autoTuneAssign                   11
        #define OD_2042_12_motor_1_outputPhaseLoss                  12
        #define OD_2042_13_motor_1_motorProtectType                 13
        #define OD_2042_14_motor_1_ratedMotorPower                  14
        #define OD_2042_16_motor_1_automaticAutotune                16
        #define OD_2042_19_motor_1_polesPairNumber                  19
        #define OD_2042_23_motor_1_motThermCurrent                  23
        #define OD_2042_24_motor_1_IRCompensation                   24
        #define OD_2042_26_motor_1_slipCompensation                 26
        #define OD_2042_31_motor_1_motorThermalState                31
        #define OD_2042_41_motor_1_statorRMeasured                  41
        #define OD_2042_42_motor_1_RSMI                             42
        #define OD_2042_43_motor_1_custStatorResist                 43
        #define OD_2042_44_motor_1_RSAI                             44
        #define OD_2042_45_motor_1_RSTU                             45
        #define OD_2042_50_motor_1_IDTU                             50
        #define OD_2042_51_motor_1_idr                              51
        #define OD_2042_52_motor_1_IDMI                             52
        #define OD_2042_53_motor_1_idw                              53
        #define OD_2042_54_motor_1_IDAI                             54
        #define OD_2042_55_motor_1_LFTU                             55
        #define OD_2042_61_motor_1_lfr                              61
        #define OD_2042_62_motor_1_LFMI                             62
        #define OD_2042_63_motor_1_lfw                              63
        #define OD_2042_64_motor_1_LFAI                             64
        #define OD_2042_65_motor_1_TRTU                             65
        #define OD_2042_66_motor_1_T2r                              66
        #define OD_2042_67_motor_1_TRMI                             67
        #define OD_2042_68_motor_1_custRotortConst                  68
        #define OD_2042_69_motor_1_TRAI                             69
        #define OD_2042_71_motor_1_nominalISync                     71
        #define OD_2042_72_motor_1_nomMotorSpdsync                  72
        #define OD_2042_73_motor_1_polePairs                        73
        #define OD_2042_74_motor_1_synEMFConstant                   74
        #define OD_2042_75_motor_1_autotuneLdAxis                   75
        #define OD_2042_76_motor_1_autotuneLqAxis                   76
        #define OD_2042_80_motor_1_nominalFreqSync                  80
        #define OD_2042_81_motor_1_R1rS                             81
        #define OD_2042_82_motor_1_RMSI                             82
        #define OD_2042_83_motor_1_custStatorRSyn                   83
        #define OD_2042_84_motor_1_RASI                             84
        #define OD_2042_100_motor_1_FMX                             100

/*2046 */
        #define OD_2046_brake_sequence                              0x2046

        #define OD_2046_0_brake_sequence_maxSubIndex                0
        #define OD_2046_2_brake_sequence_brakeAssignment            2
        #define OD_2046_4_brake_sequence_brakeEngageFreq            4
        #define OD_2046_5_brake_sequence_brakeReleaseTime           5
        #define OD_2046_6_brake_sequence_brakeEngageTime            6
        #define OD_2046_7_brake_sequence_brakeReleaseI_FW           7
        #define OD_2046_8_brake_sequence_brakeImpulse               8
        #define OD_2046_9_brake_sequence_movementType               9
        #define OD_2046_10_brake_sequence_brakeContact              10
        #define OD_2046_11_brake_sequence_brakeEngageDelay          11
        #define OD_2046_12_brake_sequence_brakeReleaseI_Rev         12
        #define OD_2046_13_brake_sequence_brakeReleaseFreq          13
        #define OD_2046_14_brake_sequence_jumpAtReversal            14
        #define OD_2046_15_brake_sequence_brakeEngageAt0            15
        #define OD_2046_16_brake_sequence_currentRampTime           16
        #define OD_2046_21_brake_sequence_engageAtReversal          21
        #define OD_2046_23_brake_sequence_timeToRestart             23
        #define OD_2046_51_brake_sequence_BRH                       51
        #define OD_2046_71_brake_sequence_weightSensorAss           71
        #define OD_2046_72_brake_sequence_point1X                   72
        #define OD_2046_73_brake_sequence_point1Y                   73
        #define OD_2046_74_brake_sequence_point2X                   74
        #define OD_2046_75_brake_sequence_point2Y                   75
        #define OD_2046_76_brake_sequence_ibr420MALoss              76

/*204a */
        #define OD_204a_automatic_DC_Injection                      0x204a

        #define OD_204a_0_automatic_DC_Injection_maxSubIndex        0
        #define OD_204a_2_automatic_DC_Injection_autoDCInjection    2
        #define OD_204a_3_automatic_DC_Injection_autoDCInjTime1     3
        #define OD_204a_4_automatic_DC_Injection_autoDCInjLevel1    4
        #define OD_204a_5_automatic_DC_Injection_autoDCInjTime2     5
        #define OD_204a_6_automatic_DC_Injection_autoDCInjLevel2    6
        #define OD_204a_100_automatic_DC_Injection_DCInjectionAngle 100

/*2050 */
        #define OD_2050_threshold                                   0x2050

        #define OD_2050_0_threshold_maxSubIndex                     0
        #define OD_2050_2_threshold_currentThreshold                2
        #define OD_2050_3_threshold_motorThermLevel                 3
        #define OD_2050_4_threshold_freqThreshold                   4
        #define OD_2050_5_threshold_freqThreshold2                  5
        #define OD_2050_7_threshold_motor2ThermLevel                7
        #define OD_2050_8_threshold_motor3ThermLevel                8
        #define OD_2050_10_threshold_drvThermStateAl                10
        #define OD_2050_16_threshold_lowTorqueThd                   16
        #define OD_2050_17_threshold_highTorqueThd                  17
        #define OD_2050_22_threshold_thermalAlarmStop               22

/*2051 */
        #define OD_2051_terminal_block_control                      0x2051

        #define OD_2051_0_terminal_block_control_maxSubIndex        0
        #define OD_2051_2_terminal_block_control_23WireControl      2
        #define OD_2051_3_terminal_block_control_2WireType          3
        #define OD_2051_4_terminal_block_control_RUN                4
        #define OD_2051_5_terminal_block_control_forward            5
        #define OD_2051_6_terminal_block_control_reverseAssign      6
        #define OD_2051_11_terminal_block_control_JOG               11
        #define OD_2051_12_terminal_block_control_jogFrequency      12
        #define OD_2051_13_terminal_block_control_jogDelay          13

/*2052 */
        #define OD_2052_stop_settings                               0x2052

        #define OD_2052_0_stop_settings_maxSubIndex                 0
        #define OD_2052_2_stop_settings_typeOfStop                  2
        #define OD_2052_3_stop_settings_freewheelStopAss            3
        #define OD_2052_4_stop_settings_DCInjectionAssign           4
        #define OD_2052_5_stop_settings_fastStopAssign              5
        #define OD_2052_11_stop_settings_DCInjectLevel1             11
        #define OD_2052_12_stop_settings_DCInjectionTime2           12
        #define OD_2052_13_stop_settings_DCInjectLevel2             13
        #define OD_2052_14_stop_settings_DCInjectionTime1           14
        #define OD_2052_21_stop_settings_freewheelStopThd           21
        #define OD_2052_31_stop_settings_rampDivider                31

/*2053 */
        #define OD_2053_jump_frequency                              0x2053

        #define OD_2053_0_jump_frequency_maxSubIndex                0
        #define OD_2053_2_jump_frequency_skipFrequency              2
        #define OD_2053_3_jump_frequency_skipFrequency2             3
        #define OD_2053_4_jump_frequency_3rdSkipFrequency           4
        #define OD_2053_12_jump_frequency_skipFreqHysteresis        12

/*2054 */
        #define OD_2054_preset_speeds                               0x2054

        #define OD_2054_0_preset_speeds_maxSubIndex                 0
        #define OD_2054_2_preset_speeds_2PresetSpeeds               2
        #define OD_2054_3_preset_speeds_4PresetSpeeds               3
        #define OD_2054_4_preset_speeds_8PresetSpeeds               4
        #define OD_2054_5_preset_speeds_16PresetSpeeds              5
        #define OD_2054_11_preset_speeds_presetSpeed2               11
        #define OD_2054_12_preset_speeds_presetSpeed3               12
        #define OD_2054_13_preset_speeds_presetSpeed4               13
        #define OD_2054_14_preset_speeds_presetSpeed5               14
        #define OD_2054_15_preset_speeds_presetSpeed6               15
        #define OD_2054_16_preset_speeds_presetSpeed7               16
        #define OD_2054_17_preset_speeds_presetSpeed8               17
        #define OD_2054_18_preset_speeds_presetSpeed9               18
        #define OD_2054_19_preset_speeds_presetSpeed10              19
        #define OD_2054_20_preset_speeds_presetSpeed11              20
        #define OD_2054_21_preset_speeds_presetSpeed12              21
        #define OD_2054_22_preset_speeds_presetSpeed13              22
        #define OD_2054_23_preset_speeds_presetSpeed14              23
        #define OD_2054_24_preset_speeds_presetSpeed15              24
        #define OD_2054_25_preset_speeds_presetSpeed16              25

/*2055 */
        #define OD_2055_upper_and_lower_speed                       0x2055

        #define OD_2055_0_upper_and_lower_speed_maxSubIndex         0
        #define OD_2055_2_upper_and_lower_speed_speedAssignment     2
        #define OD_2055_3_upper_and_lower_speed_speedAssignment     3
        #define OD_2055_4_upper_and_lower_speed_referenceSaved      4
        #define OD_2055_5_upper_and_lower_speed_PMV                 5
        #define OD_2055_6_upper_and_lower_speed_speedLimitation     6
        #define OD_2055_7_upper_and_lower_speed_PBT                 7
        #define OD_2055_21_upper_and_lower_speed_speedAssignment    21
        #define OD_2055_22_upper_and_lower_speed_speedAssignment    22

/*2056 */
        #define OD_2056_limit_switch_management                     0x2056

        #define OD_2056_0_limit_switch_management_maxSubIndex       0
        #define OD_2056_2_limit_switch_management_stopFWLimitSw     2
        #define OD_2056_3_limit_switch_management_stopRVLimitSw     3
        #define OD_2056_4_limit_switch_management_stopType          4

/*2057 */
        #define OD_2057_stop_on_prolonged_speed                     0x2057

        #define OD_2057_0_stop_on_prolonged_speed_maxSubIndex       0
        #define OD_2057_2_stop_on_prolonged_speed_lowSpeedTimeOut   2

/*2058 */
        #define OD_2058_summing_reference                           0x2058

        #define OD_2058_0_summing_reference_maxSubIndex             0
        #define OD_2058_2_summing_reference_summingRef2             2
        #define OD_2058_3_summing_reference_summingRef3             3
        #define OD_2058_12_summing_reference_subtractRef2           12
        #define OD_2058_13_summing_reference_subtractRef3           13
        #define OD_2058_22_summing_reference_multiplierRef2         22
        #define OD_2058_23_summing_reference_multiplierRef3         23
        #define OD_2058_32_summing_reference_multiplyingCoeff       32
        #define OD_2058_33_summing_reference_MFR1                   33
        #define OD_2058_34_summing_reference_MFR2                   34
        #define OD_2058_35_summing_reference_MFR3                   35
        #define OD_2058_36_summing_reference_MFR4                   36

/*2059 */
        #define OD_2059_PI_regulator                                0x2059

        #define OD_2059_0_PI_regulator_maxSubIndex                  0
        #define OD_2059_2_PI_regulator_PIDFeedbackAss               2
        #define OD_2059_4_PI_regulator_PIDFbkScaleFactor            4
        #define OD_2059_5_PI_regulator_minPIDFeedback               5
        #define OD_2059_6_PI_regulator_maxPIDFeedback               6
        #define OD_2059_7_PI_regulator_minPIDReference              7
        #define OD_2059_8_PI_regulator_maxPIDReference              8
        #define OD_2059_9_PI_regulator_actInternalPIDRef            9
        #define OD_2059_10_PI_regulator_2PresetPIDRef               10
        #define OD_2059_11_PI_regulator_4PresetPIDRef               11
        #define OD_2059_21_PI_regulator_internalPIDRef              21
        #define OD_2059_22_PI_regulator_presetRefPID2               22
        #define OD_2059_23_PI_regulator_presetRefPID3               23
        #define OD_2059_24_PI_regulator_presetRefPID4               24
        #define OD_2059_41_PI_regulator_PIDCorrectReverse           41
        #define OD_2059_42_PI_regulator_PIDPropGain                 42
        #define OD_2059_43_PI_regulator_PIDIntegralGain             43
        #define OD_2059_44_PI_regulator_PIDDerivativeGain           44
        #define OD_2059_45_PI_regulator_PIDIntegralReset            45
        #define OD_2059_51_PI_regulator_speedRefAssign              51
        #define OD_2059_52_PI_regulator_speedInput                  52
        #define OD_2059_53_PI_regulator_minPIDOutput                53
        #define OD_2059_54_PI_regulator_maxPIDOutput                54
        #define OD_2059_55_PI_regulator_manualReference             55
        #define OD_2059_61_PI_regulator_PIDWakeUpThresh             61
        #define OD_2059_62_PI_regulator_minFbkAlarm                 62
        #define OD_2059_63_PI_regulator_maxFbkAlarm                 63
        #define OD_2059_64_PI_regulator_PIDErrorAlarm               64
        #define OD_2059_71_PI_regulator_autoManualAssign            71
        #define OD_2059_81_PI_regulator_PIDError                    81
        #define OD_2059_82_PI_regulator_PIDFeedback                 82
        #define OD_2059_83_PI_regulator_PIDReference                83
        #define OD_2059_84_PI_regulator_PID_Output                  84
        #define OD_2059_85_PI_regulator_PIDRamp                     85

/*205a */
        #define OD_205a_customer_Unit                               0x205a

        #define OD_205a_0_customer_Unit_maxSubIndex                 0
        #define OD_205a_5_customer_Unit_motorSpeed                  5

/*205b */
        #define OD_205b_ENA_System                                  0x205b

        #define OD_205b_0_ENA_System_maxSubIndex                    0
        #define OD_205b_2_ENA_System_ENASystem                      2
        #define OD_205b_3_ENA_System_ENAAvgSpeed                    3
        #define OD_205b_4_ENA_System_ENAPropGain                    4
        #define OD_205b_5_ENA_System_ENAIntegralGain                5
        #define OD_205b_6_ENA_System_reductionRatio                 6

/*205c */
        #define OD_205c_traverse_control                            0x205c

        #define OD_205c_0_traverse_control_maxSubIndex              0
        #define OD_205c_2_traverse_control_yarnControl              2
        #define OD_205c_3_traverse_control_traverseFreqHigh         3
        #define OD_205c_4_traverse_control_traverseFreqLow          4
        #define OD_205c_5_traverse_control_quickStepHigh            5
        #define OD_205c_6_traverse_control_quickStepLow             6
        #define OD_205c_7_traverse_control_traverseCtrlAccel        7
        #define OD_205c_8_traverse_control_traverseCtrlDecel        8
        #define OD_205c_9_traverse_control_reelTime                 9
        #define OD_205c_10_traverse_control_EBOT                    10
        #define OD_205c_11_traverse_control_initTraverseCtrl        11
        #define OD_205c_12_traverse_control_decreaseRefSpeed        12
        #define OD_205c_13_traverse_control_counterWobble           13
        #define OD_205c_14_traverse_control_endReel                 14
        #define OD_205c_15_traverse_control_syncWobble              15

/*205d */
        #define OD_205d_high_speed_hoisting                         0x205d

        #define OD_205d_0_high_speed_hoisting_maxSubIndex           0
        #define OD_205d_2_high_speed_hoisting_highSpeedHoisting     2
        #define OD_205d_3_high_speed_hoisting_highSpeedI_Limit      3
        #define OD_205d_4_high_speed_hoisting_motorSpeedCoeff       4
        #define OD_205d_5_high_speed_hoisting_genSpeedCoeff         5
        #define OD_205d_6_high_speed_hoisting_measurementSpd        6
        #define OD_205d_7_high_speed_hoisting_I_LimitFrequency      7
        #define OD_205d_8_high_speed_hoisting_loadMeasuringTm       8
        #define OD_205d_12_high_speed_hoisting_dynLoadThreshold     12
        #define OD_205d_13_high_speed_hoisting_dynamicLoadTime      13
        #define OD_205d_14_high_speed_hoisting_dynLoadMgt           14
        #define OD_205d_22_high_speed_hoisting_ropeSlackConfig      22
        #define OD_205d_23_high_speed_hoisting_ropeSlackTrqLevel    23

/*205e */
        #define OD_205e_volts_per_hertz_control_type                0x205e

        #define OD_205e_0_volts_per_hertz_control_type_maxSubIndex  0
        #define OD_205e_2_volts_per_hertz_control_type_U0           2
        #define OD_205e_4_volts_per_hertz_control_type_U1           4
        #define OD_205e_5_volts_per_hertz_control_type_freqPt1on5ptV_F 5
        #define OD_205e_6_volts_per_hertz_control_type_U2           6
        #define OD_205e_7_volts_per_hertz_control_type_F2           7
        #define OD_205e_8_volts_per_hertz_control_type_U3           8
        #define OD_205e_9_volts_per_hertz_control_type_F3           9
        #define OD_205e_10_volts_per_hertz_control_type_U4          10
        #define OD_205e_11_volts_per_hertz_control_type_F4          11
        #define OD_205e_12_volts_per_hertz_control_type_U5          12
        #define OD_205e_13_volts_per_hertz_control_type_F5          13

/*205f */
        #define OD_205f_positioning_by_switches                     0x205f

        #define OD_205f_0_positioning_by_switches_maxSubIndex       0
        #define OD_205f_2_positioning_by_switches_stopFWLimitSw     2
        #define OD_205f_3_positioning_by_switches_stopRVLimitSw     3
        #define OD_205f_4_positioning_by_switches_slowdownForward   4
        #define OD_205f_5_positioning_by_switches_slowdownReverse   5
        #define OD_205f_6_positioning_by_switches_decelerationType  6
        #define OD_205f_7_positioning_by_switches_stopType          7
        #define OD_205f_8_positioning_by_switches_disableLimitSw    8
        #define OD_205f_9_positioning_by_switches_stopLimitConfig   9
        #define OD_205f_10_positioning_by_switches_slowdownLimitCfg 10
        #define OD_205f_12_positioning_by_switches_ratedLinearSpeed 12
        #define OD_205f_22_positioning_by_switches_stopDistance     22
        #define OD_205f_23_positioning_by_switches_stopCorrector    23

/*2060 */
        #define OD_2060_surge_voltage_on_motor_cables               0x2060

        #define OD_2060_0_surge_voltage_on_motor_cables_maxSubIndex 0
        #define OD_2060_2_surge_voltage_on_motor_cables_motorSurgeLimit 2
        #define OD_2060_3_surge_voltage_on_motor_cables_voltSurgeLimitOpt 3

/*2061 */
        #define OD_2061_com_Scanner                                 0x2061

        #define OD_2061_0_com_Scanner_maxSubIndex                   0
        #define OD_2061_2_com_Scanner_scanIN1Address                2
        #define OD_2061_3_com_Scanner_scanIN2Address                3
        #define OD_2061_4_com_Scanner_scanIN3Address                4
        #define OD_2061_5_com_Scanner_scanIN4Address                5
        #define OD_2061_6_com_Scanner_scanIN5Address                6
        #define OD_2061_7_com_Scanner_scanIN6Address                7
        #define OD_2061_8_com_Scanner_scanIN7Address                8
        #define OD_2061_9_com_Scanner_scanIN8Address                9
        #define OD_2061_22_com_Scanner_scanOut1Address              22
        #define OD_2061_23_com_Scanner_scanOut2Address              23
        #define OD_2061_24_com_Scanner_scanOut3Address              24
        #define OD_2061_25_com_Scanner_scanOut4Address              25
        #define OD_2061_26_com_Scanner_scanOut5Address              26
        #define OD_2061_27_com_Scanner_scanOut6Address              27
        #define OD_2061_28_com_Scanner_scanOut7Address              28
        #define OD_2061_29_com_Scanner_scanOut8Address              29
        #define OD_2061_42_com_Scanner_comScanIn1Val                42
        #define OD_2061_43_com_Scanner_comScanIn2Val                43
        #define OD_2061_44_com_Scanner_comScanIn3Val                44
        #define OD_2061_45_com_Scanner_comScanIn4Val                45
        #define OD_2061_46_com_Scanner_comScanIn5Val                46
        #define OD_2061_47_com_Scanner_comScanIn6Val                47
        #define OD_2061_48_com_Scanner_comScanIn7Val                48
        #define OD_2061_49_com_Scanner_comScanIn8Val                49
        #define OD_2061_62_com_Scanner_comScanOut1Val               62
        #define OD_2061_63_com_Scanner_comScanOut2Val               63
        #define OD_2061_64_com_Scanner_comScanOut3Val               64
        #define OD_2061_65_com_Scanner_comScanOut4Val               65
        #define OD_2061_66_com_Scanner_comScanOut5Val               66
        #define OD_2061_67_com_Scanner_comScanOut6Val               67
        #define OD_2061_68_com_Scanner_comScanOut7Val               68
        #define OD_2061_69_com_Scanner_comScanOut8Val               69

/*2062 */
        #define OD_2062_reserved                                    0x2062

        #define OD_2062_0_reserved_maxSubIndex                      0
        #define OD_2062_2_reserved_reserved                         2
        #define OD_2062_3_reserved_reserved                         3
        #define OD_2062_4_reserved_reserved                         4
        #define OD_2062_5_reserved_reserved                         5
        #define OD_2062_6_reserved_reserved                         6
        #define OD_2062_7_reserved_reserved                         7
        #define OD_2062_8_reserved_reserved                         8
        #define OD_2062_9_reserved_reserved                         9
        #define OD_2062_10_reserved_reserved                        10

/*2063 */
        #define OD_2063_parameter_switching                         0x2063

        #define OD_2063_0_parameter_switching_maxSubIndex           0
        #define OD_2063_1_parameter_switching_utilisedParamSet      1
        #define OD_2063_2_parameter_switching_reserved              2
        #define OD_2063_3_parameter_switching_2ParameterSets        3
        #define OD_2063_4_parameter_switching_3ParameterSets        4
        #define OD_2063_12_parameter_switching_reserved             12
        #define OD_2063_13_parameter_switching_reserved             13
        #define OD_2063_14_parameter_switching_reserved             14
        #define OD_2063_15_parameter_switching_reserved             15
        #define OD_2063_16_parameter_switching_reserved             16
        #define OD_2063_17_parameter_switching_reserved             17
        #define OD_2063_18_parameter_switching_reserved             18
        #define OD_2063_19_parameter_switching_reserved             19
        #define OD_2063_20_parameter_switching_reserved             20
        #define OD_2063_21_parameter_switching_reserved             21
        #define OD_2063_22_parameter_switching_reserved             22
        #define OD_2063_23_parameter_switching_reserved             23
        #define OD_2063_24_parameter_switching_reserved             24
        #define OD_2063_25_parameter_switching_reserved             25
        #define OD_2063_26_parameter_switching_reserved             26
        #define OD_2063_32_parameter_switching_reserved             32
        #define OD_2063_33_parameter_switching_reserved             33
        #define OD_2063_34_parameter_switching_reserved             34
        #define OD_2063_35_parameter_switching_reserved             35
        #define OD_2063_36_parameter_switching_reserved             36
        #define OD_2063_37_parameter_switching_reserved             37
        #define OD_2063_38_parameter_switching_reserved             38
        #define OD_2063_39_parameter_switching_reserved             39
        #define OD_2063_40_parameter_switching_reserved             40
        #define OD_2063_41_parameter_switching_reserved             41
        #define OD_2063_42_parameter_switching_reserved             42
        #define OD_2063_43_parameter_switching_reserved             43
        #define OD_2063_44_parameter_switching_reserved             44
        #define OD_2063_45_parameter_switching_reserved             45
        #define OD_2063_46_parameter_switching_reserved             46
        #define OD_2063_52_parameter_switching_reserved             52
        #define OD_2063_53_parameter_switching_reserved             53
        #define OD_2063_54_parameter_switching_reserved             54
        #define OD_2063_55_parameter_switching_reserved             55
        #define OD_2063_56_parameter_switching_reserved             56
        #define OD_2063_57_parameter_switching_reserved             57
        #define OD_2063_58_parameter_switching_reserved             58
        #define OD_2063_59_parameter_switching_reserved             59
        #define OD_2063_60_parameter_switching_reserved             60
        #define OD_2063_61_parameter_switching_reserved             61
        #define OD_2063_62_parameter_switching_reserved             62
        #define OD_2063_63_parameter_switching_reserved             63
        #define OD_2063_64_parameter_switching_reserved             64
        #define OD_2063_65_parameter_switching_reserved             65
        #define OD_2063_66_parameter_switching_reserved             66
        #define OD_2063_72_parameter_switching_reserved             72
        #define OD_2063_73_parameter_switching_reserved             73
        #define OD_2063_74_parameter_switching_reserved             74
        #define OD_2063_75_parameter_switching_reserved             75
        #define OD_2063_76_parameter_switching_reserved             76
        #define OD_2063_77_parameter_switching_reserved             77
        #define OD_2063_78_parameter_switching_reserved             78
        #define OD_2063_79_parameter_switching_reserved             79
        #define OD_2063_80_parameter_switching_reserved             80
        #define OD_2063_81_parameter_switching_reserved             81
        #define OD_2063_82_parameter_switching_reserved             82
        #define OD_2063_83_parameter_switching_reserved             83
        #define OD_2063_84_parameter_switching_reserved             84
        #define OD_2063_85_parameter_switching_reserved             85
        #define OD_2063_86_parameter_switching_reserved             86

/*2064 */
        #define OD_2064_CANopen_parameters_1131                     0x2064

        #define OD_2064_0_CANopen_parameters_1131_maxSubIndex       0
        #define OD_2064_2_CANopen_parameters_1131_receivedPD031     2
        #define OD_2064_3_CANopen_parameters_1131_receivedPD032     3
        #define OD_2064_4_CANopen_parameters_1131_receivedPD033     4
        #define OD_2064_5_CANopen_parameters_1131_receivedPD034     5
        #define OD_2064_6_CANopen_parameters_1131_NRP3              6
        #define OD_2064_12_CANopen_parameters_1131_transmitPDO31    12
        #define OD_2064_13_CANopen_parameters_1131_transmitPDO32    13
        #define OD_2064_14_CANopen_parameters_1131_transmitPDO33    14
        #define OD_2064_15_CANopen_parameters_1131_transmitPDO34    15
        #define OD_2064_16_CANopen_parameters_1131_NTP3             16
        #define OD_2064_22_CANopen_parameters_1131_receivedPD021    22
        #define OD_2064_23_CANopen_parameters_1131_receivedPD022    23
        #define OD_2064_24_CANopen_parameters_1131_receivedPD023    24
        #define OD_2064_25_CANopen_parameters_1131_receivedPD024    25
        #define OD_2064_26_CANopen_parameters_1131_NRP2             26
        #define OD_2064_32_CANopen_parameters_1131_transmitPDO21    32
        #define OD_2064_33_CANopen_parameters_1131_transmitPDO22    33
        #define OD_2064_34_CANopen_parameters_1131_transmitPDO23    34
        #define OD_2064_35_CANopen_parameters_1131_transmitPDO24    35
        #define OD_2064_36_CANopen_parameters_1131_NTP2             36
        #define OD_2064_42_CANopen_parameters_1131_receivedPD011    42
        #define OD_2064_43_CANopen_parameters_1131_receivedPD012    43
        #define OD_2064_44_CANopen_parameters_1131_receivedPD013    44
        #define OD_2064_45_CANopen_parameters_1131_receivedPD014    45
        #define OD_2064_46_CANopen_parameters_1131_NRP1             46
        #define OD_2064_52_CANopen_parameters_1131_transmitPDO11    52
        #define OD_2064_53_CANopen_parameters_1131_transmitPDO12    53
        #define OD_2064_54_CANopen_parameters_1131_transmitPDO13    54
        #define OD_2064_55_CANopen_parameters_1131_transmitPDO14    55
        #define OD_2064_56_CANopen_parameters_1131_NTP1             56
        #define OD_2064_71_CANopen_parameters_1131_numberOfTX_PDO   71
        #define OD_2064_72_CANopen_parameters_1131_numberOfRX_PDO   72

/*2065 */
        #define OD_2065_downstream_contactor                        0x2065

        #define OD_2065_0_downstream_contactor_maxSubIndex          0
        #define OD_2065_2_downstream_contactor_delayToMotorRun      2
        #define OD_2065_3_downstream_contactor_delayToOpenCont      3
        #define OD_2065_4_downstream_contactor_outputContactFdbk    4
        #define OD_2065_5_downstream_contactor_outContactorAss      5

/*2066 */
        #define OD_2066_PTC_treatment                               0x2066

        #define OD_2066_0_PTC_treatment_maxSubIndex                 0
        #define OD_2066_2_PTC_treatment_PTC1Probe                   2
        #define OD_2066_3_PTC_treatment_PTC2Probe                   3
        #define OD_2066_4_PTC_treatment_LI6PTCProbe                 4
        #define OD_2066_5_PTC_treatment_PT3V                        5
        #define OD_2066_6_PTC_treatment_PTCI                        6

/*2067 */
        #define OD_2067_pulse_input                                 0x2067

        #define OD_2067_0_pulse_input_maxSubIndex                   0
        #define OD_2067_2_pulse_input_referenceType                 2
        #define OD_2067_3_pulse_input_RPMinValue                    3
        #define OD_2067_4_pulse_input_RPMaxValue                    4
        #define OD_2067_5_pulse_input_RPFilter                      5
        #define OD_2067_6_pulse_input_PIFR                          6
        #define OD_2067_7_pulse_input_PFRI                          7
        #define OD_2067_8_pulse_input_RPInput                       8
        #define OD_2067_11_pulse_input_freqMinValue                 11
        #define OD_2067_12_pulse_input_freqMaxValue                 12
        #define OD_2067_13_pulse_input_freqSignalFilter             13
        #define OD_2067_14_pulse_input_EIFR                         14
        #define OD_2067_15_pulse_input_EFRC                         15
        #define OD_2067_16_pulse_input_IFRC                         16

/*2068 */
        #define OD_2068_output_phase_rotation                       0x2068

        #define OD_2068_0_output_phase_rotation_maxSubIndex         0
        #define OD_2068_2_output_phase_rotation_outputPhRotation    2

/*2069 */
        #define OD_2069_function_keys_management                    0x2069

        #define OD_2069_0_function_keys_management_maxSubIndex      0
        #define OD_2069_2_function_keys_management_F1KeyAssignment  2
        #define OD_2069_3_function_keys_management_F2KeyAssignment  3
        #define OD_2069_4_function_keys_management_F3KeyAssignment  4
        #define OD_2069_5_function_keys_management_F4KeyAssignment  5
        #define OD_2069_22_function_keys_management_FJOG            22
        #define OD_2069_23_function_keys_management_FPS1            23
        #define OD_2069_24_function_keys_management_FPS2            24
        #define OD_2069_25_function_keys_management_FPR1            25
        #define OD_2069_26_function_keys_management_FPR2            26
        #define OD_2069_27_function_keys_management_FUSP            27
        #define OD_2069_28_function_keys_management_FDSP            28
        #define OD_2069_29_function_keys_management_FTK             29
        #define OD_2069_30_function_keys_management_HMICmd          30

/*206a */
        #define OD_206a_input_line_contactor                        0x206a

        #define OD_206a_0_input_line_contactor_maxSubIndex          0
        #define OD_206a_2_input_line_contactor_driveLock            2
        #define OD_206a_3_input_line_contactor_lineContactorAss     3
        #define OD_206a_4_input_line_contactor_mainsVTimeOut        4

/*206b */
        #define OD_206b_reserved                                    0x206b

        #define OD_206b_0_reserved_maxSubIndex                      0
        #define OD_206b_3_reserved_reserved                         3
        #define OD_206b_4_reserved_reserved                         4
        #define OD_206b_5_reserved_reserved                         5
        #define OD_206b_6_reserved_reserved                         6
        #define OD_206b_7_reserved_reserved                         7
        #define OD_206b_8_reserved_reserved                         8

/*206c */
        #define OD_206c_DC_bus_management                           0x206c

        #define OD_206c_0_DC_bus_management_maxSubIndex             0
        #define OD_206c_2_DC_bus_management_mainsVoltage            2
        #define OD_206c_3_DC_bus_management_undervoltageLevel       3
        #define OD_206c_4_DC_bus_management_underVFaultMgt          4
        #define OD_206c_5_DC_bus_management_undervoltTimeOut        5
        #define OD_206c_12_DC_bus_management_preventionLevel        12
        #define OD_206c_13_DC_bus_management_DCBusMaintainTm        13
        #define OD_206c_14_DC_bus_management_underVRestartTm        14
        #define OD_206c_15_DC_bus_management_maxStopTime            15
        #define OD_206c_16_DC_bus_management_regenConnection        16
        #define OD_206c_32_DC_bus_management_evacuationAssign       32
        #define OD_206c_33_DC_bus_management_evacuationInputV       33
        #define OD_206c_34_DC_bus_management_evacuationFreq         34
        #define OD_206c_42_DC_bus_management_prechargeContAss       42
        #define OD_206c_43_DC_bus_management_CONSOLE_DCT            43

/*206d */
        #define OD_206d_motor_fluxing                               0x206d

        #define OD_206d_0_motor_fluxing_maxSubIndex                 0
        #define OD_206d_2_motor_fluxing_fluxingAssignment           2
        #define OD_206d_3_motor_fluxing_motorFluxing                3
        #define OD_206d_12_motor_fluxing_actionBoost                12
        #define OD_206d_13_motor_fluxing_boost                      13

/*206e */
        #define OD_206e_drive_boards_group                          0x206e

        #define OD_206e_0_drive_boards_group_maxSubIndex            0
        #define OD_206e_1_drive_boards_group_PPII                   1
        #define OD_206e_2_drive_boards_group_pairingPassword        2

/*206f */
        #define OD_206f_braking_transistor                          0x206f

        #define OD_206f_0_braking_transistor_maxSubIndex            0
        #define OD_206f_2_braking_transistor_brakingLevel           2
        #define OD_206f_3_braking_transistor_brakingBalance         3
        #define OD_206f_12_braking_transistor_DBResProtection       12
        #define OD_206f_13_braking_transistor_DB_ResistorPower      13
        #define OD_206f_14_braking_transistor_DB_ResistorValue      14
        #define OD_206f_15_braking_transistor_DBRThermalState       15

/*2070 */
        #define OD_2070_vector_control_2_points                     0x2070

        #define OD_2070_0_vector_control_2_points_maxSubIndex       0
        #define OD_2070_2_vector_control_2_points_vectorControl2pt  2
        #define OD_2070_3_vector_control_2_points_VConstantPower    3
        #define OD_2070_4_vector_control_2_points_freqConstPower    4

/*2071 */
        #define OD_2071_load_sharing                                0x2071

        #define OD_2071_0_load_sharing_maxSubIndex                  0
        #define OD_2071_2_load_sharing_loadSharing                  2
        #define OD_2071_3_load_sharing_loadCorrection               3
        #define OD_2071_4_load_sharing_correctionMinSpd             4
        #define OD_2071_5_load_sharing_correctionMaxSpd             5
        #define OD_2071_6_load_sharing_torqueOffset                 6
        #define OD_2071_7_load_sharing_sharingFilter                7

/*2074 */
        #define OD_2074_frequency_meter                             0x2074

        #define OD_2074_0_frequency_meter_maxSubIndex               0
        #define OD_2074_2_frequency_meter_frequencyMeter            2
        #define OD_2074_3_frequency_meter_pulseScalDivisor          3
        #define OD_2074_4_frequency_meter_pulseInWorkFreq           4
        #define OD_2074_5_frequency_meter_overspdPulseThd           5
        #define OD_2074_6_frequency_meter_pulseOverspdDelay         6
        #define OD_2074_7_frequency_meter_levelFrPulseCtrl          7
        #define OD_2074_8_frequency_meter_pulseThdWoRun             8
        #define OD_2074_9_frequency_meter_pulseWoRunDelay           9
        #define OD_2074_10_frequency_meter_pulseWarningThd          10

/*2075 */
        #define OD_2075_half_floor_speed                            0x2075

        #define OD_2075_0_half_floor_speed_maxSubIndex              0
        #define OD_2075_2_half_floor_speed_halfFloorSpeed           2

/*5ffd */
        #define OD_5ffd_dataTunnelObject                            0x5ffd

        #define OD_5ffd_0_dataTunnelObject_maxSubIndex              0
        #define OD_5ffd_1_dataTunnelObject_dataTunnelObject1        1

/*603f */
        #define OD_603f_errorCode                                   0x603f

/*6040 */
        #define OD_6040_controlword                                 0x6040

/*6041 */
        #define OD_6041_statusword                                  0x6041

/*6042 */
        #define OD_6042_targetVelocity                              0x6042

/*6043 */
        #define OD_6043_velocityDemand                              0x6043

/*6044 */
        #define OD_6044_controlEffort                               0x6044

/*6046 */
        #define OD_6046_velocityMinMaxAmount                        0x6046

        #define OD_6046_0_velocityMinMaxAmount_maxSubIndex          0
        #define OD_6046_1_velocityMinMaxAmount_velocityMinAmount    1
        #define OD_6046_2_velocityMinMaxAmount_velocityMaxAmount    2

/*6048 */
        #define OD_6048_velocityAcceleration                        0x6048

        #define OD_6048_0_velocityAcceleration_maxSubIndex          0
        #define OD_6048_1_velocityAcceleration_deltaSpeed           1
        #define OD_6048_2_velocityAcceleration_deltaTime            2

/*6049 */
        #define OD_6049_velocityDeceleration                        0x6049

        #define OD_6049_0_velocityDeceleration_maxSubIndex          0
        #define OD_6049_1_velocityDeceleration_deltaSpeed           1
        #define OD_6049_2_velocityDeceleration_deltaTime            2

/*604b */
        #define OD_604b_setPointFactor                              0x604b

        #define OD_604b_0_setPointFactor_maxSubIndex                0
        #define OD_604b_1_setPointFactor_setPointFactorNumerator    1
        #define OD_604b_2_setPointFactor_setPointFactorDenominator  2

/*605a */
        #define OD_605a_quickStopOptionCode                         0x605a

/*605c */
        #define OD_605c_disableOptionCode                           0x605c

/*6060 */
        #define OD_6060_modesOfOperation                            0x6060

/*6061 */
        #define OD_6061_modesOfOperationDisplay                     0x6061

/*6071 */
        #define OD_6071_targetTorque                                0x6071

/*6077 */
        #define OD_6077_torqueActualValue                           0x6077

/*******************************************************************************
   STRUCTURES FOR VARIABLES IN DIFFERENT MEMORY LOCATIONS
*******************************************************************************/
#define  CO_OD_FIRST_LAST_WORD     0x55 //Any value from 0x01 to 0xFE. If changed, EEPROM will be reinitialized.

/***** Structure for ROM variables ********************************************/
struct sCO_OD_ROM{
               UNSIGNED32     FirstWord;


               UNSIGNED32     LastWord;
};

/***** Structure for RAM variables ********************************************/
struct sCO_OD_RAM{
               UNSIGNED32     FirstWord;

/*1000      */ UNSIGNED32      deviceType;
/*1001      */ UNSIGNED8       errorRegister;
/*1003      */ UNSIGNED32      preDefinedErrorField[1];
/*1005      */ UNSIGNED32      COB_ID_SYNCMessage;
/*1008      */ VISIBLE_STRING  deviceName[5];
/*100b      */ UNSIGNED8       nodeID;
/*100c      */ UNSIGNED16      guardTime;
/*100d      */ UNSIGNED8       lifeTimeFactor;
/*100e      */ UNSIGNED32      nodeGuardingIdentifier;
/*100f      */ UNSIGNED32      numberOfSDOSupported;
/*1014      */ UNSIGNED32      COB_ID_EmergencyMessage;
/*1016      */ UNSIGNED32      consumerHeartbeatTime[1];
/*1017      */ UNSIGNED16      producerHeartbeatTime;
/*1018      */ OD_identityObject_t identityObject;
/*1400      */ OD_receivePDO1Parameter_t receivePDO1Parameter[1];
/*1401      */ OD_receivePDO2Parameter_t receivePDO2Parameter;
/*1402      */ OD_receivePDO3Parameter_t receivePDO3Parameter;
/*1600      */ OD_receivePDO1Mapping_t receivePDO1Mapping[1];
/*1601      */ OD_receivePDO2Mapping_t receivePDO2Mapping;
/*1602      */ OD_receivePDO3Mapping_t receivePDO3Mapping;
/*1800      */ OD_transmitPDO1Parameter_t transmitPDO1Parameter[1];
/*1801      */ OD_transmitPDO2Parameter_t transmitPDO2Parameter;
/*1802      */ OD_transmitPDO3Parameter_t transmitPDO3Parameter;
/*1a00      */ OD_transmitPDO1Mapping_t transmitPDO1Mapping[1];
/*1a01      */ OD_transmitPDO2Mapping_t transmitPDO2Mapping;
/*1a02      */ OD_transmitPDO3Mapping_t transmitPDO3Mapping;
/*2000      */ OD_base_interne_t base_interne;
/*2001      */ OD_base_t       base;
/*2002      */ OD_base_monitoring_t base_monitoring;
/*2003      */ OD_product_version_t product_version;
/*2004      */ OD_reserved_t   reserved[9];
/*200a      */ OD_logical_inputs_configuration_t logical_inputs_configuration;
/*200c      */ OD_logical_outputs_configuration_t logical_outputs_configuration;
/*200e      */ OD_analog_inputs_configuration_t analog_inputs_configuration;
/*2010      */ OD_analog_outputs_configuration_t analog_outputs_configuration;
/*2014      */ OD_outputs_affectations_t outputs_affectations;
/*2016      */ OD_IO_values_t  IO_values;
/*201a      */ OD_encoder_management_t encoder_management;
/*201e      */ OD_product_communication_t product_communication;
/*2022      */ OD_customer_t   customer;
/*2024      */ OD_option_communication_t option_communication;
/*2027      */ OD_prog_Card_IO_Values_t prog_Card_IO_Values;
/*2028      */ OD_fault_behaviour_t fault_behaviour;
/*2029      */ OD_fault_management_t fault_management;
/*202a      */ OD_last_fault_records_t last_fault_records;
/*202b      */ OD_last_fault_records_2_t last_fault_records_2;
/*2032      */ OD_configuration_management_t configuration_management;
/*2036      */ OD_channel_management_t channel_management;
/*2037      */ OD_command_t    command;
/*2038      */ OD_drivecom_t   drivecom;
/*203c      */ OD_ramps_t      ramps;
/*203d      */ OD_speed_loop_t speed_loop;
/*203e      */ OD_torque_current_management_t torque_current_management;
/*2042      */ OD_motor_1_t    motor_1;
/*2046      */ OD_brake_sequence_t brake_sequence;
/*204a      */ OD_automatic_DC_Injection_t automatic_DC_Injection;
/*2050      */ OD_threshold_t  threshold;
/*2051      */ OD_terminal_block_control_t terminal_block_control;
/*2052      */ OD_stop_settings_t stop_settings;
/*2053      */ OD_jump_frequency_t jump_frequency;
/*2054      */ OD_preset_speeds_t preset_speeds;
/*2055      */ OD_upper_and_lower_speed_t upper_and_lower_speed;
/*2056      */ OD_limit_switch_management_t limit_switch_management;
/*2057      */ OD_stop_on_prolonged_speed_t stop_on_prolonged_speed;
/*2058      */ OD_summing_reference_t summing_reference;
/*2059      */ OD_PI_regulator_t PI_regulator;
/*205a      */ OD_customer_Unit_t customer_Unit;
/*205b      */ OD_ENA_System_t ENA_System;
/*205c      */ OD_traverse_control_t traverse_control;
/*205d      */ OD_high_speed_hoisting_t high_speed_hoisting;
/*205e      */ OD_volts_per_hertz_control_type_t volts_per_hertz_control_type;
/*205f      */ OD_positioning_by_switches_t positioning_by_switches;
/*2060      */ OD_surge_voltage_on_motor_cables_t surge_voltage_on_motor_cables;
/*2061      */ OD_com_Scanner_t com_Scanner;
/*2063      */ OD_parameter_switching_t parameter_switching;
/*2064      */ OD_CANopen_parameters_1131_t CANopen_parameters_1131;
/*2065      */ OD_downstream_contactor_t downstream_contactor;
/*2066      */ OD_PTC_treatment_t PTC_treatment;
/*2067      */ OD_pulse_input_t pulse_input;
/*2068      */ OD_output_phase_rotation_t output_phase_rotation;
/*2069      */ OD_function_keys_management_t function_keys_management;
/*206a      */ OD_input_line_contactor_t input_line_contactor;
/*206c      */ OD_DC_bus_management_t DC_bus_management;
/*206d      */ OD_motor_fluxing_t motor_fluxing;
/*206e      */ OD_drive_boards_group_t drive_boards_group;
/*206f      */ OD_braking_transistor_t braking_transistor;
/*2070      */ OD_vector_control_2_points_t vector_control_2_points;
/*2071      */ OD_load_sharing_t load_sharing;
/*2074      */ OD_frequency_meter_t frequency_meter;
/*2075      */ OD_half_floor_speed_t half_floor_speed;
/*5ffd      */ DOMAIN          dataTunnelObject[1];
/*603f      */ UNSIGNED16      errorCode;
/*6040      */ UNSIGNED16      controlword;
/*6041      */ UNSIGNED16      statusword;
/*6042      */ INTEGER16       targetVelocity;
/*6043      */ INTEGER16       velocityDemand;
/*6044      */ INTEGER16       controlEffort;
/*6046      */ UNSIGNED32      velocityMinMaxAmount[2];
/*6048      */ OD_velocityAcceleration_t velocityAcceleration;
/*6049      */ OD_velocityDeceleration_t velocityDeceleration;
/*604b      */ INTEGER16       setPointFactor[2];
/*605a      */ INTEGER16       quickStopOptionCode;
/*605c      */ INTEGER16       disableOptionCode;
/*6060      */ INTEGER8        modesOfOperation;
/*6061      */ INTEGER8        modesOfOperationDisplay;
/*6071      */ INTEGER16       targetTorque;
/*6077      */ INTEGER16       torqueActualValue;

               UNSIGNED32     LastWord;
};

/***** Structure for EEPROM variables ********************************************/
struct sCO_OD_EEPROM{
               UNSIGNED32     FirstWord;


               UNSIGNED32     LastWord;
};

/***** Declaration of Object Dictionary variables *****************************/
extern struct sCO_OD_ROM CO_OD_ROM;

extern struct sCO_OD_RAM CO_OD_RAM;

extern struct sCO_OD_EEPROM CO_OD_EEPROM;

/*******************************************************************************
   ALIASES FOR OBJECT DICTIONARY VARIABLES
*******************************************************************************/
/*1000, Data Type: UNSIGNED32 */
        #define OD_deviceType                                       CO_OD_RAM.deviceType

/*1001, Data Type: UNSIGNED8 */
        #define OD_errorRegister                                    CO_OD_RAM.errorRegister

/*1003, Data Type: UNSIGNED32, Array[1] */
        #define OD_preDefinedErrorField                             CO_OD_RAM.preDefinedErrorField
        #define ODL_preDefinedErrorField_arrayLength                1
        #define ODA_preDefinedErrorField_standardErrorField         0

/*1005, Data Type: UNSIGNED32 */
        #define OD_COB_ID_SYNCMessage                               CO_OD_RAM.COB_ID_SYNCMessage

/*1008, Data Type: VISIBLE_STRING */
        #define OD_deviceName                                       CO_OD_RAM.deviceName
        #define ODL_deviceName_stringLength                         5

/*100b, Data Type: UNSIGNED8 */
        #define OD_nodeID                                           CO_OD_RAM.nodeID

/*100c, Data Type: UNSIGNED16 */
        #define OD_guardTime                                        CO_OD_RAM.guardTime

/*100d, Data Type: UNSIGNED8 */
        #define OD_lifeTimeFactor                                   CO_OD_RAM.lifeTimeFactor

/*100e, Data Type: UNSIGNED32 */
        #define OD_nodeGuardingIdentifier                           CO_OD_RAM.nodeGuardingIdentifier

/*100f, Data Type: UNSIGNED32 */
        #define OD_numberOfSDOSupported                             CO_OD_RAM.numberOfSDOSupported

/*1014, Data Type: UNSIGNED32 */
        #define OD_COB_ID_EmergencyMessage                          CO_OD_RAM.COB_ID_EmergencyMessage

/*1016, Data Type: UNSIGNED32, Array[1] */
        #define OD_consumerHeartbeatTime                            CO_OD_RAM.consumerHeartbeatTime
        #define ODL_consumerHeartbeatTime_arrayLength               1
        #define ODA_consumerHeartbeatTime_consumerHeartbeatTime     0

/*1017, Data Type: UNSIGNED16 */
        #define OD_producerHeartbeatTime                            CO_OD_RAM.producerHeartbeatTime

/*1018, Data Type: identityObject_t */
        #define OD_identityObject                                   CO_OD_RAM.identityObject

/*1400, Data Type: receivePDO1Parameter_t */
        #define OD_receivePDO1Parameter                             CO_OD_RAM.receivePDO1Parameter

/*1401, Data Type: receivePDO2Parameter_t */
        #define OD_receivePDO2Parameter                             CO_OD_RAM.receivePDO2Parameter

/*1402, Data Type: receivePDO3Parameter_t */
        #define OD_receivePDO3Parameter                             CO_OD_RAM.receivePDO3Parameter

/*1600, Data Type: receivePDO1Mapping_t */
        #define OD_receivePDO1Mapping                               CO_OD_RAM.receivePDO1Mapping

/*1601, Data Type: receivePDO2Mapping_t */
        #define OD_receivePDO2Mapping                               CO_OD_RAM.receivePDO2Mapping

/*1602, Data Type: receivePDO3Mapping_t */
        #define OD_receivePDO3Mapping                               CO_OD_RAM.receivePDO3Mapping

/*1800, Data Type: transmitPDO1Parameter_t */
        #define OD_transmitPDO1Parameter                            CO_OD_RAM.transmitPDO1Parameter

/*1801, Data Type: transmitPDO2Parameter_t */
        #define OD_transmitPDO2Parameter                            CO_OD_RAM.transmitPDO2Parameter

/*1802, Data Type: transmitPDO3Parameter_t */
        #define OD_transmitPDO3Parameter                            CO_OD_RAM.transmitPDO3Parameter

/*1a00, Data Type: transmitPDO1Mapping_t */
        #define OD_transmitPDO1Mapping                              CO_OD_RAM.transmitPDO1Mapping

/*1a01, Data Type: transmitPDO2Mapping_t */
        #define OD_transmitPDO2Mapping                              CO_OD_RAM.transmitPDO2Mapping

/*1a02, Data Type: transmitPDO3Mapping_t */
        #define OD_transmitPDO3Mapping                              CO_OD_RAM.transmitPDO3Mapping

/*2000, Data Type: base_interne_t */
        #define OD_base_interne                                     CO_OD_RAM.base_interne

/*2001, Data Type: base_t */
        #define OD_base                                             CO_OD_RAM.base

/*2002, Data Type: base_monitoring_t */
        #define OD_base_monitoring                                  CO_OD_RAM.base_monitoring

/*2003, Data Type: product_version_t */
        #define OD_product_version                                  CO_OD_RAM.product_version

/*2004, Data Type: reserved_t */
        #define OD_reserved                                         CO_OD_RAM.reserved

/*200a, Data Type: logical_inputs_configuration_t */
        #define OD_logical_inputs_configuration                     CO_OD_RAM.logical_inputs_configuration

/*200c, Data Type: logical_outputs_configuration_t */
        #define OD_logical_outputs_configuration                    CO_OD_RAM.logical_outputs_configuration

/*200e, Data Type: analog_inputs_configuration_t */
        #define OD_analog_inputs_configuration                      CO_OD_RAM.analog_inputs_configuration

/*2010, Data Type: analog_outputs_configuration_t */
        #define OD_analog_outputs_configuration                     CO_OD_RAM.analog_outputs_configuration

/*2014, Data Type: outputs_affectations_t */
        #define OD_outputs_affectations                             CO_OD_RAM.outputs_affectations

/*2016, Data Type: IO_values_t */
        #define OD_IO_values                                        CO_OD_RAM.IO_values

/*201a, Data Type: encoder_management_t */
        #define OD_encoder_management                               CO_OD_RAM.encoder_management

/*201e, Data Type: product_communication_t */
        #define OD_product_communication                            CO_OD_RAM.product_communication

/*2022, Data Type: customer_t */
        #define OD_customer                                         CO_OD_RAM.customer

/*2024, Data Type: option_communication_t */
        #define OD_option_communication                             CO_OD_RAM.option_communication

/*2027, Data Type: prog_Card_IO_Values_t */
        #define OD_prog_Card_IO_Values                              CO_OD_RAM.prog_Card_IO_Values

/*2028, Data Type: fault_behaviour_t */
        #define OD_fault_behaviour                                  CO_OD_RAM.fault_behaviour

/*2029, Data Type: fault_management_t */
        #define OD_fault_management                                 CO_OD_RAM.fault_management

/*202a, Data Type: last_fault_records_t */
        #define OD_last_fault_records                               CO_OD_RAM.last_fault_records

/*202b, Data Type: last_fault_records_2_t */
        #define OD_last_fault_records_2                             CO_OD_RAM.last_fault_records_2

/*2032, Data Type: configuration_management_t */
        #define OD_configuration_management                         CO_OD_RAM.configuration_management

/*2036, Data Type: channel_management_t */
        #define OD_channel_management                               CO_OD_RAM.channel_management

/*2037, Data Type: command_t */
        #define OD_command                                          CO_OD_RAM.command

/*2038, Data Type: drivecom_t */
        #define OD_drivecom                                         CO_OD_RAM.drivecom

/*203c, Data Type: ramps_t */
        #define OD_ramps                                            CO_OD_RAM.ramps

/*203d, Data Type: speed_loop_t */
        #define OD_speed_loop                                       CO_OD_RAM.speed_loop

/*203e, Data Type: torque_current_management_t */
        #define OD_torque_current_management                        CO_OD_RAM.torque_current_management

/*2042, Data Type: motor_1_t */
        #define OD_motor_1                                          CO_OD_RAM.motor_1

/*2046, Data Type: brake_sequence_t */
        #define OD_brake_sequence                                   CO_OD_RAM.brake_sequence

/*204a, Data Type: automatic_DC_Injection_t */
        #define OD_automatic_DC_Injection                           CO_OD_RAM.automatic_DC_Injection

/*2050, Data Type: threshold_t */
        #define OD_threshold                                        CO_OD_RAM.threshold

/*2051, Data Type: terminal_block_control_t */
        #define OD_terminal_block_control                           CO_OD_RAM.terminal_block_control

/*2052, Data Type: stop_settings_t */
        #define OD_stop_settings                                    CO_OD_RAM.stop_settings

/*2053, Data Type: jump_frequency_t */
        #define OD_jump_frequency                                   CO_OD_RAM.jump_frequency

/*2054, Data Type: preset_speeds_t */
        #define OD_preset_speeds                                    CO_OD_RAM.preset_speeds

/*2055, Data Type: upper_and_lower_speed_t */
        #define OD_upper_and_lower_speed                            CO_OD_RAM.upper_and_lower_speed

/*2056, Data Type: limit_switch_management_t */
        #define OD_limit_switch_management                          CO_OD_RAM.limit_switch_management

/*2057, Data Type: stop_on_prolonged_speed_t */
        #define OD_stop_on_prolonged_speed                          CO_OD_RAM.stop_on_prolonged_speed

/*2058, Data Type: summing_reference_t */
        #define OD_summing_reference                                CO_OD_RAM.summing_reference

/*2059, Data Type: PI_regulator_t */
        #define OD_PI_regulator                                     CO_OD_RAM.PI_regulator

/*205a, Data Type: customer_Unit_t */
        #define OD_customer_Unit                                    CO_OD_RAM.customer_Unit

/*205b, Data Type: ENA_System_t */
        #define OD_ENA_System                                       CO_OD_RAM.ENA_System

/*205c, Data Type: traverse_control_t */
        #define OD_traverse_control                                 CO_OD_RAM.traverse_control

/*205d, Data Type: high_speed_hoisting_t */
        #define OD_high_speed_hoisting                              CO_OD_RAM.high_speed_hoisting

/*205e, Data Type: volts_per_hertz_control_type_t */
        #define OD_volts_per_hertz_control_type                     CO_OD_RAM.volts_per_hertz_control_type

/*205f, Data Type: positioning_by_switches_t */
        #define OD_positioning_by_switches                          CO_OD_RAM.positioning_by_switches

/*2060, Data Type: surge_voltage_on_motor_cables_t */
        #define OD_surge_voltage_on_motor_cables                    CO_OD_RAM.surge_voltage_on_motor_cables

/*2061, Data Type: com_Scanner_t */
        #define OD_com_Scanner                                      CO_OD_RAM.com_Scanner

/*2063, Data Type: parameter_switching_t */
        #define OD_parameter_switching                              CO_OD_RAM.parameter_switching

/*2064, Data Type: CANopen_parameters_1131_t */
        #define OD_CANopen_parameters_1131                          CO_OD_RAM.CANopen_parameters_1131

/*2065, Data Type: downstream_contactor_t */
        #define OD_downstream_contactor                             CO_OD_RAM.downstream_contactor

/*2066, Data Type: PTC_treatment_t */
        #define OD_PTC_treatment                                    CO_OD_RAM.PTC_treatment

/*2067, Data Type: pulse_input_t */
        #define OD_pulse_input                                      CO_OD_RAM.pulse_input

/*2068, Data Type: output_phase_rotation_t */
        #define OD_output_phase_rotation                            CO_OD_RAM.output_phase_rotation

/*2069, Data Type: function_keys_management_t */
        #define OD_function_keys_management                         CO_OD_RAM.function_keys_management

/*206a, Data Type: input_line_contactor_t */
        #define OD_input_line_contactor                             CO_OD_RAM.input_line_contactor

/*206c, Data Type: DC_bus_management_t */
        #define OD_DC_bus_management                                CO_OD_RAM.DC_bus_management

/*206d, Data Type: motor_fluxing_t */
        #define OD_motor_fluxing                                    CO_OD_RAM.motor_fluxing

/*206e, Data Type: drive_boards_group_t */
        #define OD_drive_boards_group                               CO_OD_RAM.drive_boards_group

/*206f, Data Type: braking_transistor_t */
        #define OD_braking_transistor                               CO_OD_RAM.braking_transistor

/*2070, Data Type: vector_control_2_points_t */
        #define OD_vector_control_2_points                          CO_OD_RAM.vector_control_2_points

/*2071, Data Type: load_sharing_t */
        #define OD_load_sharing                                     CO_OD_RAM.load_sharing

/*2074, Data Type: frequency_meter_t */
        #define OD_frequency_meter                                  CO_OD_RAM.frequency_meter

/*2075, Data Type: half_floor_speed_t */
        #define OD_half_floor_speed                                 CO_OD_RAM.half_floor_speed

/*5ffd, Data Type: DOMAIN, Array[1] */
        #define OD_dataTunnelObject                                 CO_OD_RAM.dataTunnelObject
        #define ODL_dataTunnelObject_arrayLength                    1
        #define ODA_dataTunnelObject_dataTunnelObject1              0

/*603f, Data Type: UNSIGNED16 */
        #define OD_errorCode                                        CO_OD_RAM.errorCode

/*6040, Data Type: UNSIGNED16 */
        #define OD_controlword                                      CO_OD_RAM.controlword

/*6041, Data Type: UNSIGNED16 */
        #define OD_statusword                                       CO_OD_RAM.statusword

/*6042, Data Type: INTEGER16 */
        #define OD_targetVelocity                                   CO_OD_RAM.targetVelocity

/*6043, Data Type: INTEGER16 */
        #define OD_velocityDemand                                   CO_OD_RAM.velocityDemand

/*6044, Data Type: INTEGER16 */
        #define OD_controlEffort                                    CO_OD_RAM.controlEffort

/*6046, Data Type: UNSIGNED32, Array[2] */
        #define OD_velocityMinMaxAmount                             CO_OD_RAM.velocityMinMaxAmount
        #define ODL_velocityMinMaxAmount_arrayLength                2
        #define ODA_velocityMinMaxAmount_velocityMinAmount          0
        #define ODA_velocityMinMaxAmount_velocityMaxAmount          1

/*6048, Data Type: velocityAcceleration_t */
        #define OD_velocityAcceleration                             CO_OD_RAM.velocityAcceleration

/*6049, Data Type: velocityDeceleration_t */
        #define OD_velocityDeceleration                             CO_OD_RAM.velocityDeceleration

/*604b, Data Type: INTEGER16, Array[2] */
        #define OD_setPointFactor                                   CO_OD_RAM.setPointFactor
        #define ODL_setPointFactor_arrayLength                      2
        #define ODA_setPointFactor_setPointFactorNumerator          0
        #define ODA_setPointFactor_setPointFactorDenominator        1

/*605a, Data Type: INTEGER16 */
        #define OD_quickStopOptionCode                              CO_OD_RAM.quickStopOptionCode

/*605c, Data Type: INTEGER16 */
        #define OD_disableOptionCode                                CO_OD_RAM.disableOptionCode

/*6060, Data Type: INTEGER8 */
        #define OD_modesOfOperation                                 CO_OD_RAM.modesOfOperation

/*6061, Data Type: INTEGER8 */
        #define OD_modesOfOperationDisplay                          CO_OD_RAM.modesOfOperationDisplay

/*6071, Data Type: INTEGER16 */
        #define OD_targetTorque                                     CO_OD_RAM.targetTorque

/*6077, Data Type: INTEGER16 */
        #define OD_torqueActualValue                                CO_OD_RAM.torqueActualValue

