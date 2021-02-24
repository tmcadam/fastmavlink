//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_GPS_RTCM_DATA_H
#define FASTMAVLINK_MSG_GPS_RTCM_DATA_H


//----------------------------------------
//-- Message GPS_RTCM_DATA
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_gps_rtcm_data_t {
    uint8_t flags;
    uint8_t len;
    uint8_t data[180];
}) fmav_gps_rtcm_data_t;


#define FASTMAVLINK_MSG_ID_GPS_RTCM_DATA  233


#define FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MIN  182
#define FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MAX  182
#define FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN  182
#define FASTMAVLINK_MSG_GPS_RTCM_DATA_CRCEXTRA  35

#define FASTMAVLINK_MSG_ID_233_LEN_MIN  182
#define FASTMAVLINK_MSG_ID_233_LEN_MAX  182
#define FASTMAVLINK_MSG_ID_233_LEN  182
#define FASTMAVLINK_MSG_ID_233_CRCEXTRA  35

#define FASTMAVLINK_MSG_GPS_RTCM_DATA_FIELD_DATA_LEN  180

#define FASTMAVLINK_MSG_GPS_RTCM_DATA_FLAGS  0
#define FASTMAVLINK_MSG_GPS_RTCM_DATA_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_GPS_RTCM_DATA_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message GPS_RTCM_DATA packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_gps_rtcm_data_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint8_t flags, uint8_t len, const uint8_t* data,
    fmav_status_t* _status)
{
    fmav_gps_rtcm_data_t* _payload = (fmav_gps_rtcm_data_t*)msg->payload;

    _payload->flags = flags;
    _payload->len = len;
    memcpy(&(_payload->data), data, sizeof(uint8_t)*180);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_GPS_RTCM_DATA;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_GPS_RTCM_DATA_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_gps_rtcm_data_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_gps_rtcm_data_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_gps_rtcm_data_pack(
        msg, sysid, compid,
        _payload->flags, _payload->len, _payload->data,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_gps_rtcm_data_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint8_t flags, uint8_t len, const uint8_t* data,
    fmav_status_t* _status)
{
    fmav_gps_rtcm_data_t* _payload = (fmav_gps_rtcm_data_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->flags = flags;
    _payload->len = len;
    memcpy(&(_payload->data), data, sizeof(uint8_t)*180);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_GPS_RTCM_DATA;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_GPS_RTCM_DATA >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_GPS_RTCM_DATA >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_GPS_RTCM_DATA_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_gps_rtcm_data_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_gps_rtcm_data_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_gps_rtcm_data_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->flags, _payload->len, _payload->data,
        _status);
}


//----------------------------------------
//-- Message GPS_RTCM_DATA unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_gps_rtcm_data_decode(fmav_gps_rtcm_data_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_GPS_RTCM_DATA_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_GPS_RTCM_DATA  233

#define mavlink_gps_rtcm_data_t  fmav_gps_rtcm_data_t

#define MAVLINK_MSG_ID_GPS_RTCM_DATA_LEN  182
#define MAVLINK_MSG_ID_GPS_RTCM_DATA_MIN_LEN  182
#define MAVLINK_MSG_ID_233_LEN  182
#define MAVLINK_MSG_ID_233_MIN_LEN  182

#define MAVLINK_MSG_ID_GPS_RTCM_DATA_CRC  35
#define MAVLINK_MSG_ID_233_CRC  35

#define MAVLINK_MSG_GPS_RTCM_DATA_FIELD_DATA_LEN 180


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_gps_rtcm_data_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint8_t flags, uint8_t len, const uint8_t* data)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_gps_rtcm_data_pack(
        msg, sysid, compid,
        flags, len, data,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_gps_rtcm_data_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint8_t flags, uint8_t len, const uint8_t* data)
{
    return fmav_msg_gps_rtcm_data_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        flags, len, data,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_gps_rtcm_data_decode(const mavlink_message_t* msg, mavlink_gps_rtcm_data_t* payload)
{
    fmav_msg_gps_rtcm_data_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_GPS_RTCM_DATA_H