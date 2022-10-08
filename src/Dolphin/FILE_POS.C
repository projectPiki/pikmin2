#include "types.h"
#include "Dolphin/critical_regions.h"
#include "Dolphin/FILE_POS.h"
#include "Dolphin/bufferstruct.h"
#include "errno.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void rewind(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void fsetpos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6904
 * Size:	00006C
 */
int fseek(FILE* file, u32 offset, int whence)
{
	int code;
	__begin_critical_region(2);
	code = _fseek(file, offset, whence); // 0 if successful, -1 if error
	__end_critical_region(2);
	return code;
}

/*
 * --INFO--
 * Address:	800C6970
 * Size:	000270
 */
int _fseek(FILE* file, u32 offset, int whence)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r4, 0x8(r1)
	  lhz       r0, 0x4(r3)
	  rlwinm    r0,r0,26,29,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x3C
	  lbz       r0, 0xA(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C

	.loc_0x3C:
	  li        r0, 0x28
	  li        r3, -0x1
	  stw       r0, -0x7340(r13)
	  b         .loc_0x258

	.loc_0x4C:
	  lbz       r0, 0x8(r30)
	  rlwinm    r0,r0,27,29,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x8C
	  li        r4, 0
	  bl        -0x870
	  cmpwi     r3, 0
	  beq-      .loc_0x8C
	  li        r0, 0x1
	  li        r4, 0
	  stb       r0, 0xA(r30)
	  li        r0, 0x28
	  li        r3, -0x1
	  stw       r4, 0x28(r30)
	  stw       r0, -0x7340(r13)
	  b         .loc_0x258

	.loc_0x8C:
	  cmpwi     r31, 0x1
	  bne-      .loc_0x144
	  lhz       r0, 0x4(r30)
	  li        r31, 0
	  li        r4, 0
	  rlwinm    r0,r0,26,29,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0xB4
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC0

	.loc_0xB4:
	  lbz       r0, 0xA(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xD0

	.loc_0xC0:
	  li        r0, 0x28
	  li        r3, -0x1
	  stw       r0, -0x7340(r13)
	  b         .loc_0x138

	.loc_0xD0:
	  lbz       r0, 0x8(r30)
	  rlwinm.   r5,r0,27,29,31
	  bne-      .loc_0xE4
	  lwz       r3, 0x18(r30)
	  b         .loc_0x138

	.loc_0xE4:
	  lwz       r7, 0x1C(r30)
	  cmplwi    r5, 0x3
	  lwz       r0, 0x24(r30)
	  lwz       r3, 0x34(r30)
	  sub       r6, r0, r7
	  add       r3, r3, r6
	  blt-      .loc_0x108
	  subi      r4, r5, 0x2
	  sub       r3, r3, r4

	.loc_0x108:
	  lbz       r0, 0x5(r30)
	  rlwinm.   r0,r0,29,31,31
	  bne-      .loc_0x138
	  sub.      r0, r6, r4
	  mtctr     r0
	  beq-      .loc_0x138

	.loc_0x120:
	  lbz       r0, 0x0(r7)
	  addi      r7, r7, 0x1
	  cmplwi    r0, 0xA
	  bne-      .loc_0x134
	  addi      r3, r3, 0x1

	.loc_0x134:
	  bdnz+     .loc_0x120

	.loc_0x138:
	  lwz       r0, 0x8(r1)
	  add       r0, r0, r3
	  stw       r0, 0x8(r1)

	.loc_0x144:
	  cmpwi     r31, 0x2
	  beq-      .loc_0x1D8
	  lbz       r0, 0x4(r30)
	  rlwinm    r0,r0,29,29,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x1D8
	  lbz       r0, 0x8(r30)
	  rlwinm    r0,r0,27,29,31
	  cmplwi    r0, 0x2
	  beq-      .loc_0x174
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1D8

	.loc_0x174:
	  lwz       r3, 0x8(r1)
	  lwz       r0, 0x18(r30)
	  cmplw     r3, r0
	  bge-      .loc_0x190
	  lwz       r0, 0x34(r30)
	  cmplw     r3, r0
	  bge-      .loc_0x1A4

	.loc_0x190:
	  lbz       r0, 0x8(r30)
	  li        r3, 0
	  rlwimi    r0,r3,5,24,26
	  stb       r0, 0x8(r30)
	  b         .loc_0x1E8

	.loc_0x1A4:
	  lwz       r4, 0x1C(r30)
	  sub       r0, r3, r0
	  li        r3, 0x2
	  add       r0, r4, r0
	  stw       r0, 0x24(r30)
	  lwz       r4, 0x8(r1)
	  lwz       r0, 0x18(r30)
	  sub       r0, r0, r4
	  stw       r0, 0x28(r30)
	  lbz       r0, 0x8(r30)
	  rlwimi    r0,r3,5,24,26
	  stb       r0, 0x8(r30)
	  b         .loc_0x1E8

	.loc_0x1D8:
	  lbz       r0, 0x8(r30)
	  li        r3, 0
	  rlwimi    r0,r3,5,24,26
	  stb       r0, 0x8(r30)

	.loc_0x1E8:
	  lbz       r0, 0x8(r30)
	  rlwinm.   r0,r0,27,29,31
	  bne-      .loc_0x254
	  lwz       r12, 0x38(r30)
	  cmplwi    r12, 0
	  beq-      .loc_0x240
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r30)
	  lwz       r6, 0x48(r30)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  beq-      .loc_0x240
	  li        r0, 0x1
	  li        r4, 0
	  stb       r0, 0xA(r30)
	  li        r0, 0x28
	  li        r3, -0x1
	  stw       r4, 0x28(r30)
	  stw       r0, -0x7340(r13)
	  b         .loc_0x258

	.loc_0x240:
	  li        r3, 0
	  stb       r3, 0x9(r30)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x18(r30)
	  stw       r3, 0x28(r30)

	.loc_0x254:
	  li        r3, 0

	.loc_0x258:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void fgetpos(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C6BE0
 * Size:	0000E4
 */
void ftell(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x2
	  bl        -0x9A0
	  lhz       r0, 0x4(r30)
	  li        r4, 0
	  rlwinm    r0,r0,26,29,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x3C
	  cmplwi    r0, 0x2
	  bne-      .loc_0x48

	.loc_0x3C:
	  lbz       r0, 0xA(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x58

	.loc_0x48:
	  li        r0, 0x28
	  li        r31, -0x1
	  stw       r0, -0x7340(r13)
	  b         .loc_0xC0

	.loc_0x58:
	  lbz       r0, 0x8(r30)
	  rlwinm.   r5,r0,27,29,31
	  bne-      .loc_0x6C
	  lwz       r31, 0x18(r30)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r7, 0x1C(r30)
	  cmplwi    r5, 0x3
	  lwz       r0, 0x24(r30)
	  lwz       r3, 0x34(r30)
	  sub       r6, r0, r7
	  add       r31, r3, r6
	  blt-      .loc_0x90
	  subi      r4, r5, 0x2
	  sub       r31, r31, r4

	.loc_0x90:
	  lbz       r0, 0x5(r30)
	  rlwinm.   r0,r0,29,31,31
	  bne-      .loc_0xC0
	  sub.      r0, r6, r4
	  mtctr     r0
	  beq-      .loc_0xC0

	.loc_0xA8:
	  lbz       r0, 0x0(r7)
	  addi      r7, r7, 0x1
	  cmplwi    r0, 0xA
	  bne-      .loc_0xBC
	  addi      r31, r31, 0x1

	.loc_0xBC:
	  bdnz+     .loc_0xA8

	.loc_0xC0:
	  li        r3, 0x2
	  bl        -0xA4C
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void _ftell(void)
{
	// UNUSED FUNCTION
}
