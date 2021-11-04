#include "types.h"

namespace og {

/*
 * --INFO--
 * Address:	8031A3C8
 * Size:	0000E8
 */
newScreen::ObjFloor::ObjFloor(char const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x139704
	  lis       r4, 0x804E
	  lis       r3, 0x8051
	  subi      r4, r4, 0x7200
	  lfs       f2, -0x9C8(r2)
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  li        r7, -0x1
	  li        r6, 0
	  stw       r0, 0x18(r30)
	  addi      r5, r3, 0x3D60
	  li        r0, 0xFF
	  lfs       f0, -0x9C4(r2)
	  stfs      f2, 0x58(r30)
	  addi      r3, r30, 0x3C
	  subi      r4, r2, 0x9C0
	  stfs      f2, 0x5C(r30)
	  stw       r7, 0x68(r30)
	  stw       r31, 0x14(r30)
	  stw       r6, 0x38(r30)
	  stw       r6, 0x48(r30)
	  stw       r6, 0x4C(r30)
	  stw       r6, 0x7C(r30)
	  lfs       f1, 0xC(r5)
	  stfs      f1, 0x60(r30)
	  stb       r6, 0x64(r30)
	  stb       r6, 0x68(r30)
	  stb       r6, 0x69(r30)
	  stb       r6, 0x6A(r30)
	  stb       r0, 0x6B(r30)
	  stb       r6, 0x6C(r30)
	  stfs      f2, 0x70(r30)
	  stfs      f2, 0x80(r30)
	  stfs      f2, 0x84(r30)
	  stw       r6, 0x54(r30)
	  stw       r6, 0x88(r30)
	  stw       r6, 0x50(r30)
	  stw       r6, 0x8C(r30)
	  stb       r6, 0xA8(r30)
	  stw       r6, 0xAC(r30)
	  stw       r6, 0xB0(r30)
	  stfs      f0, 0xB8(r30)
	  crclr     6, 0x6
	  bl        -0x253058
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
 * Address:	8031A4B0
 * Size:	0000AC
 */
newScreen::ObjFloor::~ObjFloor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x90
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7200
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804F
	  subi      r4, r4, 0x28A8
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0x80
	  lis       r4, 0x804E
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0xF70BC
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x2FD4EC
	  mr        r3, r30
	  li        r4, 0
	  bl        0xF705C

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x2F6488

	.loc_0x90:
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
 * Address:	........
 * Size:	000090
 */
void newScreen::ObjFloor::isFLOOR(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void newScreen::ObjFloor::isCHALLENGE(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void newScreen::ObjFloor::isVS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031A55C
 * Size:	000460
 */
void newScreen::ObjFloor::setCaveMsgID(unsigned long, char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r7, 0x635F
	  stw       r0, 0x14(r1)
	  addi      r0, r7, 0x3237
	  cmpw      r4, r0
	  beq-      .loc_0x3C8
	  bge-      .loc_0x148
	  addi      r0, r7, 0x3132
	  cmpw      r4, r0
	  beq-      .loc_0x350
	  bge-      .loc_0xC0
	  addi      r0, r7, 0x3035
	  cmpw      r4, r0
	  beq-      .loc_0x318
	  bge-      .loc_0x88
	  addi      r0, r7, 0x3031
	  cmpw      r4, r0
	  beq-      .loc_0x2F8
	  bge-      .loc_0x74
	  lis       r3, 0x5F75
	  addi      r0, r3, 0x6E69
	  cmpw      r4, r0
	  beq-      .loc_0x430
	  blt-      .loc_0x438
	  addi      r0, r7, 0x3030
	  cmpw      r4, r0
	  bge-      .loc_0x2F0
	  b         .loc_0x438

	.loc_0x74:
	  addi      r0, r7, 0x3033
	  cmpw      r4, r0
	  beq-      .loc_0x308
	  bge-      .loc_0x310
	  b         .loc_0x300

	.loc_0x88:
	  addi      r0, r7, 0x3039
	  cmpw      r4, r0
	  beq-      .loc_0x338
	  bge-      .loc_0xAC
	  addi      r0, r7, 0x3037
	  cmpw      r4, r0
	  beq-      .loc_0x328
	  bge-      .loc_0x330
	  b         .loc_0x320

	.loc_0xAC:
	  addi      r0, r7, 0x3130
	  cmpw      r4, r0
	  beq-      .loc_0x340
	  bge-      .loc_0x348
	  b         .loc_0x438

	.loc_0xC0:
	  addi      r0, r7, 0x3230
	  cmpw      r4, r0
	  beq-      .loc_0x390
	  bge-      .loc_0x114
	  addi      r0, r7, 0x3137
	  cmpw      r4, r0
	  beq-      .loc_0x378
	  bge-      .loc_0x100
	  addi      r0, r7, 0x3135
	  cmpw      r4, r0
	  beq-      .loc_0x368
	  bge-      .loc_0x370
	  addi      r0, r7, 0x3134
	  cmpw      r4, r0
	  bge-      .loc_0x360
	  b         .loc_0x358

	.loc_0x100:
	  addi      r0, r7, 0x3139
	  cmpw      r4, r0
	  beq-      .loc_0x388
	  bge-      .loc_0x438
	  b         .loc_0x380

	.loc_0x114:
	  addi      r0, r7, 0x3234
	  cmpw      r4, r0
	  beq-      .loc_0x3B0
	  bge-      .loc_0x138
	  addi      r0, r7, 0x3232
	  cmpw      r4, r0
	  beq-      .loc_0x3A0
	  bge-      .loc_0x3A8
	  b         .loc_0x398

	.loc_0x138:
	  addi      r0, r7, 0x3236
	  cmpw      r4, r0
	  bge-      .loc_0x3C0
	  b         .loc_0x3B8

	.loc_0x148:
	  lis       r6, 0x7673
	  addi      r0, r6, 0x3030
	  cmpw      r4, r0
	  beq-      .loc_0x3E0
	  bge-      .loc_0x1F4
	  lis       r6, 0x6C5F
	  addi      r0, r6, 0x3031
	  cmpw      r4, r0
	  beq-      .loc_0x2D8
	  bge-      .loc_0x1B8
	  lis       r3, 0x665F
	  addi      r0, r3, 0x3032
	  cmpw      r4, r0
	  beq-      .loc_0x2A0
	  bge-      .loc_0x1A4
	  addi      r0, r7, 0x3239
	  cmpw      r4, r0
	  beq-      .loc_0x3D8
	  blt-      .loc_0x3D0
	  addi      r0, r3, 0x3031
	  cmpw      r4, r0
	  bge-      .loc_0x298
	  b         .loc_0x438

	.loc_0x1A4:
	  addi      r0, r3, 0x3034
	  cmpw      r4, r0
	  beq-      .loc_0x2B0
	  bge-      .loc_0x438
	  b         .loc_0x2A8

	.loc_0x1B8:
	  lis       r3, 0x745F
	  addi      r0, r3, 0x3031
	  cmpw      r4, r0
	  beq-      .loc_0x280
	  bge-      .loc_0x1E0
	  addi      r0, r6, 0x3033
	  cmpw      r4, r0
	  beq-      .loc_0x2E8
	  bge-      .loc_0x438
	  b         .loc_0x2E0

	.loc_0x1E0:
	  addi      r0, r3, 0x3033
	  cmpw      r4, r0
	  beq-      .loc_0x290
	  bge-      .loc_0x438
	  b         .loc_0x288

	.loc_0x1F4:
	  addi      r0, r6, 0x3038
	  cmpw      r4, r0
	  beq-      .loc_0x420
	  bge-      .loc_0x23C
	  addi      r0, r6, 0x3034
	  cmpw      r4, r0
	  beq-      .loc_0x400
	  bge-      .loc_0x228
	  addi      r0, r6, 0x3032
	  cmpw      r4, r0
	  beq-      .loc_0x3F0
	  bge-      .loc_0x3F8
	  b         .loc_0x3E8

	.loc_0x228:
	  addi      r0, r6, 0x3036
	  cmpw      r4, r0
	  beq-      .loc_0x410
	  bge-      .loc_0x418
	  b         .loc_0x408

	.loc_0x23C:
	  lis       r3, 0x795F
	  addi      r0, r3, 0x3032
	  cmpw      r4, r0
	  beq-      .loc_0x2C0
	  bge-      .loc_0x26C
	  addi      r0, r3, 0x3031
	  cmpw      r4, r0
	  bge-      .loc_0x2B8
	  addi      r0, r6, 0x303A
	  cmpw      r4, r0
	  bge-      .loc_0x438
	  b         .loc_0x428

	.loc_0x26C:
	  addi      r0, r3, 0x3034
	  cmpw      r4, r0
	  beq-      .loc_0x2D0
	  bge-      .loc_0x438
	  b         .loc_0x2C8

	.loc_0x280:
	  subi      r0, r2, 0x9BC
	  b         .loc_0x43C

	.loc_0x288:
	  subi      r0, r2, 0x9B4
	  b         .loc_0x43C

	.loc_0x290:
	  subi      r0, r2, 0x9AC
	  b         .loc_0x43C

	.loc_0x298:
	  subi      r0, r2, 0x9A4
	  b         .loc_0x43C

	.loc_0x2A0:
	  subi      r0, r2, 0x99C
	  b         .loc_0x43C

	.loc_0x2A8:
	  subi      r0, r2, 0x994
	  b         .loc_0x43C

	.loc_0x2B0:
	  subi      r0, r2, 0x98C
	  b         .loc_0x43C

	.loc_0x2B8:
	  subi      r0, r2, 0x984
	  b         .loc_0x43C

	.loc_0x2C0:
	  subi      r0, r2, 0x97C
	  b         .loc_0x43C

	.loc_0x2C8:
	  subi      r0, r2, 0x974
	  b         .loc_0x43C

	.loc_0x2D0:
	  subi      r0, r2, 0x96C
	  b         .loc_0x43C

	.loc_0x2D8:
	  subi      r0, r2, 0x964
	  b         .loc_0x43C

	.loc_0x2E0:
	  subi      r0, r2, 0x95C
	  b         .loc_0x43C

	.loc_0x2E8:
	  subi      r0, r2, 0x954
	  b         .loc_0x43C

	.loc_0x2F0:
	  subi      r0, r2, 0x94C
	  b         .loc_0x43C

	.loc_0x2F8:
	  subi      r0, r2, 0x944
	  b         .loc_0x43C

	.loc_0x300:
	  subi      r0, r2, 0x93C
	  b         .loc_0x43C

	.loc_0x308:
	  subi      r0, r2, 0x934
	  b         .loc_0x43C

	.loc_0x310:
	  subi      r0, r2, 0x92C
	  b         .loc_0x43C

	.loc_0x318:
	  subi      r0, r2, 0x924
	  b         .loc_0x43C

	.loc_0x320:
	  subi      r0, r2, 0x91C
	  b         .loc_0x43C

	.loc_0x328:
	  subi      r0, r2, 0x914
	  b         .loc_0x43C

	.loc_0x330:
	  subi      r0, r2, 0x90C
	  b         .loc_0x43C

	.loc_0x338:
	  subi      r0, r2, 0x904
	  b         .loc_0x43C

	.loc_0x340:
	  subi      r0, r2, 0x8FC
	  b         .loc_0x43C

	.loc_0x348:
	  subi      r0, r2, 0x8F4
	  b         .loc_0x43C

	.loc_0x350:
	  subi      r0, r2, 0x8EC
	  b         .loc_0x43C

	.loc_0x358:
	  subi      r0, r2, 0x8E4
	  b         .loc_0x43C

	.loc_0x360:
	  subi      r0, r2, 0x8DC
	  b         .loc_0x43C

	.loc_0x368:
	  subi      r0, r2, 0x8D4
	  b         .loc_0x43C

	.loc_0x370:
	  subi      r0, r2, 0x8CC
	  b         .loc_0x43C

	.loc_0x378:
	  subi      r0, r2, 0x8C4
	  b         .loc_0x43C

	.loc_0x380:
	  subi      r0, r2, 0x8BC
	  b         .loc_0x43C

	.loc_0x388:
	  subi      r0, r2, 0x8B4
	  b         .loc_0x43C

	.loc_0x390:
	  subi      r0, r2, 0x8AC
	  b         .loc_0x43C

	.loc_0x398:
	  subi      r0, r2, 0x8A4
	  b         .loc_0x43C

	.loc_0x3A0:
	  subi      r0, r2, 0x89C
	  b         .loc_0x43C

	.loc_0x3A8:
	  subi      r0, r2, 0x894
	  b         .loc_0x43C

	.loc_0x3B0:
	  subi      r0, r2, 0x88C
	  b         .loc_0x43C

	.loc_0x3B8:
	  subi      r0, r2, 0x884
	  b         .loc_0x43C

	.loc_0x3C0:
	  subi      r0, r2, 0x87C
	  b         .loc_0x43C

	.loc_0x3C8:
	  subi      r0, r2, 0x874
	  b         .loc_0x43C

	.loc_0x3D0:
	  subi      r0, r2, 0x86C
	  b         .loc_0x43C

	.loc_0x3D8:
	  subi      r0, r2, 0x864
	  b         .loc_0x43C

	.loc_0x3E0:
	  subi      r0, r2, 0x85C
	  b         .loc_0x43C

	.loc_0x3E8:
	  subi      r0, r2, 0x854
	  b         .loc_0x43C

	.loc_0x3F0:
	  subi      r0, r2, 0x84C
	  b         .loc_0x43C

	.loc_0x3F8:
	  subi      r0, r2, 0x844
	  b         .loc_0x43C

	.loc_0x400:
	  subi      r0, r2, 0x83C
	  b         .loc_0x43C

	.loc_0x408:
	  subi      r0, r2, 0x834
	  b         .loc_0x43C

	.loc_0x410:
	  subi      r0, r2, 0x82C
	  b         .loc_0x43C

	.loc_0x418:
	  subi      r0, r2, 0x824
	  b         .loc_0x43C

	.loc_0x420:
	  subi      r0, r2, 0x81C
	  b         .loc_0x43C

	.loc_0x428:
	  subi      r0, r2, 0x814
	  b         .loc_0x43C

	.loc_0x430:
	  subi      r0, r2, 0x80C
	  b         .loc_0x43C

	.loc_0x438:
	  subi      r0, r2, 0x9BC

	.loc_0x43C:
	  mr        r3, r5
	  mr        r5, r0
	  subi      r4, r2, 0x804
	  crclr     6, 0x6
	  bl        -0x253570
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031A9BC
 * Size:	0008C0
 */
void newScreen::ObjFloor::doCreate(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x54(r1)
	  stmw      r24, 0x30(r1)
	  mr        r31, r3
	  mr        r29, r4
	  subi      r30, r5, 0x1458
	  bl        0x1395CC
	  lis       r4, 0x4F
	  lis       r6, 0x4C4F
	  li        r5, 0x46
	  mr        r24, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4F52
	  bl        -0xB6DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  stw       r24, 0x38(r31)
	  b         .loc_0xE0

	.loc_0x50:
	  lis       r4, 0x4F
	  lis       r6, 0x554D
	  mr        r3, r24
	  li        r5, 0x44
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4D59
	  bl        -0xB708
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xCC
	  li        r3, 0x14
	  bl        -0x2F6B90
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lis       r4, 0x804B
	  lis       r5, 0x804C
	  addi      r0, r4, 0x1148
	  lis       r4, 0x745F
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  addi      r6, r5, 0x1080
	  li        r5, 0x37
	  stw       r7, 0x4(r3)
	  addi      r0, r4, 0x3031
	  stw       r6, 0x0(r3)
	  stw       r5, 0x8(r3)
	  stb       r7, 0x10(r3)
	  stb       r7, 0x11(r3)
	  stw       r0, 0xC(r3)
	  stb       r7, 0x12(r3)

	.loc_0xC4:
	  stw       r3, 0x38(r31)
	  b         .loc_0xE0

	.loc_0xCC:
	  addi      r3, r30, 0
	  addi      r5, r30, 0x10
	  li        r4, 0x1C4
	  crclr     6, 0x6
	  bl        -0x2F0458

	.loc_0xE0:
	  li        r3, 0x148
	  bl        -0x2F6BFC
	  mr.       r0, r3
	  beq-      .loc_0xF8
	  bl        0x11A300
	  mr        r0, r3

	.loc_0xF8:
	  stw       r0, 0x4C(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x5
	  bne-      .loc_0x124
	  lwz       r3, 0x4C(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x30
	  lis       r5, 0x104
	  bl        -0x2DB4B4
	  b         .loc_0x138

	.loc_0x124:
	  lwz       r3, 0x4C(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x40
	  lis       r5, 0x104
	  bl        -0x2DB4CC

	.loc_0x138:
	  li        r3, 0x148
	  bl        -0x2F6C54
	  mr.       r0, r3
	  beq-      .loc_0x150
	  bl        0x11A2A8
	  mr        r0, r3

	.loc_0x150:
	  stw       r0, 0x48(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x58
	  lis       r5, 0x104
	  lwz       r3, 0x48(r31)
	  bl        -0x2DB4FC
	  lwz       r4, 0x38(r31)
	  lis       r3, 0x7673
	  addi      r0, r3, 0x303A
	  li        r5, 0
	  lwz       r4, 0xC(r4)
	  cmpw      r4, r0
	  bge-      .loc_0x198
	  addi      r0, r3, 0x3030
	  cmpw      r4, r0
	  bge-      .loc_0x194
	  b         .loc_0x198

	.loc_0x194:
	  li        r5, 0x1

	.loc_0x198:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x374
	  li        r3, 0x148
	  bl        -0x2F6CBC
	  mr.       r0, r3
	  beq-      .loc_0x1B8
	  bl        0x11A240
	  mr        r0, r3

	.loc_0x1B8:
	  stw       r0, 0x50(r31)
	  mr        r6, r29
	  addi      r4, r30, 0x68
	  lis       r5, 0x104
	  lwz       r3, 0x50(r31)
	  bl        -0x2DB564
	  lis       r5, 0x655F
	  lis       r4, 0x5472
	  lwz       r3, 0x50(r31)
	  addi      r6, r5, 0x6D35
	  addi      r5, r4, 0x756C
	  bl        -0x17CF4
	  stw       r3, 0x8C(r31)
	  lis       r5, 0x7474
	  lis       r4, 0x5061
	  lwz       r3, 0x50(r31)
	  addi      r6, r5, 0x6F6E
	  addi      r5, r4, 0x6275
	  bl        -0x17D10
	  stw       r3, 0xAC(r31)
	  lis       r5, 0x6469
	  lis       r4, 0x546C
	  lwz       r3, 0x50(r31)
	  addi      r6, r5, 0x6E67
	  addi      r5, r4, 0x6F61
	  bl        -0x17D2C
	  stw       r3, 0xB0(r31)
	  lis       r5, 0x6666
	  lis       r4, 0x5F69
	  lis       r3, 0x4E73
	  lwz       r6, 0xAC(r31)
	  li        r7, 0
	  li        r0, 0x1
	  mr        r25, r31
	  stb       r7, 0xB0(r6)
	  addi      r26, r5, 0x6667
	  addi      r27, r4, 0x3030
	  addi      r28, r3, 0x7562
	  lwz       r3, 0xB0(r31)
	  li        r24, 0
	  stb       r0, 0xB0(r3)

	.loc_0x25C:
	  mulhw     r7, r26, r24
	  lwz       r3, 0x50(r31)
	  srawi     r0, r7, 0x2
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  mulli     r0, r0, 0xA
	  sub       r4, r24, r0
	  srawi     r0, r4, 0x1F
	  addc      r6, r4, r27
	  adde      r5, r0, r28
	  srawi     r0, r7, 0x2
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  rlwinm    r4,r0,8,0,23
	  srawi     r0, r4, 0x1F
	  addc      r6, r6, r4
	  adde      r5, r5, r0
	  bl        -0x17DB0
	  stw       r3, 0x90(r25)
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x6
	  li        r0, 0
	  lwz       r3, 0x90(r25)
	  addi      r25, r25, 0x4
	  stb       r0, 0xB0(r3)
	  blt+      .loc_0x25C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3D60
	  lbz       r0, 0x79(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E0
	  lwz       r4, 0x74(r3)
	  b         .loc_0x31C

	.loc_0x2E0:
	  bl        -0x2516FC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f3, -0x7F0(r2)
	  stw       r0, 0x20(r1)
	  lfs       f1, -0x800(r2)
	  lfd       f2, 0x20(r1)
	  lfs       f0, -0x7FC(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r4, 0x2C(r1)

	.loc_0x31C:
	  lis       r3, 0x804E
	  rlwinm    r0,r4,2,0,29
	  rlwinm    r6,r4,3,0,28
	  lwz       r5, 0x8C(r31)
	  subi      r3, r3, 0x7230
	  add       r4, r31, r0
	  add       r7, r3, r6
	  li        r0, 0x1
	  lwz       r6, 0x0(r7)
	  li        r3, 0x18
	  lwz       r7, 0x4(r7)
	  stw       r7, 0x1C(r5)
	  stw       r6, 0x18(r5)
	  lwz       r4, 0x90(r4)
	  stb       r0, 0xB0(r4)
	  bl        -0x2F6E70
	  mr.       r0, r3
	  beq-      .loc_0x36C
	  bl        -0x17CE8
	  mr        r0, r3

	.loc_0x36C:
	  stw       r0, 0xB4(r31)
	  b         .loc_0x380

	.loc_0x374:
	  li        r0, 0
	  stw       r0, 0x50(r31)
	  stw       r0, 0x8C(r31)

	.loc_0x380:
	  lwz       r3, 0x48(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x424
	  lwz       r12, 0x0(r3)
	  lis       r4, 0x6663
	  addi      r6, r4, 0x5F63
	  li        r5, 0
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r24, r3
	  bl        -0x2E1C88
	  cmplwi    r3, 0
	  beq-      .loc_0x3C8
	  mr        r3, r24
	  bl        -0x2E1C98
	  mr        r4, r24
	  bl        -0x2E354C

	.loc_0x3C8:
	  lwz       r4, 0x38(r31)
	  lis       r3, 0x6663
	  addi      r8, r3, 0x5F6C
	  li        r5, 0x3
	  addi      r0, r4, 0x8
	  li        r4, 0x2
	  stw       r0, 0x8(r1)
	  li        r0, 0
	  mr        r10, r8
	  addi      r6, r3, 0x5F72
	  stw       r5, 0xC(r1)
	  li        r5, 0
	  li        r7, 0
	  li        r9, 0
	  stw       r4, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stw       r29, 0x18(r1)
	  lwz       r3, 0x48(r31)
	  bl        -0xE89C
	  stw       r3, 0x54(r31)
	  li        r4, 0x2
	  lwz       r3, 0x54(r31)
	  bl        -0xF500

	.loc_0x424:
	  lwz       r3, 0x48(r31)
	  bl        -0x17AD0
	  lwz       r3, 0x50(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x43C
	  bl        -0x17AE0

	.loc_0x43C:
	  lwz       r3, 0x50(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x44C
	  bl        -0x11004

	.loc_0x44C:
	  lwz       r0, 0x50(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x4D4
	  li        r3, 0x1C
	  bl        -0x2F6F74
	  mr.       r0, r3
	  beq-      .loc_0x474
	  li        r4, 0x2
	  bl        -0x159D0
	  mr        r0, r3

	.loc_0x474:
	  stw       r0, 0x88(r31)
	  mr        r4, r29
	  lfs       f1, -0x9C4(r2)
	  addi      r6, r30, 0x84
	  lwz       r3, 0x88(r31)
	  lwz       r5, 0x50(r31)
	  bl        -0x154B0
	  lwz       r3, 0x88(r31)
	  mr        r4, r29
	  lwz       r5, 0x50(r31)
	  addi      r6, r30, 0xA0
	  lfs       f1, -0x9C4(r2)
	  bl        -0x154C8
	  lwz       r3, 0x88(r31)
	  lfs       f1, -0x9C8(r2)
	  bl        -0x1570C
	  lwz       r3, 0x88(r31)
	  li        r4, 0x1
	  bl        -0x15774
	  lwz       r3, 0x88(r31)
	  lfs       f1, -0x9C4(r2)
	  bl        -0x157DC
	  lwz       r3, 0x88(r31)
	  bl        -0x155D4

	.loc_0x4D4:
	  lwz       r3, 0x38(r31)
	  lis       r5, 0x745F
	  addi      r0, r5, 0x3031
	  li        r24, 0
	  lwz       r4, 0xC(r3)
	  li        r6, 0
	  cmpw      r4, r0
	  bge-      .loc_0x534
	  lis       r3, 0x6C5F
	  addi      r0, r3, 0x3031
	  cmpw      r4, r0
	  bge-      .loc_0x524
	  lis       r3, 0x665F
	  addi      r0, r3, 0x3035
	  cmpw      r4, r0
	  bge-      .loc_0x564
	  addi      r0, r3, 0x3031
	  cmpw      r4, r0
	  bge-      .loc_0x560
	  b         .loc_0x564

	.loc_0x524:
	  addi      r0, r3, 0x3034
	  cmpw      r4, r0
	  bge-      .loc_0x564
	  b         .loc_0x560

	.loc_0x534:
	  lis       r3, 0x795F
	  addi      r0, r3, 0x3031
	  cmpw      r4, r0
	  bge-      .loc_0x554
	  addi      r0, r5, 0x3034
	  cmpw      r4, r0
	  bge-      .loc_0x564
	  b         .loc_0x560

	.loc_0x554:
	  addi      r0, r3, 0x3035
	  cmpw      r4, r0
	  bge-      .loc_0x564

	.loc_0x560:
	  li        r6, 0x1

	.loc_0x564:
	  rlwinm.   r0,r6,0,24,31
	  beq-      .loc_0x574
	  li        r24, 0x1
	  b         .loc_0x628

	.loc_0x574:
	  lis       r3, 0x635F
	  li        r5, 0
	  addi      r0, r3, 0x3130
	  cmpw      r4, r0
	  bge-      .loc_0x5B8
	  addi      r0, r3, 0x3030
	  cmpw      r4, r0
	  bge-      .loc_0x5A8
	  lis       r3, 0x5F75
	  addi      r0, r3, 0x6E69
	  cmpw      r4, r0
	  beq-      .loc_0x5E0
	  b         .loc_0x5E4

	.loc_0x5A8:
	  addi      r0, r3, 0x303A
	  cmpw      r4, r0
	  bge-      .loc_0x5E4
	  b         .loc_0x5E0

	.loc_0x5B8:
	  addi      r0, r3, 0x3230
	  cmpw      r4, r0
	  bge-      .loc_0x5D4
	  addi      r0, r3, 0x313A
	  cmpw      r4, r0
	  bge-      .loc_0x5E4
	  b         .loc_0x5E0

	.loc_0x5D4:
	  addi      r0, r3, 0x323A
	  cmpw      r4, r0
	  bge-      .loc_0x5E4

	.loc_0x5E0:
	  li        r5, 0x1

	.loc_0x5E4:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x5F4
	  li        r24, 0
	  b         .loc_0x628

	.loc_0x5F4:
	  lis       r3, 0x7673
	  li        r5, 0
	  addi      r0, r3, 0x303A
	  cmpw      r4, r0
	  bge-      .loc_0x61C
	  addi      r0, r3, 0x3030
	  cmpw      r4, r0
	  bge-      .loc_0x618
	  b         .loc_0x61C

	.loc_0x618:
	  li        r5, 0x1

	.loc_0x61C:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x628
	  li        r24, 0x2

	.loc_0x628:
	  mr        r3, r31
	  addi      r5, r31, 0x3C
	  bl        -0xA90
	  cmpwi     r24, 0x1
	  beq-      .loc_0x658
	  bge-      .loc_0x64C
	  cmpwi     r24, 0
	  bge-      .loc_0x6BC
	  b         .loc_0x7AC

	.loc_0x64C:
	  cmpwi     r24, 0x3
	  bge-      .loc_0x7AC
	  b         .loc_0x748

	.loc_0x658:
	  li        r3, 0x13E4
	  bl        -0x2F7174
	  mr.       r24, r3
	  beq-      .loc_0x6A0
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x6974
	  addi      r6, r4, 0x6C65
	  li        r5, 0x74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4C(r31)
	  mr        r5, r3
	  mr        r3, r24
	  addi      r6, r31, 0x3C
	  bl        0x14330
	  mr        r24, r3

	.loc_0x6A0:
	  stw       r24, 0x74(r31)
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3D60
	  lfs       f0, 0x50(r3)
	  lwz       r3, 0x74(r31)
	  stfs      f0, 0x7DC(r3)
	  b         .loc_0x7F8

	.loc_0x6BC:
	  li        r3, 0xBF8
	  bl        -0x2F71D8
	  mr.       r24, r3
	  beq-      .loc_0x704
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x6974
	  addi      r6, r4, 0x6C65
	  li        r5, 0x74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4C(r31)
	  mr        r5, r3
	  mr        r3, r24
	  addi      r6, r31, 0x3C
	  bl        0x147D8
	  mr        r24, r3

	.loc_0x704:
	  mr        r3, r24
	  lis       r4, 0x8051
	  lwz       r12, 0x0(r24)
	  addi      r4, r4, 0x3D60
	  lfs       f1, 0x40(r4)
	  lwz       r12, 0x18(r12)
	  lfs       f2, 0x44(r4)
	  lfs       f3, 0x48(r4)
	  lfs       f4, 0x4C(r4)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3D60
	  lfs       f0, 0x54(r3)
	  stfs      f0, 0x7DC(r24)
	  stw       r24, 0x74(r31)
	  b         .loc_0x7F8

	.loc_0x748:
	  li        r3, 0x9EC
	  bl        -0x2F7264
	  mr.       r24, r3
	  beq-      .loc_0x790
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x6974
	  addi      r6, r4, 0x6C65
	  li        r5, 0x74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4C(r31)
	  mr        r5, r3
	  mr        r3, r24
	  addi      r6, r31, 0x3C
	  bl        0x14CEC
	  mr        r24, r3

	.loc_0x790:
	  stw       r24, 0x74(r31)
	  lis       r3, 0x8051
	  addi      r3, r3, 0x3D60
	  lfs       f0, 0x58(r3)
	  lwz       r3, 0x74(r31)
	  stfs      f0, 0x7DC(r3)
	  b         .loc_0x7F8

	.loc_0x7AC:
	  li        r3, 0x7E4
	  bl        -0x2F72C8
	  mr.       r24, r3
	  beq-      .loc_0x7F4
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x6974
	  addi      r6, r4, 0x6C65
	  li        r5, 0x74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4C(r31)
	  mr        r5, r3
	  mr        r3, r24
	  addi      r6, r31, 0x3C
	  bl        0x13B48
	  mr        r24, r3

	.loc_0x7F4:
	  stw       r24, 0x74(r31)

	.loc_0x7F8:
	  lwz       r3, 0x74(r31)
	  li        r4, 0x2
	  bl        0x13F94
	  lwz       r3, 0x74(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x7E4
	  bl        -0x2F7334
	  mr.       r24, r3
	  beq-      .loc_0x860
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x6869
	  addi      r6, r4, 0x6B61
	  li        r5, 0x63
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x4C(r31)
	  mr        r5, r3
	  mr        r3, r24
	  subi      r6, r2, 0x7F8
	  bl        0x13ADC
	  mr        r24, r3

	.loc_0x860:
	  stw       r24, 0x78(r31)
	  li        r4, 0x1
	  lwz       r3, 0x78(r31)
	  bl        0x13F28
	  lwz       r3, 0x48(r31)
	  lis       r4, 0x6973
	  addi      r6, r4, 0x7575
	  li        r5, 0x6B61
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x7C(r31)
	  lwz       r3, 0x7C(r31)
	  lfs       f0, 0xD4(r3)
	  stfs      f0, 0x80(r31)
	  lwz       r3, 0x7C(r31)
	  lfs       f0, 0xD8(r3)
	  stfs      f0, 0x84(r31)
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031B27C
 * Size:	000004
 */
void newScreen::TitleMsg::init(void) { }

/*
 * --INFO--
 * Address:	8031B280
 * Size:	000598
 */
void newScreen::ObjFloor::commonUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r28, r3
	  li        r30, 0
	  li        r29, 0
	  bl        0x138D0C
	  lis       r4, 0x4F
	  lis       r6, 0x4C4F
	  li        r5, 0x46
	  mr        r26, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4F52
	  bl        -0xBF9C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x48
	  mr        r29, r26

	.loc_0x48:
	  lwz       r4, 0x38(r28)
	  lis       r3, 0x7673
	  addi      r0, r3, 0x303A
	  li        r31, 0
	  lwz       r4, 0xC(r4)
	  cmpw      r4, r0
	  bge-      .loc_0x78
	  addi      r0, r3, 0x3030
	  cmpw      r4, r0
	  bge-      .loc_0x74
	  b         .loc_0x78

	.loc_0x74:
	  li        r31, 0x1

	.loc_0x78:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xCC
	  cmplwi    r29, 0
	  beq-      .loc_0xCC
	  lbz       r0, 0xA8(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  lbz       r0, 0x12(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  li        r0, 0x1
	  lfs       f1, -0x7E8(r2)
	  stb       r0, 0xA8(r28)
	  lfs       f2, -0x9C4(r2)
	  lwz       r3, 0xAC(r28)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xB4(r28)
	  bl        -0x182DC
	  lwz       r3, 0xB4(r28)
	  lfs       f1, -0x9C4(r2)
	  bl        -0x18214

	.loc_0xCC:
	  lwz       r0, 0x50(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x174
	  lbz       r0, 0xA8(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r3, 0xB4(r28)
	  bl        -0x181E4
	  mr        r0, r3
	  lwz       r3, 0xAC(r28)
	  mr        r4, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0xB8(r28)
	  lfs       f2, -0x9C8(r2)
	  fcmpo     cr0, f3, f2
	  ble-      .loc_0x140
	  lwz       r3, -0x6514(r13)
	  lfs       f0, -0x7E8(r2)
	  lfs       f1, 0x54(r3)
	  fdivs     f0, f1, f0
	  fsubs     f0, f3, f0
	  stfs      f0, 0xB8(r28)
	  lfs       f0, 0xB8(r28)
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x140
	  stfs      f2, 0xB8(r28)

	.loc_0x140:
	  lfs       f1, -0x7E4(r2)
	  lfs       f0, 0xB8(r28)
	  lwz       r3, 0xB0(r28)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  mtctr     r12
	  bctrl

	.loc_0x16C:
	  lwz       r3, 0x88(r28)
	  bl        -0x15F08

	.loc_0x174:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x1F4
	  lis       r3, 0x8051
	  lwz       r0, 0x8(r29)
	  addi      r3, r3, 0x3D60
	  lfs       f3, 0x80(r28)
	  lfs       f2, 0x2C(r3)
	  cmplwi    r0, 0xA
	  lfs       f1, 0x84(r28)
	  lfs       f0, 0x30(r3)
	  fadds     f2, f3, f2
	  fadds     f1, f1, f0
	  bge-      .loc_0x1B0
	  lfs       f0, 0x3C(r3)
	  fadds     f2, f2, f0

	.loc_0x1B0:
	  lwz       r3, 0x7C(r28)
	  stfs      f2, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  lwz       r3, 0x7C(r28)
	  addi      r4, r4, 0x3D60
	  lfs       f0, 0x34(r4)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1F4:
	  lwz       r3, 0x50(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x210
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x210:
	  lwz       r5, 0x38(r28)
	  lis       r6, 0x745F
	  addi      r4, r6, 0x3031
	  li        r3, 0
	  lwz       r0, 0xC(r5)
	  li        r7, 0
	  cmpw      r0, r4
	  bge-      .loc_0x270
	  lis       r4, 0x6C5F
	  addi      r5, r4, 0x3031
	  cmpw      r0, r5
	  bge-      .loc_0x260
	  lis       r4, 0x665F
	  addi      r5, r4, 0x3035
	  cmpw      r0, r5
	  bge-      .loc_0x2A0
	  addi      r4, r4, 0x3031
	  cmpw      r0, r4
	  bge-      .loc_0x29C
	  b         .loc_0x2A0

	.loc_0x260:
	  addi      r4, r4, 0x3034
	  cmpw      r0, r4
	  bge-      .loc_0x2A0
	  b         .loc_0x29C

	.loc_0x270:
	  lis       r4, 0x795F
	  addi      r5, r4, 0x3031
	  cmpw      r0, r5
	  bge-      .loc_0x290
	  addi      r4, r6, 0x3034
	  cmpw      r0, r4
	  bge-      .loc_0x2A0
	  b         .loc_0x29C

	.loc_0x290:
	  addi      r4, r4, 0x3035
	  cmpw      r0, r4
	  bge-      .loc_0x2A0

	.loc_0x29C:
	  li        r7, 0x1

	.loc_0x2A0:
	  rlwinm.   r4,r7,0,24,31
	  beq-      .loc_0x2B0
	  li        r3, 0
	  b         .loc_0x364

	.loc_0x2B0:
	  lis       r5, 0x635F
	  li        r6, 0
	  addi      r4, r5, 0x3130
	  cmpw      r0, r4
	  bge-      .loc_0x2F4
	  addi      r4, r5, 0x3030
	  cmpw      r0, r4
	  bge-      .loc_0x2E4
	  lis       r4, 0x5F75
	  addi      r4, r4, 0x6E69
	  cmpw      r0, r4
	  beq-      .loc_0x31C
	  b         .loc_0x320

	.loc_0x2E4:
	  addi      r4, r5, 0x303A
	  cmpw      r0, r4
	  bge-      .loc_0x320
	  b         .loc_0x31C

	.loc_0x2F4:
	  addi      r4, r5, 0x3230
	  cmpw      r0, r4
	  bge-      .loc_0x310
	  addi      r4, r5, 0x313A
	  cmpw      r0, r4
	  bge-      .loc_0x320
	  b         .loc_0x31C

	.loc_0x310:
	  addi      r4, r5, 0x323A
	  cmpw      r0, r4
	  bge-      .loc_0x320

	.loc_0x31C:
	  li        r6, 0x1

	.loc_0x320:
	  rlwinm.   r4,r6,0,24,31
	  beq-      .loc_0x330
	  li        r3, 0x1
	  b         .loc_0x364

	.loc_0x330:
	  lis       r4, 0x7673
	  li        r6, 0
	  addi      r5, r4, 0x303A
	  cmpw      r0, r5
	  bge-      .loc_0x358
	  addi      r4, r4, 0x3030
	  cmpw      r0, r4
	  bge-      .loc_0x354
	  b         .loc_0x358

	.loc_0x354:
	  li        r6, 0x1

	.loc_0x358:
	  rlwinm.   r0,r6,0,24,31
	  beq-      .loc_0x364
	  li        r3, 0x2

	.loc_0x364:
	  lis       r4, 0x8051
	  rlwinm    r26,r3,2,0,29
	  addi      r0, r4, 0x3D60
	  lwz       r3, 0x74(r28)
	  add       r4, r0, r26
	  addi      r27, r4, 0x5C
	  addi      r29, r4, 0x68
	  mr        r4, r27
	  mr        r5, r29
	  bl        0x13CAC
	  lwz       r3, 0x78(r28)
	  mr        r4, r27
	  mr        r5, r29
	  bl        0x13C9C
	  lis       r3, 0x8051
	  lwz       r5, 0x54(r28)
	  addi      r0, r3, 0x3D60
	  addi      r4, r1, 0xC
	  add       r3, r0, r26
	  lwz       r27, 0x6C(r5)
	  lwz       r0, 0x5C(r3)
	  mr        r3, r27
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8051
	  mr        r3, r27
	  addi      r0, r4, 0x3D60
	  addi      r4, r1, 0x8
	  add       r5, r0, r26
	  lwz       r0, 0x68(r5)
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x128(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x454
	  lis       r3, 0x8051
	  lfs       f1, 0x243C(r2)
	  addi      r3, r3, 0x3D60
	  lfs       f0, 0x2440(r2)
	  lfs       f2, 0x20(r3)
	  lfs       f4, 0x24(r3)
	  fadds     f3, f2, f1
	  lwz       r4, 0x48(r28)
	  fadds     f2, f4, f0
	  lfs       f1, 0x2434(r2)
	  lfs       f0, 0x2438(r2)
	  stfs      f3, 0x140(r4)
	  stfs      f2, 0x144(r4)
	  lfs       f2, 0x28(r3)
	  lwz       r3, 0x48(r28)
	  fmuls     f1, f2, f1
	  fmuls     f0, f2, f0
	  stfs      f1, 0x138(r3)
	  stfs      f0, 0x13C(r3)
	  b         .loc_0x4A0

	.loc_0x454:
	  lis       r3, 0x8051
	  lfs       f1, 0x243C(r2)
	  addi      r3, r3, 0x3D60
	  lfs       f0, 0x2440(r2)
	  lfs       f2, 0x10(r3)
	  lfs       f4, 0x14(r3)
	  fadds     f3, f2, f1
	  lwz       r4, 0x48(r28)
	  fadds     f2, f4, f0
	  lfs       f1, 0x2434(r2)
	  lfs       f0, 0x2438(r2)
	  stfs      f3, 0x140(r4)
	  stfs      f2, 0x144(r4)
	  lfs       f2, 0x18(r3)
	  lwz       r3, 0x48(r28)
	  fmuls     f1, f2, f1
	  fmuls     f0, f2, f0
	  stfs      f1, 0x138(r3)
	  stfs      f0, 0x13C(r3)

	.loc_0x4A0:
	  lwz       r3, 0x48(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x74(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x78(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x64(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x514
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x60(r28)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x9C8(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x60(r28)
	  lfs       f1, 0x60(r28)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x580
	  li        r30, 0x1
	  b         .loc_0x580

	.loc_0x514:
	  mr        r3, r28
	  bl        0x138810
	  lis       r4, 0x4F
	  lis       r6, 0x4C4F
	  mr        r29, r3
	  li        r5, 0x46
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4F52
	  bl        -0xC498
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x580
	  lbz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x56C
	  li        r0, 0x1
	  stb       r0, 0x64(r28)
	  stb       r0, 0x6C(r28)
	  lwz       r3, 0x74(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x56C:
	  lbz       r0, 0x11(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x580
	  li        r0, 0x1
	  stb       r0, 0x6C(r28)

	.loc_0x580:
	  mr        r3, r30
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031B818
 * Size:	000004
 */
void newScreen::TitleMsg::end(void) { }

/*
 * --INFO--
 * Address:	8031B81C
 * Size:	000004
 */
void newScreen::TitleMsg::update(void) { }

/*
 * --INFO--
 * Address:	8031B820
 * Size:	000020
 */
void newScreen::ObjFloor::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x5AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031B840
 * Size:	00019C
 */
void newScreen::ObjFloor::doDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  subi      r3, r5, 0xDD0
	  bl        -0x2BD4A4
	  mr        r3, r29
	  mr        r4, r30
	  bl        0x2E0
	  lwz       r3, 0x50(r29)
	  addi      r31, r30, 0x190
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lfs       f1, -0x7E4(r2)
	  lfs       f0, 0x5C(r29)
	  lwz       r12, 0x0(r3)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x24(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x50(r29)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  addi      r3, r30, 0x190
	  lwz       r12, 0x190(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x65F8(r13)
	  li        r4, 0x2
	  li        r5, 0
	  bl        0x9DCE8
	  lfs       f1, -0x7E4(r2)
	  lfs       f0, 0x5C(r29)
	  lwz       r3, 0x48(r29)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x48(r29)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x38(r29)
	  lis       r3, 0x7673
	  addi      r0, r3, 0x303A
	  li        r5, 0
	  lwz       r4, 0xC(r4)
	  cmpw      r4, r0
	  bge-      .loc_0x13C
	  addi      r0, r3, 0x3030
	  cmpw      r4, r0
	  bge-      .loc_0x138
	  b         .loc_0x13C

	.loc_0x138:
	  li        r5, 0x1

	.loc_0x13C:
	  rlwinm.   r0,r5,0,24,31
	  bne-      .loc_0x154
	  lwz       r3, 0x7C(r29)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  b         .loc_0x160

	.loc_0x154:
	  lwz       r3, 0x7C(r29)
	  li        r0, 0
	  stb       r0, 0xB0(r3)

	.loc_0x160:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x2BD5F8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031B9DC
 * Size:	000034
 */
void newScreen::ObjFloor::doStart(Screen::StartSceneArg const*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x9C8(r2)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x58(r3)
	  stfs      f0, 0x5C(r3)
	  lwz       r3, -0x65F8(r13)
	  bl        0x9DDBC
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BA10
 * Size:	000010
 */
void newScreen::ObjFloor::doEnd(Screen::EndSceneArg const*)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x9C8(r2)
	  stfs      f0, 0x58(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BA20
 * Size:	000004
 */
void newScreen::ObjFloor::doUpdateFadeinFinish(void) { }

/*
 * --INFO--
 * Address:	8031BA24
 * Size:	000030
 */
void newScreen::ObjFloor::doUpdateFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x9C8(r2)
	  li        r4, 0x2
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x58(r3)
	  lwz       r3, -0x65F8(r13)
	  bl        0x9DD98
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BA54
 * Size:	000004
 */
void newScreen::ObjFloor::doUpdateFadeoutFinish(void) { }

/*
 * --INFO--
 * Address:	8031BA58
 * Size:	000074
 */
void newScreen::ObjFloor::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x3D60
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x58(r3)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x58(r3)
	  lfs       f0, 0x58(r3)
	  lfs       f1, 0x4(r4)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x48
	  stfs      f1, 0x58(r3)
	  li        r31, 0x1

	.loc_0x48:
	  lfs       f1, 0x58(r3)
	  lfs       f0, 0x4(r4)
	  fdivs     f0, f1, f0
	  stfs      f0, 0x5C(r3)
	  bl        -0x830
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BACC
 * Size:	000088
 */
void newScreen::ObjFloor::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x3D60
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x58(r3)
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x58(r3)
	  lfs       f0, 0x58(r3)
	  lfs       f1, 0x8(r4)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x54
	  stfs      f1, 0x58(r3)
	  lbz       r0, 0x6C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  li        r31, 0x1

	.loc_0x54:
	  lfs       f1, 0x58(r3)
	  lfs       f0, 0x8(r4)
	  lfs       f2, -0x9C4(r2)
	  fdivs     f0, f1, f0
	  fsubs     f0, f2, f0
	  stfs      f0, 0x5C(r3)
	  bl        -0x8B8
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BB54
 * Size:	000168
 */
void newScreen::ObjFloor::drawBG(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  addi      r31, r4, 0x190
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  lbz       r0, 0x6C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8051
	  lfs       f1, 0x70(r28)
	  lfs       f0, 0x54(r4)
	  lfs       f3, -0x9C4(r2)
	  fadds     f1, f1, f0
	  lfs       f0, -0x9C8(r2)
	  stfs      f1, 0x70(r28)
	  lfs       f2, 0x70(r28)
	  lfs       f1, 0x3D60(r3)
	  fdivs     f1, f2, f1
	  fsubs     f1, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x84
	  lfs       f0, -0x7E4(r2)
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  stb       r0, 0x6B(r28)
	  b         .loc_0x90

	.loc_0x84:
	  li        r0, 0
	  stb       r0, 0x6B(r28)
	  stb       r0, 0x6C(r28)

	.loc_0x90:
	  lbz       r0, 0x6B(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x148
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  bl        0x107620
	  lhz       r30, 0x4(r3)
	  bl        0x107618
	  lhz       r29, 0x6(r3)
	  mr        r3, r31
	  lwz       r0, 0x68(r28)
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x10
	  stw       r0, 0x18(r1)
	  addi      r7, r1, 0x14
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x2E55B4
	  li        r3, 0
	  bl        -0x232AF0
	  lis       r0, 0x4330
	  lfs       f3, -0x9C8(r2)
	  stw       r30, 0x34(r1)
	  mr        r3, r31
	  lfd       f2, -0x7E0(r2)
	  addi      r4, r1, 0x1C
	  stw       r0, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  stw       r29, 0x3C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x1C(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x20(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x2E54C4

	.loc_0x148:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

} // namespace og

/*
 * --INFO--
 * Address:	8031BCBC
 * Size:	00019C
 */
void __sinit_ogObjFloor_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  lis       r3, 0x8004
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x3D60
	  li        r5, 0
	  li        r6, 0x4
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5C
	  subi      r4, r3, 0x646C
	  li        r7, 0x3
	  stw       r30, 0x8(r1)
	  mr        r3, r31
	  bl        -0x25A4B8
	  lis       r4, 0x8051
	  lis       r3, 0x8004
	  addi      r4, r4, 0x3D60
	  li        r5, 0
	  addi      r30, r4, 0x68
	  li        r6, 0x4
	  subi      r4, r3, 0x646C
	  li        r7, 0x3
	  mr        r3, r30
	  bl        -0x25A4E0
	  lis       r3, 0x8051
	  lfs       f13, -0x7D8(r2)
	  addi      r8, r3, 0x3D60
	  li        r7, 0xFF
	  li        r5, 0
	  lfs       f9, -0x9C8(r2)
	  lfs       f12, -0x9C4(r2)
	  li        r3, 0x64
	  lfs       f10, -0x7D0(r2)
	  li        r6, 0xC8
	  lfs       f8, -0x7CC(r2)
	  li        r4, 0x32
	  lfs       f5, -0x7C0(r2)
	  li        r0, 0x9C
	  lfs       f11, -0x7D4(r2)
	  lfs       f7, -0x7C8(r2)
	  lfs       f6, -0x7C4(r2)
	  lfs       f4, -0x7BC(r2)
	  lfs       f3, -0x7B8(r2)
	  lfs       f2, -0x7B4(r2)
	  lfs       f1, -0x7B0(r2)
	  lfs       f0, -0x7AC(r2)
	  stfs      f13, 0x0(r8)
	  stfs      f12, 0x4(r8)
	  stfs      f11, 0x8(r8)
	  stfs      f10, 0xC(r8)
	  stfs      f9, 0x10(r8)
	  stfs      f8, 0x14(r8)
	  stfs      f12, 0x18(r8)
	  stfs      f7, 0x1C(r8)
	  stfs      f9, 0x20(r8)
	  stfs      f6, 0x24(r8)
	  stfs      f12, 0x28(r8)
	  stfs      f8, 0x2C(r8)
	  stfs      f9, 0x30(r8)
	  stfs      f5, 0x34(r8)
	  stfs      f9, 0x38(r8)
	  stfs      f4, 0x3C(r8)
	  stfs      f3, 0x40(r8)
	  stfs      f2, 0x44(r8)
	  stfs      f5, 0x48(r8)
	  stfs      f1, 0x4C(r8)
	  stb       r7, 0x0(r31)
	  stb       r7, 0x5D(r8)
	  stb       r6, 0x5E(r8)
	  stb       r7, 0x5F(r8)
	  stb       r5, 0x0(r30)
	  stb       r5, 0x69(r8)
	  stb       r4, 0x6A(r8)
	  stb       r5, 0x6B(r8)
	  stb       r7, 0x60(r8)
	  stb       r7, 0x61(r8)
	  stb       r7, 0x62(r8)
	  stb       r7, 0x63(r8)
	  stb       r3, 0x6C(r8)
	  stb       r3, 0x6D(r8)
	  stb       r5, 0x6E(r8)
	  stb       r5, 0x6F(r8)
	  stb       r7, 0x64(r8)
	  stb       r7, 0x65(r8)
	  stb       r0, 0x66(r8)
	  stb       r7, 0x67(r8)
	  stb       r7, 0x70(r8)
	  stb       r7, 0x71(r8)
	  stb       r5, 0x72(r8)
	  stb       r5, 0x73(r8)
	  stb       r5, 0x78(r8)
	  stfs      f0, 0x50(r8)
	  stfs      f9, 0x54(r8)
	  stfs      f10, 0x58(r8)
	  stw       r5, 0x74(r8)
	  stb       r5, 0x79(r8)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8031BE58
 * Size:	000008
 */
@24 @og::newScreen::ObjFloor::~ObjFloor(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x19AC
	*/
}
