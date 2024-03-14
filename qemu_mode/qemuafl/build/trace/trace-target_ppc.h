/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_PPC_GENERATED_TRACERS_H
#define TRACE_TARGET_PPC_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_KVM_FAILED_SPR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_SPR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FPSCR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FP_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VSCR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FPSCR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_FP_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VSCR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VPA_ADDR_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_SLB_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_DTL_GET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_VPA_ADDR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_SLB_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_DTL_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_PUT_VPA_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_GET_VPA_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_DCR_WRITE_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_DCR_READ_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_HALT_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_PAPR_HCALL_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_EPR_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_DEBUG_EXCEPTION_EVENT;
extern TraceEvent _TRACE_KVM_HANDLE_NMI_EXCEPTION_EVENT;
extern uint16_t _TRACE_KVM_FAILED_SPR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_SPR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FPSCR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FP_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VSCR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FPSCR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_FP_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VSCR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VPA_ADDR_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_SLB_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_DTL_GET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_VPA_ADDR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_SLB_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_DTL_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_PUT_VPA_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_GET_VPA_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_DCR_WRITE_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_DCR_READ_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_HALT_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_PAPR_HCALL_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_EPR_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_DEBUG_EXCEPTION_DSTATE;
extern uint16_t _TRACE_KVM_HANDLE_NMI_EXCEPTION_DSTATE;
#define TRACE_KVM_FAILED_SPR_SET_ENABLED 1
#define TRACE_KVM_FAILED_SPR_GET_ENABLED 1
#define TRACE_KVM_FAILED_FPSCR_SET_ENABLED 1
#define TRACE_KVM_FAILED_FP_SET_ENABLED 1
#define TRACE_KVM_FAILED_VSCR_SET_ENABLED 1
#define TRACE_KVM_FAILED_VR_SET_ENABLED 1
#define TRACE_KVM_FAILED_FPSCR_GET_ENABLED 1
#define TRACE_KVM_FAILED_FP_GET_ENABLED 1
#define TRACE_KVM_FAILED_VSCR_GET_ENABLED 1
#define TRACE_KVM_FAILED_VR_GET_ENABLED 1
#define TRACE_KVM_FAILED_VPA_ADDR_GET_ENABLED 1
#define TRACE_KVM_FAILED_SLB_GET_ENABLED 1
#define TRACE_KVM_FAILED_DTL_GET_ENABLED 1
#define TRACE_KVM_FAILED_VPA_ADDR_SET_ENABLED 1
#define TRACE_KVM_FAILED_SLB_SET_ENABLED 1
#define TRACE_KVM_FAILED_DTL_SET_ENABLED 1
#define TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_ENABLED 1
#define TRACE_KVM_FAILED_PUT_VPA_ENABLED 1
#define TRACE_KVM_FAILED_GET_VPA_ENABLED 1
#define TRACE_KVM_HANDLE_DCR_WRITE_ENABLED 1
#define TRACE_KVM_HANDLE_DCR_READ_ENABLED 1
#define TRACE_KVM_HANDLE_HALT_ENABLED 1
#define TRACE_KVM_HANDLE_PAPR_HCALL_ENABLED 1
#define TRACE_KVM_HANDLE_EPR_ENABLED 1
#define TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_ENABLED 1
#define TRACE_KVM_HANDLE_DEBUG_EXCEPTION_ENABLED 1
#define TRACE_KVM_HANDLE_NMI_EXCEPTION_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_KVM_FAILED_SPR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SPR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_spr_set(int spr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SPR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_spr_set " "Warning: Unable to set SPR %d to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , spr, msg);
#line 109 "trace/trace-target_ppc.h"
        } else {
#line 4 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_spr_set " "Warning: Unable to set SPR %d to KVM: %s" "\n", spr, msg);
#line 113 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_spr_set(int spr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_spr_set(spr, msg);
    }
}

#define TRACE_KVM_FAILED_SPR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SPR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_spr_get(int spr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SPR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_spr_get " "Warning: Unable to retrieve SPR %d from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , spr, msg);
#line 140 "trace/trace-target_ppc.h"
        } else {
#line 5 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_spr_get " "Warning: Unable to retrieve SPR %d from KVM: %s" "\n", spr, msg);
#line 144 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_spr_get(int spr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_spr_get(spr, msg);
    }
}

#define TRACE_KVM_FAILED_FPSCR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FPSCR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fpscr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FPSCR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_fpscr_set " "Unable to set FPSCR to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 171 "trace/trace-target_ppc.h"
        } else {
#line 6 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_fpscr_set " "Unable to set FPSCR to KVM: %s" "\n", msg);
#line 175 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_fpscr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fpscr_set(msg);
    }
}

#define TRACE_KVM_FAILED_FP_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FP_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fp_set(const char * fpname, int fpnum, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FP_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_fp_set " "Unable to set %s%d to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , fpname, fpnum, msg);
#line 202 "trace/trace-target_ppc.h"
        } else {
#line 7 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_fp_set " "Unable to set %s%d to KVM: %s" "\n", fpname, fpnum, msg);
#line 206 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_fp_set(const char * fpname, int fpnum, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fp_set(fpname, fpnum, msg);
    }
}

#define TRACE_KVM_FAILED_VSCR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VSCR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vscr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VSCR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_vscr_set " "Unable to set VSCR to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 233 "trace/trace-target_ppc.h"
        } else {
#line 8 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_vscr_set " "Unable to set VSCR to KVM: %s" "\n", msg);
#line 237 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_vscr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vscr_set(msg);
    }
}

#define TRACE_KVM_FAILED_VR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vr_set(int vr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_vr_set " "Unable to set VR%d to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , vr, msg);
#line 264 "trace/trace-target_ppc.h"
        } else {
#line 9 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_vr_set " "Unable to set VR%d to KVM: %s" "\n", vr, msg);
#line 268 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_vr_set(int vr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vr_set(vr, msg);
    }
}

#define TRACE_KVM_FAILED_FPSCR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FPSCR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fpscr_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FPSCR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_fpscr_get " "Unable to get FPSCR from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 295 "trace/trace-target_ppc.h"
        } else {
#line 10 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_fpscr_get " "Unable to get FPSCR from KVM: %s" "\n", msg);
#line 299 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_fpscr_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fpscr_get(msg);
    }
}

#define TRACE_KVM_FAILED_FP_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_FP_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_fp_get(const char * fpname, int fpnum, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_FP_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_fp_get " "Unable to get %s%d from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , fpname, fpnum, msg);
#line 326 "trace/trace-target_ppc.h"
        } else {
#line 11 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_fp_get " "Unable to get %s%d from KVM: %s" "\n", fpname, fpnum, msg);
#line 330 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_fp_get(const char * fpname, int fpnum, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_fp_get(fpname, fpnum, msg);
    }
}

#define TRACE_KVM_FAILED_VSCR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VSCR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vscr_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VSCR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_vscr_get " "Unable to get VSCR from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 357 "trace/trace-target_ppc.h"
        } else {
#line 12 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_vscr_get " "Unable to get VSCR from KVM: %s" "\n", msg);
#line 361 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_vscr_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vscr_get(msg);
    }
}

#define TRACE_KVM_FAILED_VR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vr_get(int vr, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_vr_get " "Unable to get VR%d from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , vr, msg);
#line 388 "trace/trace-target_ppc.h"
        } else {
#line 13 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_vr_get " "Unable to get VR%d from KVM: %s" "\n", vr, msg);
#line 392 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_vr_get(int vr, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vr_get(vr, msg);
    }
}

#define TRACE_KVM_FAILED_VPA_ADDR_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VPA_ADDR_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vpa_addr_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VPA_ADDR_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_vpa_addr_get " "Unable to get VPA address from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 419 "trace/trace-target_ppc.h"
        } else {
#line 14 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_vpa_addr_get " "Unable to get VPA address from KVM: %s" "\n", msg);
#line 423 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_vpa_addr_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vpa_addr_get(msg);
    }
}

#define TRACE_KVM_FAILED_SLB_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SLB_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_slb_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SLB_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_slb_get " "Unable to get SLB shadow state from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 450 "trace/trace-target_ppc.h"
        } else {
#line 15 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_slb_get " "Unable to get SLB shadow state from KVM: %s" "\n", msg);
#line 454 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_slb_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_slb_get(msg);
    }
}

#define TRACE_KVM_FAILED_DTL_GET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_DTL_GET) || \
    false)

static inline void _nocheck__trace_kvm_failed_dtl_get(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_DTL_GET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_dtl_get " "Unable to get dispatch trace log state from KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 481 "trace/trace-target_ppc.h"
        } else {
#line 16 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_dtl_get " "Unable to get dispatch trace log state from KVM: %s" "\n", msg);
#line 485 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_dtl_get(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_dtl_get(msg);
    }
}

#define TRACE_KVM_FAILED_VPA_ADDR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_VPA_ADDR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_vpa_addr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_VPA_ADDR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_vpa_addr_set " "Unable to set VPA address to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 512 "trace/trace-target_ppc.h"
        } else {
#line 17 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_vpa_addr_set " "Unable to set VPA address to KVM: %s" "\n", msg);
#line 516 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_vpa_addr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_vpa_addr_set(msg);
    }
}

#define TRACE_KVM_FAILED_SLB_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_SLB_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_slb_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_SLB_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_slb_set " "Unable to set SLB shadow state to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 543 "trace/trace-target_ppc.h"
        } else {
#line 18 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_slb_set " "Unable to set SLB shadow state to KVM: %s" "\n", msg);
#line 547 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_slb_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_slb_set(msg);
    }
}

#define TRACE_KVM_FAILED_DTL_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_DTL_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_dtl_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_DTL_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_dtl_set " "Unable to set dispatch trace log state to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 574 "trace/trace-target_ppc.h"
        } else {
#line 19 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_dtl_set " "Unable to set dispatch trace log state to KVM: %s" "\n", msg);
#line 578 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_dtl_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_dtl_set(msg);
    }
}

#define TRACE_KVM_FAILED_NULL_VPA_ADDR_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_NULL_VPA_ADDR_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_null_vpa_addr_set(const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_NULL_VPA_ADDR_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_null_vpa_addr_set " "Unable to set VPA address to KVM: %s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , msg);
#line 605 "trace/trace-target_ppc.h"
        } else {
#line 20 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_null_vpa_addr_set " "Unable to set VPA address to KVM: %s" "\n", msg);
#line 609 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_null_vpa_addr_set(const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_null_vpa_addr_set(msg);
    }
}

#define TRACE_KVM_FAILED_PUT_VPA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_PUT_VPA) || \
    false)

static inline void _nocheck__trace_kvm_failed_put_vpa(void)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_PUT_VPA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_put_vpa " "Warning: Unable to set VPA information to KVM" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 636 "trace/trace-target_ppc.h"
        } else {
#line 21 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_put_vpa " "Warning: Unable to set VPA information to KVM" "\n");
#line 640 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_put_vpa(void)
{
    if (true) {
        _nocheck__trace_kvm_failed_put_vpa();
    }
}

#define TRACE_KVM_FAILED_GET_VPA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_GET_VPA) || \
    false)

static inline void _nocheck__trace_kvm_failed_get_vpa(void)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_GET_VPA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_failed_get_vpa " "Warning: Unable to get VPA information from KVM" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 667 "trace/trace-target_ppc.h"
        } else {
#line 22 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_failed_get_vpa " "Warning: Unable to get VPA information from KVM" "\n");
#line 671 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_failed_get_vpa(void)
{
    if (true) {
        _nocheck__trace_kvm_failed_get_vpa();
    }
}

#define TRACE_KVM_HANDLE_DCR_WRITE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_DCR_WRITE) || \
    false)

static inline void _nocheck__trace_kvm_handle_dcr_write(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_DCR_WRITE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_dcr_write " "handle dcr write" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 698 "trace/trace-target_ppc.h"
        } else {
#line 23 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_dcr_write " "handle dcr write" "\n");
#line 702 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_dcr_write(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_dcr_write();
    }
}

#define TRACE_KVM_HANDLE_DCR_READ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_DCR_READ) || \
    false)

static inline void _nocheck__trace_kvm_handle_dcr_read(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_DCR_READ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_dcr_read " "handle dcr read" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 729 "trace/trace-target_ppc.h"
        } else {
#line 24 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_dcr_read " "handle dcr read" "\n");
#line 733 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_dcr_read(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_dcr_read();
    }
}

#define TRACE_KVM_HANDLE_HALT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_HALT) || \
    false)

static inline void _nocheck__trace_kvm_handle_halt(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_HALT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_halt " "handle halt" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 760 "trace/trace-target_ppc.h"
        } else {
#line 25 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_halt " "handle halt" "\n");
#line 764 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_halt(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_halt();
    }
}

#define TRACE_KVM_HANDLE_PAPR_HCALL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_PAPR_HCALL) || \
    false)

static inline void _nocheck__trace_kvm_handle_papr_hcall(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_PAPR_HCALL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_papr_hcall " "handle PAPR hypercall" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 791 "trace/trace-target_ppc.h"
        } else {
#line 26 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_papr_hcall " "handle PAPR hypercall" "\n");
#line 795 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_papr_hcall(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_papr_hcall();
    }
}

#define TRACE_KVM_HANDLE_EPR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_EPR) || \
    false)

static inline void _nocheck__trace_kvm_handle_epr(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_EPR) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_epr " "handle epr" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 822 "trace/trace-target_ppc.h"
        } else {
#line 27 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_epr " "handle epr" "\n");
#line 826 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_epr(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_epr();
    }
}

#define TRACE_KVM_HANDLE_WATCHDOG_EXPIRY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_WATCHDOG_EXPIRY) || \
    false)

static inline void _nocheck__trace_kvm_handle_watchdog_expiry(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_WATCHDOG_EXPIRY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_watchdog_expiry " "handle watchdog expiry" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 853 "trace/trace-target_ppc.h"
        } else {
#line 28 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_watchdog_expiry " "handle watchdog expiry" "\n");
#line 857 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_watchdog_expiry(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_watchdog_expiry();
    }
}

#define TRACE_KVM_HANDLE_DEBUG_EXCEPTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_DEBUG_EXCEPTION) || \
    false)

static inline void _nocheck__trace_kvm_handle_debug_exception(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_DEBUG_EXCEPTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_debug_exception " "handle debug exception" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 884 "trace/trace-target_ppc.h"
        } else {
#line 29 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_debug_exception " "handle debug exception" "\n");
#line 888 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_debug_exception(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_debug_exception();
    }
}

#define TRACE_KVM_HANDLE_NMI_EXCEPTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_HANDLE_NMI_EXCEPTION) || \
    false)

static inline void _nocheck__trace_kvm_handle_nmi_exception(void)
{
    if (trace_event_get_state(TRACE_KVM_HANDLE_NMI_EXCEPTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("%d@%zu.%06zu:kvm_handle_nmi_exception " "handle NMI exception" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     );
#line 915 "trace/trace-target_ppc.h"
        } else {
#line 30 "/home/choi/AFLplusplus_select/qemu_mode/qemuafl/target/ppc/trace-events"
            qemu_log("kvm_handle_nmi_exception " "handle NMI exception" "\n");
#line 919 "trace/trace-target_ppc.h"
        }
    }
}

static inline void trace_kvm_handle_nmi_exception(void)
{
    if (true) {
        _nocheck__trace_kvm_handle_nmi_exception();
    }
}
#endif /* TRACE_TARGET_PPC_GENERATED_TRACERS_H */