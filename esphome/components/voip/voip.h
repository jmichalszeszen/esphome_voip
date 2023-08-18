#pragma once

#ifndef _VOIP_H
#define _VOIP_H

#include <string.h>
// #include "abc.h"

#include <WiFi.h>
#include <WiFiUdp.h>

namespace esphome {
namespace voip_component {

struct VoipSettings {
  std::string client_id;
  std::string sip_url;
};

class VoipComponent : public Component {
 public:
   void setup() override;
   void loop() override;
   void dump_config() override;

   void set_sip_url(const std::string &sip_url);
   void set_client_id(const std::string &client_id);

   int sip_service_start(const char *sip_url);
   int sip_service_stop(int conn_sip);
   float get_setup_priority() const;
 private:
   VoipSettings settings_;
   UDP *udp_ = NULL;
};


}  // namespace voip_component
}  // namespace esphome
   
#endif
