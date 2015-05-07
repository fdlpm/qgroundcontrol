/** @file
 *	@brief MAVLink comm protocol testsuite generated from firebird.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef FIREBIRD_TESTSUITE_H
#define FIREBIRD_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_firebird(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_firebird(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_camera_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_camera_control_t packet_in = {
		{ 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
    };
	mavlink_camera_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        	mav_array_memcpy(packet1.visca_packet, packet_in.visca_packet, sizeof(uint8_t)*16);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_camera_control_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_camera_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_camera_control_pack(system_id, component_id, &msg , packet1.visca_packet );
	mavlink_msg_camera_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_camera_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.visca_packet );
	mavlink_msg_camera_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_camera_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_camera_control_send(MAVLINK_COMM_1 , packet1.visca_packet );
	mavlink_msg_camera_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_esb_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_esb_data_t packet_in = {
		17235,17339,17443,17547,17651,17755
    };
	mavlink_esb_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.Ambient_Temperature_Celcius = packet_in.Ambient_Temperature_Celcius;
        	packet1.Object_Temperature_Celcius = packet_in.Object_Temperature_Celcius;
        	packet1.Carbon_Dioxide = packet_in.Carbon_Dioxide;
        	packet1.Carbon_Monoxide = packet_in.Carbon_Monoxide;
        	packet1.Liquid_Petroleum_Gas = packet_in.Liquid_Petroleum_Gas;
        	packet1.Hydrogen_Sulfide = packet_in.Hydrogen_Sulfide;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_esb_data_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_esb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_esb_data_pack(system_id, component_id, &msg , packet1.Ambient_Temperature_Celcius , packet1.Object_Temperature_Celcius , packet1.Carbon_Dioxide , packet1.Carbon_Monoxide , packet1.Liquid_Petroleum_Gas , packet1.Hydrogen_Sulfide );
	mavlink_msg_esb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_esb_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.Ambient_Temperature_Celcius , packet1.Object_Temperature_Celcius , packet1.Carbon_Dioxide , packet1.Carbon_Monoxide , packet1.Liquid_Petroleum_Gas , packet1.Hydrogen_Sulfide );
	mavlink_msg_esb_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_esb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_esb_data_send(MAVLINK_COMM_1 , packet1.Ambient_Temperature_Celcius , packet1.Object_Temperature_Celcius , packet1.Carbon_Dioxide , packet1.Carbon_Monoxide , packet1.Liquid_Petroleum_Gas , packet1.Hydrogen_Sulfide );
	mavlink_msg_esb_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_firebird(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_camera_control(system_id, component_id, last_msg);
	mavlink_test_esb_data(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // FIREBIRD_TESTSUITE_H
