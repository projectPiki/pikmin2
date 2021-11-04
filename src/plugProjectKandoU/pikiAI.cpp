#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	801B07C0
 * Size:	000BA0
 */
void Piki::graspSituation_Fast(Game::Creature**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stfd      f30, 0x160(r1)
	  psq_st    f30,0x168(r1),0,0
	  stmw      r23, 0x13C(r1)
	  lwz       r5, -0x64AC(r13)
	  mr        r23, r3
	  mr        r24, r4
	  cmplwi    r5, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x18(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0x7C
	  li        r0, 0
	  stw       r0, 0x0(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x27
	  bl        0x36BB8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C

	.loc_0x74:
	  li        r3, -0x1
	  b         .loc_0xB7C

	.loc_0x7C:
	  lbz       r0, 0x2B8(r23)
	  li        r30, 0
	  lfs       f31, -0x5018(r2)
	  li        r29, -0x1
	  cmpwi     r0, 0
	  li        r28, 0
	  li        r31, 0x1
	  beq-      .loc_0xA8
	  cmpwi     r0, 0x5
	  beq-      .loc_0xA8
	  li        r31, 0

	.loc_0xA8:
	  lfs       f1, 0x20C(r23)
	  addi      r3, r1, 0x80
	  lfs       f0, -0x5014(r2)
	  addi      r4, r1, 0x50
	  stfs      f1, 0x50(r1)
	  lfs       f1, 0x210(r23)
	  stfs      f1, 0x54(r1)
	  lfs       f1, 0x214(r23)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  bl        0x7DB10
	  li        r0, 0x1
	  addi      r3, r1, 0xE8
	  stb       r0, 0x9C(r1)
	  addi      r4, r1, 0x80
	  bl        0x7DB3C
	  addi      r3, r1, 0xE8
	  bl        0x7DBB0
	  b         .loc_0xB64

	.loc_0xF4:
	  addi      r3, r1, 0xE8
	  bl        0x7DC8C
	  lhz       r0, 0x128(r3)
	  mr        r27, r3
	  cmpwi     r0, 0x408
	  beq-      .loc_0x8EC
	  bge-      .loc_0x14C
	  cmpwi     r0, 0x401
	  beq-      .loc_0x28C
	  bge-      .loc_0x140
	  cmpwi     r0, 0x1
	  beq-      .loc_0x9A0
	  bge-      .loc_0x134
	  cmpwi     r0, 0
	  bge-      .loc_0x188
	  b         .loc_0xB5C

	.loc_0x134:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xB5C
	  b         .loc_0xA60

	.loc_0x140:
	  cmpwi     r0, 0x404
	  beq-      .loc_0x3F4
	  b         .loc_0xB5C

	.loc_0x14C:
	  cmpwi     r0, 0x40E
	  beq-      .loc_0x750
	  bge-      .loc_0x170
	  cmpwi     r0, 0x40C
	  beq-      .loc_0x668
	  bge-      .loc_0x584
	  cmpwi     r0, 0x40A
	  bge-      .loc_0xB5C
	  b         .loc_0x608

	.loc_0x170:
	  cmpwi     r0, 0x410
	  beq-      .loc_0x6C8
	  blt-      .loc_0xB5C
	  cmpwi     r0, 0x413
	  bge-      .loc_0xB5C
	  b         .loc_0x7E4

	.loc_0x188:
	  lwz       r4, -0x6C18(r13)
	  mr        r25, r27
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x228
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  bl        -0x67ECC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  bl        -0x67EA4
	  cmplwi    r3, 0
	  bne-      .loc_0xB5C
	  lbz       r3, 0x2B8(r25)
	  lbz       r0, 0x2B8(r23)
	  cmpw      r3, r0
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  mr        r4, r23
	  bl        -0x752C4
	  lfs       f0, -0x5010(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x20C
	  fcmpo     cr0, f1, f31
	  blt-      .loc_0x214

	.loc_0x20C:
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0xB5C

	.loc_0x214:
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0xD
	  li        r28, 0x1
	  b         .loc_0xB5C

	.loc_0x228:
	  lbz       r0, 0x2B8(r23)
	  cmpwi     r0, 0
	  bne-      .loc_0xB5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  bl        -0x67ADC
	  cmpwi     r3, 0xA
	  bne-      .loc_0xB5C
	  mr        r3, r25
	  mr        r4, r23
	  bl        -0x7533C
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lfs       f0, -0x500C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0xC
	  b         .loc_0xB5C

	.loc_0x28C:
	  lwz       r12, 0x0(r3)
	  li        r26, 0x1
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x2E0
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x2E0
	  mr        r3, r27
	  bl        -0x4A0A0
	  mr        r0, r3
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r0
	  bl        0x369B4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2E0
	  li        r26, 0

	.loc_0x2E0:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  lwz       r0, 0xB8(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0xB5C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x16C(r12)
	  mtctr     r12
	  bctrl
	  extsh     r0, r3
	  cmpwi     r0, -0x1
	  beq-      .loc_0xB5C
	  mr        r3, r27
	  bl        -0x455FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x360
	  bne-      .loc_0xB5C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C

	.loc_0x360:
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r23
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x3B4
	  mr        r3, r27
	  lbz       r25, 0x2B8(r23)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r25
	  beq-      .loc_0xB5C

	.loc_0x3B4:
	  mr        r3, r27
	  mr        r4, r23
	  bl        -0x75494
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0xB5C
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x9A8(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r27
	  li        r29, 0x4
	  b         .loc_0xB5C

	.loc_0x3F4:
	  mr        r3, r23
	  bl        -0x67700
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C
	  lwz       r3, -0x6C18(r13)
	  mr        r26, r27
	  li        r25, 0x1
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x514
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        0x364C4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x514
	  lbz       r0, 0x2B8(r23)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x514
	  mr        r4, r27
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x14(r1)
	  addi      r3, r1, 0x60
	  lfs       f2, 0x18(r1)
	  addi      r4, r1, 0x40
	  lfs       f1, 0x1C(r1)
	  lfs       f0, -0x5008(r2)
	  stfs      f3, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bl        0x7D764
	  addi      r3, r1, 0xA0
	  addi      r4, r1, 0x60
	  bl        0x7D798
	  addi      r3, r1, 0xA0
	  bl        0x7D80C
	  b         .loc_0x504

	.loc_0x498:
	  addi      r3, r1, 0xA0
	  bl        0x7D8E8
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4FC
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4FC
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x15
	  bne-      .loc_0x4FC
	  li        r25, 0
	  b         .loc_0x514

	.loc_0x4FC:
	  addi      r3, r1, 0xA0
	  bl        0x7D840

	.loc_0x504:
	  addi      r3, r1, 0xA0
	  bl        0x7D86C
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x498

	.loc_0x514:
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r26
	  addi      r4, r23, 0x218
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0xB5C
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x9F8(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r26
	  li        r29, 0x6
	  b         .loc_0xB5C

	.loc_0x584:
	  mr        r3, r23
	  bl        -0x67890
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r27
	  addi      r4, r23, 0x20C
	  bl        0x3E60C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r27
	  addi      r4, r23, 0x218
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0xA20(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r27
	  li        r29, 0xA
	  b         .loc_0xB5C

	.loc_0x608:
	  lwz       r12, 0x0(r3)
	  mr        r25, r27
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  addi      r4, r23, 0x218
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x9D0(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0x7
	  b         .loc_0xB5C

	.loc_0x668:
	  lwz       r12, 0x0(r3)
	  mr        r25, r27
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  addi      r4, r23, 0x218
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x9D0(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0x7
	  b         .loc_0xB5C

	.loc_0x6C8:
	  lwz       r12, 0x0(r3)
	  mr        r25, r27
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x70C
	  bne-      .loc_0xB5C
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C

	.loc_0x70C:
	  mr        r3, r25
	  addi      r4, r23, 0x218
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0xA48(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0x7
	  b         .loc_0xB5C

	.loc_0x750:
	  rlwinm.   r0,r28,0,24,31
	  mr        r25, r27
	  bne-      .loc_0xB5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  bl        0x43120
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7A0
	  mr        r3, r25
	  bl        0x43110
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C
	  lbz       r0, 0x2B8(r23)
	  cmpwi     r0, 0x4
	  bne-      .loc_0xB5C

	.loc_0x7A0:
	  mr        r3, r25
	  addi      r4, r23, 0x218
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0xA70(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0x7
	  b         .loc_0xB5C

	.loc_0x7E4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xB5C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x4(r3)
	  li        r4, 0
	  cmpwi     r5, -0x1
	  beq-      .loc_0x848
	  lwz       r0, 0x8(r3)
	  cmpw      r0, r5
	  bge-      .loc_0x84C

	.loc_0x848:
	  li        r4, 0x1

	.loc_0x84C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x18(r3)
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0x210(r23)
	  lfs       f3, 0xC(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x20C(r23)
	  lfs       f1, 0x14(r3)
	  lfs       f0, 0x214(r23)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5004(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x8D0
	  ble-      .loc_0x8D4
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x8D4

	.loc_0x8D0:
	  fmr       f1, f0

	.loc_0x8D4:
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r27
	  li        r29, 0x9
	  b         .loc_0xB5C

	.loc_0x8EC:
	  lwz       r12, 0x0(r3)
	  mr        r25, r27
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r4, r25
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x21C(r23)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x218(r23)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x220(r23)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5004(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x970
	  ble-      .loc_0x974
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x974

	.loc_0x970:
	  fmr       f1, f0

	.loc_0x974:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x9D0(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f1
	  mr        r30, r25
	  li        r29, 0x8
	  b         .loc_0xB5C

	.loc_0x9A0:
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xB5C
	  lwz       r12, 0x0(r3)
	  mr        r25, r27
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  lhz       r3, 0x2DC(r25)
	  lbz       r0, 0x2B8(r23)
	  cmpw      r3, r0
	  bne-      .loc_0xB5C
	  mr        r3, r25
	  mr        r4, r23
	  bl        -0x75ABC
	  lwz       r12, 0x0(r25)
	  fmr       f30, f1
	  mr        r3, r25
	  addi      r4, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x34(r1)
	  fcmpo     cr0, f30, f31
	  lfs       f0, 0x210(r23)
	  lfs       f1, 0x3C(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x224(r23)
	  fadds     f0, f1, f0
	  fabs      f1, f2
	  frsp      f1, f1
	  fsubs     f1, f1, f0
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x980(r3)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0xB5C
	  lfs       f0, -0x5000(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f30
	  mr        r30, r25
	  li        r29, 0x5
	  b         .loc_0xB5C

	.loc_0xA60:
	  lwz       r12, 0x0(r3)
	  mr        r25, r27
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB5C
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0xADC
	  bne-      .loc_0xB5C
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB5C

	.loc_0xADC:
	  mr        r3, r25
	  mr        r4, r23
	  bl        -0x75BBC
	  lwz       r12, 0x0(r25)
	  fmr       f30, f1
	  mr        r3, r25
	  addi      r4, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x24(r1)
	  fcmpo     cr0, f30, f31
	  lfs       f0, 0x210(r23)
	  lfs       f1, 0x2C(r1)
	  fsubs     f2, f2, f0
	  lfs       f0, 0x224(r23)
	  fadds     f0, f1, f0
	  fabs      f1, f2
	  frsp      f1, f1
	  fsubs     f1, f1, f0
	  bge-      .loc_0xB5C
	  lwz       r3, -0x6D0C(r13)
	  lwz       r3, 0x6C(r3)
	  lfs       f0, 0x980(r3)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0xB5C
	  lfs       f0, -0x5000(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB5C
	  fmr       f31, f30
	  mr        r30, r25
	  li        r29, 0x5

	.loc_0xB5C:
	  addi      r3, r1, 0xE8
	  bl        0x7D1E0

	.loc_0xB64:
	  addi      r3, r1, 0xE8
	  bl        0x7D20C
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xF4
	  stw       r30, 0x0(r24)
	  mr        r3, r29

	.loc_0xB7C:
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  psq_l     f30,0x168(r1),0,0
	  lfd       f30, 0x160(r1)
	  lmw       r23, 0x13C(r1)
	  lwz       r0, 0x184(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B1360
 * Size:	001A04
 */
void Piki::graspSituation(Game::Creature**)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stmw      r24, 0xE0(r1)
	  lwz       r5, -0x64AC(r13)
	  mr        r31, r3
	  mr        r28, r4
	  cmplwi    r5, 0
	  beq-      .loc_0x50
	  lwz       r0, 0x18(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0x50
	  li        r0, 0
	  li        r3, -0x1
	  stw       r0, 0x0(r28)
	  b         .loc_0x19E0

	.loc_0x50:
	  lwz       r3, -0x6C18(r13)
	  li        r29, 0
	  lfs       f31, -0x4FFC(r2)
	  li        r30, -0x1
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2B8
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0xD0(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0xC4(r1)
	  li        r27, 0
	  lfs       f30, -0x5010(r2)
	  stw       r0, 0xC8(r1)
	  stw       r3, 0xCC(r1)
	  bne-      .loc_0xB4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r1)
	  b         .loc_0x278

	.loc_0xB4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r1)
	  b         .loc_0x120

	.loc_0xCC:
	  lwz       r3, 0xCC(r1)
	  lwz       r4, 0xC8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xD0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x278
	  lwz       r3, 0xCC(r1)
	  lwz       r4, 0xC8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r1)

	.loc_0x120:
	  lwz       r12, 0xC4(r1)
	  addi      r3, r1, 0xC4
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xCC
	  b         .loc_0x278

	.loc_0x140:
	  lwz       r3, 0xCC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r3, r26
	  bl        -0x68A28
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r3, r26
	  bl        -0x68A00
	  cmplwi    r3, 0
	  bne-      .loc_0x1BC
	  lbz       r3, 0x2B8(r26)
	  lbz       r0, 0x2B8(r31)
	  cmpw      r3, r0
	  beq-      .loc_0x1BC
	  mr        r3, r26
	  mr        r4, r31
	  bl        -0x75E20
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x1BC
	  mr        r27, r26
	  fmr       f30, f1

	.loc_0x1BC:
	  lwz       r0, 0xD0(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E8
	  lwz       r3, 0xCC(r1)
	  lwz       r4, 0xC8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r1)
	  b         .loc_0x278

	.loc_0x1E8:
	  lwz       r3, 0xCC(r1)
	  lwz       r4, 0xC8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r1)
	  b         .loc_0x25C

	.loc_0x208:
	  lwz       r3, 0xCC(r1)
	  lwz       r4, 0xC8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xD0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x278
	  lwz       r3, 0xCC(r1)
	  lwz       r4, 0xC8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r1)

	.loc_0x25C:
	  lwz       r12, 0xC4(r1)
	  addi      r3, r1, 0xC4
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x208

	.loc_0x278:
	  lwz       r3, 0xCC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC8(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x140
	  cmplwi    r27, 0
	  beq-      .loc_0x2B8
	  lfs       f0, -0x4FFC(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x2B8
	  stw       r27, 0x0(r28)
	  li        r3, 0xD
	  b         .loc_0x19E0

	.loc_0x2B8:
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x4F0
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0xC0(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0xB4(r1)
	  li        r27, 0
	  lfs       f30, -0x500C(r2)
	  stw       r0, 0xB8(r1)
	  stw       r3, 0xBC(r1)
	  bne-      .loc_0x30C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r1)
	  b         .loc_0x4B0

	.loc_0x30C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r1)
	  b         .loc_0x378

	.loc_0x324:
	  lwz       r3, 0xBC(r1)
	  lwz       r4, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4B0
	  lwz       r3, 0xBC(r1)
	  lwz       r4, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r1)

	.loc_0x378:
	  lwz       r12, 0xB4(r1)
	  addi      r3, r1, 0xB4
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x324
	  b         .loc_0x4B0

	.loc_0x398:
	  lwz       r3, 0xBC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3F4
	  mr        r3, r26
	  bl        -0x687F8
	  cmpwi     r3, 0xA
	  bne-      .loc_0x3F4
	  mr        r3, r26
	  mr        r4, r31
	  bl        -0x76058
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x3F4
	  mr        r27, r26
	  fmr       f30, f1

	.loc_0x3F4:
	  lwz       r0, 0xC0(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x420
	  lwz       r3, 0xBC(r1)
	  lwz       r4, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r1)
	  b         .loc_0x4B0

	.loc_0x420:
	  lwz       r3, 0xBC(r1)
	  lwz       r4, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r1)
	  b         .loc_0x494

	.loc_0x440:
	  lwz       r3, 0xBC(r1)
	  lwz       r4, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x4B0
	  lwz       r3, 0xBC(r1)
	  lwz       r4, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB8(r1)

	.loc_0x494:
	  lwz       r12, 0xB4(r1)
	  addi      r3, r1, 0xB4
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x440

	.loc_0x4B0:
	  lwz       r3, 0xBC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xB8(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x398
	  cmplwi    r27, 0
	  beq-      .loc_0x4F0
	  lfs       f0, -0x4FFC(r2)
	  fcmpo     cr0, f30, f0
	  bge-      .loc_0x4F0
	  fmr       f31, f30
	  mr        r29, r27
	  li        r30, 0xC

	.loc_0x4F0:
	  lwz       r4, -0x6D0C(r13)
	  addi      r3, r1, 0xA4
	  li        r27, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0x9A8(r4)
	  bl        -0x44EFC
	  addi      r3, r1, 0xA4
	  bl        -0x44EEC
	  b         .loc_0x644

	.loc_0x514:
	  addi      r3, r1, 0xA4
	  bl        -0x44EAC
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x63C
	  lwz       r0, 0xB8(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x63C
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x16C(r12)
	  mtctr     r12
	  bctrl
	  extsh     r0, r3
	  cmpwi     r0, -0x1
	  beq-      .loc_0x63C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x63C
	  mr        r3, r26
	  li        r24, 0x1
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x5D8
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x5D8
	  mr        r3, r26
	  bl        -0x4AF38
	  mr        r0, r3
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r0
	  bl        0x35B1C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5D8
	  li        r24, 0

	.loc_0x5D8:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x608
	  mr        r3, r26
	  lbz       r25, 0x2B8(r31)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r25
	  beq-      .loc_0x63C

	.loc_0x608:
	  mr        r3, r26
	  bl        -0x4647C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x63C
	  rlwinm.   r0,r24,0,24,31
	  beq-      .loc_0x63C
	  mr        r3, r26
	  mr        r4, r31
	  bl        -0x762A0
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x63C
	  mr        r27, r26
	  fmr       f30, f1

	.loc_0x63C:
	  addi      r3, r1, 0xA4
	  bl        -0x44F6C

	.loc_0x644:
	  addi      r3, r1, 0xA4
	  bl        -0x44EB4
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x514
	  cmplwi    r27, 0
	  beq-      .loc_0x670
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x670
	  fmr       f31, f30
	  mr        r29, r27
	  li        r30, 0x4

	.loc_0x670:
	  lwz       r3, -0x6BD0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x8A8
	  lwz       r5, -0x6D0C(r13)
	  lis       r4, 0x804B
	  li        r0, 0
	  addi      r3, r3, 0x30
	  lwz       r5, 0x6C(r5)
	  cmplwi    r0, 0
	  addi      r4, r4, 0x5A7C
	  li        r26, 0
	  lfs       f30, 0x9F8(r5)
	  stw       r4, 0x94(r1)
	  stw       r0, 0xA0(r1)
	  stw       r0, 0x98(r1)
	  stw       r3, 0x9C(r1)
	  bne-      .loc_0x6CC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r1)
	  b         .loc_0x86C

	.loc_0x6CC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r1)
	  b         .loc_0x738

	.loc_0x6E4:
	  lwz       r3, 0x9C(r1)
	  lwz       r4, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x86C
	  lwz       r3, 0x9C(r1)
	  lwz       r4, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r1)

	.loc_0x738:
	  lwz       r12, 0x94(r1)
	  addi      r3, r1, 0x94
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6E4
	  b         .loc_0x86C

	.loc_0x758:
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r25, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7B0
	  mr        r3, r25
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x7B0
	  mr        r26, r25
	  fmr       f30, f1

	.loc_0x7B0:
	  lwz       r0, 0xA0(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x7DC
	  lwz       r3, 0x9C(r1)
	  lwz       r4, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r1)
	  b         .loc_0x86C

	.loc_0x7DC:
	  lwz       r3, 0x9C(r1)
	  lwz       r4, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r1)
	  b         .loc_0x850

	.loc_0x7FC:
	  lwz       r3, 0x9C(r1)
	  lwz       r4, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x86C
	  lwz       r3, 0x9C(r1)
	  lwz       r4, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x98(r1)

	.loc_0x850:
	  lwz       r12, 0x94(r1)
	  addi      r3, r1, 0x94
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7FC

	.loc_0x86C:
	  lwz       r3, 0x9C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x98(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x758
	  cmplwi    r26, 0
	  beq-      .loc_0x8A8
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x8A8
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x6

	.loc_0x8A8:
	  lwz       r3, -0x6BCC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xAE4
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0x9F8(r4)
	  beq-      .loc_0x8CC
	  addi      r3, r3, 0x30

	.loc_0x8CC:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A7C
	  stw       r0, 0x90(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x84(r1)
	  stw       r0, 0x88(r1)
	  stw       r3, 0x8C(r1)
	  bne-      .loc_0x908
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)
	  b         .loc_0xAA8

	.loc_0x908:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)
	  b         .loc_0x974

	.loc_0x920:
	  lwz       r3, 0x8C(r1)
	  lwz       r4, 0x88(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAA8
	  lwz       r3, 0x8C(r1)
	  lwz       r4, 0x88(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)

	.loc_0x974:
	  lwz       r12, 0x84(r1)
	  addi      r3, r1, 0x84
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x920
	  b         .loc_0xAA8

	.loc_0x994:
	  lwz       r3, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r25, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9EC
	  mr        r3, r25
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x9EC
	  mr        r26, r25
	  fmr       f30, f1

	.loc_0x9EC:
	  lwz       r0, 0x90(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xA18
	  lwz       r3, 0x8C(r1)
	  lwz       r4, 0x88(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)
	  b         .loc_0xAA8

	.loc_0xA18:
	  lwz       r3, 0x8C(r1)
	  lwz       r4, 0x88(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)
	  b         .loc_0xA8C

	.loc_0xA38:
	  lwz       r3, 0x8C(r1)
	  lwz       r4, 0x88(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAA8
	  lwz       r3, 0x8C(r1)
	  lwz       r4, 0x88(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x88(r1)

	.loc_0xA8C:
	  lwz       r12, 0x84(r1)
	  addi      r3, r1, 0x84
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xA38

	.loc_0xAA8:
	  lwz       r3, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x88(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x994
	  cmplwi    r26, 0
	  beq-      .loc_0xAE4
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0xAE4
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x6

	.loc_0xAE4:
	  lwz       r3, -0x6B48(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD38
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0xA20(r4)
	  beq-      .loc_0xB08
	  addi      r3, r3, 0x30

	.loc_0xB08:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x80(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x74(r1)
	  stw       r0, 0x78(r1)
	  stw       r3, 0x7C(r1)
	  bne-      .loc_0xB44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0xCFC

	.loc_0xB44:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0xBB0

	.loc_0xB5C:
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x80(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCFC
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)

	.loc_0xBB0:
	  lwz       r12, 0x74(r1)
	  addi      r3, r1, 0x74
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB5C
	  b         .loc_0xCFC

	.loc_0xBD0:
	  lwz       r3, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r24, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC40
	  mr        r3, r24
	  addi      r4, r31, 0x20C
	  bl        0x3D418
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC40
	  mr        r3, r24
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0xC40
	  mr        r26, r24
	  fmr       f30, f1

	.loc_0xC40:
	  lwz       r0, 0x80(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xC6C
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0xCFC

	.loc_0xC6C:
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)
	  b         .loc_0xCE0

	.loc_0xC8C:
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x80(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCFC
	  lwz       r3, 0x7C(r1)
	  lwz       r4, 0x78(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x78(r1)

	.loc_0xCE0:
	  lwz       r12, 0x74(r1)
	  addi      r3, r1, 0x74
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xC8C

	.loc_0xCFC:
	  lwz       r3, 0x7C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xBD0
	  cmplwi    r26, 0
	  beq-      .loc_0xD38
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0xD38
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0xA

	.loc_0xD38:
	  lwz       r3, -0x6B80(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xF78
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0x9D0(r4)
	  beq-      .loc_0xD5C
	  addi      r3, r3, 0x30

	.loc_0xD5C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x70(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x64(r1)
	  stw       r0, 0x68(r1)
	  stw       r3, 0x6C(r1)
	  bne-      .loc_0xD98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0xF3C

	.loc_0xD98:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0xE04

	.loc_0xDB0:
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF3C
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)

	.loc_0xE04:
	  lwz       r12, 0x64(r1)
	  addi      r3, r1, 0x64
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xDB0
	  b         .loc_0xF3C

	.loc_0xE24:
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r24, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE80
	  mr        r3, r24
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0xE80
	  mr        r26, r24
	  fmr       f30, f1

	.loc_0xE80:
	  lwz       r0, 0x70(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xEAC
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0xF3C

	.loc_0xEAC:
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)
	  b         .loc_0xF20

	.loc_0xECC:
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x70(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF3C
	  lwz       r3, 0x6C(r1)
	  lwz       r4, 0x68(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x68(r1)

	.loc_0xF20:
	  lwz       r12, 0x64(r1)
	  addi      r3, r1, 0x64
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xECC

	.loc_0xF3C:
	  lwz       r3, 0x6C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x68(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE24
	  cmplwi    r26, 0
	  beq-      .loc_0xF78
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0xF78
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x7

	.loc_0xF78:
	  lwz       r3, -0x6B50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x11B8
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0x9D0(r4)
	  beq-      .loc_0xF9C
	  addi      r3, r3, 0x30

	.loc_0xF9C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x60(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x54(r1)
	  stw       r0, 0x58(r1)
	  stw       r3, 0x5C(r1)
	  bne-      .loc_0xFD8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)
	  b         .loc_0x117C

	.loc_0xFD8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)
	  b         .loc_0x1044

	.loc_0xFF0:
	  lwz       r3, 0x5C(r1)
	  lwz       r4, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x117C
	  lwz       r3, 0x5C(r1)
	  lwz       r4, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)

	.loc_0x1044:
	  lwz       r12, 0x54(r1)
	  addi      r3, r1, 0x54
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xFF0
	  b         .loc_0x117C

	.loc_0x1064:
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r24, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C0
	  mr        r3, r24
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x10C0
	  mr        r26, r24
	  fmr       f30, f1

	.loc_0x10C0:
	  lwz       r0, 0x60(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x10EC
	  lwz       r3, 0x5C(r1)
	  lwz       r4, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)
	  b         .loc_0x117C

	.loc_0x10EC:
	  lwz       r3, 0x5C(r1)
	  lwz       r4, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)
	  b         .loc_0x1160

	.loc_0x110C:
	  lwz       r3, 0x5C(r1)
	  lwz       r4, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x60(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x117C
	  lwz       r3, 0x5C(r1)
	  lwz       r4, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x58(r1)

	.loc_0x1160:
	  lwz       r12, 0x54(r1)
	  addi      r3, r1, 0x54
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x110C

	.loc_0x117C:
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x58(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1064
	  cmplwi    r26, 0
	  beq-      .loc_0x11B8
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x11B8
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x7

	.loc_0x11B8:
	  lwz       r3, -0x6B10(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x13F8
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0xA48(r4)
	  beq-      .loc_0x11DC
	  addi      r3, r3, 0x30

	.loc_0x11DC:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x50(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x44(r1)
	  stw       r0, 0x48(r1)
	  stw       r3, 0x4C(r1)
	  bne-      .loc_0x1218
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x13BC

	.loc_0x1218:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x1284

	.loc_0x1230:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x13BC
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x1284:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1230
	  b         .loc_0x13BC

	.loc_0x12A4:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r24, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1300
	  mr        r3, r24
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x1300
	  mr        r26, r24
	  fmr       f30, f1

	.loc_0x1300:
	  lwz       r0, 0x50(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x132C
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x13BC

	.loc_0x132C:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)
	  b         .loc_0x13A0

	.loc_0x134C:
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x50(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x13BC
	  lwz       r3, 0x4C(r1)
	  lwz       r4, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x48(r1)

	.loc_0x13A0:
	  lwz       r12, 0x44(r1)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134C

	.loc_0x13BC:
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x48(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x12A4
	  cmplwi    r26, 0
	  beq-      .loc_0x13F8
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x13F8
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x7

	.loc_0x13F8:
	  lwz       r3, -0x6B30(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1654
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0xA70(r4)
	  beq-      .loc_0x141C
	  addi      r3, r3, 0x30

	.loc_0x141C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x40(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x34(r1)
	  stw       r0, 0x38(r1)
	  stw       r3, 0x3C(r1)
	  bne-      .loc_0x1458
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x1618

	.loc_0x1458:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x14C4

	.loc_0x1470:
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1618
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)

	.loc_0x14C4:
	  lwz       r12, 0x34(r1)
	  addi      r3, r1, 0x34
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1470
	  b         .loc_0x1618

	.loc_0x14E4:
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r24, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x155C
	  lbz       r0, 0x2B8(r31)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1534
	  mr        r3, r24
	  bl        0x417D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x155C

	.loc_0x1534:
	  mr        r3, r24
	  addi      r4, r31, 0x218
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x155C
	  mr        r26, r24
	  fmr       f30, f1

	.loc_0x155C:
	  lwz       r0, 0x40(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1588
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x1618

	.loc_0x1588:
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)
	  b         .loc_0x15FC

	.loc_0x15A8:
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1618
	  lwz       r3, 0x3C(r1)
	  lwz       r4, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r1)

	.loc_0x15FC:
	  lwz       r12, 0x34(r1)
	  addi      r3, r1, 0x34
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x15A8

	.loc_0x1618:
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x38(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x14E4
	  cmplwi    r26, 0
	  beq-      .loc_0x1654
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x1654
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x7

	.loc_0x1654:
	  lwz       r3, -0x6B88(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x18E8
	  lwz       r4, -0x6D0C(r13)
	  li        r26, 0
	  lwz       r4, 0x6C(r4)
	  lfs       f30, 0xA98(r4)
	  beq-      .loc_0x1678
	  addi      r3, r3, 0x30

	.loc_0x1678:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x30(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x24(r1)
	  stw       r0, 0x28(r1)
	  stw       r3, 0x2C(r1)
	  bne-      .loc_0x16B4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x18AC

	.loc_0x16B4:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x1720

	.loc_0x16CC:
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x18AC
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)

	.loc_0x1720:
	  lwz       r12, 0x24(r1)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x16CC
	  b         .loc_0x18AC

	.loc_0x1740:
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r24, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x17F0
	  mr        r4, r24
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x21C(r31)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x218(r31)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x220(r31)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5004(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x17DC
	  ble-      .loc_0x17E0
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x17E0

	.loc_0x17DC:
	  fmr       f1, f0

	.loc_0x17E0:
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x17F0
	  mr        r26, r24
	  fmr       f30, f1

	.loc_0x17F0:
	  lwz       r0, 0x30(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x181C
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x18AC

	.loc_0x181C:
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)
	  b         .loc_0x1890

	.loc_0x183C:
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x18AC
	  lwz       r3, 0x2C(r1)
	  lwz       r4, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r1)

	.loc_0x1890:
	  lwz       r12, 0x24(r1)
	  addi      r3, r1, 0x24
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x183C

	.loc_0x18AC:
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x28(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1740
	  cmplwi    r26, 0
	  beq-      .loc_0x18E8
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x18E8
	  fmr       f31, f30
	  mr        r29, r26
	  li        r30, 0x8

	.loc_0x18E8:
	  lwz       r3, -0x6D0C(r13)
	  li        r24, 0
	  lwz       r4, -0x6E20(r13)
	  lwz       r3, 0x6C(r3)
	  cmplwi    r4, 0
	  lfs       f30, 0x980(r3)
	  beq-      .loc_0x1908
	  addi      r4, r4, 0x4

	.loc_0x1908:
	  li        r0, 0
	  stw       r4, 0x1C(r1)
	  addi      r3, r1, 0x14
	  stw       r0, 0x20(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x18(r1)
	  bl        -0xA47F0
	  b         .loc_0x19B4

	.loc_0x1928:
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r25, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19AC
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xCC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x19AC
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19AC
	  mr        r3, r25
	  mr        r4, r31
	  bl        -0x77610
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x19AC
	  mr        r24, r25
	  fmr       f30, f1

	.loc_0x19AC:
	  addi      r3, r1, 0x14
	  bl        -0xA4E20

	.loc_0x19B4:
	  lwz       r3, 0x14(r1)
	  cmplwi    r3, 0
	  bne+      .loc_0x1928
	  cmplwi    r24, 0
	  beq-      .loc_0x19D8
	  fcmpo     cr0, f30, f31
	  bge-      .loc_0x19D8
	  mr        r29, r24
	  li        r30, 0x5

	.loc_0x19D8:
	  stw       r29, 0x0(r28)
	  mr        r3, r30

	.loc_0x19E0:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  lmw       r24, 0xE0(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B2D64
 * Size:	00004C
 */
void Iterator<Game::ItemGate>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801B2DB0
 * Size:	0007D4
 */
void Piki::invokeAI(Game::CollEvent*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stmw      r27, 0x10C(r1)
	  mr        r27, r4
	  mr        r30, r3
	  mr        r28, r5
	  li        r29, 0x1
	  lwz       r31, 0x0(r4)
	  bl        -0x6AF8C
	  cmpwi     r3, 0
	  bne-      .loc_0x48
	  mr        r3, r30
	  bl        -0x6AFD0
	  lhz       r0, 0x28(r3)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x48
	  li        r29, 0

	.loc_0x48:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0xF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x4(r3)
	  li        r4, 0
	  cmpwi     r5, -0x1
	  beq-      .loc_0xB8
	  lwz       r0, 0x8(r3)
	  cmpw      r0, r5
	  bge-      .loc_0xBC

	.loc_0xB8:
	  li        r4, 0x1

	.loc_0xBC:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xF4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x40(r1)
	  addi      r0, r3, 0x5A70
	  addi      r5, r1, 0x3C
	  stw       r4, 0x3C(r1)
	  li        r4, 0x9
	  stw       r0, 0x3C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1BF08
	  b         .loc_0x7C0

	.loc_0xF4:
	  lhz       r3, 0x128(r31)
	  cmpwi     r3, 0x407
	  beq-      .loc_0x7BC
	  bge-      .loc_0x14C
	  cmpwi     r3, 0x401
	  beq-      .loc_0x2F0
	  bge-      .loc_0x134
	  cmpwi     r3, 0x1
	  beq-      .loc_0x188
	  bge-      .loc_0x128
	  cmpwi     r3, 0
	  bge-      .loc_0x264
	  b         .loc_0x7BC

	.loc_0x128:
	  cmpwi     r3, 0x3
	  bge-      .loc_0x7BC
	  b         .loc_0x428

	.loc_0x134:
	  cmpwi     r3, 0x405
	  beq-      .loc_0x7BC
	  bge-      .loc_0x204
	  cmpwi     r3, 0x404
	  bge-      .loc_0x4D4
	  b         .loc_0x7BC

	.loc_0x14C:
	  cmpwi     r3, 0x40D
	  beq-      .loc_0x75C
	  bge-      .loc_0x170
	  cmpwi     r3, 0x409
	  beq-      .loc_0x620
	  blt-      .loc_0x724
	  cmpwi     r3, 0x40C
	  bge-      .loc_0x6D0
	  b         .loc_0x7BC

	.loc_0x170:
	  cmpwi     r3, 0x410
	  beq-      .loc_0x620
	  bge-      .loc_0x7BC
	  cmpwi     r3, 0x40F
	  bge-      .loc_0x7BC
	  b         .loc_0x620

	.loc_0x188:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x7BC
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x7BC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  lhz       r3, 0x2DC(r31)
	  lbz       r0, 0x2B8(r30)
	  cmpw      r3, r0
	  bne-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  li        r0, 0
	  stw       r4, 0x78(r1)
	  addi      r3, r3, 0x5A64
	  addi      r5, r1, 0x78
	  li        r4, 0x5
	  stw       r3, 0x78(r1)
	  stw       r31, 0x7C(r1)
	  stw       r0, 0x80(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C018
	  b         .loc_0x7C0

	.loc_0x204:
	  lbz       r0, 0x2B9(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x7BC
	  lbz       r0, 0x1E0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x7BC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x228(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  stw       r31, 0x8(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x8
	  li        r5, 0xD
	  lwz       r3, 0x28C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x7C0

	.loc_0x264:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x7BC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  mr        r3, r31
	  bl        -0x6A598
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  mr        r3, r31
	  bl        -0x6A570
	  cmplwi    r3, 0
	  bne-      .loc_0x7BC
	  lbz       r3, 0x2B8(r31)
	  lbz       r0, 0x2B8(r30)
	  cmpw      r3, r0
	  beq-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x70(r1)
	  addi      r0, r3, 0x47DC
	  addi      r5, r1, 0x6C
	  stw       r4, 0x6C(r1)
	  li        r4, 0xD
	  stw       r0, 0x6C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C104
	  b         .loc_0x7C0

	.loc_0x2F0:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x7BC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7BC
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x360
	  mr        r3, r31
	  lbz       r29, 0x2B8(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E8(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r3, r29
	  beq-      .loc_0x7BC

	.loc_0x360:
	  mr        r3, r31
	  bl        -0x4BB64
	  mr        r29, r3
	  mr        r3, r31
	  bl        -0x487EC
	  cmpw      r3, r29
	  bge-      .loc_0x7BC
	  mr        r3, r31
	  bl        -0x47C40
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7BC
	  mr        r3, r31
	  li        r29, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x3E4
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x3E4
	  mr        r3, r31
	  bl        -0x4C794
	  mr        r0, r3
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r0
	  bl        0x342C0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3E4
	  li        r29, 0

	.loc_0x3E4:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x7BC
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x530
	  mr        r3, r30
	  stw       r0, 0xA4(r1)
	  addi      r0, r4, 0x5A58
	  addi      r4, r1, 0xA4
	  stw       r0, 0xA4(r1)
	  bl        0xAA0
	  stw       r31, 0xA8(r1)
	  addi      r5, r1, 0xA4
	  li        r4, 0x4
	  lwz       r3, 0x294(r30)
	  bl        -0x1C23C
	  b         .loc_0x7C0

	.loc_0x428:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x4A0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xD4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4A0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4A0
	  lwz       r6, 0x4(r27)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x530
	  lis       r3, 0x804B
	  stw       r0, 0x60(r1)
	  addi      r0, r3, 0x5A64
	  addi      r5, r1, 0x60
	  li        r4, 0x5
	  stw       r0, 0x60(r1)
	  stw       r31, 0x64(r1)
	  stw       r6, 0x68(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C2B4
	  b         .loc_0x7C0

	.loc_0x4A0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x24
	  bne-      .loc_0x7BC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x7BC

	.loc_0x4D4:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x7BC
	  lwz       r3, -0x6C18(r13)
	  li        r29, 0x1
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x5E8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        0x33E00
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5E8
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x5E8
	  mr        r4, r31
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x44(r1)
	  addi      r3, r1, 0x84
	  lfs       f2, 0x48(r1)
	  addi      r4, r1, 0x50
	  lfs       f1, 0x4C(r1)
	  lfs       f0, -0x5008(r2)
	  stfs      f3, 0x50(r1)
	  stfs      f2, 0x54(r1)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  bl        0x7B0A0
	  addi      r3, r1, 0xC0
	  addi      r4, r1, 0x84
	  bl        0x7B0D4
	  addi      r3, r1, 0xC0
	  bl        0x7B148
	  b         .loc_0x5D8

	.loc_0x56C:
	  addi      r3, r1, 0xC0
	  bl        0x7B224
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5D0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5D0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x15
	  bne-      .loc_0x5D0
	  li        r29, 0
	  b         .loc_0x5E8

	.loc_0x5D0:
	  addi      r3, r1, 0xC0
	  bl        0x7B17C

	.loc_0x5D8:
	  addi      r3, r1, 0xC0
	  bl        0x7B1A8
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x56C

	.loc_0x5E8:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x38(r1)
	  addi      r0, r3, 0x5A4C
	  addi      r5, r1, 0x34
	  stw       r4, 0x34(r1)
	  li        r4, 0x6
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C434
	  b         .loc_0x7C0

	.loc_0x620:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x684
	  cmplwi    r3, 0x40E
	  bne-      .loc_0x654
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x654
	  mr        r3, r31
	  bl        0x40C68
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x654
	  li        r3, 0
	  b         .loc_0x7C0

	.loc_0x654:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x30(r1)
	  addi      r0, r3, 0x5A40
	  addi      r5, r1, 0x2C
	  stw       r4, 0x2C(r1)
	  li        r4, 0x7
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C498
	  b         .loc_0x7C0

	.loc_0x684:
	  cmplwi    r3, 0x40E
	  bne-      .loc_0x7BC
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x7BC
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x28(r1)
	  addi      r0, r3, 0x5A40
	  addi      r5, r1, 0x24
	  stw       r4, 0x24(r1)
	  li        r4, 0x7
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C4E4
	  b         .loc_0x7C0

	.loc_0x6D0:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x7BC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x20(r1)
	  addi      r0, r3, 0x5A40
	  addi      r5, r1, 0x1C
	  stw       r4, 0x1C(r1)
	  li        r4, 0x7
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C538
	  b         .loc_0x7C0

	.loc_0x724:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x18(r1)
	  addi      r0, r3, 0x3C24
	  addi      r5, r1, 0x14
	  stw       r4, 0x14(r1)
	  li        r4, 0x8
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C570
	  b         .loc_0x7C0

	.loc_0x75C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  mr        r3, r31
	  addi      r4, r30, 0x20C
	  bl        0x3BE54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7BC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x10(r1)
	  addi      r0, r3, 0x5A40
	  addi      r5, r1, 0xC
	  stw       r4, 0xC(r1)
	  li        r4, 0x7
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C5D0
	  b         .loc_0x7C0

	.loc_0x7BC:
	  li        r3, 0

	.loc_0x7C0:
	  lmw       r27, 0x10C(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3584
 * Size:	0002C4
 */
void Piki::invokeAI(Game::PlatEvent*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  mr        r30, r3
	  stw       r29, 0xB4(r1)
	  mr        r29, r4
	  lwz       r3, 0x0(r4)
	  lwz       r31, 0xF4(r3)
	  lhz       r0, 0x128(r31)
	  cmpwi     r0, 0x40C
	  beq-      .loc_0x258
	  bge-      .loc_0x44
	  cmpwi     r0, 0x404
	  beq-      .loc_0x50
	  b         .loc_0x2A4

	.loc_0x44:
	  cmpwi     r0, 0x40E
	  bge-      .loc_0x2A4
	  b         .loc_0x1DC

	.loc_0x50:
	  lis       r4, 0x6761
	  addi      r3, r3, 0xF8
	  addi      r4, r4, 0x7465
	  li        r5, 0x2A
	  bl        0x25FD18
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C
	  lwz       r6, 0x0(r29)
	  lis       r3, 0x656C
	  addi      r4, r3, 0x6563
	  li        r5, 0x2A
	  addi      r3, r6, 0xF8
	  bl        0x25FCF8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4

	.loc_0x8C:
	  mr        r3, r30
	  bl        -0x6A15C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  li        r3, 0
	  b         .loc_0x2A8

	.loc_0xA4:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x1AC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        0x33A68
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1AC
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x1AC
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x20(r1)
	  addi      r3, r1, 0x3C
	  lfs       f2, 0x24(r1)
	  addi      r4, r1, 0x2C
	  lfs       f1, 0x28(r1)
	  lfs       f0, -0x5008(r2)
	  stfs      f3, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  bl        0x7AD08
	  addi      r3, r1, 0x5C
	  addi      r4, r1, 0x3C
	  bl        0x7AD3C
	  addi      r3, r1, 0x5C
	  bl        0x7ADB0
	  b         .loc_0x19C

	.loc_0x130:
	  addi      r3, r1, 0x5C
	  bl        0x7AE8C
	  lwz       r12, 0x0(r3)
	  mr        r29, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x194
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x15
	  bne-      .loc_0x194
	  li        r3, 0
	  b         .loc_0x2A8

	.loc_0x194:
	  addi      r3, r1, 0x5C
	  bl        0x7ADE4

	.loc_0x19C:
	  addi      r3, r1, 0x5C
	  bl        0x7AE10
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x130

	.loc_0x1AC:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x1C(r1)
	  addi      r0, r3, 0x5A4C
	  addi      r5, r1, 0x18
	  stw       r4, 0x18(r1)
	  li        r4, 0x6
	  stw       r0, 0x18(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C7C4
	  b         .loc_0x2A8

	.loc_0x1DC:
	  lfs       f1, 0x8(r29)
	  lfs       f0, -0x4FF8(r2)
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x2A4
	  mr        r3, r31
	  mr        r29, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  mr        r3, r29
	  addi      r4, r30, 0x20C
	  bl        0x3BBE4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0x14(r1)
	  addi      r0, r3, 0x5A34
	  addi      r5, r1, 0x10
	  stw       r4, 0x10(r1)
	  li        r4, 0xA
	  stw       r0, 0x10(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C840
	  b         .loc_0x2A8

	.loc_0x258:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r31, 0xC(r1)
	  addi      r0, r3, 0x5A40
	  addi      r5, r1, 0x8
	  stw       r4, 0x8(r1)
	  li        r4, 0x7
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1C88C
	  b         .loc_0x2A8

	.loc_0x2A4:
	  li        r3, 0

	.loc_0x2A8:
	  lwz       r0, 0xC4(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3848
 * Size:	0000B0
 */
void Piki::invokeAIFree(Game::Piki::InvokeAIFreeArg&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  subi      r4, r5, 0x5D8
	  li        r5, 0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x277280
	  lbz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  addi      r3, r30, 0x298
	  bl        -0x1D204
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80

	.loc_0x50:
	  lbz       r4, 0x1(r31)
	  mr        r3, r30
	  bl        .loc_0xB0
	  lwz       r5, -0x6514(r13)
	  mr        r0, r3
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5D8
	  lwz       r3, 0x28(r5)
	  mr        r31, r0
	  bl        0x277240
	  mr        r3, r31
	  b         .loc_0x98

	.loc_0x80:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  subi      r4, r3, 0x5D8
	  lwz       r3, 0x28(r5)
	  bl        0x277224
	  li        r3, 0

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xB0:
	*/
}

/*
 * --INFO--
 * Address:	801B38F8
 * Size:	000310
 */
void Piki::checkInvokeAI(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r30, r3
	  stw       r29, 0x74(r1)
	  mr        r29, r4
	  lbz       r0, -0x7BC0(r13)
	  stw       r5, 0x8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  addi      r4, r1, 0x8
	  bl        -0x3170
	  mr        r31, r3
	  b         .loc_0x50

	.loc_0x44:
	  addi      r4, r1, 0x8
	  bl        -0x25E0
	  mr        r31, r3

	.loc_0x50:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x6C
	  subfic    r3, r31, -0x1
	  addi      r0, r31, 0x1
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31
	  b         .loc_0x2F4

	.loc_0x6C:
	  lwz       r3, 0x8(r1)
	  cmplwi    r3, 0
	  bne-      .loc_0x80
	  li        r3, 0
	  b         .loc_0x2F4

	.loc_0x80:
	  subi      r0, r31, 0x4
	  cmplwi    r0, 0x9
	  bgt-      .loc_0x2F0
	  lis       r4, 0x804B
	  rlwinm    r0,r0,2,0,29
	  addi      r4, r4, 0x5A0C
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x5CC
	  li        r4, 0x5F9
	  subi      r5, r5, 0x5C0
	  crclr     6, 0x6
	  bl        -0x18938C

	.loc_0xD8:
	  lis       r3, 0x804B
	  lwz       r0, 0x8(r1)
	  addi      r4, r3, 0x530
	  lis       r3, 0x804B
	  stw       r4, 0x48(r1)
	  addi      r3, r3, 0x47DC
	  mr        r4, r31
	  addi      r5, r1, 0x48
	  stw       r3, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CA68
	  b         .loc_0x2F4
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x530
	  mr        r3, r30
	  stw       r0, 0x54(r1)
	  addi      r0, r4, 0x5A58
	  addi      r4, r1, 0x54
	  stw       r0, 0x54(r1)
	  bl        0x238
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x154
	  lwz       r0, 0x8(r1)
	  mr        r4, r31
	  addi      r5, r1, 0x54
	  stw       r0, 0x58(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CAB0
	  b         .loc_0x2F4

	.loc_0x154:
	  li        r3, 0x1
	  b         .loc_0x2F4
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r5, r5, 0x530
	  li        r0, 0
	  stw       r5, 0x3C(r1)
	  addi      r6, r4, 0x5A64
	  mr        r4, r31
	  addi      r5, r1, 0x3C
	  stw       r6, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  stw       r0, 0x44(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CAF0
	  b         .loc_0x2F4
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r5, r5, 0x530
	  stw       r3, 0x38(r1)
	  addi      r0, r4, 0x524
	  mr        r4, r31
	  stw       r5, 0x34(r1)
	  addi      r5, r1, 0x34
	  stw       r0, 0x34(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CB20
	  b         .loc_0x2F4
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r6, r5, 0x530
	  stw       r3, 0x30(r1)
	  addi      r0, r4, 0x5A4C
	  addi      r5, r1, 0x2C
	  stw       r6, 0x2C(r1)
	  li        r4, 0x6
	  stw       r0, 0x2C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CB50
	  b         .loc_0x2F4
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x258
	  mr        r3, r31
	  addi      r4, r30, 0x20C
	  bl        0x3B874
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x258
	  lis       r3, 0x804B
	  lwz       r0, 0x8(r1)
	  addi      r4, r3, 0x530
	  lis       r3, 0x804B
	  stw       r4, 0x24(r1)
	  addi      r3, r3, 0x5A34
	  addi      r5, r1, 0x24
	  li        r4, 0xA
	  stw       r3, 0x24(r1)
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CBB4
	  b         .loc_0x2F4

	.loc_0x258:
	  li        r3, 0x1
	  b         .loc_0x2F4
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r6, r5, 0x530
	  stw       r3, 0x20(r1)
	  addi      r0, r4, 0x5A40
	  addi      r5, r1, 0x1C
	  stw       r6, 0x1C(r1)
	  li        r4, 0x7
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CBEC
	  b         .loc_0x2F4
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r6, r5, 0x530
	  stw       r3, 0x18(r1)
	  addi      r0, r4, 0x3C24
	  addi      r5, r1, 0x14
	  stw       r6, 0x14(r1)
	  li        r4, 0x8
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CC1C
	  b         .loc_0x2F4
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r6, r5, 0x530
	  stw       r3, 0x10(r1)
	  addi      r0, r4, 0x5A70
	  addi      r5, r1, 0xC
	  stw       r6, 0xC(r1)
	  li        r4, 0x9
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x294(r30)
	  bl        -0x1CC4C
	  b         .loc_0x2F4

	.loc_0x2F0:
	  li        r3, 0

	.loc_0x2F4:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3C08
 * Size:	000054
 */
void Piki::invokeAI(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x328
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C
	  lwz       r3, 0x294(r31)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1CCA4
	  li        r3, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r3, 0x1

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3C5C
 * Size:	000028
 */
void Piki::setActTransportArg(PikiAI::ActTransportArg&)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x5004(r2)
	  stw       r0, 0x8(r4)
	  li        r0, -0x1
	  li        r3, 0x1
	  stfs      f0, 0xC(r4)
	  stfs      f0, 0x10(r4)
	  stfs      f0, 0x14(r4)
	  sth       r0, 0x18(r4)
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B3C84
 * Size:	00000C
 */
void PikiAI::ActBridgeArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x5B4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3C90
 * Size:	00000C
 */
void PikiAI::ActBreakRockArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x5A4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3C9C
 * Size:	00000C
 */
void PikiAI::ActBreakGateArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x594
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3CA8
 * Size:	00000C
 */
void PikiAI::ActTransportArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x584
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3CB4
 * Size:	00000C
 */
void PikiAI::ActAttackArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x574
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3CC0
 * Size:	00000C
 */
void PikiAI::ActWeedArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x564
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3CCC
 * Size:	000038
 */
void Iterator<Game::ItemGate>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3D04
 * Size:	0000E4
 */
void Iterator<Game::ItemGate>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3DE8
 * Size:	0000DC
 */
void Iterator<Game::ItemGate>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801B3EC4
 * Size:	000028
 */
void __sinit_pikiAI_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6C28(r13)
	  stfsu     f0, 0x5A00(r3)
	  stfs      f0, -0x6C24(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
