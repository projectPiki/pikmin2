#include "JSystem/DSP.h"

/*
 * --INFO--
 * Address:	800AAC20
 * Size:	000060
 */
void DSPAddTask(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x44000
	  mr        r0, r3
	  mr        r3, r30
	  mr        r31, r0
	  bl        0x30534
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x0(r30)
	  mr        r3, r31
	  stw       r0, 0x8(r30)
	  bl        0x44000
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800AAC80
 * Size:	00007C
 */
void DSPAddPriorTask(STRUCT_DSP_TASK*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, -0x74B8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x38
	  lis       r3, 0x8048
	  subi      r3, r3, 0x6998
	  crclr     6, 0x6
	  bl        0x42A3C
	  b         .loc_0x64

	.loc_0x38:
	  bl        0x43F80
	  stw       r30, -0x74B8(r13)
	  li        r4, 0
	  mr        r31, r3
	  li        r0, 0x1
	  stw       r4, 0x0(r30)
	  mr        r3, r30
	  stw       r0, 0x8(r30)
	  bl        0x30318
	  mr        r3, r31
	  bl        0x43F80

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
