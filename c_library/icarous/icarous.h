//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_ICAROUS_H
#define FASTMAVLINK_ICAROUS_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef FASTMAVLINK_BUILD_DATE
#define FASTMAVLINK_BUILD_DATE  "Tue Feb 23 2021"
#endif

#ifdef FASTMAVLINK_DIALECT_VERSION
#define FASTMAVLINK_DIALECT_VERSION  3  // version as specified in xml file
#endif


//------------------------------
//-- Message credentials
//-- crc, min length, max length, flag, target sysid offset, target compid offset
//------------------------------

#ifndef FASTMAVLINK_MESSAGE_CRCS
#define FASTMAVLINK_MESSAGE_CRCS {\
    {42000, 227, 1, 1, 0, 0, 0},\
    {42001, 239, 46, 46, 0, 0, 0}\
}
#endif


#include "../fastmavlink.h"
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED
#include "../fastmavlink_pymavlink.h"
#endif


//------------------------------
//-- Enum definitons
//------------------------------

#ifndef FASTMAVLINK_HAS_ENUM_ICAROUS_TRACK_BAND_TYPES
#define FASTMAVLINK_HAS_ENUM_ICAROUS_TRACK_BAND_TYPES
typedef enum ICAROUS_TRACK_BAND_TYPES {
    ICAROUS_TRACK_BAND_TYPE_NONE = 0,  //  
    ICAROUS_TRACK_BAND_TYPE_NEAR = 1,  //  
    ICAROUS_TRACK_BAND_TYPE_RECOVERY = 2,  //  
    ICAROUS_TRACK_BAND_TYPES_ENUM_END = 3,  // end marker
} ICAROUS_TRACK_BAND_TYPES;
#endif


#ifndef FASTMAVLINK_HAS_ENUM_ICAROUS_FMS_STATE
#define FASTMAVLINK_HAS_ENUM_ICAROUS_FMS_STATE
typedef enum ICAROUS_FMS_STATE {
    ICAROUS_FMS_STATE_IDLE = 0,  //  
    ICAROUS_FMS_STATE_TAKEOFF = 1,  //  
    ICAROUS_FMS_STATE_CLIMB = 2,  //  
    ICAROUS_FMS_STATE_CRUISE = 3,  //  
    ICAROUS_FMS_STATE_APPROACH = 4,  //  
    ICAROUS_FMS_STATE_LAND = 5,  //  
    ICAROUS_FMS_STATE_ENUM_END = 6,  // end marker
} ICAROUS_FMS_STATE;
#endif


//------------------------------
//-- Message definitions
//------------------------------

#include "./mavlink_msg_icarous_heartbeat.h"
#include "./mavlink_msg_icarous_kinematic_bands.h"


//------------------------------
//-- Dialect includes
//------------------------------




#ifdef __cplusplus
}
#endif

#endif // FASTMAVLINK_ICAROUS_H