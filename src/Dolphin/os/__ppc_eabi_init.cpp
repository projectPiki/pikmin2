#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/PPCArch.h"

#ifdef __cplusplus
extern "C" {
#endif
typedef void (*voidfunctionptr)(); // pointer to function returning void
DECL_SECT(".ctors") extern voidfunctionptr _ctors[];
DECL_SECT(".dtors") extern voidfunctionptr _dtors[];

static void __init_cpp();

DECL_SECT(".init")
ASM void __init_hardware() {
#ifdef __MWERKS__ // clang-format off
	nofralloc
	mfmsr r0
	ori r0,r0,0x2000
	mtmsr r0
	mflr r31
	bl __OSPSInit
	bl __OSFPRInit
	bl __OSCacheInit
	mtlr r31
	blr
#endif // clang-format on
}

DECL_SECT(".init") ASM void __flush_cache(u32 addr, int size)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	lis r5, 0xFFFFFFF1@h
	ori r5, r5, 0xFFFFFFF1@l
	and r5, r5, r3
	subf r3, r5, r3
	add r4, r4, r3
loop:
	dcbst 0, r5
	sync
	icbi 0, r5
	addic r5, r5, 8
	addic. r4, r4, -8
	bge loop
	isync
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800F2FB4
 * @note Size: 0x20
 */
void __init_user() { __init_cpp(); }

/**
 * @note Address: 0x800F2FD4
 * @note Size: 0x54
 */
static void __init_cpp()
{
	voidfunctionptr* constructor;
	/**
	 *	call static initializers
	 */
	for (constructor = _ctors; *constructor; constructor++) {
		(*constructor)();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void __fini_cpp()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800F3028
 * @note Size: 0x20
 */
void _ExitProcess() { PPCHalt(); }
#ifdef __cplusplus
}
#endif
