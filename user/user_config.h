#ifndef _USER_CONFIG_
#define _USER_CONFIG_

typedef enum {SIG_DO_NOTHING=0, SIG_START_SERVER=1, SIG_SEND_DATA, SIG_UART0, SIG_CONSOLE_RX, SIG_CONSOLE_TX, SIG_PACKET, SIG_GPIO_INT } USER_SIGNALS;

#define WIFI_SSID            "ssid"
#define WIFI_PASSWORD        "password"

#define WIFI_AP_SSID         "MyAP"
#define WIFI_AP_PASSWORD     "none"

#define MAX_CLIENTS	     8
#define MAX_DHCP	     8

//
// Size of the console buffers
//
#define MAX_CON_SEND_SIZE    1024
#define MAX_CON_CMD_SIZE     80

//
// Define this if you have a status LED connected to a GPIO pin
//
#define STATUS_LED_GIPO	2

//
// Define this to support the "scan" command for AP search
//
#define ALLOW_SCANNING      1

//
// Define this to support the "sleep" command for power management and deep sleep
// Requires a connection of GPIO16 and RST (probably not availabe on ESP01 modules)
//
#define ALLOW_SLEEP         1

//
// Define this if you want to have access to the config console via TCP.
// Ohterwise only local access via serial is possible
//
#define REMOTE_CONFIG      1
#define CONSOLE_SERVER_PORT  7777

//
// Define this if you want to offer monitoring access to all transmitted data between the soft AP and all STAs.
// Packets are mirrored in pcap format to the given port.
// CAUTION: this might be a privacy issue!!!
//
#define REMOTE_MONITORING  1

#define MONITOR_BUFFER_SIZE 0x3c00

// Define this if you want to cut packets short in case of too high data rate
#define MONITOR_BUFFER_TIGHT 0x1000

// Define this if you want to silently drop any packet that cannot be send to the monitor
//#define DROP_PACKET_IF_NOT_RECORDED 1

//
// Here the MQTT stuff
//
// Define this if you want to have it work as a MQTT client
#define MQTT_CLIENT 	1	

#define MQTT_BUF_SIZE   1024
#define MQTT_KEEPALIVE    120  /*seconds*/
#define MQTT_RECONNECT_TIMEOUT  5 /*seconds*/
#define PROTOCOL_NAMEv31  /*MQTT version 3.1 compatible with Mosquitto v0.15*/
//#define PROTOCOL_NAMEv311     /*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/

#define MQTT_PREFIX "/WiFi"
#define MQTT_ID "ESPRouter"
#define MQTT_REPORT_INTERVAL 15 /*seconds*/

// Define this if you want to get messages about GPIO pin status changes
//#define USER_GPIO_IN   0

// Define this if you want to set an output signal
//#define USER_GPIO_OUT  12

#endif
