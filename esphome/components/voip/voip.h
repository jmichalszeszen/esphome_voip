#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace voip {

class Voip : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace voip
}  // namespace esphome
