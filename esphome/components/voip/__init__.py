import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

CONF_PORT_VOIP = 5060

voip_component_ns = cg.esphome_ns.namespace('voip_component')
VoipComponent = voip_component_ns.class_('VoipComponent', cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(VoipComponent)
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_PORT_ID])
    yield cg.register_component(var, config)

