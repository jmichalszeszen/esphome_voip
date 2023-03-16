import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

voip_ns = cg.esphome_ns.namespace('voip')
Voip = voip_ns.class_('Voip', cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(Voip)
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)

