#include "esphome/core/log.h"
#include "voip.h"

namespace esphome {
namespace voip_component {

static const char *TAG = "voip";

void VoipComponent::setup() {

}
    
void VoipComponent::set_sip_url(const char *sip_url) {

}    

void VoipComponent::loop() {

}

void VoipComponent::dump_config(){
    ESP_LOGCONFIG(TAG, "Voip");
}


}  // namespace voip_component
}  // namespace esphome
