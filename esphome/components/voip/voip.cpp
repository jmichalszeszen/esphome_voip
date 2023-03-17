#include "esphome/core/log.h"
#include "voip.h"

namespace esphome {
namespace voip_component {

static const char *TAG = "voip";

void VoipComponent::setup() { 

  this->settings_.client_id = App.get_name();
  // Get the WifiUDP client here instead of getting it in setup() to make sure we always have a client when calling log()
  // Calling log() without the device connected should not be an issue since there is a wifi connected check and WifiUDP fails "silently" and doesn't generate an exception anyways
  this->udp_ = new WiFiUDP();

  if(WiFi.status() != WL_CONNECTED) {
    ESP_LOGW(TAG, "Tried to connect but Wifi isn't connected yet");
    return;
  }

  ESP_LOGCONFIG(TAG, "Voip: Started");

}
    
void VoipComponent::set_sip_url(const std::string &sip_url) {
  this->settings_.sip_url = sip_url;
}    

void VoipComponent::set_client_id(const std::string &client_id) { 
  this->settings_.client_id = client_id;
}

void VoipComponent::loop() {

}

void VoipComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Voip:");
    ESP_LOGCONFIG(TAG, "  sip_url: %s", this->settings_.sip_url.c_str());
    ESP_LOGCONFIG(TAG, "  client_id: %s", this->settings_.client_id.c_str());
}

int VoipComponent::sip_service_start(const char *sip_url) {
  ESP_LOGCONFIG(TAG, "Start");
  return 0;
}

int VoipComponent::sip_service_stop(int conn_sip) {
  ESP_LOGCONFIG(TAG, "Stop");
  return 0;
}

float VoipComponent::get_setup_priority() const {
  return setup_priority::AFTER_WIFI;
}


}  // namespace voip_component
}  // namespace esphome
