#pragma once

#include "esphome/core/component.h"
#include "sip_service.h"

namespace esphome {
namespace voip_component {

class VoipComponent : public Component {
 public:
  void setup() override;
  void set_sip_url(const char *sip_url);
  void loop() override;
  void dump_config() override;
};


}  // namespace voip_component
}  // namespace esphome
