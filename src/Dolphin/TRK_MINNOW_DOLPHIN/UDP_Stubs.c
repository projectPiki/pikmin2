#include "types.h"
#include "Dolphin/OS/OSInterrupt.h"

/**
 * @note Address: 0x800C0C48
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_initialize(void* flagOut, __OSInterruptHandler handler) { return -1; }

/**
 * @note Address: 0x800C0C40
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_shutdown(void) { return -1; }

/**
 * @note Address: 0x800C0C38
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_open(void) { return -1; }

/**
 * @note Address: 0x800C0C30
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_close(void) { return -1; }

/**
 * @note Address: 0x800C0C28
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_read(u8* dest, int size) { return 0; }

/**
 * @note Address: 0x800C0C20
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_write(const u8* src, int size) { return 0; }

/**
 * @note Address: 0x800C0C18
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_peek(void) { return 0; }

/**
 * @note Address: 0x800C0C10
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_pre_continue(void) { return -1; }

/**
 * @note Address: 0x800C0C08
 * @note Size: 0x8
 */
WEAKFUNC int udp_cc_post_stop(void) { return -1; }
