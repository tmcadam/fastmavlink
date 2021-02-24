//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_H
#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_H


//----------------------------------------
//-- Message OPEN_DRONE_ID_SYSTEM
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_open_drone_id_system_t {
    int32_t operator_latitude;
    int32_t operator_longitude;
    float area_ceiling;
    float area_floor;
    uint16_t area_count;
    uint16_t area_radius;
    uint8_t target_system;
    uint8_t target_component;
    uint8_t id_or_mac[20];
    uint8_t operator_location_type;
    uint8_t classification_type;
    uint8_t category_eu;
    uint8_t class_eu;
}) fmav_open_drone_id_system_t;


#define FASTMAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM  12904


#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MIN  46
#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MAX  46
#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN  46
#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_CRCEXTRA  203

#define FASTMAVLINK_MSG_ID_12904_LEN_MIN  46
#define FASTMAVLINK_MSG_ID_12904_LEN_MAX  46
#define FASTMAVLINK_MSG_ID_12904_LEN  46
#define FASTMAVLINK_MSG_ID_12904_CRCEXTRA  203

#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_FIELD_ID_OR_MAC_LEN  20

#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_FLAGS  3
#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_TARGET_SYSTEM_OFS  20
#define FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_TARGET_COMPONENT_OFS  21


//----------------------------------------
//-- Message OPEN_DRONE_ID_SYSTEM packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_open_drone_id_system_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, const uint8_t* id_or_mac, uint8_t operator_location_type, uint8_t classification_type, int32_t operator_latitude, int32_t operator_longitude, uint16_t area_count, uint16_t area_radius, float area_ceiling, float area_floor, uint8_t category_eu, uint8_t class_eu,
    fmav_status_t* _status)
{
    fmav_open_drone_id_system_t* _payload = (fmav_open_drone_id_system_t*)msg->payload;

    _payload->operator_latitude = operator_latitude;
    _payload->operator_longitude = operator_longitude;
    _payload->area_ceiling = area_ceiling;
    _payload->area_floor = area_floor;
    _payload->area_count = area_count;
    _payload->area_radius = area_radius;
    _payload->target_system = target_system;
    _payload->target_component = target_component;
    _payload->operator_location_type = operator_location_type;
    _payload->classification_type = classification_type;
    _payload->category_eu = category_eu;
    _payload->class_eu = class_eu;
    memcpy(&(_payload->id_or_mac), id_or_mac, sizeof(uint8_t)*20);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM;

    msg->target_sysid = target_system;
    msg->target_compid = target_component;
    msg->crc_extra = FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_open_drone_id_system_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_open_drone_id_system_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_open_drone_id_system_pack(
        msg, sysid, compid,
        _payload->target_system, _payload->target_component, _payload->id_or_mac, _payload->operator_location_type, _payload->classification_type, _payload->operator_latitude, _payload->operator_longitude, _payload->area_count, _payload->area_radius, _payload->area_ceiling, _payload->area_floor, _payload->category_eu, _payload->class_eu,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_open_drone_id_system_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, const uint8_t* id_or_mac, uint8_t operator_location_type, uint8_t classification_type, int32_t operator_latitude, int32_t operator_longitude, uint16_t area_count, uint16_t area_radius, float area_ceiling, float area_floor, uint8_t category_eu, uint8_t class_eu,
    fmav_status_t* _status)
{
    fmav_open_drone_id_system_t* _payload = (fmav_open_drone_id_system_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->operator_latitude = operator_latitude;
    _payload->operator_longitude = operator_longitude;
    _payload->area_ceiling = area_ceiling;
    _payload->area_floor = area_floor;
    _payload->area_count = area_count;
    _payload->area_radius = area_radius;
    _payload->target_system = target_system;
    _payload->target_component = target_component;
    _payload->operator_location_type = operator_location_type;
    _payload->classification_type = classification_type;
    _payload->category_eu = category_eu;
    _payload->class_eu = class_eu;
    memcpy(&(_payload->id_or_mac), id_or_mac, sizeof(uint8_t)*20);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_open_drone_id_system_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_open_drone_id_system_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_open_drone_id_system_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->target_system, _payload->target_component, _payload->id_or_mac, _payload->operator_location_type, _payload->classification_type, _payload->operator_latitude, _payload->operator_longitude, _payload->area_count, _payload->area_radius, _payload->area_ceiling, _payload->area_floor, _payload->category_eu, _payload->class_eu,
        _status);
}


//----------------------------------------
//-- Message OPEN_DRONE_ID_SYSTEM unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_open_drone_id_system_decode(fmav_open_drone_id_system_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM  12904

#define mavlink_open_drone_id_system_t  fmav_open_drone_id_system_t

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_LEN  46
#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_MIN_LEN  46
#define MAVLINK_MSG_ID_12904_LEN  46
#define MAVLINK_MSG_ID_12904_MIN_LEN  46

#define MAVLINK_MSG_ID_OPEN_DRONE_ID_SYSTEM_CRC  203
#define MAVLINK_MSG_ID_12904_CRC  203

#define MAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_FIELD_ID_OR_MAC_LEN 20


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_open_drone_id_system_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint8_t target_system, uint8_t target_component, const uint8_t* id_or_mac, uint8_t operator_location_type, uint8_t classification_type, int32_t operator_latitude, int32_t operator_longitude, uint16_t area_count, uint16_t area_radius, float area_ceiling, float area_floor, uint8_t category_eu, uint8_t class_eu)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_open_drone_id_system_pack(
        msg, sysid, compid,
        target_system, target_component, id_or_mac, operator_location_type, classification_type, operator_latitude, operator_longitude, area_count, area_radius, area_ceiling, area_floor, category_eu, class_eu,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_open_drone_id_system_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, const uint8_t* id_or_mac, uint8_t operator_location_type, uint8_t classification_type, int32_t operator_latitude, int32_t operator_longitude, uint16_t area_count, uint16_t area_radius, float area_ceiling, float area_floor, uint8_t category_eu, uint8_t class_eu)
{
    return fmav_msg_open_drone_id_system_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        target_system, target_component, id_or_mac, operator_location_type, classification_type, operator_latitude, operator_longitude, area_count, area_radius, area_ceiling, area_floor, category_eu, class_eu,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_open_drone_id_system_decode(const mavlink_message_t* msg, mavlink_open_drone_id_system_t* payload)
{
    fmav_msg_open_drone_id_system_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_OPEN_DRONE_ID_SYSTEM_H