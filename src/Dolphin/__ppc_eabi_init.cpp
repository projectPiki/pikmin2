#include "types.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800F2FB4
 * Size:	000020
 */
void __init_user(void) { __init_cpp(); }

/*
 * --INFO--
 * Address:	800F2FD4
 * Size:	000054
 */
static void __init_cpp(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  lis       r3, 0x8047
	  addi      r0, r3, 0x2F00
	  mr        r31, r0
	  b         .loc_0x20

	.loc_0x20:
	  b         .loc_0x24

	.loc_0x24:
	  b         .loc_0x34

	.loc_0x28:
	  mtlr      r12
	  blrl
	  addi      r31, r31, 0x4

	.loc_0x34:
	  lwz       r12, 0x0(r31)
	  cmplwi    r12, 0
	  bne+      .loc_0x28
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __fini_cpp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F3028
 * Size:	000020
 */
void _ExitProcess(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x1EA9C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

#pragma section code_type ".init"
// clang-format off
asm void __init_hardware(void) {
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
}

asm void __flush_cache(void) {
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
}
// clang-format on
