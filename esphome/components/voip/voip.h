#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace voip_component {

class VoipComponent : public Component {
 public:
  void setup() override;
  void set_sip_url() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace voip_component
}  // namespace esphome
