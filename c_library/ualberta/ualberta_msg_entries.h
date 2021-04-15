//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_ENTRIES_H
#define FASTMAVLINK_MSG_ENTRIES_H


//------------------------------
//-- The values of msg_entry_t for all messages in the dialect.
//------------------------------
 
#define FASTMAVLINK_MSG_ENTRY_HEARTBEAT  {0, 50, 9, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SYS_STATUS  {1, 124, 31, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SYSTEM_TIME  {2, 137, 12, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PING  {4, 237, 14, 3, 12, 13}
#define FASTMAVLINK_MSG_ENTRY_CHANGE_OPERATOR_CONTROL  {5, 217, 28, 1, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CHANGE_OPERATOR_CONTROL_ACK  {6, 104, 3, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_AUTH_KEY  {7, 119, 32, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LINK_NODE_STATUS  {8, 117, 36, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SET_MODE  {11, 89, 6, 1, 4, 0}
#define FASTMAVLINK_MSG_ENTRY_PARAM_ACK_TRANSACTION  {19, 137, 24, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_PARAM_REQUEST_READ  {20, 214, 20, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_PARAM_REQUEST_LIST  {21, 159, 2, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_PARAM_VALUE  {22, 220, 25, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PARAM_SET  {23, 168, 23, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_GPS_RAW_INT  {24, 24, 52, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GPS_STATUS  {25, 23, 101, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SCALED_IMU  {26, 170, 24, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RAW_IMU  {27, 144, 29, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RAW_PRESSURE  {28, 67, 16, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SCALED_PRESSURE  {29, 115, 16, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ATTITUDE  {30, 39, 28, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ATTITUDE_QUATERNION  {31, 246, 48, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOCAL_POSITION_NED  {32, 185, 28, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GLOBAL_POSITION_INT  {33, 104, 28, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RC_CHANNELS_SCALED  {34, 237, 22, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RC_CHANNELS_RAW  {35, 244, 22, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SERVO_OUTPUT_RAW  {36, 222, 37, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST_PARTIAL_LIST  {37, 212, 7, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_MISSION_WRITE_PARTIAL_LIST  {38, 9, 7, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_MISSION_ITEM  {39, 254, 38, 3, 32, 33}
#define FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST  {40, 230, 5, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_MISSION_SET_CURRENT  {41, 28, 4, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_MISSION_CURRENT  {42, 28, 2, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST_LIST  {43, 132, 3, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_MISSION_COUNT  {44, 221, 5, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_MISSION_CLEAR_ALL  {45, 232, 3, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_MISSION_ITEM_REACHED  {46, 11, 2, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_MISSION_ACK  {47, 153, 4, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_SET_GPS_GLOBAL_ORIGIN  {48, 41, 21, 1, 12, 0}
#define FASTMAVLINK_MSG_ENTRY_GPS_GLOBAL_ORIGIN  {49, 39, 20, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PARAM_MAP_RC  {50, 78, 37, 3, 18, 19}
#define FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST_INT  {51, 196, 5, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_MISSION_CHANGED  {52, 132, 7, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SAFETY_SET_ALLOWED_AREA  {54, 15, 27, 3, 24, 25}
#define FASTMAVLINK_MSG_ENTRY_SAFETY_ALLOWED_AREA  {55, 3, 25, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ATTITUDE_QUATERNION_COV  {61, 167, 72, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_NAV_CONTROLLER_OUTPUT  {62, 183, 26, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GLOBAL_POSITION_INT_COV  {63, 119, 181, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOCAL_POSITION_NED_COV  {64, 191, 225, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RC_CHANNELS  {65, 118, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_REQUEST_DATA_STREAM  {66, 148, 6, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_DATA_STREAM  {67, 21, 4, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_MANUAL_CONTROL  {69, 243, 11, 1, 10, 0}
#define FASTMAVLINK_MSG_ENTRY_RC_CHANNELS_OVERRIDE  {70, 124, 38, 3, 16, 17}
#define FASTMAVLINK_MSG_ENTRY_MISSION_ITEM_INT  {73, 38, 38, 3, 32, 33}
#define FASTMAVLINK_MSG_ENTRY_VFR_HUD  {74, 20, 20, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_COMMAND_INT  {75, 158, 35, 3, 30, 31}
#define FASTMAVLINK_MSG_ENTRY_COMMAND_LONG  {76, 152, 33, 3, 30, 31}
#define FASTMAVLINK_MSG_ENTRY_COMMAND_ACK  {77, 143, 10, 3, 8, 9}
#define FASTMAVLINK_MSG_ENTRY_COMMAND_CANCEL  {80, 14, 4, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_MANUAL_SETPOINT  {81, 106, 22, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SET_ATTITUDE_TARGET  {82, 49, 51, 3, 36, 37}
#define FASTMAVLINK_MSG_ENTRY_ATTITUDE_TARGET  {83, 22, 37, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SET_POSITION_TARGET_LOCAL_NED  {84, 143, 53, 3, 50, 51}
#define FASTMAVLINK_MSG_ENTRY_POSITION_TARGET_LOCAL_NED  {85, 140, 51, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SET_POSITION_TARGET_GLOBAL_INT  {86, 5, 53, 3, 50, 51}
#define FASTMAVLINK_MSG_ENTRY_POSITION_TARGET_GLOBAL_INT  {87, 150, 51, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET  {89, 231, 28, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_STATE  {90, 183, 56, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_CONTROLS  {91, 63, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_RC_INPUTS_RAW  {92, 54, 33, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_ACTUATOR_CONTROLS  {93, 47, 81, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_OPTICAL_FLOW  {100, 175, 34, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GLOBAL_VISION_POSITION_ESTIMATE  {101, 102, 117, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_VISION_POSITION_ESTIMATE  {102, 158, 117, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_VISION_SPEED_ESTIMATE  {103, 208, 57, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_VICON_POSITION_ESTIMATE  {104, 56, 116, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIGHRES_IMU  {105, 93, 63, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_OPTICAL_FLOW_RAD  {106, 138, 44, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_SENSOR  {107, 108, 65, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SIM_STATE  {108, 32, 84, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RADIO_STATUS  {109, 185, 9, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_FILE_TRANSFER_PROTOCOL  {110, 84, 254, 3, 1, 2}
#define FASTMAVLINK_MSG_ENTRY_TIMESYNC  {111, 34, 16, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_TRIGGER  {112, 174, 12, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_GPS  {113, 124, 39, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_OPTICAL_FLOW  {114, 237, 44, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIL_STATE_QUATERNION  {115, 4, 64, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SCALED_IMU2  {116, 76, 24, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOG_REQUEST_LIST  {117, 128, 6, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_LOG_ENTRY  {118, 56, 14, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOG_REQUEST_DATA  {119, 116, 12, 3, 10, 11}
#define FASTMAVLINK_MSG_ENTRY_LOG_DATA  {120, 134, 97, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOG_ERASE  {121, 237, 2, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_LOG_REQUEST_END  {122, 203, 2, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_GPS_INJECT_DATA  {123, 250, 113, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_GPS2_RAW  {124, 87, 37, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_POWER_STATUS  {125, 203, 6, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SERIAL_CONTROL  {126, 220, 79, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GPS_RTK  {127, 25, 35, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GPS2_RTK  {128, 226, 35, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SCALED_IMU3  {129, 46, 24, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_DATA_TRANSMISSION_HANDSHAKE  {130, 29, 13, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ENCAPSULATED_DATA  {131, 223, 255, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_DISTANCE_SENSOR  {132, 85, 39, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TERRAIN_REQUEST  {133, 6, 18, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TERRAIN_DATA  {134, 229, 43, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TERRAIN_CHECK  {135, 203, 8, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TERRAIN_REPORT  {136, 1, 22, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SCALED_PRESSURE2  {137, 195, 16, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ATT_POS_MOCAP  {138, 109, 120, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SET_ACTUATOR_CONTROL_TARGET  {139, 168, 43, 3, 41, 42}
#define FASTMAVLINK_MSG_ENTRY_ACTUATOR_CONTROL_TARGET  {140, 181, 41, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ALTITUDE  {141, 47, 32, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RESOURCE_REQUEST  {142, 72, 243, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SCALED_PRESSURE3  {143, 131, 16, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_FOLLOW_TARGET  {144, 127, 93, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CONTROL_SYSTEM_STATE  {146, 103, 100, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_BATTERY_STATUS  {147, 154, 54, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_AUTOPILOT_VERSION  {148, 178, 78, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LANDING_TARGET  {149, 200, 60, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_FENCE_STATUS  {162, 189, 9, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_MAG_CAL_REPORT  {192, 36, 54, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_NAV_FILTER_BIAS  {220, 34, 32, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RADIO_CALIBRATION  {221, 71, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_UALBERTA_SYS_STATUS  {222, 15, 3, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_EFI_STATUS  {225, 208, 65, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ESTIMATOR_STATUS  {230, 163, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_WIND_COV  {231, 105, 40, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GPS_INPUT  {232, 151, 65, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GPS_RTCM_DATA  {233, 35, 182, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIGH_LATENCY  {234, 150, 40, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HIGH_LATENCY2  {235, 179, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_VIBRATION  {241, 90, 32, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_HOME_POSITION  {242, 104, 60, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SET_HOME_POSITION  {243, 85, 61, 1, 52, 0}
#define FASTMAVLINK_MSG_ENTRY_MESSAGE_INTERVAL  {244, 95, 6, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_EXTENDED_SYS_STATE  {245, 130, 2, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ADSB_VEHICLE  {246, 184, 38, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_COLLISION  {247, 81, 19, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_V2_EXTENSION  {248, 8, 254, 3, 3, 4}
#define FASTMAVLINK_MSG_ENTRY_MEMORY_VECT  {249, 204, 36, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_DEBUG_VECT  {250, 49, 30, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_NAMED_VALUE_FLOAT  {251, 170, 18, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_NAMED_VALUE_INT  {252, 44, 18, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_STATUSTEXT  {253, 83, 54, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_DEBUG  {254, 46, 9, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SETUP_SIGNING  {256, 71, 42, 3, 8, 9}
#define FASTMAVLINK_MSG_ENTRY_BUTTON_CHANGE  {257, 131, 9, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PLAY_TUNE  {258, 187, 232, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_INFORMATION  {259, 92, 235, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_SETTINGS  {260, 146, 13, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_STORAGE_INFORMATION  {261, 179, 60, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_CAPTURE_STATUS  {262, 12, 22, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_IMAGE_CAPTURED  {263, 133, 255, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_FLIGHT_INFORMATION  {264, 49, 28, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_MOUNT_ORIENTATION  {265, 26, 20, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_LOGGING_DATA  {266, 193, 255, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_LOGGING_DATA_ACKED  {267, 35, 255, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_LOGGING_ACK  {268, 14, 4, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_VIDEO_STREAM_INFORMATION  {269, 109, 213, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_VIDEO_STREAM_STATUS  {270, 59, 19, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_FOV_STATUS  {271, 22, 52, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_TRACKING_IMAGE_STATUS  {275, 126, 31, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CAMERA_TRACKING_GEO_STATUS  {276, 18, 49, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_INFORMATION  {280, 70, 33, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_STATUS  {281, 48, 13, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_SET_ATTITUDE  {282, 123, 35, 3, 32, 33}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_DEVICE_INFORMATION  {283, 74, 144, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_DEVICE_SET_ATTITUDE  {284, 99, 32, 3, 30, 31}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_DEVICE_ATTITUDE_STATUS  {285, 137, 40, 3, 38, 39}
#define FASTMAVLINK_MSG_ENTRY_AUTOPILOT_STATE_FOR_GIMBAL_DEVICE  {286, 210, 53, 3, 50, 51}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_SET_PITCHYAW  {287, 1, 23, 3, 20, 21}
#define FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_SET_MANUAL_CONTROL  {288, 20, 23, 3, 20, 21}
#define FASTMAVLINK_MSG_ENTRY_ESC_INFO  {290, 221, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ESC_STATUS  {291, 10, 57, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_WIFI_CONFIG_AP  {299, 19, 98, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PROTOCOL_VERSION  {300, 217, 22, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_AIS_VESSEL  {301, 243, 58, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_UAVCAN_NODE_STATUS  {310, 28, 17, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_UAVCAN_NODE_INFO  {311, 95, 116, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PARAM_EXT_REQUEST_READ  {320, 243, 20, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_PARAM_EXT_REQUEST_LIST  {321, 88, 2, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_PARAM_EXT_VALUE  {322, 243, 149, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PARAM_EXT_SET  {323, 78, 147, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_PARAM_EXT_ACK  {324, 132, 146, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_OBSTACLE_DISTANCE  {330, 23, 167, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ODOMETRY  {331, 91, 232, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TRAJECTORY_REPRESENTATION_WAYPOINTS  {332, 236, 239, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TRAJECTORY_REPRESENTATION_BEZIER  {333, 231, 109, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CELLULAR_STATUS  {334, 72, 10, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ISBD_LINK_STATUS  {335, 225, 24, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_CELLULAR_CONFIG  {336, 245, 84, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_RAW_RPM  {339, 199, 5, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_UTM_GLOBAL_POSITION  {340, 99, 70, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_DEBUG_FLOAT_ARRAY  {350, 232, 252, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ORBIT_EXECUTION_STATUS  {360, 11, 25, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_SMART_BATTERY_INFO  {370, 75, 87, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_GENERATOR_STATUS  {373, 117, 42, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_ACTUATOR_OUTPUT_STATUS  {375, 251, 140, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TIME_ESTIMATE_TO_TARGET  {380, 232, 20, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_TUNNEL  {385, 147, 133, 3, 2, 3}
#define FASTMAVLINK_MSG_ENTRY_ONBOARD_COMPUTER_STATUS  {390, 156, 238, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_COMPONENT_INFORMATION  {395, 0, 212, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_PLAY_TUNE_V2  {400, 110, 254, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_SUPPORTED_TUNES  {401, 183, 6, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_WHEEL_DISTANCE  {9000, 113, 137, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_WINCH_STATUS  {9005, 117, 34, 0, 0, 0}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_BASIC_ID  {12900, 114, 44, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_LOCATION  {12901, 254, 59, 3, 30, 31}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_AUTHENTICATION  {12902, 49, 53, 3, 4, 5}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_SELF_ID  {12903, 249, 46, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_SYSTEM  {12904, 203, 46, 3, 20, 21}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_OPERATOR_ID  {12905, 49, 43, 3, 0, 1}
#define FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_MESSAGE_PACK  {12915, 62, 254, 3, 0, 1}


/*------------------------------
 * If only relatively few MAVLink messages are used, efficiency can
 * be much improved, both memory and computational time wise, by
 * commenting out below all those message entries which are not used,
 * and to write in the user's code:
 *
 * #define FASTMAVLINK_MESSAGE_CRCS  FASTMAVLINK_MESSAGE_ENTRIES 
 *
 * Alternatively, the above defines can be used to define one's own
 * FASTMAVLINK_MESSAGE_CRCS. It is then MOST important to keep the sequence
 * in order since otherwise the default binary search will fail. E.g.:
 * 
 * #include "pathtofastmavlink/thedialect/fmav_msg_entries.h"
 * #define FASTMAVLINK_MESSAGE_CRCS {\
 *     FASTMAVLINK_MSG_ENTRY_PARAM_REQUEST_READ,\
 *     FASTMAVLINK_MSG_ENTRY_PARAM_REQUEST_LIST,\
 *     FASTMAVLINK_MSG_ENTRY_PARAM_SET,\
 *     FASTMAVLINK_MSG_ENTRY_COMMAND_LONG,\
 *     FASTMAVLINK_MSG_ENTRY_AUTOPILOT_VERSION_REQUEST }
 ------------------------------*/
 
#define FASTMAVLINK_MSG_ENTRIES {\
  FASTMAVLINK_MSG_ENTRY_HEARTBEAT,\
  FASTMAVLINK_MSG_ENTRY_SYS_STATUS,\
  FASTMAVLINK_MSG_ENTRY_SYSTEM_TIME,\
  FASTMAVLINK_MSG_ENTRY_PING,\
  FASTMAVLINK_MSG_ENTRY_CHANGE_OPERATOR_CONTROL,\
  FASTMAVLINK_MSG_ENTRY_CHANGE_OPERATOR_CONTROL_ACK,\
  FASTMAVLINK_MSG_ENTRY_AUTH_KEY,\
  FASTMAVLINK_MSG_ENTRY_LINK_NODE_STATUS,\
  FASTMAVLINK_MSG_ENTRY_SET_MODE,\
  FASTMAVLINK_MSG_ENTRY_PARAM_ACK_TRANSACTION,\
  FASTMAVLINK_MSG_ENTRY_PARAM_REQUEST_READ,\
  FASTMAVLINK_MSG_ENTRY_PARAM_REQUEST_LIST,\
  FASTMAVLINK_MSG_ENTRY_PARAM_VALUE,\
  FASTMAVLINK_MSG_ENTRY_PARAM_SET,\
  FASTMAVLINK_MSG_ENTRY_GPS_RAW_INT,\
  FASTMAVLINK_MSG_ENTRY_GPS_STATUS,\
  FASTMAVLINK_MSG_ENTRY_SCALED_IMU,\
  FASTMAVLINK_MSG_ENTRY_RAW_IMU,\
  FASTMAVLINK_MSG_ENTRY_RAW_PRESSURE,\
  FASTMAVLINK_MSG_ENTRY_SCALED_PRESSURE,\
  FASTMAVLINK_MSG_ENTRY_ATTITUDE,\
  FASTMAVLINK_MSG_ENTRY_ATTITUDE_QUATERNION,\
  FASTMAVLINK_MSG_ENTRY_LOCAL_POSITION_NED,\
  FASTMAVLINK_MSG_ENTRY_GLOBAL_POSITION_INT,\
  FASTMAVLINK_MSG_ENTRY_RC_CHANNELS_SCALED,\
  FASTMAVLINK_MSG_ENTRY_RC_CHANNELS_RAW,\
  FASTMAVLINK_MSG_ENTRY_SERVO_OUTPUT_RAW,\
  FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST_PARTIAL_LIST,\
  FASTMAVLINK_MSG_ENTRY_MISSION_WRITE_PARTIAL_LIST,\
  FASTMAVLINK_MSG_ENTRY_MISSION_ITEM,\
  FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST,\
  FASTMAVLINK_MSG_ENTRY_MISSION_SET_CURRENT,\
  FASTMAVLINK_MSG_ENTRY_MISSION_CURRENT,\
  FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST_LIST,\
  FASTMAVLINK_MSG_ENTRY_MISSION_COUNT,\
  FASTMAVLINK_MSG_ENTRY_MISSION_CLEAR_ALL,\
  FASTMAVLINK_MSG_ENTRY_MISSION_ITEM_REACHED,\
  FASTMAVLINK_MSG_ENTRY_MISSION_ACK,\
  FASTMAVLINK_MSG_ENTRY_SET_GPS_GLOBAL_ORIGIN,\
  FASTMAVLINK_MSG_ENTRY_GPS_GLOBAL_ORIGIN,\
  FASTMAVLINK_MSG_ENTRY_PARAM_MAP_RC,\
  FASTMAVLINK_MSG_ENTRY_MISSION_REQUEST_INT,\
  FASTMAVLINK_MSG_ENTRY_MISSION_CHANGED,\
  FASTMAVLINK_MSG_ENTRY_SAFETY_SET_ALLOWED_AREA,\
  FASTMAVLINK_MSG_ENTRY_SAFETY_ALLOWED_AREA,\
  FASTMAVLINK_MSG_ENTRY_ATTITUDE_QUATERNION_COV,\
  FASTMAVLINK_MSG_ENTRY_NAV_CONTROLLER_OUTPUT,\
  FASTMAVLINK_MSG_ENTRY_GLOBAL_POSITION_INT_COV,\
  FASTMAVLINK_MSG_ENTRY_LOCAL_POSITION_NED_COV,\
  FASTMAVLINK_MSG_ENTRY_RC_CHANNELS,\
  FASTMAVLINK_MSG_ENTRY_REQUEST_DATA_STREAM,\
  FASTMAVLINK_MSG_ENTRY_DATA_STREAM,\
  FASTMAVLINK_MSG_ENTRY_MANUAL_CONTROL,\
  FASTMAVLINK_MSG_ENTRY_RC_CHANNELS_OVERRIDE,\
  FASTMAVLINK_MSG_ENTRY_MISSION_ITEM_INT,\
  FASTMAVLINK_MSG_ENTRY_VFR_HUD,\
  FASTMAVLINK_MSG_ENTRY_COMMAND_INT,\
  FASTMAVLINK_MSG_ENTRY_COMMAND_LONG,\
  FASTMAVLINK_MSG_ENTRY_COMMAND_ACK,\
  FASTMAVLINK_MSG_ENTRY_COMMAND_CANCEL,\
  FASTMAVLINK_MSG_ENTRY_MANUAL_SETPOINT,\
  FASTMAVLINK_MSG_ENTRY_SET_ATTITUDE_TARGET,\
  FASTMAVLINK_MSG_ENTRY_ATTITUDE_TARGET,\
  FASTMAVLINK_MSG_ENTRY_SET_POSITION_TARGET_LOCAL_NED,\
  FASTMAVLINK_MSG_ENTRY_POSITION_TARGET_LOCAL_NED,\
  FASTMAVLINK_MSG_ENTRY_SET_POSITION_TARGET_GLOBAL_INT,\
  FASTMAVLINK_MSG_ENTRY_POSITION_TARGET_GLOBAL_INT,\
  FASTMAVLINK_MSG_ENTRY_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET,\
  FASTMAVLINK_MSG_ENTRY_HIL_STATE,\
  FASTMAVLINK_MSG_ENTRY_HIL_CONTROLS,\
  FASTMAVLINK_MSG_ENTRY_HIL_RC_INPUTS_RAW,\
  FASTMAVLINK_MSG_ENTRY_HIL_ACTUATOR_CONTROLS,\
  FASTMAVLINK_MSG_ENTRY_OPTICAL_FLOW,\
  FASTMAVLINK_MSG_ENTRY_GLOBAL_VISION_POSITION_ESTIMATE,\
  FASTMAVLINK_MSG_ENTRY_VISION_POSITION_ESTIMATE,\
  FASTMAVLINK_MSG_ENTRY_VISION_SPEED_ESTIMATE,\
  FASTMAVLINK_MSG_ENTRY_VICON_POSITION_ESTIMATE,\
  FASTMAVLINK_MSG_ENTRY_HIGHRES_IMU,\
  FASTMAVLINK_MSG_ENTRY_OPTICAL_FLOW_RAD,\
  FASTMAVLINK_MSG_ENTRY_HIL_SENSOR,\
  FASTMAVLINK_MSG_ENTRY_SIM_STATE,\
  FASTMAVLINK_MSG_ENTRY_RADIO_STATUS,\
  FASTMAVLINK_MSG_ENTRY_FILE_TRANSFER_PROTOCOL,\
  FASTMAVLINK_MSG_ENTRY_TIMESYNC,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_TRIGGER,\
  FASTMAVLINK_MSG_ENTRY_HIL_GPS,\
  FASTMAVLINK_MSG_ENTRY_HIL_OPTICAL_FLOW,\
  FASTMAVLINK_MSG_ENTRY_HIL_STATE_QUATERNION,\
  FASTMAVLINK_MSG_ENTRY_SCALED_IMU2,\
  FASTMAVLINK_MSG_ENTRY_LOG_REQUEST_LIST,\
  FASTMAVLINK_MSG_ENTRY_LOG_ENTRY,\
  FASTMAVLINK_MSG_ENTRY_LOG_REQUEST_DATA,\
  FASTMAVLINK_MSG_ENTRY_LOG_DATA,\
  FASTMAVLINK_MSG_ENTRY_LOG_ERASE,\
  FASTMAVLINK_MSG_ENTRY_LOG_REQUEST_END,\
  FASTMAVLINK_MSG_ENTRY_GPS_INJECT_DATA,\
  FASTMAVLINK_MSG_ENTRY_GPS2_RAW,\
  FASTMAVLINK_MSG_ENTRY_POWER_STATUS,\
  FASTMAVLINK_MSG_ENTRY_SERIAL_CONTROL,\
  FASTMAVLINK_MSG_ENTRY_GPS_RTK,\
  FASTMAVLINK_MSG_ENTRY_GPS2_RTK,\
  FASTMAVLINK_MSG_ENTRY_SCALED_IMU3,\
  FASTMAVLINK_MSG_ENTRY_DATA_TRANSMISSION_HANDSHAKE,\
  FASTMAVLINK_MSG_ENTRY_ENCAPSULATED_DATA,\
  FASTMAVLINK_MSG_ENTRY_DISTANCE_SENSOR,\
  FASTMAVLINK_MSG_ENTRY_TERRAIN_REQUEST,\
  FASTMAVLINK_MSG_ENTRY_TERRAIN_DATA,\
  FASTMAVLINK_MSG_ENTRY_TERRAIN_CHECK,\
  FASTMAVLINK_MSG_ENTRY_TERRAIN_REPORT,\
  FASTMAVLINK_MSG_ENTRY_SCALED_PRESSURE2,\
  FASTMAVLINK_MSG_ENTRY_ATT_POS_MOCAP,\
  FASTMAVLINK_MSG_ENTRY_SET_ACTUATOR_CONTROL_TARGET,\
  FASTMAVLINK_MSG_ENTRY_ACTUATOR_CONTROL_TARGET,\
  FASTMAVLINK_MSG_ENTRY_ALTITUDE,\
  FASTMAVLINK_MSG_ENTRY_RESOURCE_REQUEST,\
  FASTMAVLINK_MSG_ENTRY_SCALED_PRESSURE3,\
  FASTMAVLINK_MSG_ENTRY_FOLLOW_TARGET,\
  FASTMAVLINK_MSG_ENTRY_CONTROL_SYSTEM_STATE,\
  FASTMAVLINK_MSG_ENTRY_BATTERY_STATUS,\
  FASTMAVLINK_MSG_ENTRY_AUTOPILOT_VERSION,\
  FASTMAVLINK_MSG_ENTRY_LANDING_TARGET,\
  FASTMAVLINK_MSG_ENTRY_FENCE_STATUS,\
  FASTMAVLINK_MSG_ENTRY_MAG_CAL_REPORT,\
  FASTMAVLINK_MSG_ENTRY_NAV_FILTER_BIAS,\
  FASTMAVLINK_MSG_ENTRY_RADIO_CALIBRATION,\
  FASTMAVLINK_MSG_ENTRY_UALBERTA_SYS_STATUS,\
  FASTMAVLINK_MSG_ENTRY_EFI_STATUS,\
  FASTMAVLINK_MSG_ENTRY_ESTIMATOR_STATUS,\
  FASTMAVLINK_MSG_ENTRY_WIND_COV,\
  FASTMAVLINK_MSG_ENTRY_GPS_INPUT,\
  FASTMAVLINK_MSG_ENTRY_GPS_RTCM_DATA,\
  FASTMAVLINK_MSG_ENTRY_HIGH_LATENCY,\
  FASTMAVLINK_MSG_ENTRY_HIGH_LATENCY2,\
  FASTMAVLINK_MSG_ENTRY_VIBRATION,\
  FASTMAVLINK_MSG_ENTRY_HOME_POSITION,\
  FASTMAVLINK_MSG_ENTRY_SET_HOME_POSITION,\
  FASTMAVLINK_MSG_ENTRY_MESSAGE_INTERVAL,\
  FASTMAVLINK_MSG_ENTRY_EXTENDED_SYS_STATE,\
  FASTMAVLINK_MSG_ENTRY_ADSB_VEHICLE,\
  FASTMAVLINK_MSG_ENTRY_COLLISION,\
  FASTMAVLINK_MSG_ENTRY_V2_EXTENSION,\
  FASTMAVLINK_MSG_ENTRY_MEMORY_VECT,\
  FASTMAVLINK_MSG_ENTRY_DEBUG_VECT,\
  FASTMAVLINK_MSG_ENTRY_NAMED_VALUE_FLOAT,\
  FASTMAVLINK_MSG_ENTRY_NAMED_VALUE_INT,\
  FASTMAVLINK_MSG_ENTRY_STATUSTEXT,\
  FASTMAVLINK_MSG_ENTRY_DEBUG,\
  FASTMAVLINK_MSG_ENTRY_SETUP_SIGNING,\
  FASTMAVLINK_MSG_ENTRY_BUTTON_CHANGE,\
  FASTMAVLINK_MSG_ENTRY_PLAY_TUNE,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_SETTINGS,\
  FASTMAVLINK_MSG_ENTRY_STORAGE_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_CAPTURE_STATUS,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_IMAGE_CAPTURED,\
  FASTMAVLINK_MSG_ENTRY_FLIGHT_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_MOUNT_ORIENTATION,\
  FASTMAVLINK_MSG_ENTRY_LOGGING_DATA,\
  FASTMAVLINK_MSG_ENTRY_LOGGING_DATA_ACKED,\
  FASTMAVLINK_MSG_ENTRY_LOGGING_ACK,\
  FASTMAVLINK_MSG_ENTRY_VIDEO_STREAM_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_VIDEO_STREAM_STATUS,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_FOV_STATUS,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_TRACKING_IMAGE_STATUS,\
  FASTMAVLINK_MSG_ENTRY_CAMERA_TRACKING_GEO_STATUS,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_STATUS,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_SET_ATTITUDE,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_DEVICE_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_DEVICE_SET_ATTITUDE,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_DEVICE_ATTITUDE_STATUS,\
  FASTMAVLINK_MSG_ENTRY_AUTOPILOT_STATE_FOR_GIMBAL_DEVICE,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_SET_PITCHYAW,\
  FASTMAVLINK_MSG_ENTRY_GIMBAL_MANAGER_SET_MANUAL_CONTROL,\
  FASTMAVLINK_MSG_ENTRY_ESC_INFO,\
  FASTMAVLINK_MSG_ENTRY_ESC_STATUS,\
  FASTMAVLINK_MSG_ENTRY_WIFI_CONFIG_AP,\
  FASTMAVLINK_MSG_ENTRY_PROTOCOL_VERSION,\
  FASTMAVLINK_MSG_ENTRY_AIS_VESSEL,\
  FASTMAVLINK_MSG_ENTRY_UAVCAN_NODE_STATUS,\
  FASTMAVLINK_MSG_ENTRY_UAVCAN_NODE_INFO,\
  FASTMAVLINK_MSG_ENTRY_PARAM_EXT_REQUEST_READ,\
  FASTMAVLINK_MSG_ENTRY_PARAM_EXT_REQUEST_LIST,\
  FASTMAVLINK_MSG_ENTRY_PARAM_EXT_VALUE,\
  FASTMAVLINK_MSG_ENTRY_PARAM_EXT_SET,\
  FASTMAVLINK_MSG_ENTRY_PARAM_EXT_ACK,\
  FASTMAVLINK_MSG_ENTRY_OBSTACLE_DISTANCE,\
  FASTMAVLINK_MSG_ENTRY_ODOMETRY,\
  FASTMAVLINK_MSG_ENTRY_TRAJECTORY_REPRESENTATION_WAYPOINTS,\
  FASTMAVLINK_MSG_ENTRY_TRAJECTORY_REPRESENTATION_BEZIER,\
  FASTMAVLINK_MSG_ENTRY_CELLULAR_STATUS,\
  FASTMAVLINK_MSG_ENTRY_ISBD_LINK_STATUS,\
  FASTMAVLINK_MSG_ENTRY_CELLULAR_CONFIG,\
  FASTMAVLINK_MSG_ENTRY_RAW_RPM,\
  FASTMAVLINK_MSG_ENTRY_UTM_GLOBAL_POSITION,\
  FASTMAVLINK_MSG_ENTRY_DEBUG_FLOAT_ARRAY,\
  FASTMAVLINK_MSG_ENTRY_ORBIT_EXECUTION_STATUS,\
  FASTMAVLINK_MSG_ENTRY_SMART_BATTERY_INFO,\
  FASTMAVLINK_MSG_ENTRY_GENERATOR_STATUS,\
  FASTMAVLINK_MSG_ENTRY_ACTUATOR_OUTPUT_STATUS,\
  FASTMAVLINK_MSG_ENTRY_TIME_ESTIMATE_TO_TARGET,\
  FASTMAVLINK_MSG_ENTRY_TUNNEL,\
  FASTMAVLINK_MSG_ENTRY_ONBOARD_COMPUTER_STATUS,\
  FASTMAVLINK_MSG_ENTRY_COMPONENT_INFORMATION,\
  FASTMAVLINK_MSG_ENTRY_PLAY_TUNE_V2,\
  FASTMAVLINK_MSG_ENTRY_SUPPORTED_TUNES,\
  FASTMAVLINK_MSG_ENTRY_WHEEL_DISTANCE,\
  FASTMAVLINK_MSG_ENTRY_WINCH_STATUS,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_BASIC_ID,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_LOCATION,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_AUTHENTICATION,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_SELF_ID,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_SYSTEM,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_OPERATOR_ID,\
  FASTMAVLINK_MSG_ENTRY_OPEN_DRONE_ID_MESSAGE_PACK\
}


#endif // FASTMAVLINK_MSG_ENTRIES_H
