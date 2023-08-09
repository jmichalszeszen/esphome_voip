#pragma once

#ifndef _VOIP_H
#define _VOIP_H

#include "esphome/core/component.h"
#include "esphome/core/application.h"
#include <Udp.h>
#include "esphome/core/log.h"

#include "freertos/FreeRTOS.h"
#include "freertos/event_groups.h"

#include "esp_wifi.h"
#include "esp_system.h"
#include "esp_event.h"
#include "nvs_flash.h"

#include "sip_client/lwip_udp_client.h"
#include "sip_client/mbedtls_md5.h"
#include "sip_client/sip_client.h"

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
