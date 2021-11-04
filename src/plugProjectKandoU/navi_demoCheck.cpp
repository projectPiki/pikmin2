#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8021F3D0
 * Size:	001790
 */
void Navi::demoCheck(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x860(r1)
	  mflr      r0
	  stw       r0, 0x864(r1)
	  stfd      f31, 0x850(r1)
	  psq_st    f31,-0x7A8(r1),0,0
	  stfd      f30, 0x840(r1)
	  psq_st    f30,-0x7B8(r1),0,0
	  stfd      f29, 0x830(r1)
	  psq_st    f29,-0x7C8(r1),0,0
	  stmw      r26, 0x818(r1)
	  lwz       r4, -0x6C18(r13)
	  lis       r5, 0x8048
	  mr        r31, r3
	  lwz       r0, 0x44(r4)
	  addi      r30, r5, 0x2D30
	  cmpwi     r0, 0
	  bne-      .loc_0x54
	  lwz       r3, -0x6960(r13)
	  bl        0x333A0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5C

	.loc_0x54:
	  li        r3, 0
	  b         .loc_0x1764

	.loc_0x5C:
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x7C
	  li        r3, 0
	  b         .loc_0x1764

	.loc_0x7C:
	  lwz       r0, 0x278(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  li        r3, 0
	  b         .loc_0x1764

	.loc_0x90:
	  lwz       r0, -0x6BD0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xA8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x8
	  bl        -0x38094

	.loc_0xA8:
	  lwz       r3, -0x6E20(r13)
	  li        r4, 0x52
	  bl        -0x1117DC
	  mr        r0, r3
	  lwz       r3, -0x6B70(r13)
	  mr        r27, r0
	  li        r4, 0x19
	  bl        -0x380B4
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x6B70(r13)
	  cntlzw    r0, r0
	  li        r4, 0x1A
	  rlwinm    r29,r0,27,5,31
	  bl        -0x380CC
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r27, 0
	  cntlzw    r0, r0
	  rlwinm    r28,r0,27,5,31
	  beq-      .loc_0x31C
	  rlwinm.   r0,r29,0,24,31
	  bne-      .loc_0x104
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x31C

	.loc_0x104:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x114
	  addi      r5, r27, 0x4

	.loc_0x114:
	  lis       r3, 0x804C
	  li        r0, 0
	  addi      r4, r3, 0xA24
	  stw       r0, 0x330(r1)
	  addi      r3, r1, 0x324
	  stw       r4, 0x324(r1)
	  stw       r0, 0x328(r1)
	  stw       r5, 0x32C(r1)
	  bl        0x1824
	  b         .loc_0x2FC

	.loc_0x13C:
	  lwz       r3, 0x32C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r27, 0x2D8(r3)
	  mr        r26, r3
	  cmpwi     r27, 0x3
	  beq-      .loc_0x168
	  cmpwi     r27, 0x4
	  bne-      .loc_0x2F4

	.loc_0x168:
	  cmpwi     r27, 0x3
	  bne-      .loc_0x178
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x2F4

	.loc_0x178:
	  cmpwi     r27, 0x4
	  bne-      .loc_0x188
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2F4

	.loc_0x188:
	  mr        r3, r26
	  addi      r4, r1, 0x314
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x320(r1)
	  mr        r3, r31
	  lfs       f0, -0x4288(r2)
	  addi      r4, r1, 0x314
	  fadds     f0, f1, f0
	  stfs      f0, 0x320(r1)
	  bl        0x187C
	  cmplwi    r3, 0
	  beq-      .loc_0x2F4
	  cmpwi     r27, 0x4
	  bne-      .loc_0x260
	  addi      r3, r1, 0x5D8
	  addi      r4, r30, 0x1C
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x1738
	  mr        r4, r26
	  addi      r3, r1, 0x128
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x128(r1)
	  mr        r3, r26
	  lfs       f1, 0x12C(r1)
	  lfs       f0, 0x130(r1)
	  stfs      f2, 0x5F0(r1)
	  stfs      f1, 0x5F4(r1)
	  stfs      f0, 0x5F8(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x5FC(r1)
	  mr        r3, r26
	  lwz       r5, -0x64AC(r13)
	  li        r4, 0
	  stw       r26, 0x194(r5)
	  bl        -0xE3BBC
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x5D8
	  bl        0x20D3B8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x19
	  bl        -0x38280
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x260:
	  addi      r3, r1, 0x5A4
	  addi      r4, r30, 0x30
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x16A4
	  mr        r4, r26
	  addi      r3, r1, 0x11C
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x11C(r1)
	  mr        r3, r26
	  lfs       f1, 0x120(r1)
	  lfs       f0, 0x124(r1)
	  stfs      f2, 0x5BC(r1)
	  stfs      f1, 0x5C0(r1)
	  stfs      f0, 0x5C4(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x5C8(r1)
	  mr        r3, r26
	  lwz       r5, -0x64AC(r13)
	  li        r4, 0
	  stw       r26, 0x194(r5)
	  bl        -0xE3C50
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x5A4
	  bl        0x20D324
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1A
	  bl        -0x38314
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x2F4:
	  addi      r3, r1, 0x324
	  bl        0x14F0

	.loc_0x2FC:
	  lwz       r3, 0x32C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x328(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x13C

	.loc_0x31C:
	  lwz       r0, -0x6CD0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x824
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x24
	  bl        -0x38320
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x444
	  lhz       r0, 0x2DC(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x444
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0x1
	  bl        -0xA3C84
	  mr.       r26, r3
	  beq-      .loc_0x444
	  mr        r4, r26
	  addi      r3, r1, 0x110
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x110(r1)
	  mr        r4, r31
	  lfs       f1, 0x114(r1)
	  addi      r3, r1, 0x104
	  lfs       f0, 0x118(r1)
	  stfs      f2, 0x308(r1)
	  stfs      f1, 0x30C(r1)
	  stfs      f0, 0x310(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x104(r1)
	  addi      r3, r1, 0x308
	  lfs       f1, 0x108(r1)
	  addi      r4, r1, 0x2FC
	  lfs       f0, 0x10C(r1)
	  stfs      f2, 0x2FC(r1)
	  stfs      f1, 0x300(r1)
	  stfs      f0, 0x304(r1)
	  bl        .loc_0x1790
	  lfs       f0, -0x4284(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x444
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x24
	  bl        -0x38408
	  lwz       r6, -0x6C18(r13)
	  addi      r3, r1, 0x570
	  addi      r4, r30, 0x44
	  li        r5, 0
	  lwz       r6, 0x58(r6)
	  li        r7, 0
	  lwz       r6, 0xC8(r6)
	  bl        0x151C
	  lfs       f2, 0x308(r1)
	  mr        r3, r26
	  lfs       f1, 0x30C(r1)
	  lfs       f0, 0x310(r1)
	  stfs      f2, 0x588(r1)
	  stfs      f1, 0x58C(r1)
	  stfs      f0, 0x590(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x594(r1)
	  addi      r4, r1, 0x570
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20D1C0

	.loc_0x444:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2A
	  bl        -0x3843C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5E4
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0x2
	  bl        -0xA3D94
	  cmplwi    r3, 0
	  beq-      .loc_0x5E4
	  mr        r4, r3
	  addi      r3, r1, 0xF8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xF8(r1)
	  mr        r4, r31
	  lfs       f1, 0xFC(r1)
	  addi      r3, r1, 0xEC
	  lfs       f0, 0x100(r1)
	  stfs      f2, 0x2F0(r1)
	  stfs      f1, 0x2F4(r1)
	  stfs      f0, 0x2F8(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xEC(r1)
	  addi      r3, r1, 0x2F0
	  lfs       f1, 0xF0(r1)
	  addi      r4, r1, 0x2E4
	  lfs       f0, 0xF4(r1)
	  stfs      f2, 0x2E4(r1)
	  stfs      f1, 0x2E8(r1)
	  stfs      f0, 0x2EC(r1)
	  bl        .loc_0x1790
	  lfs       f0, -0x4280(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x5E4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2A
	  bl        -0x38518
	  addi      r3, r1, 0x53C
	  addi      r4, r30, 0x58
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x1414
	  lwz       r0, -0x6D0C(r13)
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r3, r1, 0x2D4
	  subi      r5, r5, 0x4364
	  stw       r4, 0x2E0(r1)
	  li        r26, 0
	  stw       r5, 0x2D4(r1)
	  stw       r4, 0x2D8(r1)
	  stw       r0, 0x2DC(r1)
	  bl        -0x109C6C
	  b         .loc_0x568

	.loc_0x538:
	  lwz       r3, 0x2DC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x560
	  mr        r26, r3
	  b         .loc_0x588

	.loc_0x560:
	  addi      r3, r1, 0x2D4
	  bl        -0x109D84

	.loc_0x568:
	  lwz       r3, 0x2DC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2D8(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x538

	.loc_0x588:
	  mr        r4, r26
	  addi      r3, r1, 0xE0
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xE0(r1)
	  mr        r3, r26
	  lfs       f1, 0xE4(r1)
	  lfs       f0, 0xE8(r1)
	  stfs      f2, 0x554(r1)
	  stfs      f1, 0x558(r1)
	  stfs      f0, 0x55C(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x560(r1)
	  addi      r4, r1, 0x53C
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20D020

	.loc_0x5E4:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2B
	  bl        -0x385DC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x824
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0
	  bl        -0xA3F34
	  cmplwi    r3, 0
	  beq-      .loc_0x824
	  mr        r4, r3
	  addi      r3, r1, 0xD4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xD4(r1)
	  mr        r4, r31
	  lfs       f1, 0xD8(r1)
	  addi      r3, r1, 0xC8
	  lfs       f0, 0xDC(r1)
	  stfs      f2, 0x2C8(r1)
	  stfs      f1, 0x2CC(r1)
	  stfs      f0, 0x2D0(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xC8(r1)
	  addi      r3, r1, 0x2C8
	  lfs       f1, 0xCC(r1)
	  addi      r4, r1, 0x2BC
	  lfs       f0, 0xD0(r1)
	  stfs      f2, 0x2BC(r1)
	  stfs      f1, 0x2C0(r1)
	  stfs      f0, 0x2C4(r1)
	  bl        .loc_0x1790
	  lfs       f0, -0x427C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x824
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2B
	  bl        -0x386B8
	  addi      r3, r1, 0x508
	  addi      r4, r30, 0x70
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x1274
	  lwz       r3, -0x6E20(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x6B8
	  addi      r3, r3, 0x4

	.loc_0x6B8:
	  li        r0, 0
	  stw       r3, 0x2B4(r1)
	  addi      r3, r1, 0x2AC
	  stw       r0, 0x2B8(r1)
	  stw       r0, 0x2AC(r1)
	  stw       r0, 0x2B0(r1)
	  bl        -0x111610
	  b         .loc_0x71C

	.loc_0x6D8:
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x2B0(r1)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x1B
	  bne-      .loc_0x714
	  mr        r3, r27
	  li        r4, 0
	  bl        -0xE4090

	.loc_0x714:
	  addi      r3, r1, 0x2AC
	  bl        -0x111BF8

	.loc_0x71C:
	  lwz       r3, 0x2AC(r1)
	  cmplwi    r3, 0
	  bne+      .loc_0x6D8
	  lwz       r0, -0x6D0C(r13)
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r3, r1, 0x29C
	  subi      r5, r5, 0x4364
	  stw       r4, 0x2A8(r1)
	  li        r26, 0
	  stw       r5, 0x29C(r1)
	  stw       r4, 0x2A0(r1)
	  stw       r0, 0x2A4(r1)
	  bl        -0x109E8C
	  b         .loc_0x790

	.loc_0x758:
	  lwz       r3, 0x2A4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x2B8(r3)
	  mr        r4, r3
	  cmpwi     r0, 0
	  bne-      .loc_0x788
	  mr        r26, r4
	  li        r4, 0
	  bl        -0xE4104

	.loc_0x788:
	  addi      r3, r1, 0x29C
	  bl        -0x109FAC

	.loc_0x790:
	  lwz       r3, 0x2A4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2A0(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x758
	  mr        r4, r26
	  addi      r3, r1, 0xBC
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xBC(r1)
	  mr        r3, r26
	  lfs       f1, 0xC0(r1)
	  lfs       f0, 0xC4(r1)
	  stfs      f2, 0x520(r1)
	  stfs      f1, 0x524(r1)
	  stfs      f0, 0x528(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x52C(r1)
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x538(r1)
	  addi      r4, r1, 0x508
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20CDE0

	.loc_0x824:
	  lwz       r0, -0x6CE0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x988
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1
	  bl        -0x38828
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x988
	  addi      r3, r1, 0x28C
	  bl        -0xB32B0
	  addi      r3, r1, 0x28C
	  bl        -0xB32A0
	  b         .loc_0x978

	.loc_0x858:
	  addi      r3, r1, 0x28C
	  bl        -0xB3260
	  lwz       r12, 0x0(r3)
	  mr        r26, r3
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x970
	  mr        r4, r26
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0xB0(r1)
	  mr        r3, r26
	  lfs       f30, 0xB4(r1)
	  lfs       f29, 0xB8(r1)
	  bl        -0xB92BC
	  lfs       f0, -0x4278(r2)
	  mr        r3, r31
	  stfs      f31, 0x27C(r1)
	  addi      r4, r1, 0x27C
	  fadds     f0, f0, f1
	  stfs      f30, 0x280(r1)
	  stfs      f29, 0x284(r1)
	  stfs      f0, 0x288(r1)
	  bl        0x1168
	  cmplwi    r3, 0
	  beq-      .loc_0x970
	  addi      r3, r1, 0x4D4
	  addi      r4, r30, 0x84
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x102C
	  mr        r4, r26
	  addi      r3, r1, 0xA4
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0xA4(r1)
	  addi      r3, r26, 0x138
	  lfs       f1, 0xA8(r1)
	  addi      r5, r1, 0x270
	  lfs       f0, 0xAC(r1)
	  li        r4, 0x2
	  stfs      f2, 0x4EC(r1)
	  stfs      f1, 0x4F0(r1)
	  stfs      f0, 0x4F4(r1)
	  bl        -0xE8A20
	  lis       r3, 0x8051
	  lfs       f1, 0x270(r1)
	  lfs       f2, 0x278(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1EAC08
	  stfs      f1, 0x4F8(r1)
	  addi      r4, r1, 0x4D4
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20CCA8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1
	  bl        -0x38990
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x970:
	  addi      r3, r1, 0x28C
	  bl        -0xB3310

	.loc_0x978:
	  addi      r3, r1, 0x28C
	  bl        -0xB3258
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x858

	.loc_0x988:
	  lwz       r0, -0x6CE0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB6C
	  lwz       r5, -0x6AD8(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x9A4
	  addi      r5, r5, 0x54

	.loc_0x9A4:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x1B74
	  stw       r0, 0x26C(r1)
	  addi      r3, r1, 0x260
	  stw       r4, 0x260(r1)
	  stw       r0, 0x264(r1)
	  stw       r5, 0x268(r1)
	  bl        -0xB06AC
	  b         .loc_0xB4C

	.loc_0x9CC:
	  lwz       r3, 0x268(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  bl        -0xB93D4
	  mr        r0, r3
	  lwz       r3, -0x6B70(r13)
	  mr        r26, r0
	  mr        r4, r26
	  bl        -0x38984
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB44
	  mr        r3, r27
	  bl        -0xB48E8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB44
	  mr        r4, r27
	  addi      r3, r1, 0x98
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0x98(r1)
	  mr        r3, r27
	  lfs       f30, 0x9C(r1)
	  lfs       f31, 0xA0(r1)
	  bl        -0xB9450
	  lfs       f0, -0x4274(r2)
	  cmpwi     r26, 0xA
	  li        r28, 0
	  fadds     f0, f0, f1
	  beq-      .loc_0xA60
	  cmpwi     r26, 0xB
	  beq-      .loc_0xA60
	  li        r28, 0x1

	.loc_0xA60:
	  rlwinm.   r0,r28,0,24,31
	  stfs      f29, 0x250(r1)
	  li        r3, 0
	  stfs      f30, 0x254(r1)
	  stfs      f31, 0x258(r1)
	  stfs      f0, 0x25C(r1)
	  bne-      .loc_0xA88
	  mr        r3, r31
	  addi      r4, r1, 0x250
	  bl        0xFB0

	.loc_0xA88:
	  cmplwi    r3, 0
	  bne-      .loc_0xA98
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0xB44

	.loc_0xA98:
	  mr        r5, r26
	  addi      r3, r1, 0x70C
	  addi      r4, r30, 0x98
	  crclr     6, 0x6
	  bl        -0x158A40
	  addi      r3, r1, 0x4A0
	  addi      r4, r1, 0x70C
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0xE58
	  mr        r4, r27
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8C(r1)
	  addi      r3, r27, 0x138
	  lfs       f1, 0x90(r1)
	  addi      r5, r1, 0x244
	  lfs       f0, 0x94(r1)
	  li        r4, 0x2
	  stfs      f2, 0x4B8(r1)
	  stfs      f1, 0x4BC(r1)
	  stfs      f0, 0x4C0(r1)
	  bl        -0xE8BF4
	  lis       r3, 0x8051
	  lfs       f1, 0x244(r1)
	  lfs       f2, 0x24C(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1EADDC
	  stfs      f1, 0x4C4(r1)
	  addi      r4, r1, 0x4A0
	  lwz       r3, -0x64AC(r13)
	  stw       r27, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20CAD4
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r26
	  bl        -0x38B00
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0xB44:
	  addi      r3, r1, 0x260
	  bl        -0xB0914

	.loc_0xB4C:
	  lwz       r3, 0x268(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x264(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x9CC

	.loc_0xB6C:
	  lwz       r0, -0x6CE0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xD18
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x18
	  bl        -0x38B70
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD18
	  lwz       r5, -0x6AE0(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0xB9C
	  addi      r5, r5, 0x54

	.loc_0xB9C:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x1B8C
	  stw       r0, 0x240(r1)
	  addi      r3, r1, 0x234
	  stw       r4, 0x234(r1)
	  stw       r0, 0x238(r1)
	  stw       r5, 0x23C(r1)
	  bl        -0xB06AC
	  b         .loc_0xCF8

	.loc_0xBC4:
	  lwz       r3, 0x23C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x32C(r3)
	  mr        r27, r3
	  cmplwi    r0, 0
	  bne-      .loc_0xCF0
	  lwz       r0, 0xB8(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0xCF0
	  bl        -0xB4AD4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCF0
	  mr        r4, r27
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0x80(r1)
	  mr        r3, r27
	  lfs       f30, 0x84(r1)
	  lfs       f31, 0x88(r1)
	  bl        -0xB963C
	  lfs       f0, -0x4278(r2)
	  mr        r3, r31
	  stfs      f29, 0x224(r1)
	  addi      r4, r1, 0x224
	  fadds     f0, f0, f1
	  stfs      f30, 0x228(r1)
	  stfs      f31, 0x22C(r1)
	  stfs      f0, 0x230(r1)
	  bl        0xDE8
	  cmplwi    r3, 0
	  beq-      .loc_0xCF0
	  addi      r3, r1, 0x46C
	  addi      r4, r30, 0xAC
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0xCAC
	  mr        r4, r27
	  addi      r3, r1, 0x74
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x74(r1)
	  addi      r3, r27, 0x138
	  lfs       f1, 0x78(r1)
	  addi      r5, r1, 0x218
	  lfs       f0, 0x7C(r1)
	  li        r4, 0x2
	  stfs      f2, 0x484(r1)
	  stfs      f1, 0x488(r1)
	  stfs      f0, 0x48C(r1)
	  bl        -0xE8DA0
	  lis       r3, 0x8051
	  lfs       f1, 0x218(r1)
	  lfs       f2, 0x220(r1)
	  subi      r3, r3, 0x2E20
	  bl        -0x1EAF88
	  stfs      f1, 0x490(r1)
	  addi      r4, r1, 0x46C
	  lwz       r3, -0x64AC(r13)
	  stw       r27, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20C928
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x18
	  bl        -0x38D10
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0xCF0:
	  addi      r3, r1, 0x234
	  bl        -0xB08C8

	.loc_0xCF8:
	  lwz       r3, 0x23C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x238(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xBC4

	.loc_0xD18:
	  lwz       r0, -0x6B60(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xF34
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xF34
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6B60(r13)
	  li        r28, 0
	  lwz       r29, 0x48(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0xD74
	  addi      r5, r5, 0x30

	.loc_0xD74:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x560
	  stw       r0, 0x214(r1)
	  addi      r3, r1, 0x208
	  stw       r4, 0x208(r1)
	  stw       r0, 0x20C(r1)
	  stw       r5, 0x210(r1)
	  bl        -0xD9104
	  b         .loc_0xE1C

	.loc_0xD9C:
	  lwz       r3, 0x210(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, -0x6B70(r13)
	  mr        r26, r0
	  mr        r4, r29
	  addi      r5, r26, 0x1E8
	  bl        -0x379CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE14
	  mr        r3, r26
	  addi      r4, r1, 0x1F8
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x204(r1)
	  mr        r3, r31
	  lfs       f0, -0x4270(r2)
	  addi      r4, r1, 0x1F8
	  fadds     f0, f1, f0
	  stfs      f0, 0x204(r1)
	  bl        0xC34
	  cmplwi    r3, 0
	  beq-      .loc_0xE14
	  mr        r28, r26
	  b         .loc_0xE3C

	.loc_0xE14:
	  addi      r3, r1, 0x208
	  bl        -0xD926C

	.loc_0xE1C:
	  lwz       r3, 0x210(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x20C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD9C

	.loc_0xE3C:
	  cmplwi    r28, 0
	  beq-      .loc_0xF34
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xF34
	  addi      r3, r1, 0x60C
	  addi      r4, r30, 0xBC
	  addi      r5, r28, 0x1E8
	  crclr     6, 0x6
	  bl        -0x158DF8
	  lwz       r3, -0x6A50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xEA8
	  lwz       r5, 0x10(r3)
	  li        r0, 0xB
	  b         .loc_0xEA0

	.loc_0xE7C:
	  lwz       r3, 0x18(r5)
	  cmpwi     r3, 0x13
	  bne-      .loc_0xE9C
	  lwz       r4, 0x1F0(r28)
	  lwz       r3, 0x20(r5)
	  cmplw     r4, r3
	  bne-      .loc_0xE9C
	  stw       r0, 0x18(r5)

	.loc_0xE9C:
	  lwz       r5, 0x4(r5)

	.loc_0xEA0:
	  cmplwi    r5, 0
	  bne+      .loc_0xE7C

	.loc_0xEA8:
	  addi      r3, r1, 0x438
	  addi      r4, r1, 0x60C
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0xA5C
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r29
	  addi      r5, r28, 0x1E8
	  bl        -0x379F8
	  mr        r4, r28
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x68(r1)
	  mr        r3, r28
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  stfs      f2, 0x450(r1)
	  stfs      f1, 0x454(r1)
	  stfs      f0, 0x458(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x45C(r1)
	  addi      r4, r1, 0x438
	  lwz       r3, -0x64AC(r13)
	  stw       r28, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20C6D8
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0xF34:
	  lwz       r0, -0x6BB8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x10D0
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3
	  bl        -0x38F38
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x10D0
	  lwz       r5, -0x6BB8(r13)
	  li        r26, 0
	  cmplwi    r5, 0
	  beq-      .loc_0xF68
	  addi      r5, r5, 0x30

	.loc_0xF68:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x560
	  stw       r0, 0x1F4(r1)
	  lfs       f29, -0x426C(r2)
	  addi      r3, r1, 0x1E8
	  stw       r4, 0x1E8(r1)
	  stw       r0, 0x1EC(r1)
	  stw       r5, 0x1F0(r1)
	  bl        -0xD92FC
	  b         .loc_0x1014

	.loc_0xF94:
	  lwz       r3, 0x1F0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  addi      r4, r1, 0x1D8
	  lwz       r12, 0x10(r12)
	  mr        r27, r0
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x5C
	  addi      r4, r1, 0x1D8
	  addi      r5, r31, 0x20C
	  bl        -0x18530
	  lfs       f2, 0x5C(r1)
	  addi      r3, r1, 0x1CC
	  lfs       f1, 0x60(r1)
	  lfs       f0, 0x64(r1)
	  stfs      f2, 0x1CC(r1)
	  stfs      f1, 0x1D0(r1)
	  stfs      f0, 0x1D4(r1)
	  bl        -0x18870
	  lfs       f0, 0x1E4(r1)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x100C
	  mr        r26, r27
	  fmr       f29, f0

	.loc_0x100C:
	  addi      r3, r1, 0x1E8
	  bl        -0xD9464

	.loc_0x1014:
	  lwz       r3, 0x1F0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1EC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF94
	  cmplwi    r26, 0
	  beq-      .loc_0x10D0
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x10D0
	  addi      r3, r1, 0x404
	  addi      r4, r30, 0xD0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x8BC
	  mr        r4, r26
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x50(r1)
	  mr        r3, r26
	  lfs       f1, 0x54(r1)
	  lfs       f0, 0x58(r1)
	  stfs      f2, 0x41C(r1)
	  stfs      f1, 0x420(r1)
	  stfs      f0, 0x424(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x428(r1)
	  addi      r4, r1, 0x404
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20C548
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3
	  bl        -0x390F0
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x10D0:
	  lwz       r0, -0x6B50(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x124C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        -0x390D4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x124C
	  lwz       r5, -0x6B50(r13)
	  li        r26, 0
	  cmplwi    r5, 0
	  beq-      .loc_0x1104
	  addi      r5, r5, 0x30

	.loc_0x1104:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x560
	  stw       r0, 0x1C8(r1)
	  addi      r3, r1, 0x1BC
	  stw       r4, 0x1BC(r1)
	  stw       r0, 0x1C0(r1)
	  stw       r5, 0x1C4(r1)
	  bl        -0xD9494
	  lfs       f31, -0x426C(r2)
	  b         .loc_0x1190

	.loc_0x1130:
	  lwz       r3, 0x1C4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  addi      r4, r1, 0x1AC
	  lwz       r12, 0x10(r12)
	  mr        r27, r0
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x1B8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x1AC
	  fadds     f0, f0, f31
	  stfs      f0, 0x1B8(r1)
	  bl        0x8C0
	  mr.       r26, r3
	  beq-      .loc_0x1188
	  mr        r26, r27
	  b         .loc_0x11B0

	.loc_0x1188:
	  addi      r3, r1, 0x1BC
	  bl        -0xD95E0

	.loc_0x1190:
	  lwz       r3, 0x1C4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C0(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1130

	.loc_0x11B0:
	  cmplwi    r26, 0
	  beq-      .loc_0x124C
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x124C
	  addi      r3, r1, 0x3D0
	  addi      r4, r30, 0xE4
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x740
	  mr        r4, r26
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x44(r1)
	  mr        r3, r26
	  lfs       f1, 0x48(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x3E8(r1)
	  stfs      f1, 0x3EC(r1)
	  stfs      f0, 0x3F0(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x3F4(r1)
	  addi      r4, r1, 0x3D0
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20C3CC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        -0x3926C
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x124C:
	  lwz       r0, -0x6B80(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x13A8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x9
	  bl        -0x39250
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x13A8
	  lwz       r5, -0x6B80(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x127C
	  addi      r5, r5, 0x30

	.loc_0x127C:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r4, r3, 0x560
	  stw       r0, 0x1A8(r1)
	  addi      r3, r1, 0x19C
	  stw       r4, 0x19C(r1)
	  stw       r0, 0x1A0(r1)
	  stw       r5, 0x1A4(r1)
	  bl        -0xD960C
	  lfs       f31, -0x426C(r2)
	  b         .loc_0x1388

	.loc_0x12A8:
	  lwz       r3, 0x1A4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  addi      r4, r1, 0x18C
	  lwz       r12, 0x10(r12)
	  mr        r26, r0
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x198(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x18C
	  fadds     f0, f0, f31
	  stfs      f0, 0x198(r1)
	  bl        0x748
	  cmplwi    r3, 0
	  beq-      .loc_0x1380
	  addi      r3, r1, 0x39C
	  addi      r4, r30, 0xFC
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x60C
	  mr        r4, r26
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x38(r1)
	  mr        r3, r26
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  stfs      f2, 0x3B4(r1)
	  stfs      f1, 0x3B8(r1)
	  stfs      f0, 0x3BC(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x3C0(r1)
	  addi      r4, r1, 0x39C
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20C298
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x9
	  bl        -0x393A0
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x1380:
	  addi      r3, r1, 0x19C
	  bl        -0xD97D8

	.loc_0x1388:
	  lwz       r3, 0x1A4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1A0(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x12A8

	.loc_0x13A8:
	  lwz       r0, -0x6BB0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1584
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x10
	  bl        -0x393AC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1584
	  lwz       r5, -0x6BB0(r13)
	  li        r26, 0
	  cmplwi    r5, 0
	  beq-      .loc_0x13DC
	  addi      r5, r5, 0x30

	.loc_0x13DC:
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x7AC0
	  stw       r0, 0x188(r1)
	  lfs       f29, -0x426C(r2)
	  addi      r3, r1, 0x17C
	  stw       r4, 0x17C(r1)
	  stw       r0, 0x180(r1)
	  stw       r5, 0x184(r1)
	  bl        -0x4AAC4
	  b         .loc_0x14C8

	.loc_0x1408:
	  lwz       r3, 0x184(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0x22C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x14C0
	  lbz       r0, 0x1E0(r27)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x14C0
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x14C0
	  mr        r3, r27
	  addi      r4, r1, 0x16C
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x2C
	  addi      r4, r1, 0x16C
	  addi      r5, r31, 0x20C
	  bl        -0x189E4
	  lfs       f2, 0x2C(r1)
	  addi      r3, r1, 0x160
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  stfs      f2, 0x160(r1)
	  stfs      f1, 0x164(r1)
	  stfs      f0, 0x168(r1)
	  bl        -0x18D24
	  lfs       f0, 0x178(r1)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x14C0
	  mr        r26, r27
	  fmr       f29, f0

	.loc_0x14C0:
	  addi      r3, r1, 0x17C
	  bl        -0x4AC6C

	.loc_0x14C8:
	  lwz       r3, 0x184(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x180(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1408
	  cmplwi    r26, 0
	  beq-      .loc_0x1584
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1584
	  addi      r3, r1, 0x368
	  addi      r4, r30, 0x10C
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x408
	  mr        r4, r26
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  mr        r3, r26
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  stfs      f2, 0x380(r1)
	  stfs      f1, 0x384(r1)
	  stfs      f0, 0x388(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x38C(r1)
	  addi      r4, r1, 0x368
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20C094
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x10
	  bl        -0x395A4
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x1584:
	  lwz       r0, -0x6BB0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1760
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x11
	  bl        -0x39588
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1760
	  lwz       r5, -0x6BB0(r13)
	  li        r26, 0
	  cmplwi    r5, 0
	  beq-      .loc_0x15B8
	  addi      r5, r5, 0x30

	.loc_0x15B8:
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0x7AC0
	  stw       r0, 0x15C(r1)
	  lfs       f29, -0x426C(r2)
	  addi      r3, r1, 0x150
	  stw       r4, 0x150(r1)
	  stw       r0, 0x154(r1)
	  stw       r5, 0x158(r1)
	  bl        -0x4ACA0
	  b         .loc_0x16A4

	.loc_0x15E4:
	  lwz       r3, 0x158(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0x22C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x169C
	  lbz       r0, 0x1E0(r27)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x169C
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x169C
	  mr        r3, r27
	  addi      r4, r1, 0x140
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x140
	  addi      r5, r31, 0x20C
	  bl        -0x18BC0
	  lfs       f2, 0x14(r1)
	  addi      r3, r1, 0x134
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x134(r1)
	  stfs      f1, 0x138(r1)
	  stfs      f0, 0x13C(r1)
	  bl        -0x18F00
	  lfs       f0, 0x14C(r1)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x169C
	  mr        r26, r27
	  fmr       f29, f0

	.loc_0x169C:
	  addi      r3, r1, 0x150
	  bl        -0x4AE48

	.loc_0x16A4:
	  lwz       r3, 0x158(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x154(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x15E4
	  cmplwi    r26, 0
	  beq-      .loc_0x1760
	  lwz       r0, -0x64AC(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1760
	  addi      r3, r1, 0x334
	  addi      r4, r30, 0x11C
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  bl        0x22C
	  mr        r4, r26
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r26
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x34C(r1)
	  stfs      f1, 0x350(r1)
	  stfs      f0, 0x354(r1)
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x358(r1)
	  addi      r4, r1, 0x334
	  lwz       r3, -0x64AC(r13)
	  stw       r26, 0x194(r3)
	  lwz       r3, -0x64AC(r13)
	  bl        0x20BEB8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x11
	  bl        -0x39780
	  li        r3, 0x1
	  b         .loc_0x1764

	.loc_0x1760:
	  li        r3, 0

	.loc_0x1764:
	  psq_l     f31,-0x7A8(r1),0,0
	  lfd       f31, 0x850(r1)
	  psq_l     f30,-0x7B8(r1),0,0
	  lfd       f30, 0x840(r1)
	  psq_l     f29,-0x7C8(r1),0,0
	  lfd       f29, 0x830(r1)
	  lmw       r26, 0x818(r1)
	  lwz       r0, 0x864(r1)
	  mtlr      r0
	  addi      r1, r1, 0x860
	  blr

	.loc_0x1790:
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80220B60
 * Size:	000058
 */
void Vector3f::distance(Vector3f&)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  lfs       f3, 0x0(r3)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r4)
	  lfs       f1, 0x8(r3)
	  lfs       f0, 0x8(r4)
	  fsubs     f3, f3, f2
	  fmuls     f2, f4, f4
	  fsubs     f4, f1, f0
	  lfs       f0, -0x4268(r2)
	  fmadds    f1, f3, f3, f2
	  fmuls     f2, f4, f4
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50
	  blelr-
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  blr

	.loc_0x50:
	  fmr       f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80220BB8
 * Size:	0000E4
 */
void next__Q24Game30EnemyIterator<Game::Pom::Obj> Fv(void)
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
	  lwz       r12, 0x10(r12)
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
 * Address:	80220C9C
 * Size:	00004C
 */
void isDone__Q24Game30EnemyIterator<Game::Pom::Obj> Fv(void)
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

/*
 * --INFO--
 * Address:	80220CE8
 * Size:	000040
 */
void __ct__Q24Game12MoviePlayArgFPcPcP39IDelegate3<Game::MovieConfig*,
                                                   unsigned long, unsigned long>
Ul(void)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r0, 0
	  lfs       f0, -0x4268(r2)
	  stw       r5, 0x4(r3)
	  stw       r6, 0xC(r3)
	  stfs      f0, 0x18(r3)
	  stfs      f0, 0x1C(r3)
	  stfs      f0, 0x20(r3)
	  stfs      f0, 0x24(r3)
	  stw       r7, 0x28(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80220D28
 * Size:	0000DC
 */
void first__Q24Game30EnemyIterator<Game::Pom::Obj> Fv(void)
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
	  lwz       r12, 0x10(r12)
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

namespace Game {

/*
 * --INFO--
 * Address:	80220E04
 * Size:	0001C4
 */
void Navi::checkDemoNaviAndPiki(Sys::Sphere&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r30, r4
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x1AC

	.loc_0x30:
	  addi      r3, r1, 0x14
	  bl        0xD534
	  lfs       f0, 0x0(r30)
	  li        r0, 0x1
	  addi      r3, r1, 0x34
	  addi      r4, r1, 0x14
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0xC(r30)
	  stfs      f0, 0x20(r1)
	  stw       r0, 0x28(r1)
	  bl        0xD574
	  addi      r3, r1, 0x34
	  bl        0xD5E8
	  b         .loc_0x198

	.loc_0x78:
	  addi      r3, r1, 0x34
	  bl        0xD6C4
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190

	.loc_0xB8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x10C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190

	.loc_0x10C:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x4(r30)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r30)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x8(r30)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x4268(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x174
	  ble-      .loc_0x178
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x178

	.loc_0x174:
	  fmr       f1, f0

	.loc_0x178:
	  lfs       f0, 0xC(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x190
	  mr        r3, r31
	  b         .loc_0x1AC

	.loc_0x190:
	  addi      r3, r1, 0x34
	  bl        0xD568

	.loc_0x198:
	  addi      r3, r1, 0x34
	  bl        0xD594
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x78
	  li        r3, 0

	.loc_0x1AC:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80220FC8
 * Size:	000038
 */
void __ml__Q24Game30EnemyIterator<Game::Pom::Obj> Fv(void)
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
	  lwz       r12, 0x10(r12)
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
 * Address:	80221000
 * Size:	000028
 */
void __sinit_navi_demoCheck_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6A40(r13)
	  stfsu     f0, 0xA18(r3)
	  stfs      f0, -0x6A3C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
