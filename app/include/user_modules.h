#ifndef __USER_MODULES_H__
#define __USER_MODULES_H__

#define LUA_USE_BUILTIN_STRING		// for string.xxx()
#define LUA_USE_BUILTIN_TABLE		// for table.xxx()
#define LUA_USE_BUILTIN_COROUTINE	// for coroutine.xxx()
#define LUA_USE_BUILTIN_MATH		// for math.xxx(), partially work
// #define LUA_USE_BUILTIN_IO 			// for io.xxx(), partially work

// #define LUA_USE_BUILTIN_OS			// for os.xxx(), not work
// #define LUA_USE_BUILTIN_DEBUG
#define LUA_USE_BUILTIN_DEBUG_MINIMAL // for debug.getregistry() and debug.traceback()

#ifndef LUA_CROSS_COMPILER

// The default configuration is designed to run on all ESP modules including the 512 KB modules like ESP-01 and only
// includes general purpose interface modules which require at most two GPIO pins.
// See https://github.com/nodemcu/nodemcu-firmware/pull/1127 for discussions.
// New modules should be disabled by default and added in alphabetical order.
//#define LUA_USE_MODULES_ADC
//#define LUA_USE_MODULES_ADXL345

// Humidity and temperature sensor (I2C)
#define LUA_USE_MODULES_AM2320

//#define LUA_USE_MODULES_APA102

// Bit manipulation and operations
#define LUA_USE_MODULES_BIT

//#define LUA_USE_MODULES_BMP085
//#define LUA_USE_MODULES_BME280
//#define LUA_USE_MODULES_CJSON
//#define LUA_USE_MODULES_COAP
//#define LUA_USE_MODULES_CRON
//#define LUA_USE_MODULES_CRYPTO

// Humidity and temperature sensors
#define LUA_USE_MODULES_DHT

//#define LUA_USE_MODULES_ENCODER
//#define LUA_USE_MODULES_ENDUSER_SETUP // USE_DNS in dhcpserver.h needs to be enabled for this module to work.
#define LUA_USE_MODULES_FILE
//#define LUA_USE_MODULES_GDBSTUB
#define LUA_USE_MODULES_GPIO
//#define LUA_USE_MODULES_HMC5883L
//#define LUA_USE_MODULES_HTTP
//#define LUA_USE_MODULES_HX711
#define LUA_USE_MODULES_I2C
//#define LUA_USE_MODULES_L3G4200D
//#define LUA_USE_MODULES_MDNS

// MQTT Client
#define LUA_USE_MODULES_MQTT

// Webserver
#define LUA_USE_MODULES_NET

#define LUA_USE_MODULES_NODE
//#define LUA_USE_MODULES_OW
//#define LUA_USE_MODULES_PCM
//#define LUA_USE_MODULES_PERF
//#define LUA_USE_MODULES_PWM
//#define LUA_USE_MODULES_RC
//#define LUA_USE_MODULES_RFSWITCH
//#define LUA_USE_MODULES_ROTARY
//#define LUA_USE_MODULES_RTCFIFO
//#define LUA_USE_MODULES_RTCMEM

// Timekeeping support
#define LUA_USE_MODULES_RTCTIME

//#define LUA_USE_MODULES_SIGMA_DELTA

// NTP Client
#define LUA_USE_MODULES_SNTP

//#define LUA_USE_MODULES_SOMFY
//#define LUA_USE_MODULES_SPI
//#define LUA_USE_MODULES_STRUCT
//#define LUA_USE_MODULES_SWITEC
//#define LUA_USE_MODULES_TM1829
#define LUA_USE_MODULES_TLS

// Timer management
#define LUA_USE_MODULES_TMR

//#define LUA_USE_MODULES_TSL2561
//#define LUA_USE_MODULES_U8G
#define LUA_USE_MODULES_UART
//#define LUA_USE_MODULES_UCG
//#define LUA_USE_MODULES_WEBSOCKET

// Create or connect to an AP
#define LUA_USE_MODULES_WIFI

//#define LUA_USE_MODULES_WPS
//#define LUA_USE_MODULES_WS2801
//#define LUA_USE_MODULES_WS2812

#endif  /* LUA_CROSS_COMPILER */
#endif	/* __USER_MODULES_H__ */
