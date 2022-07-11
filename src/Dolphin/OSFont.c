#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void IsSjisLeadByte(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void IsSjisTrailByte(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EDD98
 * Size:	00019C
 */
void GetFontCode(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  mr        r31, r3
	  bl        0x2FC
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x168
	  rlwinm    r0,r31,0,16,31
	  cmplwi    r0, 0x20
	  blt-      .loc_0x50
	  cmplwi    r0, 0xDF
	  bgt-      .loc_0x50
	  lis       r3, 0x804B
	  subi      r3, r3, 0x6D50
	  rlwinm    r0,r0,1,0,30
	  add       r3, r3, r0
	  lhz       r3, -0x40(r3)
	  b         .loc_0x188

	.loc_0x50:
	  rlwinm    r0,r31,0,16,31
	  cmplwi    r0, 0x889E
	  ble-      .loc_0xD4
	  cmplwi    r0, 0x9872
	  bgt-      .loc_0xD4
	  srawi     r3, r0, 0x8
	  rlwinm    r4,r0,0,24,31
	  subi      r0, r3, 0x88
	  cmplwi    r4, 0x40
	  mulli     r5, r0, 0xBC
	  li        r3, 0
	  addi      r0, r3, 0
	  blt-      .loc_0x90
	  cmplwi    r4, 0xFC
	  bgt-      .loc_0x90
	  li        r0, 0x1

	.loc_0x90:
	  cmpwi     r0, 0
	  beq-      .loc_0xA8
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x7F
	  beq-      .loc_0xA8
	  li        r3, 0x1

	.loc_0xA8:
	  cmpwi     r3, 0
	  bne-      .loc_0xB8
	  li        r3, 0
	  b         .loc_0x188

	.loc_0xB8:
	  subi      r3, r4, 0x40
	  cmpwi     r3, 0x40
	  blt-      .loc_0xC8
	  subi      r3, r3, 0x1

	.loc_0xC8:
	  addi      r3, r3, 0x2BE
	  add       r3, r5, r3
	  b         .loc_0x188

	.loc_0xD4:
	  rlwinm    r0,r31,0,16,31
	  cmplwi    r0, 0x8140
	  blt-      .loc_0x184
	  cmplwi    r0, 0x879E
	  bge-      .loc_0x184
	  srawi     r3, r0, 0x8
	  rlwinm    r4,r0,0,24,31
	  subi      r0, r3, 0x81
	  cmplwi    r4, 0x40
	  mulli     r5, r0, 0xBC
	  li        r3, 0
	  addi      r0, r3, 0
	  blt-      .loc_0x114
	  cmplwi    r4, 0xFC
	  bgt-      .loc_0x114
	  li        r0, 0x1

	.loc_0x114:
	  cmpwi     r0, 0
	  beq-      .loc_0x12C
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x7F
	  beq-      .loc_0x12C
	  li        r3, 0x1

	.loc_0x12C:
	  cmpwi     r3, 0
	  bne-      .loc_0x13C
	  li        r3, 0
	  b         .loc_0x188

	.loc_0x13C:
	  subi      r3, r4, 0x40
	  cmpwi     r3, 0x40
	  blt-      .loc_0x14C
	  subi      r3, r3, 0x1

	.loc_0x14C:
	  add       r0, r5, r3
	  lis       r3, 0x804B
	  rlwinm    r4,r0,1,0,30
	  subi      r0, r3, 0x6BD0
	  add       r3, r0, r4
	  lhz       r3, 0x0(r3)
	  b         .loc_0x188

	.loc_0x168:
	  rlwinm    r3,r31,0,16,31
	  cmplwi    r3, 0x20
	  ble-      .loc_0x184
	  cmplwi    r3, 0xFF
	  bgt-      .loc_0x184
	  subi      r3, r3, 0x20
	  b         .loc_0x188

	.loc_0x184:
	  li        r3, 0

	.loc_0x188:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EDF34
 * Size:	000174
 */
void Decode(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  addi      r6, r3, 0x10
	  li        r10, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  lwz       r31, 0x4(r3)
	  lwz       r11, 0x8(r3)
	  lwz       r12, 0xC(r3)

	.loc_0x28:
	  cmplwi    r30, 0
	  bne-      .loc_0x3C
	  lwz       r29, 0x0(r6)
	  li        r30, 0x20
	  addi      r6, r6, 0x4

	.loc_0x3C:
	  rlwinm.   r0,r29,0,0,0
	  beq-      .loc_0x60
	  mr        r0, r12
	  lbzx      r5, r3, r0
	  mr        r0, r10
	  addi      r10, r10, 0x1
	  stbx      r5, r4, r0
	  addi      r12, r12, 0x1
	  b         .loc_0x150

	.loc_0x60:
	  add       r7, r3, r11
	  lbz       r5, 0x0(r7)
	  addi      r11, r11, 0x2
	  lbz       r0, 0x1(r7)
	  rlwimi    r0,r5,8,16,23
	  srawi.    r5, r0, 0xC
	  rlwinm    r0,r0,0,20,31
	  sub       r9, r10, r0
	  bne-      .loc_0x98
	  mr        r0, r12
	  lbzx      r5, r3, r0
	  addi      r12, r12, 0x1
	  addi      r0, r5, 0x12
	  b         .loc_0x9C

	.loc_0x98:
	  addi      r0, r5, 0x2

	.loc_0x9C:
	  cmpwi     r0, 0
	  mr        r5, r0
	  add       r7, r4, r10
	  ble-      .loc_0x150
	  rlwinm.   r0,r5,29,3,31
	  mtctr     r0
	  beq-      .loc_0x130

	.loc_0xB8:
	  subi      r8, r9, 0x1
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0
	  addi      r10, r10, 0x8
	  stb       r0, 0x0(r7)
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0x1
	  stb       r0, 0x1(r7)
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0x2
	  stb       r0, 0x2(r7)
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0x3
	  stb       r0, 0x3(r7)
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0x4
	  stb       r0, 0x4(r7)
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0x5
	  stb       r0, 0x5(r7)
	  lbzx      r0, r4, r8
	  addi      r8, r9, 0x6
	  addi      r9, r9, 0x8
	  stb       r0, 0x6(r7)
	  lbzx      r0, r4, r8
	  stb       r0, 0x7(r7)
	  addi      r7, r7, 0x8
	  bdnz+     .loc_0xB8
	  andi.     r5, r5, 0x7
	  beq-      .loc_0x150

	.loc_0x130:
	  mtctr     r5

	.loc_0x134:
	  subi      r8, r9, 0x1
	  lbzx      r0, r4, r8
	  addi      r10, r10, 0x1
	  addi      r9, r9, 0x1
	  stb       r0, 0x0(r7)
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x134

	.loc_0x150:
	  cmpw      r10, r31
	  rlwinm    r29,r29,1,0,30
	  subi      r30, r30, 0x1
	  blt+      .loc_0x28
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GetFontSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EE0A8
 * Size:	000058
 */
u16 OSGetFontEncode(void)
{
	/*
	.loc_0x0:
	  lhz       r3, -0x7C90(r13)
	  cmplwi    r3, 0x1
	  blelr-
	  lis       r3, 0x8000
	  lwz       r0, 0xCC(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x24
	  blt-      .loc_0x48
	  b         .loc_0x48

	.loc_0x24:
	  lis       r3, 0xCC00
	  lhz       r0, 0x206E(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x3C
	  li        r0, 0x1
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0

	.loc_0x40:
	  sth       r0, -0x7C90(r13)
	  b         .loc_0x50

	.loc_0x48:
	  li        r0, 0
	  sth       r0, -0x7C90(r13)

	.loc_0x50:
	  lhz       r3, -0x7C90(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EE100
 * Size:	00008C
 */
void ReadROM(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r4, 0
	  stw       r28, 0x18(r1)
	  addi      r28, r3, 0
	  b         .loc_0x64

	.loc_0x2C:
	  cmpwi     r29, 0x100
	  bgt-      .loc_0x3C
	  mr        r31, r29
	  b         .loc_0x40

	.loc_0x3C:
	  li        r31, 0x100

	.loc_0x40:
	  sub       r29, r29, r31

	.loc_0x44:
	  addi      r3, r28, 0
	  addi      r4, r31, 0
	  addi      r5, r30, 0
	  bl        0x302C
	  cmpwi     r3, 0
	  beq+      .loc_0x44
	  add       r30, r30, r31
	  add       r28, r28, r31

	.loc_0x64:
	  cmpwi     r29, 0
	  bgt+      .loc_0x2C
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  lwz       r28, 0x18(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void ReadFont(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EE18C
 * Size:	000334
 */
void OSLoadFont(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  li        r0, 0
	  stwu      r1, -0x40(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x34(r1)
	  addi      r29, r3, 0
	  stw       r0, -0x708C(r13)
	  bl        -0x10C
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x54
	  lis       r4, 0x5
	  lis       r5, 0x1B
	  addi      r3, r30, 0
	  subi      r4, r4, 0x3000
	  subi      r5, r5, 0x100
	  bl        -0xD8
	  b         .loc_0x68

	.loc_0x54:
	  lis       r4, 0x20
	  addi      r3, r30, 0
	  subi      r5, r4, 0x3100
	  li        r4, 0x3000
	  bl        -0xF0

	.loc_0x68:
	  lbz       r0, 0x0(r30)
	  cmplwi    r0, 0x59
	  bne-      .loc_0x94
	  lbz       r0, 0x1(r30)
	  cmplwi    r0, 0x61
	  bne-      .loc_0x94
	  lbz       r0, 0x2(r30)
	  cmplwi    r0, 0x79
	  bne-      .loc_0x94
	  lwz       r31, 0x4(r30)
	  b         .loc_0x98

	.loc_0x94:
	  li        r31, 0

	.loc_0x98:
	  cmplwi    r31, 0
	  beq-      .loc_0x314
	  addi      r3, r30, 0
	  addi      r4, r29, 0
	  bl        -0x300
	  stw       r29, -0x7090(r13)
	  lhz       r4, -0x7C90(r13)
	  lhz       r0, 0x22(r29)
	  cmplwi    r4, 0x1
	  add       r0, r29, r0
	  stw       r0, -0x7088(r13)
	  lhz       r3, 0x1A(r29)
	  lhz       r0, 0x1C(r29)
	  mullw     r0, r3, r0
	  stw       r0, -0x7084(r13)
	  bgt-      .loc_0xDC
	  b         .loc_0x124

	.loc_0xDC:
	  lis       r3, 0x8000
	  lwz       r0, 0xCC(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0xF4
	  blt-      .loc_0x118
	  b         .loc_0x118

	.loc_0xF4:
	  lis       r3, 0xCC00
	  lhz       r0, 0x206E(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x10C
	  li        r0, 0x1
	  b         .loc_0x110

	.loc_0x10C:
	  li        r0, 0

	.loc_0x110:
	  sth       r0, -0x7C90(r13)
	  b         .loc_0x120

	.loc_0x118:
	  li        r0, 0
	  sth       r0, -0x7C90(r13)

	.loc_0x120:
	  lhz       r4, -0x7C90(r13)

	.loc_0x124:
	  rlwinm    r0,r4,0,16,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x314
	  lwz       r4, -0x6C10(r2)
	  li        r3, 0x54
	  lwz       r0, -0x6C0C(r2)
	  stw       r4, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        -0x538
	  lwz       r5, -0x7084(r13)
	  lwz       r12, -0x7090(r13)
	  divw      r10, r3, r5
	  lhz       r6, 0x1C(r1)
	  lhz       r0, 0x1E(r12)
	  lwz       r4, 0x14(r12)
	  lwz       r11, 0x24(r12)
	  mullw     r8, r10, r5
	  lhz       r9, 0x1A(r12)
	  lhz       r5, 0x12(r12)
	  lhz       r7, 0x10(r12)
	  sub       r30, r3, r8
	  divw      r8, r30, r9
	  mullw     r3, r8, r9
	  mullw     r5, r8, r5
	  srawi     r0, r0, 0x3
	  sub       r3, r30, r3
	  addze     r0, r0
	  rlwinm    r0,r0,5,0,26
	  srawi     r9, r0, 0x1
	  mullw     r10, r10, r4
	  mullw     r3, r3, r7
	  addze     r9, r9
	  addi      r0, r5, 0x4
	  srawi     r4, r0, 0x3
	  addze     r4, r4
	  srawi     r8, r3, 0x3
	  addze     r8, r8
	  srawi     r7, r0, 0x3
	  addze     r7, r7
	  rlwinm    r7,r7,3,0,28
	  subc      r7, r0, r7
	  srawi     r0, r3, 0x3
	  addze     r0, r0
	  rlwinm    r0,r0,3,0,28
	  subc      r0, r3, r0
	  srawi     r3, r0, 0x2
	  mullw     r0, r9, r4
	  add       r4, r12, r11
	  rlwinm    r9,r10,31,1,31
	  add       r4, r4, r9
	  add       r9, r4, r0
	  rlwinm    r0,r8,4,0,27
	  add       r9, r9, r0
	  rlwinm    r7,r7,1,0,30
	  add       r9, r9, r7
	  addze     r3, r3
	  add       r9, r9, r3
	  sth       r6, 0x0(r9)
	  addi      r10, r5, 0x5
	  addi      r9, r5, 0x6
	  lwz       r7, -0x7090(r13)
	  addi      r6, r5, 0x7
	  lhz       r5, 0x1E(r1)
	  lhz       r7, 0x1E(r7)
	  srawi     r7, r7, 0x3
	  addze     r7, r7
	  rlwinm    r7,r7,5,0,26
	  srawi     r8, r7, 0x1
	  addze     r8, r8
	  srawi     r7, r10, 0x3
	  addze     r7, r7
	  mullw     r8, r8, r7
	  srawi     r7, r10, 0x3
	  addze     r7, r7
	  rlwinm    r7,r7,3,0,28
	  add       r8, r4, r8
	  subc      r7, r10, r7
	  add       r8, r8, r0
	  rlwinm    r7,r7,1,0,30
	  add       r8, r8, r7
	  add       r8, r8, r3
	  sth       r5, 0x0(r8)
	  lwz       r7, -0x7090(r13)
	  lhz       r5, 0x20(r1)
	  lhz       r7, 0x1E(r7)
	  srawi     r7, r7, 0x3
	  addze     r7, r7
	  rlwinm    r7,r7,5,0,26
	  srawi     r8, r7, 0x1
	  addze     r8, r8
	  srawi     r7, r9, 0x3
	  addze     r7, r7
	  mullw     r8, r8, r7
	  srawi     r7, r9, 0x3
	  addze     r7, r7
	  rlwinm    r7,r7,3,0,28
	  add       r8, r4, r8
	  subc      r7, r9, r7
	  add       r8, r8, r0
	  rlwinm    r7,r7,1,0,30
	  add       r8, r8, r7
	  add       r8, r8, r3
	  sth       r5, 0x0(r8)
	  lwz       r5, -0x7090(r13)
	  lhz       r5, 0x1E(r5)
	  srawi     r5, r5, 0x3
	  addze     r5, r5
	  rlwinm    r5,r5,5,0,26
	  srawi     r7, r5, 0x1
	  addze     r7, r7
	  srawi     r5, r6, 0x3
	  addze     r5, r5
	  mullw     r5, r7, r5
	  add       r7, r4, r5
	  srawi     r5, r6, 0x3
	  lhz       r4, 0x22(r1)
	  addze     r5, r5
	  rlwinm    r5,r5,3,0,28
	  subc      r5, r6, r5
	  add       r7, r7, r0
	  rlwinm    r0,r5,1,0,30
	  add       r7, r7, r0
	  add       r7, r7, r3
	  sth       r4, 0x0(r7)

	.loc_0x314:
	  mr        r3, r31
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000304
 */
void OSGetFontTexel(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EE4C0
 * Size:	0003B0
 */
void ExpandFontSheet(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r6, -0x7090(r13)
	  lhz       r0, 0x18(r6)
	  addi      r5, r6, 0x2C
	  cmplwi    r0, 0
	  bne-      .loc_0x1D8
	  lwz       r0, 0x28(r6)
	  srawi     r6, r0, 0x1
	  addze     r6, r6
	  subi      r0, r6, 0x1
	  mr.       r10, r0
	  rlwinm    r0,r0,1,0,30
	  add       r8, r4, r0
	  addi      r6, r10, 0x1
	  blt-      .loc_0x390
	  rlwinm.   r0,r6,30,2,31
	  mtctr     r0
	  beq-      .loc_0x180

	.loc_0x50:
	  add       r9, r3, r10
	  lbz       r0, 0x0(r9)
	  subi      r10, r10, 0x1
	  rlwinm    r7,r0,26,30,31
	  rlwinm    r0,r0,28,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, 0x0(r8)
	  lbz       r0, 0x0(r9)
	  add       r9, r3, r10
	  subi      r10, r10, 0x1
	  rlwinm    r7,r0,30,30,31
	  rlwinm    r0,r0,0,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, 0x1(r8)
	  lbz       r0, 0x0(r9)
	  rlwinm    r7,r0,26,30,31
	  rlwinm    r0,r0,28,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, -0x2(r8)
	  lbz       r0, 0x0(r9)
	  add       r9, r3, r10
	  subi      r10, r10, 0x1
	  rlwinm    r7,r0,30,30,31
	  rlwinm    r0,r0,0,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, -0x1(r8)
	  lbz       r0, 0x0(r9)
	  rlwinm    r7,r0,26,30,31
	  rlwinm    r0,r0,28,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, -0x4(r8)
	  lbz       r0, 0x0(r9)
	  add       r9, r3, r10
	  subi      r10, r10, 0x1
	  rlwinm    r7,r0,30,30,31
	  rlwinm    r0,r0,0,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, -0x3(r8)
	  lbz       r0, 0x0(r9)
	  rlwinm    r7,r0,26,30,31
	  rlwinm    r0,r0,28,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, -0x6(r8)
	  lbz       r0, 0x0(r9)
	  rlwinm    r7,r0,30,30,31
	  rlwinm    r0,r0,0,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, -0x5(r8)
	  subi      r8, r8, 0x8
	  bdnz+     .loc_0x50
	  andi.     r6, r6, 0x3
	  beq-      .loc_0x390

	.loc_0x180:
	  mtctr     r6

	.loc_0x184:
	  add       r9, r3, r10
	  lbz       r0, 0x0(r9)
	  subi      r10, r10, 0x1
	  rlwinm    r7,r0,26,30,31
	  rlwinm    r0,r0,28,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, 0x0(r8)
	  lbz       r0, 0x0(r9)
	  rlwinm    r7,r0,30,30,31
	  rlwinm    r0,r0,0,30,31
	  lbzx      r7, r5, r7
	  lbzx      r0, r5, r0
	  rlwinm    r0,r0,0,28,31
	  rlwimi    r0,r7,0,24,27
	  stb       r0, 0x1(r8)
	  subi      r8, r8, 0x2
	  bdnz+     .loc_0x184
	  b         .loc_0x390

	.loc_0x1D8:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x390
	  lwz       r0, 0x28(r6)
	  srawi     r6, r0, 0x2
	  addze     r6, r6
	  subic.    r9, r6, 0x1
	  rlwinm    r0,r9,2,0,29
	  add       r7, r4, r0
	  addi      r6, r9, 0x1
	  blt-      .loc_0x390
	  rlwinm.   r0,r6,30,2,31
	  mtctr     r0
	  beq-      .loc_0x33C

	.loc_0x20C:
	  add       r8, r3, r9
	  lbz       r0, 0x0(r8)
	  subi      r9, r9, 0x1
	  rlwinm    r0,r0,26,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x0(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,28,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x1(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,30,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x2(r7)
	  lbz       r0, 0x0(r8)
	  add       r8, r3, r9
	  subi      r9, r9, 0x1
	  rlwinm    r0,r0,0,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x3(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,26,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x4(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,28,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x3(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,30,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x2(r7)
	  lbz       r0, 0x0(r8)
	  add       r8, r3, r9
	  subi      r9, r9, 0x1
	  rlwinm    r0,r0,0,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x1(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,26,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x8(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,28,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x7(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,30,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x6(r7)
	  lbz       r0, 0x0(r8)
	  add       r8, r3, r9
	  subi      r9, r9, 0x1
	  rlwinm    r0,r0,0,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x5(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,26,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0xC(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,28,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0xB(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,30,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0xA(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,0,30,31
	  lbzx      r0, r5, r0
	  stb       r0, -0x9(r7)
	  subi      r7, r7, 0x10
	  bdnz+     .loc_0x20C
	  andi.     r6, r6, 0x3
	  beq-      .loc_0x390

	.loc_0x33C:
	  mtctr     r6

	.loc_0x340:
	  add       r8, r3, r9
	  lbz       r0, 0x0(r8)
	  subi      r9, r9, 0x1
	  rlwinm    r0,r0,26,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x0(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,28,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x1(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,30,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x2(r7)
	  lbz       r0, 0x0(r8)
	  rlwinm    r0,r0,0,30,31
	  lbzx      r0, r5, r0
	  stb       r0, 0x3(r7)
	  subi      r7, r7, 0x4
	  bdnz+     .loc_0x340

	.loc_0x390:
	  lwz       r5, -0x7090(r13)
	  mr        r3, r4
	  lwz       r4, 0x28(r5)
	  bl        -0x2114
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EE870
 * Size:	0000E0
 */
u8 OSInitFont(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lhz       r0, -0x7C90(r13)
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x1C
	  b         .loc_0x64

	.loc_0x1C:
	  lis       r4, 0x8000
	  lwz       r0, 0xCC(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x34
	  blt-      .loc_0x58
	  b         .loc_0x58

	.loc_0x34:
	  lis       r4, 0xCC00
	  lhz       r0, 0x206E(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x4C
	  li        r0, 0x1
	  b         .loc_0x50

	.loc_0x4C:
	  li        r0, 0

	.loc_0x50:
	  sth       r0, -0x7C90(r13)
	  b         .loc_0x60

	.loc_0x58:
	  li        r0, 0
	  sth       r0, -0x7C90(r13)

	.loc_0x60:
	  lhz       r0, -0x7C90(r13)

	.loc_0x64:
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x7C
	  addis     r4, r3, 0xD
	  addi      r4, r4, 0x3F00
	  b         .loc_0x84

	.loc_0x7C:
	  addis     r4, r3, 0x2
	  subi      r4, r4, 0x2EE0

	.loc_0x84:
	  rlwinm    r4,r4,0,0,26
	  bl        -0x76C
	  cmplwi    r3, 0
	  bne-      .loc_0x9C
	  li        r3, 0
	  b         .loc_0xD0

	.loc_0x9C:
	  lwz       r5, -0x7090(r13)
	  lwz       r0, 0x24(r5)
	  add       r0, r5, r0
	  stw       r0, -0x708C(r13)
	  lwz       r3, -0x708C(r13)
	  addi      r0, r3, 0x1F
	  rlwinm    r0,r0,0,0,26
	  stw       r0, -0x708C(r13)
	  lwz       r0, 0x24(r5)
	  lwz       r4, -0x708C(r13)
	  add       r3, r5, r0
	  bl        -0x478
	  li        r3, 0x1

	.loc_0xD0:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EE950
 * Size:	0001A8
 */
char* OSGetFontTexture(const char* string, void** image, s32* x, s32* y, s32* width)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r27, 0x24(r1)
	  mr        r27, r3
	  addi      r28, r4, 0
	  addi      r29, r5, 0
	  addi      r30, r6, 0
	  addi      r31, r7, 0
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  mr        r3, r0
	  bne-      .loc_0x44
	  li        r0, 0
	  stw       r0, 0x0(r28)
	  mr        r3, r27
	  b         .loc_0x194

	.loc_0x44:
	  lhz       r0, -0x7C90(r13)
	  addi      r27, r27, 0x1
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x58
	  b         .loc_0xA0

	.loc_0x58:
	  lis       r4, 0x8000
	  lwz       r0, 0xCC(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x70
	  blt-      .loc_0x94
	  b         .loc_0x94

	.loc_0x70:
	  lis       r4, 0xCC00
	  lhz       r0, 0x206E(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x88
	  li        r0, 0x1
	  b         .loc_0x8C

	.loc_0x88:
	  li        r0, 0

	.loc_0x8C:
	  sth       r0, -0x7C90(r13)
	  b         .loc_0x9C

	.loc_0x94:
	  li        r0, 0
	  sth       r0, -0x7C90(r13)

	.loc_0x9C:
	  lhz       r0, -0x7C90(r13)

	.loc_0xA0:
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x11C
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x81
	  li        r4, 0x1
	  li        r5, 0
	  blt-      .loc_0xCC
	  cmplwi    r0, 0x9F
	  bgt-      .loc_0xCC
	  mr        r5, r4

	.loc_0xCC:
	  cmpwi     r5, 0
	  bne-      .loc_0xFC
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xE0
	  li        r5, 0
	  blt-      .loc_0xF0
	  cmplwi    r0, 0xFC
	  bgt-      .loc_0xF0
	  li        r5, 0x1

	.loc_0xF0:
	  cmpwi     r5, 0
	  bne-      .loc_0xFC
	  li        r4, 0

	.loc_0xFC:
	  cmpwi     r4, 0
	  beq-      .loc_0x11C
	  lbz       r4, 0x0(r27)
	  extsb.    r0, r4
	  beq-      .loc_0x11C
	  rlwinm    r0,r3,8,8,23
	  or        r3, r0, r4
	  addi      r27, r27, 0x1

	.loc_0x11C:
	  bl        -0xCD4
	  lwz       r0, -0x7084(r13)
	  cmplwi    r31, 0
	  lwz       r4, -0x7090(r13)
	  divw      r6, r3, r0
	  lwz       r5, -0x708C(r13)
	  lwz       r0, 0x14(r4)
	  mullw     r0, r0, r6
	  add       r0, r5, r0
	  stw       r0, 0x0(r28)
	  lwz       r0, -0x7084(r13)
	  lwz       r5, -0x7090(r13)
	  mullw     r4, r6, r0
	  lhz       r6, 0x1A(r5)
	  lhz       r0, 0x10(r5)
	  sub       r5, r3, r4
	  divw      r7, r5, r6
	  mullw     r4, r7, r6
	  sub       r4, r5, r4
	  mullw     r0, r4, r0
	  stw       r0, 0x0(r29)
	  lwz       r4, -0x7090(r13)
	  lhz       r0, 0x12(r4)
	  mullw     r0, r7, r0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x190
	  lwz       r4, -0x7088(r13)
	  lbzx      r0, r4, r3
	  stw       r0, 0x0(r31)

	.loc_0x190:
	  mr        r3, r27

	.loc_0x194:
	  lmw       r27, 0x24(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EEAF8
 * Size:	000140
 */
char* OSGetFontWidth(const char* string, s32* width)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  mr        r3, r0
	  bne-      .loc_0x34
	  mr        r3, r30
	  b         .loc_0x128

	.loc_0x34:
	  lhz       r0, -0x7C90(r13)
	  addi      r30, r30, 0x1
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x48
	  b         .loc_0x90

	.loc_0x48:
	  lis       r4, 0x8000
	  lwz       r0, 0xCC(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x60
	  blt-      .loc_0x84
	  b         .loc_0x84

	.loc_0x60:
	  lis       r4, 0xCC00
	  lhz       r0, 0x206E(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x78
	  li        r0, 0x1
	  b         .loc_0x7C

	.loc_0x78:
	  li        r0, 0

	.loc_0x7C:
	  sth       r0, -0x7C90(r13)
	  b         .loc_0x8C

	.loc_0x84:
	  li        r0, 0
	  sth       r0, -0x7C90(r13)

	.loc_0x8C:
	  lhz       r0, -0x7C90(r13)

	.loc_0x90:
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x10C
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x81
	  li        r4, 0x1
	  li        r5, 0
	  blt-      .loc_0xBC
	  cmplwi    r0, 0x9F
	  bgt-      .loc_0xBC
	  mr        r5, r4

	.loc_0xBC:
	  cmpwi     r5, 0
	  bne-      .loc_0xEC
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0xE0
	  li        r5, 0
	  blt-      .loc_0xE0
	  cmplwi    r0, 0xFC
	  bgt-      .loc_0xE0
	  li        r5, 0x1

	.loc_0xE0:
	  cmpwi     r5, 0
	  bne-      .loc_0xEC
	  li        r4, 0

	.loc_0xEC:
	  cmpwi     r4, 0
	  beq-      .loc_0x10C
	  lbz       r4, 0x0(r30)
	  extsb.    r0, r4
	  beq-      .loc_0x10C
	  rlwinm    r0,r3,8,8,23
	  or        r3, r0, r4
	  addi      r30, r30, 0x1

	.loc_0x10C:
	  cmplwi    r31, 0
	  beq-      .loc_0x124
	  bl        -0xE74
	  lwz       r4, -0x7088(r13)
	  lbzx      r0, r4, r3
	  stw       r0, 0x0(r31)

	.loc_0x124:
	  mr        r3, r30

	.loc_0x128:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}
