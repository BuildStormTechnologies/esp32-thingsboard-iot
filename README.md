# ESP32 ThingsBoard IoT
The Buildstorm platform simplifies the integration of IoT core features onto ESP32 Hardware, from basic IoT functionalities to advanced features like OTA updates and provisioning.

Every user action, spanning HTTP requests, MQTT publishing, Telemetry/Attribute updates, and OTA, is recorded as an event and smoothly handled in the background, ensuring that all APIs operate without blocking. To ensure this seamless operation, the platform runs a system task.

This establishes a robust foundation for your upcoming IoT project.

Supported features:

1. Device provisioning
2. Telemetry update
3. Shared/Client Attributes
4. Web OTA
5. Local websever OTA
6. BLE Device Provisioning

## Solution

1. [ThingsBoard IoT Platform](https://buildstorm.com/solutions/esp32-thingsboard-iot-platform/)

## Reference

1. [Device Provisioning Setup](https://buildstorm.com/blog/thingsboard-iot-device-provisioning-setup/)
2. [OTA Updates](https://buildstorm.com/blog/thingsboard-ota-updates/)
3. [Mobile App: User Manual](https://buildstorm.com/blog/thingsboard-mobile-app-user-manual/)


---
## Example Setup
1. Generate the Provision Device Key/Secret following the article [Device Provisioning Setup](https://buildstorm.com/blog/thingsboard-iot-device-provisioning-setup/).
2. Update the following WiFi and ThingsBoard parameters in `app_config.h` of the example.
3. Use the respective sdkconfig and partition.csv files for esp32/esp32s3.
4. This configuration will be same accross all examples.

```
#define TEST_WIFI_SSID     "YOUR WIFI SSID"
#define TEST_WIFI_PASSWORD "YOUR WIFI PWD"

#define PROVISION_DEVICE_KEY    "your provision device key"
#define PROVISION_DEVICE_SECRET "your provision device secret"
```

---
## SoC Compatibility

The platform has been successfully tested on ESP32 and ESP32S3. In the upcoming days, it will be extended to  all versions of the ESP32 chips.

| Name            | BLE           | OTA           |Ethernet W5500 |
|-----------------|---------------|---------------|---------------|
| ESP32           | Supported     | Supported     | Supported     |
| ESP32 S3        | Supported     | Supported     | Supported     |



You can also explore the Arduino version of our [Arduino ThingsBoard IoT Platform](https://github.com/BuildStormTechnologies/arduino-esp32-thingsboard-iot).
---



