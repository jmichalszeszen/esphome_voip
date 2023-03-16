#include "esphome/core/log.h"
#include "voip.h"

namespace esphome {
namespace voip {

static const char *TAG = "voip.voip_sensor";

void VoipSensor::setup() {
    
}
  
void VoipSensor::update() {

}

void VoipSensor::dump_config() {
    ESP_LOGCONFIG(TAG, "voip sensor");
}

} //namespace voip_sensor
} //namespace esphome
