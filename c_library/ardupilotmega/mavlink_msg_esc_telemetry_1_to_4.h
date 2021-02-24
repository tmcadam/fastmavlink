//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_H
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_H


//----------------------------------------
//-- Message ESC_TELEMETRY_1_TO_4
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_esc_telemetry_1_to_4_t {
    uint16_t voltage[4];
    uint16_t current[4];
    uint16_t totalcurrent[4];
    uint16_t rpm[4];
    uint16_t count[4];
    uint8_t temperature[4];
}) fmav_esc_telemetry_1_to_4_t;


#define FASTMAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4  11030


#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MIN  44
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MAX  44
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN  44
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_CRCEXTRA  144

#define FASTMAVLINK_MSG_ID_11030_LEN_MIN  44
#define FASTMAVLINK_MSG_ID_11030_LEN_MAX  44
#define FASTMAVLINK_MSG_ID_11030_LEN  44
#define FASTMAVLINK_MSG_ID_11030_CRCEXTRA  144

#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_VOLTAGE_LEN  4
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_CURRENT_LEN  4
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_TOTALCURRENT_LEN  4
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_RPM_LEN  4
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_COUNT_LEN  4
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_TEMPERATURE_LEN  4

#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FLAGS  0
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message ESC_TELEMETRY_1_TO_4 packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_esc_telemetry_1_to_4_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const uint8_t* temperature, const uint16_t* voltage, const uint16_t* current, const uint16_t* totalcurrent, const uint16_t* rpm, const uint16_t* count,
    fmav_status_t* _status)
{
    fmav_esc_telemetry_1_to_4_t* _payload = (fmav_esc_telemetry_1_to_4_t*)msg->payload;


    memcpy(&(_payload->voltage), voltage, sizeof(uint16_t)*4);
    memcpy(&(_payload->current), current, sizeof(uint16_t)*4);
    memcpy(&(_payload->totalcurrent), totalcurrent, sizeof(uint16_t)*4);
    memcpy(&(_payload->rpm), rpm, sizeof(uint16_t)*4);
    memcpy(&(_payload->count), count, sizeof(uint16_t)*4);
    memcpy(&(_payload->temperature), temperature, sizeof(uint8_t)*4);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_esc_telemetry_1_to_4_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_esc_telemetry_1_to_4_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_esc_telemetry_1_to_4_pack(
        msg, sysid, compid,
        _payload->temperature, _payload->voltage, _payload->current, _payload->totalcurrent, _payload->rpm, _payload->count,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_esc_telemetry_1_to_4_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const uint8_t* temperature, const uint16_t* voltage, const uint16_t* current, const uint16_t* totalcurrent, const uint16_t* rpm, const uint16_t* count,
    fmav_status_t* _status)
{
    fmav_esc_telemetry_1_to_4_t* _payload = (fmav_esc_telemetry_1_to_4_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);


    memcpy(&(_payload->voltage), voltage, sizeof(uint16_t)*4);
    memcpy(&(_payload->current), current, sizeof(uint16_t)*4);
    memcpy(&(_payload->totalcurrent), totalcurrent, sizeof(uint16_t)*4);
    memcpy(&(_payload->rpm), rpm, sizeof(uint16_t)*4);
    memcpy(&(_payload->count), count, sizeof(uint16_t)*4);
    memcpy(&(_payload->temperature), temperature, sizeof(uint8_t)*4);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4 >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4 >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_esc_telemetry_1_to_4_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_esc_telemetry_1_to_4_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_esc_telemetry_1_to_4_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->temperature, _payload->voltage, _payload->current, _payload->totalcurrent, _payload->rpm, _payload->count,
        _status);
}


//----------------------------------------
//-- Message ESC_TELEMETRY_1_TO_4 unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_esc_telemetry_1_to_4_decode(fmav_esc_telemetry_1_to_4_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4  11030

#define mavlink_esc_telemetry_1_to_4_t  fmav_esc_telemetry_1_to_4_t

#define MAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4_LEN  44
#define MAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4_MIN_LEN  44
#define MAVLINK_MSG_ID_11030_LEN  44
#define MAVLINK_MSG_ID_11030_MIN_LEN  44

#define MAVLINK_MSG_ID_ESC_TELEMETRY_1_TO_4_CRC  144
#define MAVLINK_MSG_ID_11030_CRC  144

#define MAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_VOLTAGE_LEN 4
#define MAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_CURRENT_LEN 4
#define MAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_TOTALCURRENT_LEN 4
#define MAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_RPM_LEN 4
#define MAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_COUNT_LEN 4
#define MAVLINK_MSG_ESC_TELEMETRY_1_TO_4_FIELD_TEMPERATURE_LEN 4


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_esc_telemetry_1_to_4_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    const uint8_t* temperature, const uint16_t* voltage, const uint16_t* current, const uint16_t* totalcurrent, const uint16_t* rpm, const uint16_t* count)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_esc_telemetry_1_to_4_pack(
        msg, sysid, compid,
        temperature, voltage, current, totalcurrent, rpm, count,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_esc_telemetry_1_to_4_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    const uint8_t* temperature, const uint16_t* voltage, const uint16_t* current, const uint16_t* totalcurrent, const uint16_t* rpm, const uint16_t* count)
{
    return fmav_msg_esc_telemetry_1_to_4_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        temperature, voltage, current, totalcurrent, rpm, count,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_esc_telemetry_1_to_4_decode(const mavlink_message_t* msg, mavlink_esc_telemetry_1_to_4_t* payload)
{
    fmav_msg_esc_telemetry_1_to_4_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_ESC_TELEMETRY_1_TO_4_H