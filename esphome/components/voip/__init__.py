import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

CONF_SIP_URL = "sip_url"

voip_component_ns = cg.esphome_ns.namespace('voip_component')
VoipComponent = voip_component_ns.class_('VoipComponent', cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(VoipComponent),
    cv.Optional(CONF_SIP_URL, default="nao definida"): cv.string
})
    
def to_code(config):
    #cg.add_library('Voip', '0.0.1')
        
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)

    cg.add(var.set_sip_url(config[CONF_SIP_URL]))

