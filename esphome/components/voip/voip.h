#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace voip_sensor {

class VoipSensor : public voip_sensor::VoipSensor, public PollingComponent {
 public:
  void setup() override;
  void update() override;
  void dump_config() override;
};

} //namespace voip_sensor
} //namespace esphome
