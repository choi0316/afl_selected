/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-target_mips.h"

uint16_t _TRACE_MIPS_TRANSLATE_C0_DSTATE;
uint16_t _TRACE_MIPS_TRANSLATE_TR_DSTATE;
TraceEvent _TRACE_MIPS_TRANSLATE_C0_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mips_translate_c0",
    .sstate = TRACE_MIPS_TRANSLATE_C0_ENABLED,
    .dstate = &_TRACE_MIPS_TRANSLATE_C0_DSTATE 
};
TraceEvent _TRACE_MIPS_TRANSLATE_TR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mips_translate_tr",
    .sstate = TRACE_MIPS_TRANSLATE_TR_ENABLED,
    .dstate = &_TRACE_MIPS_TRANSLATE_TR_DSTATE 
};
TraceEvent *target_mips_trace_events[] = {
    &_TRACE_MIPS_TRANSLATE_C0_EVENT,
    &_TRACE_MIPS_TRANSLATE_TR_EVENT,
  NULL,
};

static void trace_target_mips_register_events(void)
{
    trace_event_register_group(target_mips_trace_events);
}
trace_init(trace_target_mips_register_events)
