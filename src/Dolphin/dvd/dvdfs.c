#include "types.h"
#include "Dolphin/dvd.h"

/*
 * --INFO--
 * Address:	800DC12C
 * Size:	000038
 */
void __DVDFSInit(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  stw       r3, -0x71F0(r13)
	  lwz       r0, 0x38(r3)
	  stw       r0, -0x71EC(r13)
	  lwz       r3, -0x71EC(r13)
	  cmplwi    r3, 0
	  beqlr-
	  lwz       r0, 0x8(r3)
	  stw       r0, -0x71E4(r13)
	  lwz       r0, -0x71E4(r13)
	  mulli     r0, r0, 0xC
	  add       r0, r3, r0
	  stw       r0, -0x71E8(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void isSame(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DC164
 * Size:	0002F4
 */
int DVDConvertPathToEntrynum(char*)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x48(r1)
	  stmw      r20, 0x18(r1)
	  mr        r23, r3
	  lis       r3, 0x804A
	  addi      r25, r23, 0
	  addi      r31, r3, 0x7AF8
	  lwz       r26, -0x71E0(r13)

	.loc_0x24:
	  lbz       r3, 0x0(r23)
	  extsb.    r0, r3
	  bne-      .loc_0x38
	  mr        r3, r26
	  b         .loc_0x2E0

	.loc_0x38:
	  extsb     r0, r3
	  cmpwi     r0, 0x2F
	  bne-      .loc_0x50
	  li        r26, 0
	  addi      r23, r23, 0x1
	  b         .loc_0x24

	.loc_0x50:
	  cmpwi     r0, 0x2E
	  bne-      .loc_0xC8
	  lbz       r3, 0x1(r23)
	  extsb     r0, r3
	  cmpwi     r0, 0x2E
	  bne-      .loc_0xA8
	  lbz       r3, 0x2(r23)
	  cmpwi     r3, 0x2F
	  bne-      .loc_0x8C
	  mulli     r3, r26, 0xC
	  lwz       r4, -0x71EC(r13)
	  addi      r0, r3, 0x4
	  lwzx      r26, r4, r0
	  addi      r23, r23, 0x3
	  b         .loc_0x24

	.loc_0x8C:
	  extsb.    r0, r3
	  bne-      .loc_0xC8
	  mulli     r0, r26, 0xC
	  lwz       r3, -0x71EC(r13)
	  add       r3, r3, r0
	  lwz       r3, 0x4(r3)
	  b         .loc_0x2E0

	.loc_0xA8:
	  cmpwi     r0, 0x2F
	  bne-      .loc_0xB8
	  addi      r23, r23, 0x2
	  b         .loc_0x24

	.loc_0xB8:
	  extsb.    r0, r3
	  bne-      .loc_0xC8
	  mr        r3, r26
	  b         .loc_0x2E0

	.loc_0xC8:
	  lwz       r0, -0x71DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x17C
	  addi      r28, r23, 0
	  li        r5, 0
	  li        r4, 0
	  b         .loc_0x128

	.loc_0xE4:
	  extsb     r0, r3
	  cmpwi     r0, 0x2E
	  bne-      .loc_0x118
	  sub       r0, r28, r23
	  cmpwi     r0, 0x8
	  bgt-      .loc_0x104
	  cmpwi     r5, 0x1
	  bne-      .loc_0x10C

	.loc_0x104:
	  li        r4, 0x1
	  b         .loc_0x140

	.loc_0x10C:
	  addi      r24, r28, 0x1
	  li        r5, 0x1
	  b         .loc_0x124

	.loc_0x118:
	  cmpwi     r0, 0x20
	  bne-      .loc_0x124
	  li        r4, 0x1

	.loc_0x124:
	  addi      r28, r28, 0x1

	.loc_0x128:
	  lbz       r3, 0x0(r28)
	  extsb.    r0, r3
	  beq-      .loc_0x140
	  extsb     r0, r3
	  cmpwi     r0, 0x2F
	  bne+      .loc_0xE4

	.loc_0x140:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x158
	  sub       r0, r28, r24
	  cmpwi     r0, 0x3
	  ble-      .loc_0x158
	  li        r4, 0x1

	.loc_0x158:
	  cmpwi     r4, 0
	  beq-      .loc_0x1A0
	  addi      r5, r31, 0
	  crclr     6, 0x6
	  addi      r6, r25, 0
	  subi      r3, r13, 0x7D50
	  li        r4, 0x183
	  bl        0x11494
	  b         .loc_0x1A0

	.loc_0x17C:
	  mr        r28, r23
	  b         .loc_0x188

	.loc_0x184:
	  addi      r28, r28, 0x1

	.loc_0x188:
	  lbz       r3, 0x0(r28)
	  extsb.    r0, r3
	  beq-      .loc_0x1A0
	  extsb     r0, r3
	  cmpwi     r0, 0x2F
	  bne+      .loc_0x184

	.loc_0x1A0:
	  lbz       r0, 0x0(r28)
	  extsb.    r0, r0
	  bne-      .loc_0x1B4
	  li        r30, 0
	  b         .loc_0x1B8

	.loc_0x1B4:
	  li        r30, 0x1

	.loc_0x1B8:
	  mulli     r29, r26, 0xC
	  sub       r27, r28, r23
	  addi      r26, r26, 0x1
	  b         .loc_0x2A8

	.loc_0x1C8:
	  mulli     r28, r26, 0xC
	  lwzx      r4, r3, r28
	  rlwinm.   r0,r4,0,0,7
	  bne-      .loc_0x1E0
	  li        r0, 0
	  b         .loc_0x1E4

	.loc_0x1E0:
	  li        r0, 0x1

	.loc_0x1E4:
	  cmpwi     r0, 0
	  bne-      .loc_0x1F4
	  cmpwi     r30, 0x1
	  beq-      .loc_0x270

	.loc_0x1F4:
	  lwz       r3, -0x71E8(r13)
	  rlwinm    r0,r4,0,8,31
	  addi      r21, r23, 0
	  add       r20, r3, r0
	  b         .loc_0x23C

	.loc_0x208:
	  lbz       r0, 0x0(r20)
	  addi      r20, r20, 0x1
	  extsb     r3, r0
	  bl        -0x16114
	  lbz       r0, 0x0(r21)
	  addi      r22, r3, 0
	  addi      r21, r21, 0x1
	  extsb     r3, r0
	  bl        -0x16128
	  cmpw      r3, r22
	  beq-      .loc_0x23C
	  li        r0, 0
	  b         .loc_0x268

	.loc_0x23C:
	  lbz       r0, 0x0(r20)
	  extsb.    r0, r0
	  bne+      .loc_0x208
	  lbz       r3, 0x0(r21)
	  cmpwi     r3, 0x2F
	  beq-      .loc_0x25C
	  extsb.    r0, r3
	  bne-      .loc_0x264

	.loc_0x25C:
	  li        r0, 0x1
	  b         .loc_0x268

	.loc_0x264:
	  li        r0, 0

	.loc_0x268:
	  cmpwi     r0, 0x1
	  beq-      .loc_0x2C4

	.loc_0x270:
	  lwz       r0, -0x71EC(r13)
	  add       r3, r0, r28
	  lwz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x28C
	  li        r0, 0
	  b         .loc_0x290

	.loc_0x28C:
	  li        r0, 0x1

	.loc_0x290:
	  cmpwi     r0, 0
	  beq-      .loc_0x2A0
	  lwz       r0, 0x8(r3)
	  b         .loc_0x2A4

	.loc_0x2A0:
	  addi      r0, r26, 0x1

	.loc_0x2A4:
	  mr        r26, r0

	.loc_0x2A8:
	  lwz       r3, -0x71EC(r13)
	  addi      r0, r3, 0x8
	  lwzx      r0, r29, r0
	  cmplw     r26, r0
	  blt+      .loc_0x1C8
	  li        r3, -0x1
	  b         .loc_0x2E0

	.loc_0x2C4:
	  cmpwi     r30, 0
	  bne-      .loc_0x2D4
	  mr        r3, r26
	  b         .loc_0x2E0

	.loc_0x2D4:
	  add       r23, r27, r23
	  addi      r23, r23, 0x1
	  b         .loc_0x24

	.loc_0x2E0:
	  lmw       r20, 0x18(r1)
	  lwz       r0, 0x4C(r1)
	  addi      r1, r1, 0x48
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DC458
 * Size:	000074
 */
BOOL DVDFastOpen(long, struct DVDPlayer*)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  blt-      .loc_0x3C
	  lwz       r0, -0x71E4(r13)
	  cmplw     r3, r0
	  bge-      .loc_0x3C
	  mulli     r6, r3, 0xC
	  lwz       r3, -0x71EC(r13)
	  lwzx      r0, r3, r6
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x30
	  li        r0, 0
	  b         .loc_0x34

	.loc_0x30:
	  li        r0, 0x1

	.loc_0x34:
	  cmpwi     r0, 0
	  beq-      .loc_0x44

	.loc_0x3C:
	  li        r3, 0
	  blr

	.loc_0x44:
	  add       r3, r3, r6
	  lwz       r5, 0x4(r3)
	  li        r0, 0
	  li        r3, 0x1
	  stw       r5, 0x30(r4)
	  lwz       r5, -0x71EC(r13)
	  add       r5, r5, r6
	  lwz       r5, 0x8(r5)
	  stw       r5, 0x34(r4)
	  stw       r0, 0x38(r4)
	  stw       r0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DC4CC
 * Size:	0000C8
 */
BOOL DVDOpen(const char*, struct DVDPlayer*)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x98(r1)
	  stw       r31, 0x94(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x90(r1)
	  addi      r30, r3, 0
	  bl        -0x384
	  cmpwi     r3, 0
	  bge-      .loc_0x54
	  addi      r3, r1, 0x10
	  li        r4, 0x80
	  bl        0x370
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r3, r3, 0x7BC0
	  addi      r4, r30, 0
	  addi      r5, r1, 0x10
	  bl        0x111D8
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x54:
	  mulli     r5, r3, 0xC
	  lwz       r3, -0x71EC(r13)
	  lwzx      r0, r3, r5
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x70
	  li        r0, 0
	  b         .loc_0x74

	.loc_0x70:
	  li        r0, 0x1

	.loc_0x74:
	  cmpwi     r0, 0
	  beq-      .loc_0x84
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x84:
	  add       r3, r3, r5
	  lwz       r4, 0x4(r3)
	  li        r0, 0
	  li        r3, 0x1
	  stw       r4, 0x30(r31)
	  lwz       r4, -0x71EC(r13)
	  add       r4, r4, r5
	  lwz       r4, 0x8(r4)
	  stw       r4, 0x34(r31)
	  stw       r0, 0x38(r31)
	  stw       r0, 0xC(r31)

	.loc_0xB0:
	  lwz       r0, 0x9C(r1)
	  lwz       r31, 0x94(r1)
	  lwz       r30, 0x90(r1)
	  addi      r1, r1, 0x98
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DC594
 * Size:	000024
 */
BOOL DVDClose(struct DVDPlayer* player)
{
	DVDCancel(player);
	return TRUE;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0x2B98
	  li        r3, 0x1
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void myStrncpy(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DC5B8
 * Size:	000160
 */
void entryToPath(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x24(r1)
	  addi      r29, r4, 0
	  stw       r28, 0x20(r1)
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x140

	.loc_0x34:
	  lwz       r4, -0x71EC(r13)
	  mulli     r3, r3, 0xC
	  lwz       r6, -0x71E8(r13)
	  addi      r5, r4, 0x4
	  lwzx      r0, r4, r3
	  lwzx      r3, r5, r3
	  rlwinm    r0,r0,0,8,31
	  cmplwi    r3, 0
	  add       r31, r6, r0
	  bne-      .loc_0x64
	  li        r3, 0
	  b         .loc_0xE0

	.loc_0x64:
	  mulli     r3, r3, 0xC
	  lwzx      r0, r4, r3
	  mr        r4, r29
	  lwzx      r3, r5, r3
	  addi      r5, r30, 0
	  rlwinm    r0,r0,0,8,31
	  add       r28, r6, r0
	  bl        .loc_0x0
	  cmplw     r3, r30
	  bne-      .loc_0x90
	  b         .loc_0xE0

	.loc_0x90:
	  addi      r0, r3, 0
	  addi      r3, r3, 0x1
	  li        r4, 0x2F
	  sub       r6, r30, r3
	  stbx      r4, r29, r0
	  addi      r4, r6, 0
	  add       r5, r29, r3
	  b         .loc_0xC4

	.loc_0xB0:
	  lbz       r0, 0x0(r28)
	  addi      r28, r28, 0x1
	  subi      r4, r4, 0x1
	  stb       r0, 0x0(r5)
	  addi      r5, r5, 0x1

	.loc_0xC4:
	  cmplwi    r4, 0
	  beq-      .loc_0xD8
	  lbz       r0, 0x0(r28)
	  extsb.    r0, r0
	  bne+      .loc_0xB0

	.loc_0xD8:
	  sub       r0, r6, r4
	  add       r3, r3, r0

	.loc_0xE0:
	  cmplw     r3, r30
	  bne-      .loc_0xEC
	  b         .loc_0x140

	.loc_0xEC:
	  addi      r0, r3, 0
	  addi      r3, r3, 0x1
	  li        r4, 0x2F
	  sub       r7, r30, r3
	  stbx      r4, r29, r0
	  addi      r6, r31, 0
	  addi      r4, r7, 0
	  add       r5, r29, r3
	  b         .loc_0x124

	.loc_0x110:
	  lbz       r0, 0x0(r6)
	  addi      r6, r6, 0x1
	  subi      r4, r4, 0x1
	  stb       r0, 0x0(r5)
	  addi      r5, r5, 0x1

	.loc_0x124:
	  cmplwi    r4, 0
	  beq-      .loc_0x138
	  lbz       r0, 0x0(r6)
	  extsb.    r0, r0
	  bne+      .loc_0x110

	.loc_0x138:
	  sub       r0, r7, r4
	  add       r3, r3, r0

	.loc_0x140:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DC718
 * Size:	000154
 */
BOOL DVDConvertEntrynumToPath(int, char*)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r5, 0
	  stw       r30, 0x20(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x1C(r1)
	  mr.       r29, r3
	  stw       r28, 0x18(r1)
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0xBC

	.loc_0x34:
	  mulli     r3, r29, 0xC
	  lwz       r4, -0x71EC(r13)
	  lwz       r6, -0x71E8(r13)
	  lwzx      r0, r4, r3
	  add       r3, r4, r3
	  lwz       r3, 0x4(r3)
	  addi      r4, r30, 0
	  rlwinm    r0,r0,0,8,31
	  addi      r5, r31, 0
	  add       r28, r6, r0
	  bl        -0x1BC
	  cmplw     r3, r31
	  bne-      .loc_0x6C
	  b         .loc_0xBC

	.loc_0x6C:
	  addi      r0, r3, 0
	  addi      r3, r3, 0x1
	  li        r4, 0x2F
	  sub       r6, r31, r3
	  stbx      r4, r30, r0
	  addi      r4, r6, 0
	  add       r5, r30, r3
	  b         .loc_0xA0

	.loc_0x8C:
	  lbz       r0, 0x0(r28)
	  addi      r28, r28, 0x1
	  subi      r4, r4, 0x1
	  stb       r0, 0x0(r5)
	  addi      r5, r5, 0x1

	.loc_0xA0:
	  cmplwi    r4, 0
	  beq-      .loc_0xB4
	  lbz       r0, 0x0(r28)
	  extsb.    r0, r0
	  bne+      .loc_0x8C

	.loc_0xB4:
	  sub       r0, r6, r4
	  add       r3, r3, r0

	.loc_0xBC:
	  cmplw     r3, r31
	  bne-      .loc_0xD8
	  add       r3, r30, r31
	  li        r0, 0
	  stb       r0, -0x1(r3)
	  li        r3, 0
	  b         .loc_0x134

	.loc_0xD8:
	  mulli     r0, r29, 0xC
	  lwz       r4, -0x71EC(r13)
	  lwzx      r0, r4, r0
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0xF4
	  li        r0, 0
	  b         .loc_0xF8

	.loc_0xF4:
	  li        r0, 0x1

	.loc_0xF8:
	  cmpwi     r0, 0
	  beq-      .loc_0x128
	  subi      r0, r31, 0x1
	  cmplw     r3, r0
	  bne-      .loc_0x11C
	  li        r0, 0
	  stbx      r0, r30, r3
	  li        r3, 0
	  b         .loc_0x134

	.loc_0x11C:
	  li        r0, 0x2F
	  stbx      r0, r30, r3
	  addi      r3, r3, 0x1

	.loc_0x128:
	  li        r0, 0
	  stbx      r0, r30, r3
	  li        r3, 0x1

	.loc_0x134:
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
 * Address:	800DC86C
 * Size:	0000C4
 */
void DVDGetCurrentDir(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  addi      r30, r4, 0
	  addi      r5, r30, 0
	  stw       r29, 0x14(r1)
	  addi      r29, r3, 0
	  addi      r4, r29, 0
	  lwz       r31, -0x71E0(r13)
	  addi      r3, r31, 0
	  bl        -0x2E4
	  cmplw     r3, r30
	  bne-      .loc_0x4C
	  li        r0, 0
	  add       r3, r29, r30
	  stb       r0, -0x1(r3)
	  b         .loc_0xA4

	.loc_0x4C:
	  mulli     r0, r31, 0xC
	  lwz       r4, -0x71EC(r13)
	  lwzx      r0, r4, r0
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x68
	  li        r0, 0
	  b         .loc_0x6C

	.loc_0x68:
	  li        r0, 0x1

	.loc_0x6C:
	  cmpwi     r0, 0
	  beq-      .loc_0x98
	  subi      r0, r30, 0x1
	  cmplw     r3, r0
	  bne-      .loc_0x8C
	  li        r0, 0
	  stbx      r0, r29, r3
	  b         .loc_0xA4

	.loc_0x8C:
	  li        r0, 0x2F
	  stbx      r0, r29, r3
	  addi      r3, r3, 0x1

	.loc_0x98:
	  li        r0, 0
	  stbx      r0, r29, r3
	  li        r0, 0x1

	.loc_0xA4:
	  mr        r3, r0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DC930
 * Size:	000060
 */
int DVDChangeDir(char*)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x7D8
	  cmpwi     r3, 0
	  blt-      .loc_0x40
	  mulli     r0, r3, 0xC
	  lwz       r4, -0x71EC(r13)
	  lwzx      r0, r4, r0
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x34
	  li        r0, 0
	  b         .loc_0x38

	.loc_0x34:
	  li        r0, 0x1

	.loc_0x38:
	  cmpwi     r0, 0
	  bne-      .loc_0x48

	.loc_0x40:
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x48:
	  stw       r3, -0x71E0(r13)
	  li        r3, 0x1

	.loc_0x50:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DC990
 * Size:	0000C0
 */
BOOL DVDReadAsyncPrio(struct DVDPlayer*, void*, long, long, DVDDoneReadCallback*, int)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r26, 0x20(r1)
	  mr.       r29, r6
	  addi      r26, r3, 0
	  addi      r27, r4, 0
	  addi      r28, r5, 0
	  addi      r30, r7, 0
	  addi      r31, r8, 0
	  blt-      .loc_0x38
	  lwz       r0, 0x34(r26)
	  cmplw     r29, r0
	  ble-      .loc_0x50

	.loc_0x38:
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7BF8
	  subi      r3, r13, 0x7D50
	  li        r4, 0x2EE
	  bl        0x10D90

	.loc_0x50:
	  add.      r4, r29, r28
	  blt-      .loc_0x68
	  lwz       r3, 0x34(r26)
	  addi      r0, r3, 0x20
	  cmplw     r4, r0
	  blt-      .loc_0x80

	.loc_0x68:
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7BF8
	  subi      r3, r13, 0x7D50
	  li        r4, 0x2F4
	  bl        0x10D60

	.loc_0x80:
	  stw       r30, 0x38(r26)
	  lis       r3, 0x800E
	  subi      r7, r3, 0x35B0
	  lwz       r0, 0x30(r26)
	  addi      r3, r26, 0
	  addi      r4, r27, 0
	  addi      r5, r28, 0
	  addi      r8, r31, 0
	  add       r6, r0, r29
	  bl        0x1EE0
	  lmw       r26, 0x20(r1)
	  li        r3, 0x1
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCA50
 * Size:	000030
 */
void cbForReadAsync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r12, 0x38(r4)
	  cmplwi    r12, 0
	  beq-      .loc_0x20
	  mtlr      r12
	  blrl

	.loc_0x20:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCA80
 * Size:	000118
 */
int DVDReadPrio(struct DVDPlayer* player, void* readBuffer, s32 byteCount, u32 startOffset, s32 queueIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r27, 0x24(r1)
	  mr.       r29, r6
	  addi      r31, r3, 0
	  addi      r27, r4, 0
	  addi      r28, r5, 0
	  addi      r30, r7, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x34(r31)
	  cmplw     r29, r0
	  ble-      .loc_0x4C

	.loc_0x34:
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7C2C
	  subi      r3, r13, 0x7D50
	  li        r4, 0x334
	  bl        0x10CA4

	.loc_0x4C:
	  add.      r4, r29, r28
	  blt-      .loc_0x64
	  lwz       r3, 0x34(r31)
	  addi      r0, r3, 0x20
	  cmplw     r4, r0
	  blt-      .loc_0x7C

	.loc_0x64:
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r5, r3, 0x7C2C
	  subi      r3, r13, 0x7D50
	  li        r4, 0x33A
	  bl        0x10C74

	.loc_0x7C:
	  lwz       r0, 0x30(r31)
	  lis       r4, 0x800E
	  subi      r7, r4, 0x3468
	  addi      r3, r31, 0
	  addi      r4, r27, 0
	  addi      r5, r28, 0
	  addi      r8, r30, 0
	  add       r6, r0, r29
	  bl        0x1DF8
	  cmpwi     r3, 0
	  bne-      .loc_0xB0
	  li        r3, -0x1
	  b         .loc_0x104

	.loc_0xB0:
	  bl        0x12108
	  mr        r30, r3

	.loc_0xB8:
	  lwz       r0, 0xC(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xCC
	  lwz       r31, 0x20(r31)
	  b         .loc_0xF8

	.loc_0xCC:
	  cmpwi     r0, -0x1
	  bne-      .loc_0xDC
	  li        r31, -0x1
	  b         .loc_0xF8

	.loc_0xDC:
	  cmpwi     r0, 0xA
	  bne-      .loc_0xEC
	  li        r31, -0x3
	  b         .loc_0xF8

	.loc_0xEC:
	  subi      r3, r13, 0x71D8
	  bl        0x15D7C
	  b         .loc_0xB8

	.loc_0xF8:
	  mr        r3, r30
	  bl        0x120E4
	  mr        r3, r31

	.loc_0x104:
	  lmw       r27, 0x24(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCB98
 * Size:	000024
 */
void cbForReadSync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  subi      r3, r13, 0x71D8
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0x15E30
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void DVDSeekAsyncPrio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void cbForSeekAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void DVDSeekPrio(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void cbForSeekSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void DVDGetFileInfoStatus(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void DVDFastOpenDir(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DCBBC
 * Size:	0000C0
 */
BOOL DVDOpenDir(char*, OSFstEntry*)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x98(r1)
	  stw       r31, 0x94(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x90(r1)
	  addi      r30, r3, 0
	  bl        -0xA74
	  cmpwi     r3, 0
	  bge-      .loc_0x58
	  lwz       r3, -0x71E0(r13)
	  addi      r4, r1, 0x10
	  li        r5, 0x80
	  bl        -0x4D8
	  lis       r3, 0x804A
	  crclr     6, 0x6
	  addi      r3, r3, 0x7C5C
	  addi      r4, r30, 0
	  addi      r5, r1, 0x10
	  bl        0x10AE4
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x58:
	  mulli     r5, r3, 0xC
	  lwz       r4, -0x71EC(r13)
	  lwzx      r0, r4, r5
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x74
	  li        r0, 0
	  b         .loc_0x78

	.loc_0x74:
	  li        r0, 0x1

	.loc_0x78:
	  cmpwi     r0, 0
	  bne-      .loc_0x88
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x88:
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x1
	  li        r3, 0x1
	  stw       r0, 0x4(r31)
	  lwz       r0, -0x71EC(r13)
	  add       r4, r0, r5
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x8(r31)

	.loc_0xA8:
	  lwz       r0, 0x9C(r1)
	  lwz       r31, 0x94(r1)
	  lwz       r30, 0x90(r1)
	  addi      r1, r1, 0x98
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCC7C
 * Size:	0000A4
 */
BOOL DVDReadDir(OSFstEntry*, OSFstEntry*)
{
	/*
	.loc_0x0:
	  lwz       r7, 0x4(r3)
	  lwz       r0, 0x0(r3)
	  cmplw     r7, r0
	  ble-      .loc_0x1C
	  lwz       r0, 0x8(r3)
	  cmplw     r0, r7
	  bgt-      .loc_0x24

	.loc_0x1C:
	  li        r3, 0
	  blr

	.loc_0x24:
	  stw       r7, 0x0(r4)
	  mulli     r8, r7, 0xC
	  lwz       r5, -0x71EC(r13)
	  lwzx      r0, r5, r8
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x44
	  li        r0, 0
	  b         .loc_0x48

	.loc_0x44:
	  li        r0, 0x1

	.loc_0x48:
	  stw       r0, 0x4(r4)
	  lwz       r5, -0x71EC(r13)
	  lwz       r6, -0x71E8(r13)
	  lwzx      r0, r5, r8
	  rlwinm    r0,r0,0,8,31
	  add       r0, r6, r0
	  stw       r0, 0x8(r4)
	  lwz       r4, -0x71EC(r13)
	  lwzx      r0, r4, r8
	  rlwinm.   r0,r0,0,0,7
	  bne-      .loc_0x7C
	  li        r0, 0
	  b         .loc_0x80

	.loc_0x7C:
	  li        r0, 0x1

	.loc_0x80:
	  cmpwi     r0, 0
	  beq-      .loc_0x94
	  add       r4, r4, r8
	  lwz       r0, 0x8(r4)
	  b         .loc_0x98

	.loc_0x94:
	  addi      r0, r7, 0x1

	.loc_0x98:
	  stw       r0, 0x4(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DCD20
 * Size:	000008
 */
BOOL DVDCloseDir(OSFstEntry* entry) { return TRUE; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void DVDRewindDir(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void DVDGetFSTLocation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void DVDPrepareStreamAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void cbForPrepareStreamAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void DVDPrepareStream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void cbForPrepareStreamSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void DVDGetTransferredSize(void)
{
	// UNUSED FUNCTION
}
