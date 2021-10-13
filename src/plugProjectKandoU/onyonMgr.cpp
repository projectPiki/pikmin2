

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80174CA0
 * Size:	00080C
 */
void Game::Onyon::movieUserCommand((unsigned long, Game::MoviePlayer*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  mr        r28, r4
	  lis       r4, 0x8048
	  cmpwi     r28, 0x67
	  mr        r31, r3
	  subi      r30, r4, 0x19E0
	  beq-      .loc_0x7C0
	  bge-      .loc_0x58
	  cmpwi     r28, 0x65
	  beq-      .loc_0x718
	  bge-      .loc_0x76C
	  cmpwi     r28, 0x64
	  bge-      .loc_0x68
	  b         .loc_0x7E4

	.loc_0x58:
	  cmpwi     r28, 0x69
	  beq-      .loc_0x68
	  bge-      .loc_0x7E4
	  b         .loc_0x7D4

	.loc_0x68:
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x22E(r31)
	  bl        0x723C8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x28
	  li        r4, 0x216
	  crclr     6, 0x6
	  bl        -0x14A6EC

	.loc_0x90:
	  lhz       r3, 0x22E(r31)
	  bl        0x5C208
	  cmplwi    r28, 0x69
	  beq-      .loc_0xC4
	  lhz       r3, 0x22E(r31)
	  lis       r4, 0x8051
	  addi      r4, r4, 0x262C
	  rlwinm    r0,r3,2,0,29
	  add       r4, r4, r0
	  lwz       r29, 0x4(r4)
	  bl        0x5C1E4
	  sub.      r0, r3, r29
	  bgt-      .loc_0x7E4

	.loc_0xC4:
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x22E(r31)
	  bl        0x72410
	  lwz       r3, -0x6B90(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  beq-      .loc_0x178
	  lhz       r7, 0x22E(r31)
	  lis       r4, 0x804B
	  subi      r6, r4, 0x5D0C
	  li        r0, 0
	  lis       r4, 0x8051
	  lfsu      f3, 0x41E4(r4)
	  lis       r5, 0x804B
	  stw       r6, 0x58(r1)
	  addi      r6, r5, 0x2C7C
	  lfs       f2, 0x4(r4)
	  lfs       f1, 0x8(r4)
	  lis       r5, 0x804B
	  lfs       f0, -0x5938(r2)
	  addi      r5, r5, 0x2C70
	  stw       r6, 0x58(r1)
	  addi      r4, r1, 0x58
	  stw       r5, 0x58(r1)
	  stw       r7, 0x5C(r1)
	  stfs      f3, 0x60(r1)
	  stfs      f2, 0x64(r1)
	  stfs      f1, 0x68(r1)
	  stb       r0, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  stfs      f0, 0x74(r1)
	  bl        -0x39E24
	  lhz       r3, 0x1F4(r28)
	  bl        0xBAC70
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x393B0
	  mr        r3, r31
	  mr        r4, r28
	  li        r5, 0x1
	  bl        0x3A70
	  b         .loc_0x7E4

	.loc_0x178:
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r3, 0x12C(r3)
	  bl        0x2E0D2C
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r3, 0x130(r3)
	  bl        0x2E0D1C
	  lwz       r3, -0x6B90(r13)
	  li        r29, 0
	  lfs       f31, -0x5934(r2)
	  cmplwi    r3, 0
	  beq-      .loc_0x1B0
	  addi      r3, r3, 0x30

	.loc_0x1B0:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x5A4
	  stw       r0, 0x34(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  bne-      .loc_0x1EC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x380

	.loc_0x1EC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x258

	.loc_0x204:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x380
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0x258:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x204
	  b         .loc_0x380

	.loc_0x278:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2C4
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x39868
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x2C4
	  fmr       f31, f1
	  mr        r29, r28

	.loc_0x2C4:
	  lwz       r0, 0x34(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F0
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x380

	.loc_0x2F0:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x364

	.loc_0x310:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x380
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0x364:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x310

	.loc_0x380:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x278
	  cmplwi    r29, 0
	  beq-      .loc_0x3FC
	  lis       r3, 0x8051
	  lhz       r4, 0x1F4(r29)
	  addi      r3, r3, 0x260C
	  bl        0x5C1C8
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x1F4(r29)
	  lhz       r5, 0x1F6(r29)
	  addi      r3, r3, 0xA8
	  bl        0x7C3B4
	  lwz       r6, 0x0(r3)
	  lis       r4, 0x804B
	  subi      r5, r4, 0x5D30
	  li        r0, 0x1
	  addi      r6, r6, 0x1
	  addi      r4, r1, 0x10
	  stw       r6, 0x0(r3)
	  mr        r3, r29
	  stw       r5, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        -0x39FA4
	  b         .loc_0x658

	.loc_0x3FC:
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x18(r1)
	  li        r29, 0
	  stw       r0, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  bne-      .loc_0x440
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x5F0

	.loc_0x440:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x4AC

	.loc_0x458:
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5F0
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)

	.loc_0x4AC:
	  lwz       r12, 0x18(r1)
	  addi      r3, r1, 0x18
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x458
	  b         .loc_0x5F0

	.loc_0x4CC:
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x534
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x534
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x39AD8
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x534
	  fmr       f31, f1
	  mr        r29, r28

	.loc_0x534:
	  lwz       r0, 0x24(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x560
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x5F0

	.loc_0x560:
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)
	  b         .loc_0x5D4

	.loc_0x580:
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5F0
	  lwz       r3, 0x20(r1)
	  lwz       r4, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r1)

	.loc_0x5D4:
	  lwz       r12, 0x18(r1)
	  addi      r3, r1, 0x18
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x580

	.loc_0x5F0:
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x4CC
	  cmplwi    r29, 0
	  beq-      .loc_0x658
	  lwz       r3, -0x6B70(r13)
	  lbz       r4, 0x2B8(r29)
	  lbz       r5, 0x2B9(r29)
	  addi      r3, r3, 0xA8
	  bl        0x7C154
	  lwz       r6, 0x0(r3)
	  lis       r4, 0x804B
	  subi      r5, r4, 0x5D30
	  li        r0, 0x1
	  addi      r6, r6, 0x1
	  addi      r4, r1, 0x8
	  stw       r6, 0x0(r3)
	  mr        r3, r29
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x3A204

	.loc_0x658:
	  lwz       r3, -0x6B90(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  beq-      .loc_0x700
	  lhz       r7, 0x22E(r31)
	  lis       r4, 0x804B
	  subi      r6, r4, 0x5D0C
	  li        r0, 0
	  lis       r4, 0x8051
	  lfsu      f3, 0x41E4(r4)
	  lis       r5, 0x804B
	  stw       r6, 0x38(r1)
	  addi      r6, r5, 0x2C7C
	  lfs       f2, 0x4(r4)
	  lfs       f1, 0x8(r4)
	  lis       r5, 0x804B
	  lfs       f0, -0x5938(r2)
	  addi      r5, r5, 0x2C70
	  stw       r6, 0x38(r1)
	  addi      r4, r1, 0x38
	  stw       r5, 0x38(r1)
	  stw       r7, 0x3C(r1)
	  stfs      f3, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stb       r0, 0x4C(r1)
	  stw       r0, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  bl        -0x3A3AC
	  lhz       r3, 0x1F4(r28)
	  bl        0xBA6E8
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x39938
	  mr        r3, r31
	  mr        r4, r28
	  li        r5, 0x1
	  bl        0x34E8
	  b         .loc_0x7E4

	.loc_0x700:
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x3C
	  li        r4, 0x281
	  crclr     6, 0x6
	  bl        -0x14AD70
	  b         .loc_0x7E4

	.loc_0x718:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x74C
	  lwz       r4, -0x64AC(r13)
	  lwz       r0, 0x1F0(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x740
	  li        r4, 0x3
	  bl        0x1EA4
	  b         .loc_0x7E4

	.loc_0x740:
	  li        r4, 0x1
	  bl        0x1E98
	  b         .loc_0x7E4

	.loc_0x74C:
	  cmplwi    r0, 0x4
	  beq-      .loc_0x75C
	  cmplwi    r0, 0x3
	  bne-      .loc_0x7E4

	.loc_0x75C:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x3AD8
	  b         .loc_0x7E4

	.loc_0x76C:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x7A0
	  lwz       r4, -0x64AC(r13)
	  lwz       r0, 0x1F0(r4)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x794
	  li        r4, 0
	  bl        0x1E50
	  b         .loc_0x7E4

	.loc_0x794:
	  li        r4, 0x2
	  bl        0x1E44
	  b         .loc_0x7E4

	.loc_0x7A0:
	  cmplwi    r0, 0x4
	  beq-      .loc_0x7B0
	  cmplwi    r0, 0x3
	  bne-      .loc_0x7E4

	.loc_0x7B0:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3A84
	  b         .loc_0x7E4

	.loc_0x7C0:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x7E4
	  bl        0x1A18
	  b         .loc_0x7E4

	.loc_0x7D4:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x7E4
	  bl        0x1A10

	.loc_0x7E4:
	  psq_l     f31,0x98(r1),0,0
	  lwz       r0, 0xA4(r1)
	  lfd       f31, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void Game::Onyon::openUFO(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void Game::Onyon::closeUFO(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801754AC
 * Size:	0000E4
 */
void Game::Onyon::isSuckReady(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0xCC
	  lbz       r0, 0x240(r31)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x3C
	  cmplwi    r0, 0x2
	  beq-      .loc_0x3C
	  cmplwi    r0, 0x3
	  bne-      .loc_0x44

	.loc_0x3C:
	  li        r3, 0x1
	  b         .loc_0xD0

	.loc_0x44:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xC4
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x5C
	  addi      r5, r5, 0x178

	.loc_0x5C:
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  bl        0x2B3778
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3836
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x80
	  li        r4, 0x382F

	.loc_0x80:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5930(r2)
	  li        r0, 0
	  li        r4, 0
	  stfs      f0, 0x1D4(r31)
	  stb       r0, 0x240(r31)
	  lwz       r3, 0x210(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x244(r31)

	.loc_0xC4:
	  li        r3, 0
	  b         .loc_0xD0

	.loc_0xCC:
	  li        r3, 0x1

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
 * Address:	80175590
 * Size:	000028
 */
void Game::Onyon::isSuckArriveWait(void)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x20
	  lbz       r0, 0x240(r3)
	  subfic    r0, r0, 0x4
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr

	.loc_0x20:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801755B8
 * Size:	00068C
 */
void Game::Onyon::setType((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  subi      r29, r5, 0x19E0
	  stw       r28, 0x20(r1)
	  sth       r4, 0x22E(r3)
	  lhz       r4, 0x22E(r3)
	  bl        0x764
	  li        r0, 0
	  stw       r0, 0x1EC(r31)
	  stw       r0, 0x1F0(r31)
	  stw       r0, 0x208(r31)
	  stw       r0, 0x20C(r31)
	  stw       r0, 0x210(r31)
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x104
	  li        r3, 0x10
	  bl        -0x151770
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804B
	  stw       r0, 0x4(r3)
	  addi      r6, r4, 0x2C24
	  lis       r4, 0x804E
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x7074
	  li        r8, 0
	  li        r7, 0x105
	  stw       r0, 0x4(r3)
	  addi      r5, r6, 0x14
	  addi      r0, r4, 0x14
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0xD0:
	  stw       r3, 0x1EC(r31)
	  li        r3, 0x24
	  bl        -0x1517EC
	  mr.       r28, r3
	  beq-      .loc_0xFC
	  li        r4, 0xF8
	  li        r5, 0xF9
	  bl        0x23A96C
	  lis       r3, 0x804E
	  addi      r0, r3, 0x7058
	  stw       r0, 0x0(r28)

	.loc_0xFC:
	  stw       r28, 0x1F0(r31)
	  b         .loc_0x66C

	.loc_0x104:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x3E8
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x592C
	  bl        0x2C9918
	  mr        r0, r3
	  li        r3, 0x2C
	  mr        r28, r0
	  bl        -0x151838
	  mr.       r30, r3
	  beq-      .loc_0x158
	  mr        r3, r28
	  bl        0x2B41B4
	  mr        r4, r3
	  mr        r3, r30
	  li        r5, 0x1CC
	  li        r6, 0x1CD
	  bl        0x23AD9C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2C08
	  stw       r0, 0x0(r30)

	.loc_0x158:
	  stw       r30, 0x208(r31)
	  li        r3, 0x14
	  bl        -0x151874
	  mr.       r30, r3
	  beq-      .loc_0x1E8
	  mr        r3, r28
	  bl        0x2B4178
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r30)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r30)
	  addi      r4, r4, 0x2BBC
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r30)
	  addi      r6, r7, 0x14
	  li        r5, 0x1C8
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r30)
	  sth       r8, 0xC(r30)
	  stb       r9, 0xE(r30)
	  stw       r7, 0x0(r30)
	  stw       r6, 0x4(r30)
	  stw       r3, 0x10(r30)
	  sth       r5, 0xC(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)

	.loc_0x1E8:
	  stw       r30, 0x214(r31)
	  li        r3, 0x2C
	  bl        -0x151904
	  mr.       r30, r3
	  beq-      .loc_0x224
	  mr        r3, r28
	  bl        0x2B40E8
	  mr        r4, r3
	  mr        r3, r30
	  li        r5, 0x1CA
	  li        r6, 0x1CB
	  bl        0x23ACD0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2BA0
	  stw       r0, 0x0(r30)

	.loc_0x224:
	  stw       r30, 0x20C(r31)
	  addi      r4, r29, 0x54
	  lwz       r3, 0x174(r31)
	  bl        0x2C97FC
	  mr        r30, r3
	  li        r3, 0x2C
	  bl        -0x151950
	  mr.       r28, r3
	  beq-      .loc_0x270
	  mr        r3, r30
	  bl        0x2B409C
	  mr        r4, r3
	  mr        r3, r28
	  li        r5, 0x1C6
	  li        r6, 0x1C7
	  bl        0x23AC84
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2B84
	  stw       r0, 0x0(r28)

	.loc_0x270:
	  stw       r28, 0x210(r31)
	  subi      r4, r2, 0x5924
	  lwz       r3, 0x174(r31)
	  bl        0x2C97B0
	  mr.       r28, r3
	  bne-      .loc_0x29C
	  addi      r3, r29, 0x18
	  addi      r5, r29, 0x60
	  li        r4, 0x30E
	  crclr     6, 0x6
	  bl        -0x14B210

	.loc_0x29C:
	  li        r3, 0x14
	  bl        -0x1519B4
	  mr.       r30, r3
	  beq-      .loc_0x328
	  mr        r3, r28
	  bl        0x2B4038
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r30)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r30)
	  addi      r4, r4, 0x2B38
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r30)
	  addi      r6, r7, 0x14
	  li        r5, 0x1C2
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r30)
	  sth       r8, 0xC(r30)
	  stb       r9, 0xE(r30)
	  stw       r7, 0x0(r30)
	  stw       r6, 0x4(r30)
	  stw       r3, 0x10(r30)
	  sth       r5, 0xC(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)

	.loc_0x328:
	  stw       r30, 0x218(r31)
	  subi      r4, r2, 0x5920
	  lwz       r3, 0x174(r31)
	  bl        0x2C96F8
	  mr.       r30, r3
	  bne-      .loc_0x354
	  addi      r3, r29, 0x18
	  addi      r5, r29, 0x60
	  li        r4, 0x310
	  crclr     6, 0x6
	  bl        -0x14B2C8

	.loc_0x354:
	  li        r3, 0x14
	  bl        -0x151A6C
	  mr.       r28, r3
	  beq-      .loc_0x3E0
	  mr        r3, r30
	  bl        0x2B3F80
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r28)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r28)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r28)
	  addi      r4, r4, 0x2AEC
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r28)
	  addi      r6, r7, 0x14
	  li        r5, 0x1C3
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r28)
	  sth       r8, 0xC(r28)
	  stb       r9, 0xE(r28)
	  stw       r7, 0x0(r28)
	  stw       r6, 0x4(r28)
	  stw       r3, 0x10(r28)
	  sth       r5, 0xC(r28)
	  stw       r4, 0x0(r28)
	  stw       r0, 0x4(r28)

	.loc_0x3E0:
	  stw       r28, 0x21C(r31)
	  b         .loc_0x66C

	.loc_0x3E8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x66C
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x591C
	  bl        0x2C9634
	  mr.       r28, r3
	  bne-      .loc_0x418
	  addi      r3, r29, 0x18
	  addi      r5, r29, 0x60
	  li        r4, 0x314
	  crclr     6, 0x6
	  bl        -0x14B38C

	.loc_0x418:
	  li        r3, 0x10
	  bl        -0x151B30
	  cmplwi    r3, 0
	  beq-      .loc_0x490
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804B
	  stw       r0, 0x4(r3)
	  addi      r6, r4, 0x2C24
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r3)
	  addi      r4, r4, 0x2AA0
	  li        r8, 0
	  li        r7, 0x181
	  stw       r0, 0x4(r3)
	  addi      r5, r6, 0x14
	  addi      r0, r4, 0x14
	  stw       r8, 0x8(r3)
	  sth       r7, 0xC(r3)
	  stb       r8, 0xE(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)

	.loc_0x490:
	  stw       r3, 0x1F8(r31)
	  li        r3, 0x14
	  bl        -0x151BAC
	  mr.       r30, r3
	  beq-      .loc_0x520
	  mr        r3, r28
	  bl        0x2B3E40
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r30)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r30)
	  addi      r4, r4, 0x2A54
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r30)
	  addi      r6, r7, 0x14
	  li        r5, 0x182
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r30)
	  sth       r8, 0xC(r30)
	  stb       r9, 0xE(r30)
	  stw       r7, 0x0(r30)
	  stw       r6, 0x4(r30)
	  stw       r3, 0x10(r30)
	  sth       r5, 0xC(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)

	.loc_0x520:
	  stw       r30, 0x1FC(r31)
	  li        r3, 0x34
	  bl        -0x151C3C
	  mr.       r29, r3
	  beq-      .loc_0x554
	  addi      r4, r31, 0x19C
	  addi      r5, r31, 0x228
	  li        r6, 0x183
	  li        r7, 0x184
	  bl        0x23AED0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x2A38
	  stw       r0, 0x0(r29)

	.loc_0x554:
	  stw       r29, 0x200(r31)
	  li        r3, 0x14
	  bl        -0x151C70
	  mr.       r30, r3
	  beq-      .loc_0x5E4
	  mr        r3, r28
	  bl        0x2B3D7C
	  lis       r4, 0x804B
	  lis       r5, 0x804A
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x0(r30)
	  subi      r0, r5, 0x1D84
	  addi      r5, r4, 0x698C
	  lis       r4, 0x804E
	  stw       r0, 0x4(r30)
	  addi      r7, r4, 0x68A8
	  lis       r4, 0x804B
	  addi      r0, r5, 0x14
	  stw       r5, 0x0(r30)
	  addi      r4, r4, 0x29EC
	  li        r9, 0
	  li        r8, 0x2B2
	  stw       r0, 0x4(r30)
	  addi      r6, r7, 0x14
	  li        r5, 0x180
	  addi      r0, r4, 0x14
	  stw       r9, 0x8(r30)
	  sth       r8, 0xC(r30)
	  stb       r9, 0xE(r30)
	  stw       r7, 0x0(r30)
	  stw       r6, 0x4(r30)
	  stw       r3, 0x10(r30)
	  sth       r5, 0xC(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)

	.loc_0x5E4:
	  stw       r30, 0x204(r31)
	  li        r4, 0
	  lwz       r3, 0x204(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1FC(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x200(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  addi      r4, r1, 0x8
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x66C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void efx::TChasePosYRot2::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80175C44
 * Size:	000084
 */
void efx::TChasePosYRot::__dt(void)
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
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68F4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xE5FFC

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x151BF4

	.loc_0x68:
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
 * Size:	000080
 */
void efx::TForever2::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80175CC8
 * Size:	000084
 */
void efx::TForever::__dt(void)
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
	  beq-      .loc_0x68
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2C24
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xE6080

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x151C78

	.loc_0x68:
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
 * Address:	80175D4C
 * Size:	0000D0
 */
void Game::Onyon::setupTevRegAnim((int))
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
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x54
	  lwz       r3, 0x234(r30)
	  mulli     r4, r31, 0x14
	  lwz       r0, -0x6CD0(r13)
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0xB4
	  lwz       r12, 0x8(r12)
	  add       r4, r0, r4
	  mtctr     r12
	  bctrl
	  sth       r31, 0x22E(r30)
	  b         .loc_0xB8

	.loc_0x54:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xB8
	  lwz       r3, 0x234(r30)
	  lwz       r4, -0x6CD0(r13)
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0xF0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0xC
	  bl        -0x151F24
	  mr.       r31, r3
	  beq-      .loc_0x98
	  bl        0x2BE580
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r31)

	.loc_0x98:
	  stw       r31, 0x238(r30)
	  lwz       r3, 0x238(r30)
	  lwz       r4, -0x6CD0(r13)
	  lwz       r12, 0x0(r3)
	  addi      r4, r4, 0x104
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80175E1C
 * Size:	000074
 */
void Game::Onyon::stimulate((Game::Interaction&))
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
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80175E90
 * Size:	000158
 */
void Game::InteractSuckArrive::actOnyon((Game::Onyon*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  subi      r30, r3, 0x19E0
	  lhz       r0, 0x22E(r4)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x13C
	  lwz       r3, 0x174(r31)
	  addi      r4, r30, 0x54
	  bl        0x2C9120
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  bl        0x2B39D0
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804B
	  li        r7, 0x1C9
	  stw       r0, 0x8(r1)
	  addi      r5, r5, 0x6A14
	  li        r6, 0
	  addi      r0, r4, 0x2944
	  stw       r5, 0x8(r1)
	  li        r4, 0
	  stw       r3, 0x14(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0x239394

	.loc_0x94:
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x244(r31)
	  lbz       r6, 0x240(r31)
	  cmplwi    r6, 0x5
	  bne-      .loc_0x120
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xB8
	  addi      r5, r31, 0x178

	.loc_0xB8:
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  bl        0x2B2D38
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3836
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xDC
	  li        r4, 0x382F

	.loc_0xDC:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5930(r2)
	  li        r0, 0
	  li        r4, 0
	  stfs      f0, 0x1D4(r31)
	  stb       r0, 0x240(r31)
	  lwz       r3, 0x210(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x120:
	  cmplwi    r6, 0x4
	  bne-      .loc_0x13C
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x6C
	  li        r4, 0x35B
	  crclr     6, 0x6
	  bl        -0x14B988

	.loc_0x13C:
	  li        r3, 0

	.loc_0x140:
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
 * Address:	80175FE8
 * Size:	000008
 */
void Game::Onyon::needShadow(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80175FF0
 * Size:	0000A4
 */
void Game::Onyon::getShadowParam((Game::ShadowParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r31)
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x78
	  lfs       f2, 0x4(r31)
	  lfs       f0, -0x5914(r2)
	  lfs       f1, -0x5910(r2)
	  fadds     f2, f2, f0
	  lfs       f0, -0x590C(r2)
	  stfs      f2, 0x4(r31)
	  stfs      f1, 0x18(r31)
	  stfs      f0, 0x1C(r31)

	.loc_0x78:
	  lfs       f1, -0x5934(r2)
	  lfs       f0, -0x5908(r2)
	  stfs      f1, 0xC(r31)
	  stfs      f0, 0x10(r31)
	  stfs      f1, 0x14(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80176094
 * Size:	000034
 */
void Game::Onyon::sound_culling(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x20
	  bl        -0x3A67C
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801760C8
 * Size:	000DBC
 */
void Game::InteractSuckDone::actOnyon((Game::Onyon*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x140(r1)
	  mflr      r0
	  stw       r0, 0x144(r1)
	  stmw      r27, 0x12C(r1)
	  mr        r30, r4
	  lis       r4, 0x8048
	  mr        r29, r3
	  mr        r3, r30
	  subi      r28, r4, 0x19E0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x60
	  li        r3, 0
	  b         .loc_0xDA8

	.loc_0x60:
	  lwz       r3, 0x4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  addi      r3, r28, 0x18
	  addi      r5, r28, 0x60
	  li        r4, 0x383
	  crclr     6, 0x6
	  bl        -0x14BB14

	.loc_0x90:
	  lhz       r0, 0x22E(r30)
	  lwz       r31, 0x4(r29)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0xD8
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0xB0
	  addi      r5, r30, 0x178

	.loc_0xB0:
	  addi      r3, r30, 0x1A8
	  li        r4, 0x3
	  bl        0x2B2B08
	  mr        r3, r30
	  li        r4, 0x3805
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x488

	.loc_0xD8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x294
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0xF0
	  addi      r5, r30, 0x178

	.loc_0xF0:
	  addi      r3, r30, 0x1A8
	  li        r4, 0x2
	  bl        0x2B2AC8
	  mr        r3, r30
	  li        r4, 0x3805
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0xD4(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r7, 0x17E
	  stw       r0, 0xD4(r1)
	  addi      r0, r3, 0x290C
	  li        r6, 0x17F
	  mr        r4, r30
	  sth       r7, 0xD8(r1)
	  addi      r3, r1, 0x5C
	  sth       r6, 0xDA(r1)
	  stw       r5, 0xDC(r1)
	  stw       r5, 0xE0(r1)
	  stw       r0, 0xD4(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x5C(r1)
	  lis       r3, 0x804B
	  lfs       f1, 0x60(r1)
	  subi      r0, r3, 0x5814
	  lfs       f0, 0x64(r1)
	  addi      r3, r1, 0xD4
	  stw       r0, 0xC4(r1)
	  addi      r4, r1, 0xC4
	  stfs      f2, 0xC8(r1)
	  stfs      f1, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  bl        0x238DB4
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x488
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x488
	  mr        r4, r30
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x50(r1)
	  lfs       f1, 0x54(r1)
	  lfs       f0, 0x58(r1)
	  stfs      f2, 0xB8(r1)
	  stfs      f1, 0xBC(r1)
	  stfs      f0, 0xC0(r1)
	  lwz       r3, 0x35C(r31)
	  lwz       r28, 0x170(r3)
	  cmpwi     r28, 0
	  ble-      .loc_0x488
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x254
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x254
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x488

	.loc_0x254:
	  lfs       f1, 0xB8(r1)
	  mr        r5, r28
	  lfs       f4, -0x5934(r2)
	  addi      r4, r1, 0xB8
	  lfs       f0, 0xC0(r1)
	  fadds     f3, f1, f4
	  lfs       f2, 0xBC(r1)
	  lfs       f1, -0x5914(r2)
	  fadds     f0, f0, f4
	  lwz       r3, -0x6DE8(r13)
	  fadds     f1, f2, f1
	  stfs      f3, 0xB8(r1)
	  stfs      f1, 0xBC(r1)
	  stfs      f0, 0xC0(r1)
	  bl        -0x5A25C
	  b         .loc_0x488

	.loc_0x294:
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0x2A4
	  addi      r5, r30, 0x178

	.loc_0x2A4:
	  addi      r3, r30, 0x1A8
	  li        r4, 0
	  bl        0x2B2914
	  addi      r3, r30, 0x1A8
	  li        r4, 0
	  bl        0x2B2A80
	  li        r0, 0x2
	  lfs       f0, -0x5930(r2)
	  stb       r0, 0x240(r30)
	  mr        r3, r30
	  li        r4, 0x3805
	  stfs      f0, 0x1D4(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5934(r2)
	  addi      r4, r28, 0x54
	  stfs      f0, 0x244(r30)
	  lwz       r3, 0x174(r30)
	  bl        0x2C8C28
	  bl        0x2B34E0
	  lis       r4, 0x804B
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0xF8(r1)
	  addi      r0, r4, 0x6A64
	  lis       r5, 0x804E
	  lis       r4, 0x804B
	  stw       r0, 0xF8(r1)
	  addi      r0, r5, 0x6A00
	  li        r7, 0x1C4
	  li        r5, 0x1C5
	  stw       r0, 0xF8(r1)
	  addi      r0, r4, 0x28F8
	  li        r4, 0
	  stw       r3, 0x108(r1)
	  addi      r3, r1, 0xF8
	  sth       r7, 0xFC(r1)
	  sth       r5, 0xFE(r1)
	  stw       r6, 0x100(r1)
	  stw       r6, 0x104(r1)
	  stw       r0, 0xF8(r1)
	  bl        0x238F7C
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x488
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x488
	  mr        r4, r30
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x44(r1)
	  mr        r3, r30
	  lfs       f1, 0x48(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0xAC(r1)
	  stfs      f1, 0xB0(r1)
	  stfs      f0, 0xB4(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lfs       f0, -0x5934(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x3C8
	  fneg      f2, f2

	.loc_0x3C8:
	  lfs       f3, -0x5900(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5934(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f5, -0x5904(r2)
	  fcmpo     cr0, f1, f0
	  lfs       f4, 0xAC(r1)
	  fctiwz    f0, f2
	  stfd      f0, 0x110(r1)
	  lwz       r0, 0x114(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f6, f5, f0
	  bge-      .loc_0x42C
	  lfs       f0, -0x58FC(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x118(r1)
	  lwz       r0, 0x11C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x444

	.loc_0x42C:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x120(r1)
	  lwz       r0, 0x124(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x444:
	  fmuls     f3, f5, f0
	  lfs       f0, 0xB4(r1)
	  lfs       f2, 0xB0(r1)
	  lfs       f1, -0x58F8(r2)
	  fadds     f0, f0, f6
	  fadds     f3, f4, f3
	  fadds     f1, f2, f1
	  stfs      f0, 0xB4(r1)
	  stfs      f3, 0xAC(r1)
	  stfs      f1, 0xB0(r1)
	  lwz       r3, 0x35C(r31)
	  lwz       r5, 0x170(r3)
	  cmpwi     r5, 0
	  ble-      .loc_0x488
	  lwz       r3, -0x6DE8(r13)
	  addi      r4, r1, 0xAC
	  bl        -0x5A454

	.loc_0x488:
	  lhz       r0, 0x22E(r30)
	  sth       r0, 0x230(r30)
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x510
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x58F4
	  bl        0x2C8A78
	  cmplwi    r3, 0
	  beq-      .loc_0x510
	  bl        0x2B3328
	  lis       r4, 0x804B
	  li        r6, 0
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0xE4(r1)
	  addi      r0, r4, 0x6A64
	  lis       r5, 0x804E
	  lis       r4, 0x804B
	  stw       r0, 0xE4(r1)
	  addi      r0, r5, 0x6A00
	  li        r7, 0xFE
	  li        r5, 0xFF
	  stw       r0, 0xE4(r1)
	  addi      r0, r4, 0x28E4
	  li        r4, 0
	  stw       r3, 0xF4(r1)
	  addi      r3, r1, 0xE4
	  sth       r7, 0xE8(r1)
	  sth       r5, 0xEA(r1)
	  stw       r6, 0xEC(r1)
	  stw       r6, 0xF0(r1)
	  stw       r0, 0xE4(r1)
	  bl        0x238DC4

	.loc_0x510:
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x52C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x530

	.loc_0x52C:
	  li        r3, 0x1

	.loc_0x530:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x924
	  lwz       r3, 0x35C(r31)
	  subi      r4, r2, 0x58EC
	  lwz       r3, 0x40(r3)
	  bl        -0xABF4C
	  cmpwi     r3, 0
	  bne-      .loc_0x924
	  lis       r4, 0x804B
	  lwz       r3, -0x6B50(r13)
	  subi      r0, r4, 0x5D00
	  stw       r30, 0x34(r1)
	  lis       r4, 0x804B
	  cmplwi    r3, 0
	  stw       r0, 0x30(r1)
	  addi      r0, r4, 0x7478
	  stw       r0, 0x30(r1)
	  beq-      .loc_0x57C
	  addi      r3, r3, 0x30

	.loc_0x57C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0xA8(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x9C(r1)
	  stw       r0, 0xA0(r1)
	  stw       r3, 0xA4(r1)
	  bne-      .loc_0x5B8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xA0(r1)
	  b         .loc_0x728

	.loc_0x5B8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xA0(r1)
	  b         .loc_0x624

	.loc_0x5D0:
	  lwz       r3, 0xA4(r1)
	  lwz       r4, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xA8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x728
	  lwz       r3, 0xA4(r1)
	  lwz       r4, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xA0(r1)

	.loc_0x624:
	  lwz       r12, 0x9C(r1)
	  addi      r3, r1, 0x9C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x5D0
	  b         .loc_0x728

	.loc_0x644:
	  lwz       r3, 0xA4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x30
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xA8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x698
	  lwz       r3, 0xA4(r1)
	  lwz       r4, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xA0(r1)
	  b         .loc_0x728

	.loc_0x698:
	  lwz       r3, 0xA4(r1)
	  lwz       r4, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xA0(r1)
	  b         .loc_0x70C

	.loc_0x6B8:
	  lwz       r3, 0xA4(r1)
	  lwz       r4, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xA8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x728
	  lwz       r3, 0xA4(r1)
	  lwz       r4, 0xA0(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xA0(r1)

	.loc_0x70C:
	  lwz       r12, 0x9C(r1)
	  addi      r3, r1, 0x9C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6B8

	.loc_0x728:
	  lwz       r3, 0xA4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xA0(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x644
	  lwz       r3, -0x6BB8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x758
	  addi      r3, r3, 0x30

	.loc_0x758:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x98(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x8C(r1)
	  stw       r0, 0x90(r1)
	  stw       r3, 0x94(r1)
	  bne-      .loc_0x794
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r1)
	  b         .loc_0x904

	.loc_0x794:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r1)
	  b         .loc_0x800

	.loc_0x7AC:
	  lwz       r3, 0x94(r1)
	  lwz       r4, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x904
	  lwz       r3, 0x94(r1)
	  lwz       r4, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r1)

	.loc_0x800:
	  lwz       r12, 0x8C(r1)
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7AC
	  b         .loc_0x904

	.loc_0x820:
	  lwz       r3, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  addi      r4, r1, 0x30
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x98(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x874
	  lwz       r3, 0x94(r1)
	  lwz       r4, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r1)
	  b         .loc_0x904

	.loc_0x874:
	  lwz       r3, 0x94(r1)
	  lwz       r4, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r1)
	  b         .loc_0x8E8

	.loc_0x894:
	  lwz       r3, 0x94(r1)
	  lwz       r4, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x98(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x904
	  lwz       r3, 0x94(r1)
	  lwz       r4, 0x90(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x90(r1)

	.loc_0x8E8:
	  lwz       r12, 0x8C(r1)
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x894

	.loc_0x904:
	  lwz       r3, 0x94(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x90(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x820

	.loc_0x924:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xB50
	  lwz       r3, 0x2B00(r2)
	  addi      r28, r1, 0x28
	  lwz       r0, 0x2B04(r2)
	  li        r27, 0
	  stw       r3, 0x28(r1)
	  lwz       r3, -0x7B80(r13)
	  stw       r0, 0x2C(r1)
	  lwz       r0, -0x7B84(r13)
	  stw       r3, 0x28(r1)
	  stw       r0, 0x2C(r1)

	.loc_0x95C:
	  lwz       r4, 0x35C(r31)
	  lwz       r3, 0x0(r28)
	  lwz       r4, 0x40(r4)
	  bl        -0xAC370
	  cmpwi     r3, 0
	  bne-      .loc_0xA94
	  lhz       r0, 0x22E(r30)
	  subfic    r0, r0, 0x1
	  cmpw      r27, r0
	  bne-      .loc_0xA50
	  li        r0, 0x1
	  mr        r4, r30
	  stb       r0, 0x8(r29)
	  addi      r3, r1, 0x38
	  bl        0x15A8
	  lfs       f2, 0x38(r1)
	  mr        r3, r31
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  stfs      f2, 0x80(r1)
	  stfs      f1, 0x84(r1)
	  stfs      f0, 0x88(r1)
	  bl        -0x100A8
	  lfs       f3, -0x58E4(r2)
	  mr        r3, r31
	  lfs       f2, -0x58E8(r2)
	  addi      r4, r1, 0x80
	  lfs       f0, 0x84(r1)
	  li        r5, 0
	  fmadds    f1, f3, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x84(r1)
	  bl        -0x3B8FC
	  lfs       f1, -0x5934(r2)
	  mr        r3, r31
	  lfs       f0, -0x58E0(r2)
	  addi      r4, r1, 0x74
	  stfs      f1, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  stfs      f1, 0x7C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0xC7E4
	  lwz       r3, 0x3C8(r31)
	  mr        r4, r31
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xA94

	.loc_0xA50:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x590
	  subfic    r0, r27, 0x1
	  stw       r4, 0x20(r1)
	  addi      r5, r3, 0x61A8
	  lwz       r3, -0x6C18(r13)
	  addi      r4, r1, 0x20
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0xDA8

	.loc_0xA94:
	  addi      r27, r27, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r27, 0x2
	  blt+      .loc_0x95C
	  lbz       r0, 0x32C(r31)
	  cmplwi    r0, 0x6
	  bne-      .loc_0xB00
	  lhz       r4, 0x22E(r30)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x590
	  lis       r3, 0x804B
	  stw       r0, 0x68(r1)
	  subfic    r5, r4, 0x1
	  addi      r3, r3, 0x6180
	  li        r0, 0x1
	  stw       r3, 0x68(r1)
	  addi      r4, r1, 0x68
	  lwz       r3, -0x6C18(r13)
	  stw       r5, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0xDA8

	.loc_0xB00:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xB50
	  lhz       r4, 0x22E(r30)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x590
	  lis       r3, 0x804B
	  stw       r0, 0x18(r1)
	  subfic    r5, r4, 0x1
	  addi      r0, r3, 0x6108
	  lwz       r3, -0x6C18(r13)
	  stw       r0, 0x18(r1)
	  addi      r4, r1, 0x18
	  stw       r5, 0x1C(r1)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0xDA8

	.loc_0xB50:
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xB98
	  lbz       r0, 0x48(r5)
	  lwz       r3, 0x35C(r31)
	  cmplwi    r0, 0
	  lwz       r4, 0x170(r3)
	  beq-      .loc_0xB88
	  lwz       r3, -0x6B70(r13)
	  lwz       r0, 0xEC(r3)
	  add       r0, r0, r4
	  stw       r0, 0xEC(r3)
	  b         .loc_0xB98

	.loc_0xB88:
	  lwz       r3, 0x58(r5)
	  lwz       r0, 0x48(r3)
	  add       r0, r0, r4
	  stw       r0, 0x48(r3)

	.loc_0xB98:
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xBB4
	  cmpwi     r0, 0x3
	  bne-      .loc_0xBB8

	.loc_0xBB4:
	  li        r3, 0x1

	.loc_0xBB8:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBE4
	  lwz       r3, 0x58(r4)
	  lwz       r4, 0x35C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x170(r4)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x1
	  b         .loc_0xDA8

	.loc_0xBE4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC54
	  lhz       r29, 0x43E(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x10
	  bl        -0xD320
	  lhz       r3, 0x22E(r30)
	  cmplwi    r3, 0x3
	  beq-      .loc_0xC2C
	  rlwinm    r0,r29,0,16,31
	  cmplw     r0, r3
	  bne-      .loc_0xC40

	.loc_0xC2C:
	  lhz       r3, 0x22C(r30)
	  lwz       r0, 0x10(r1)
	  add       r0, r3, r0
	  sth       r0, 0x22C(r30)
	  b         .loc_0xDA4

	.loc_0xC40:
	  lhz       r3, 0x22C(r30)
	  lwz       r0, 0x14(r1)
	  add       r0, r3, r0
	  sth       r0, 0x22C(r30)
	  b         .loc_0xDA4

	.loc_0xC54:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0xCB4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  beq-      .loc_0xCB4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xD90

	.loc_0xCB4:
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0xCE0
	  lwz       r3, 0x35C(r31)
	  lwz       r0, 0x170(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0xDA4
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r31
	  bl        0x70B74
	  b         .loc_0xDA4

	.loc_0xCE0:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xD4C
	  lwz       r3, 0x35C(r31)
	  lwz       r0, 0x170(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0xDA4
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r31
	  bl        0x7082C
	  lwz       r4, 0x35C(r31)
	  subi      r3, r2, 0x58DC
	  lwz       r4, 0x180(r4)
	  bl        -0xAC718
	  cmpwi     r3, 0
	  bne-      .loc_0xDA4
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r4, r3
	  beq-      .loc_0xDA4
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r4)
	  bl        0x71548
	  b         .loc_0xDA4

	.loc_0xD4C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xDA4
	  mr        r3, r31
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x8
	  bl        -0xD488
	  lhz       r3, 0x22C(r30)
	  lwz       r0, 0x8(r1)
	  add       r0, r3, r0
	  sth       r0, 0x22C(r30)
	  b         .loc_0xDA4

	.loc_0xD90:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDA4:
	  li        r3, 0x1

	.loc_0xDA8:
	  lmw       r27, 0x12C(r1)
	  lwz       r0, 0x144(r1)
	  mtlr      r0
	  addi      r1, r1, 0x140
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80176E84
 * Size:	00000C
 */
void Game::Onyon::startPropera(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x5904(r2)
	  stfs      f0, 0x25C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80176E90
 * Size:	00000C
 */
void Game::Onyon::stopPropera(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x58D8(r2)
	  stfs      f0, 0x25C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80176E9C
 * Size:	00016C
 */
void Game::Onyon::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x124
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2AE950
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  bl        0x306C
	  lfs       f1, 0x14(r1)
	  li        r5, 0
	  lfs       f2, 0x18(r1)
	  li        r0, 0xFF
	  lfs       f0, 0x1C(r1)
	  mr        r3, r31
	  stfs      f1, 0x2C(r1)
	  addi      r4, r1, 0x2C
	  lfs       f1, -0x58D4(r2)
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stb       r5, 0x84(r31)
	  stb       r0, 0x85(r31)
	  stb       r5, 0x86(r31)
	  stb       r0, 0x87(r31)
	  bl        0x2AEB94
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        0x3188
	  lfs       f1, 0x8(r1)
	  li        r6, 0x64
	  lfs       f2, 0xC(r1)
	  li        r5, 0xFF
	  lfs       f0, 0x10(r1)
	  li        r0, 0
	  stfs      f1, 0x2C(r1)
	  mr        r3, r31
	  lfs       f1, -0x58D4(r2)
	  addi      r4, r1, 0x2C
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  stb       r6, 0x84(r31)
	  stb       r5, 0x85(r31)
	  stb       r0, 0x86(r31)
	  stb       r5, 0x87(r31)
	  bl        0x2AEB44
	  lwz       r3, 0x174(r30)
	  subi      r4, r2, 0x592C
	  bl        0x2C8070
	  bl        0x2B2928
	  lfs       f0, 0xC(r3)
	  li        r6, 0x64
	  li        r5, 0xFF
	  li        r0, 0
	  stfs      f0, 0x2C(r1)
	  addi      r4, r1, 0x2C
	  lfs       f1, -0x5904(r2)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x2C(r3)
	  mr        r3, r31
	  stfs      f0, 0x34(r1)
	  stb       r6, 0x84(r31)
	  stb       r5, 0x85(r31)
	  stb       r0, 0x86(r31)
	  stb       r5, 0x87(r31)
	  bl        0x2AEAF0

	.loc_0x124:
	  lfs       f2, -0x58D0(r2)
	  mr        r3, r30
	  lfs       f1, 0x1A0(r30)
	  mr        r4, r31
	  lfs       f3, 0x1A4(r30)
	  addi      r5, r1, 0x20
	  lfs       f0, 0x19C(r30)
	  fadds     f1, f2, f1
	  stfs      f0, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  bl        0x60BF8
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void Game::Onyon::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80177008
 * Size:	000034
 */
void Game::Onyon::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  li        r4, 0
	  lfs       f0, -0x5934(r2)
	  sth       r4, 0x22C(r3)
	  li        r0, 0x5
	  stw       r4, 0x1D8(r3)
	  stb       r4, 0x1E0(r3)
	  stfs      f0, 0x1DC(r3)
	  stw       r4, 0x1E8(r3)
	  stw       r4, 0x1E4(r3)
	  stw       r4, 0x24C(r3)
	  stw       r4, 0x248(r3)
	  stb       r0, 0x240(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017703C
 * Size:	000004
 */
void Game::Onyon::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177040
 * Size:	00023C
 */
void Game::Onyon::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  mr        r3, r0
	  addi      r4, r31, 0x19C
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x1A0(r31)

	.loc_0x3C:
	  lfs       f0, 0x19C(r31)
	  li        r0, 0
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x28(r1)
	  lfs       f0, -0x58CC(r2)
	  cmplwi    r3, 0
	  lfs       f1, 0x1A0(r31)
	  stfs      f1, 0x2C(r1)
	  lfs       f1, 0x1A4(r31)
	  stfs      f1, 0x30(r1)
	  stw       r0, 0x34(r1)
	  stb       r0, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  beq-      .loc_0x90
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  addi      r4, r1, 0x28
	  bl        -0x4100
	  stw       r3, 0x23C(r31)
	  b         .loc_0x98

	.loc_0x90:
	  li        r0, 0
	  stw       r0, 0x23C(r31)

	.loc_0x98:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xB8
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1DEC
	  b         .loc_0xC4

	.loc_0xB8:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1DDC

	.loc_0xC4:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x178
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x26AC
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x26A0
	  lwz       r3, -0x65E8(r13)
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x14
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x20(r1)
	  bl        0x2C64EC
	  stw       r3, 0x1F4(r31)
	  mr        r3, r31
	  li        r4, 0
	  bl        .loc_0x23C
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x16C
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x22E(r31)
	  bl        0x6FF60
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x15C
	  mr        r3, r31
	  li        r4, 0x3
	  bl        .loc_0x23C
	  mr        r3, r31
	  bl        0xC60
	  b         .loc_0x178

	.loc_0x15C:
	  mr        r3, r31
	  li        r4, 0
	  bl        .loc_0x23C
	  b         .loc_0x178

	.loc_0x16C:
	  mr        r3, r31
	  li        r4, 0x3
	  bl        .loc_0x23C

	.loc_0x178:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1A8
	  lwz       r3, 0x174(r31)
	  subi      r4, r2, 0x5924
	  bl        0x2C7E18
	  stw       r3, 0x248(r31)
	  subi      r4, r2, 0x5920
	  lwz       r3, 0x174(r31)
	  bl        0x2C7E08
	  stw       r3, 0x24C(r31)
	  b         .loc_0x1B4

	.loc_0x1A8:
	  li        r0, 0
	  stw       r0, 0x24C(r31)
	  stw       r0, 0x248(r31)

	.loc_0x1B4:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x1FC
	  lis       r3, 0x8048
	  rlwinm    r0,r0,2,14,29
	  subi      r6, r3, 0x194C
	  addi      r4, r1, 0x8
	  lwz       r8, 0x0(r6)
	  mr        r3, r31
	  lwz       r7, 0x4(r6)
	  li        r5, 0
	  lwz       r6, 0x8(r6)
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  lwzx      r4, r4, r0
	  bl        0xA7350
	  b         .loc_0x228

	.loc_0x1FC:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x218
	  mr        r3, r31
	  li        r4, 0xC
	  li        r5, 0
	  bl        0xA7334
	  b         .loc_0x228

	.loc_0x218:
	  mr        r3, r31
	  li        r4, 0xF
	  li        r5, 0
	  bl        0xA7320

	.loc_0x228:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0x23C:
	*/
}

/*
 * --INFO--
 * Address:	8017727C
 * Size:	000110
 */
void Game::Onyon::setSpotState((Game::Onyon::cSpotState))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0xFC
	  stb       r4, 0x224(r31)
	  lwz       r3, 0x1F4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  li        r0, 0
	  stb       r0, 0x3A(r3)

	.loc_0x38:
	  lbz       r0, 0x224(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xAC
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  beq-      .loc_0x64
	  bge-      .loc_0x94
	  b         .loc_0xC0

	.loc_0x58:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xC0
	  b         .loc_0x7C

	.loc_0x64:
	  lfs       f0, -0x5934(r2)
	  mr        r3, r31
	  li        r4, 0
	  stfs      f0, 0x220(r31)
	  bl        0x1BEC
	  b         .loc_0xC0

	.loc_0x7C:
	  lfs       f0, -0x5908(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  stfs      f0, 0x220(r31)
	  bl        0x1BD4
	  b         .loc_0xC0

	.loc_0x94:
	  lfs       f0, -0x5934(r2)
	  mr        r3, r31
	  li        r4, 0
	  stfs      f0, 0x220(r31)
	  bl        0x1BBC
	  b         .loc_0xC0

	.loc_0xAC:
	  lfs       f0, -0x5908(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  stfs      f0, 0x220(r31)
	  bl        0x1BA4

	.loc_0xC0:
	  lfs       f1, 0x220(r31)
	  lis       r3, 0x8051
	  lfs       f0, -0x5908(r2)
	  addi      r5, r3, 0x41E4
	  stfs      f1, 0x8(r1)
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x8
	  addi      r6, r31, 0x19C
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  bl        0x2B0F74
	  lwz       r4, 0x1F4(r31)
	  addi      r3, r1, 0x14
	  addi      r4, r4, 0x8
	  bl        -0x8D0A8

	.loc_0xFC:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void Game::Onyon::updateSpot(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017738C
 * Size:	0000AC
 */
void Game::Onyon::getSuckPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stfd      f29, 0x10(r1)
	  psq_st    f29,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lhz       r0, 0x128(r4)
	  mr        r31, r3
	  lfs       f31, 0x19C(r4)
	  cmplwi    r0, 0x403
	  lfs       f30, 0x1A0(r4)
	  lfs       f29, 0x1A4(r4)
	  bne-      .loc_0x6C
	  lwz       r3, 0x174(r4)
	  subi      r4, r2, 0x58C4
	  bl        0x2C7C0C
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  bl        0x2B24BC
	  lfs       f31, 0xC(r3)
	  lfs       f30, 0x1C(r3)
	  lfs       f29, 0x2C(r3)
	  b         .loc_0x74

	.loc_0x6C:
	  lfs       f0, -0x58BC(r2)
	  fadds     f30, f30, f0

	.loc_0x74:
	  stfs      f31, 0x0(r31)
	  stfs      f30, 0x4(r31)
	  stfs      f29, 0x8(r31)
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  psq_l     f29,0x18(r1),0,0
	  lfd       f29, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177438
 * Size:	0000D8
 */
void Game::Onyon::getGoalPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lhz       r0, 0x128(r4)
	  lfs       f3, 0x19C(r4)
	  cmplwi    r0, 0x403
	  lfs       f4, 0x1A0(r4)
	  lfs       f5, 0x1A4(r4)
	  bne-      .loc_0xC4
	  lfs       f6, 0x228(r4)
	  lfs       f0, -0x5934(r2)
	  lfs       f2, -0x58B8(r2)
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x5C
	  lfs       f0, -0x58FC(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f1, f0
	  b         .loc_0x80

	.loc_0x5C:
	  lfs       f0, -0x5900(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r4, r0

	.loc_0x80:
	  lfs       f0, -0x5934(r2)
	  fmadds    f3, f2, f1, f3
	  fcmpo     cr0, f6, f0
	  bge-      .loc_0x94
	  fneg      f6, f6

	.loc_0x94:
	  lfs       f0, -0x5900(r2)
	  lis       r4, 0x8050
	  addi      r4, r4, 0x71A0
	  lfs       f1, -0x58B8(r2)
	  fmuls     f0, f6, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r4, r0
	  lfs       f0, 0x4(r4)
	  fmadds    f5, f1, f0, f5

	.loc_0xC4:
	  stfs      f3, 0x0(r3)
	  stfs      f4, 0x4(r3)
	  stfs      f5, 0x8(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177510
 * Size:	000318
 */
void Game::Onyon::doAI(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stw       r31, 0x9C(r1)
	  mr        r31, r3
	  stw       r30, 0x98(r1)
	  lwz       r3, 0x1B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lha       r0, 0x20(r3)
	  b         .loc_0x30

	.loc_0x2C:
	  li        r0, -0x1

	.loc_0x30:
	  cmpwi     r0, 0x2
	  bne-      .loc_0xB8
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0xB8
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x2014
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  beq-      .loc_0xB0
	  lfs       f5, -0x5934(r2)
	  li        r0, 0
	  lfs       f1, -0x5908(r2)
	  addi      r3, r1, 0x20
	  stfs      f5, 0x24(r1)
	  lfs       f2, -0x58B4(r2)
	  stfs      f1, 0x20(r1)
	  lfs       f3, -0x58B0(r2)
	  stfs      f5, 0x28(r1)
	  lfs       f4, -0x58E0(r2)
	  stfs      f5, 0x2C(r1)
	  stfs      f5, 0x30(r1)
	  stb       r0, 0x34(r1)
	  stb       r0, 0x35(r1)
	  bl        0x1BD59C
	  mr        r3, r30
	  addi      r4, r1, 0x20
	  bl        0x2F9E9C

	.loc_0xB0:
	  mr        r3, r31
	  bl        0x1D88

	.loc_0xB8:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x1EC
	  lbz       r0, 0x224(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x16C
	  bge-      .loc_0x1EC
	  cmpwi     r0, 0
	  beq-      .loc_0x1EC
	  bge-      .loc_0xE8
	  b         .loc_0x1EC
	  b         .loc_0x1EC

	.loc_0xE8:
	  lwz       r3, -0x6514(r13)
	  lfs       f3, -0x58C8(r2)
	  lfs       f2, 0x54(r3)
	  lfs       f1, 0x220(r31)
	  lfs       f0, -0x5908(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x220(r31)
	  lfs       f1, 0x220(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x12C
	  stfs      f0, 0x220(r31)
	  li        r0, 0x3
	  mr        r3, r31
	  li        r4, 0x1
	  stb       r0, 0x224(r31)
	  bl        0x18A4

	.loc_0x12C:
	  lfs       f1, 0x220(r31)
	  lis       r3, 0x8051
	  lfs       f0, -0x5908(r2)
	  addi      r5, r3, 0x41E4
	  stfs      f1, 0x8(r1)
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x8
	  addi      r6, r31, 0x19C
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  bl        0x2B0C74
	  lwz       r4, 0x1F4(r31)
	  addi      r3, r1, 0x38
	  addi      r4, r4, 0x8
	  bl        -0x8D3A8
	  b         .loc_0x1EC

	.loc_0x16C:
	  lwz       r3, -0x6514(r13)
	  lfs       f3, -0x58C8(r2)
	  lfs       f2, 0x54(r3)
	  lfs       f1, 0x220(r31)
	  lfs       f0, -0x5934(r2)
	  fnmsubs   f1, f3, f2, f1
	  stfs      f1, 0x220(r31)
	  lfs       f1, 0x220(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1B0
	  stfs      f0, 0x220(r31)
	  li        r0, 0
	  mr        r3, r31
	  li        r4, 0
	  stb       r0, 0x224(r31)
	  bl        0x1820

	.loc_0x1B0:
	  lfs       f1, 0x220(r31)
	  lis       r3, 0x8051
	  lfs       f0, -0x5908(r2)
	  addi      r5, r3, 0x41E4
	  stfs      f1, 0x14(r1)
	  addi      r3, r1, 0x68
	  addi      r4, r1, 0x14
	  addi      r6, r31, 0x19C
	  stfs      f0, 0x18(r1)
	  stfs      f1, 0x1C(r1)
	  bl        0x2B0BF0
	  lwz       r4, 0x1F4(r31)
	  addi      r3, r1, 0x68
	  addi      r4, r4, 0x8
	  bl        -0x8D42C

	.loc_0x1EC:
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x300
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x230
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x300

	.loc_0x230:
	  lbz       r0, 0x240(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x254
	  lfs       f1, 0x1D4(r31)
	  lfs       f0, -0x5908(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x254
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r31)

	.loc_0x254:
	  lbz       r0, 0x240(r31)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x300
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x244(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, -0x58AC(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x244(r31)
	  lfs       f1, 0x244(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x300
	  addi      r3, r31, 0x1A8
	  li        r4, 0x1
	  bl        0x2B1664
	  lbz       r0, 0x1C0(r31)
	  lfs       f0, -0x5930(r2)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1C0(r31)
	  stfs      f0, 0x1D4(r31)
	  lwz       r3, 0x214(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x4
	  li        r4, 0x3835
	  stb       r0, 0x240(r31)
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2D8
	  li        r4, 0x382E

	.loc_0x2D8:
	  lwz       r12, 0x0(r31)
	  mr        r3, r31
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x210(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x300:
	  lwz       r0, 0xA4(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177828
 * Size:	000078
 */
void Game::Onyon::forceClose(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x64
	  addi      r3, r31, 0x1A8
	  li        r4, 0x3E8
	  bl        0x2B15B0
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x1D4(r31)
	  lwz       r3, 0x214(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x5
	  stb       r0, 0x240(r31)
	  lwz       r3, 0x210(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801778A0
 * Size:	000078
 */
void Game::Onyon::do_updateLOD(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        0x5FF50
	  lhz       r0, 0x22E(r31)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x30
	  li        r0, 0x1
	  stb       r0, 0x10(r1)

	.loc_0x30:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0x5FF64
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  lbz       r0, 0xD8(r31)
	  ori       r0, r0, 0x34
	  stb       r0, 0xD8(r31)

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177918
 * Size:	000064
 */
void Game::Onyon::getLODCylinder((Sys::Cylinder&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x5910(r2)
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  lfs       f1, -0x58D0(r2)
	  addi      r4, r1, 0x14
	  lfs       f4, 0x19C(r3)
	  addi      r5, r1, 0x8
	  stfs      f4, 0x14(r1)
	  lfs       f3, 0x1A0(r3)
	  stfs      f3, 0x18(r1)
	  fadds     f0, f3, f0
	  lfs       f2, 0x1A4(r3)
	  mr        r3, r0
	  stfs      f2, 0x1C(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  bl        0x2A9CFC
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017797C
 * Size:	000470
 */
void Game::Onyon::do_doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  mr        r30, r3
	  lis       r4, 0x8048
	  lhz       r0, 0x22E(r3)
	  subi      r31, r4, 0x19E0
	  cmplwi    r0, 0x4
	  bne-      .loc_0x1F0
	  lfs       f1, -0x5934(r2)
	  lfs       f0, 0x25C(r30)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x98
	  li        r4, 0x2
	  bl        0x27DC
	  lwz       r4, -0x6514(r13)
	  lfs       f3, 0x25C(r30)
	  lfs       f2, 0x54(r4)
	  lfs       f1, 0x0(r3)
	  lfs       f0, -0x5930(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x0(r3)
	  lfs       f1, 0x0(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x88
	  stfs      f0, 0x0(r3)
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x25C(r30)
	  b         .loc_0x98

	.loc_0x88:
	  ble-      .loc_0x98
	  stfs      f0, 0x0(r3)
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x25C(r30)

	.loc_0x98:
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x2788
	  lfs       f1, 0x0(r3)
	  lfs       f0, -0x5934(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1F0
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x100(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  li        r3, 0x2020
	  bl        0x2F6668
	  mr.       r29, r3
	  beq-      .loc_0x124
	  lfs       f5, -0x5934(r2)
	  li        r0, 0
	  lfs       f1, -0x5908(r2)
	  addi      r3, r1, 0x50
	  stfs      f5, 0x54(r1)
	  lfs       f2, -0x58B4(r2)
	  stfs      f1, 0x50(r1)
	  lfs       f3, -0x58A8(r2)
	  stfs      f5, 0x58(r1)
	  lfs       f4, -0x58E0(r2)
	  stfs      f5, 0x5C(r1)
	  stfs      f5, 0x60(r1)
	  stb       r0, 0x64(r1)
	  stb       r0, 0x65(r1)
	  bl        0x1BD0BC
	  mr        r3, r29
	  addi      r4, r1, 0x50
	  bl        0x2F99BC

	.loc_0x124:
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x2778
	  lfs       f31, 0x8(r3)
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x2768
	  lfs       f0, -0x58D4(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x1DC
	  lfs       f0, -0x58A4(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x1DC
	  lbz       r0, -0x6CCC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  lwz       r3, 0x17C(r30)
	  li        r4, 0x3807
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x1D0
	  lfs       f5, -0x5934(r2)
	  li        r0, 0
	  lfs       f1, -0x5908(r2)
	  addi      r3, r1, 0x38
	  stfs      f5, 0x3C(r1)
	  lfs       f2, -0x58A0(r2)
	  stfs      f1, 0x38(r1)
	  lfs       f3, -0x58E4(r2)
	  stfs      f5, 0x40(r1)
	  lfs       f4, -0x589C(r2)
	  stfs      f5, 0x44(r1)
	  stfs      f5, 0x48(r1)
	  stb       r0, 0x4C(r1)
	  stb       r0, 0x4D(r1)
	  bl        0x1BD010
	  mr        r3, r29
	  addi      r4, r1, 0x38
	  bl        0x2F9910

	.loc_0x1D0:
	  li        r0, 0x1
	  stb       r0, -0x6CCC(r13)
	  b         .loc_0x1F0

	.loc_0x1DC:
	  lfs       f0, -0x58CC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x1F0
	  li        r0, 0
	  stb       r0, -0x6CCC(r13)

	.loc_0x1F0:
	  mr        r3, r30
	  bl        0x272C
	  lwz       r3, -0x6C18(r13)
	  lhz       r4, 0x22E(r30)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x44C
	  cmplwi    r4, 0x4
	  bne-      .loc_0x3C4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3043
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x22C
	  li        r4, 0x3028

	.loc_0x22C:
	  lwz       r3, 0x17C(r30)
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x44C
	  lfs       f5, -0x5934(r2)
	  li        r0, 0
	  lfs       f1, -0x5908(r2)
	  addi      r3, r1, 0x20
	  stfs      f5, 0x24(r1)
	  lfs       f2, -0x5898(r2)
	  stfs      f1, 0x20(r1)
	  lfs       f3, -0x58E4(r2)
	  stfs      f5, 0x28(r1)
	  lfs       f4, -0x5894(r2)
	  stfs      f5, 0x2C(r1)
	  stfs      f5, 0x30(r1)
	  stb       r0, 0x34(r1)
	  stb       r0, 0x35(r1)
	  bl        0x1BCF4C
	  mr        r3, r29
	  addi      r4, r1, 0x20
	  bl        0x2F984C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2B4
	  addi      r3, r31, 0xA0
	  addi      r5, r31, 0x60
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x14D5EC

	.loc_0x2B4:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x2D4
	  addi      r3, r31, 0xA0
	  addi      r5, r31, 0x60
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x14D60C

	.loc_0x2D4:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x2F4
	  addi      r3, r31, 0xAC
	  addi      r5, r31, 0x60
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x14D62C

	.loc_0x2F4:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0x318
	  addi      r3, r31, 0xAC
	  addi      r5, r31, 0xB8
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x14D650

	.loc_0x318:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x338
	  b         .loc_0x33C

	.loc_0x338:
	  li        r30, 0

	.loc_0x33C:
	  cmplwi    r30, 0
	  beq-      .loc_0x44C
	  lwz       r3, 0x4C(r30)
	  cmplwi    r3, 0x186
	  bge-      .loc_0x3A0
	  lis       r0, 0x4330
	  stw       r3, 0x6C(r1)
	  lfd       f1, -0x5880(r2)
	  li        r3, 0x1
	  stw       r0, 0x68(r1)
	  lfs       f2, -0x5934(r2)
	  lfd       f0, 0x68(r1)
	  lfs       f3, -0x5890(r2)
	  fsubs     f1, f0, f1
	  lfs       f4, -0x588C(r2)
	  lfs       f5, -0x5908(r2)
	  bl        -0xBDAB4
	  mr        r3, r29
	  li        r4, 0
	  lwz       r12, 0x10(r29)
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x44C

	.loc_0x3A0:
	  mr        r3, r29
	  lfs       f1, -0x5908(r2)
	  lwz       r12, 0x10(r29)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x44C

	.loc_0x3C4:
	  cmplwi    r4, 0x3
	  bne-      .loc_0x44C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3044
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x3E4
	  li        r4, 0x302B

	.loc_0x3E4:
	  lwz       r3, 0x17C(r30)
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x44C
	  lfs       f5, -0x5934(r2)
	  li        r0, 0
	  lfs       f1, -0x5908(r2)
	  addi      r3, r1, 0x8
	  stfs      f5, 0xC(r1)
	  lfs       f2, -0x58E0(r2)
	  stfs      f1, 0x8(r1)
	  lfs       f3, -0x5888(r2)
	  stfs      f5, 0x10(r1)
	  lfs       f4, -0x5894(r2)
	  stfs      f5, 0x14(r1)
	  stfs      f5, 0x18(r1)
	  stb       r0, 0x1C(r1)
	  stb       r0, 0x1D(r1)
	  bl        0x1BCD94
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  bl        0x2F9694

	.loc_0x44C:
	  psq_l     f31,0x88(r1),0,0
	  lwz       r0, 0x94(r1)
	  lfd       f31, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177DEC
 * Size:	000008
 */
void Game::BaseItem::getSound_PosPtr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x19C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::Onyon::initTube(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80177DF4
 * Size:	000198
 */
void Game::Onyon::startWaitMotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0xE0
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x79784
	  lwz       r5, -0x6B70(r13)
	  mr        r31, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x79770
	  add.      r0, r31, r3
	  ble-      .loc_0xA0
	  lfs       f31, -0x5930(r2)
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x234C
	  stfs      f31, 0x0(r3)
	  li        r4, 0
	  lwz       r3, 0x218(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0xA0:
	  lwz       r3, 0x218(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, -0x5934(r2)
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x22DC
	  stfs      f31, 0x0(r3)
	  b         .loc_0x178

	.loc_0xE0:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r30)
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x108
	  addi      r3, r30, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2B0D94
	  b         .loc_0x178

	.loc_0x108:
	  bl        0x16A0
	  cmpwi     r3, 0
	  ble-      .loc_0x15C
	  lwz       r3, 0x1B4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lha       r0, 0x20(r3)
	  b         .loc_0x12C

	.loc_0x128:
	  li        r0, -0x1

	.loc_0x12C:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x13C
	  cmpwi     r0, 0x3
	  bne-      .loc_0x178

	.loc_0x13C:
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0x14C
	  addi      r5, r30, 0x178

	.loc_0x14C:
	  addi      r3, r30, 0x1A8
	  li        r4, 0x2
	  bl        0x2B0D40
	  b         .loc_0x178

	.loc_0x15C:
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0x16C
	  addi      r5, r30, 0x178

	.loc_0x16C:
	  addi      r3, r30, 0x1A8
	  li        r4, 0
	  bl        0x2B0D20

	.loc_0x178:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80177F8C
 * Size:	000078
 */
void Game::Onyon::onKeyEvent_UFO((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x48
	  bge-      .loc_0x1C
	  cmpwi     r0, 0
	  bge-      .loc_0x28
	  blr

	.loc_0x1C:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x6C
	  blr

	.loc_0x28:
	  lbz       r0, 0x240(r3)
	  cmplwi    r0, 0
	  bnelr-
	  lfs       f0, -0x5934(r2)
	  li        r0, 0x1
	  stfs      f0, 0x1D4(r3)
	  stb       r0, 0x240(r3)
	  blr

	.loc_0x48:
	  lbz       r0, 0x240(r3)
	  cmplwi    r0, 0x2
	  bnelr-
	  li        r0, 0x3
	  lfs       f0, -0x5934(r2)
	  stb       r0, 0x240(r3)
	  stfs      f0, 0x244(r3)
	  stfs      f0, 0x1D4(r3)
	  blr

	.loc_0x6C:
	  li        r0, 0x5
	  stb       r0, 0x240(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178004
 * Size:	00013C
 */
void Game::Onyon::getFlagSetPos(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  lfs       f0, -0x5934(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x54
	  fneg      f2, f2

	.loc_0x54:
	  lfs       f3, -0x5900(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5934(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, -0x5910(r2)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f31, f4, f0
	  bge-      .loc_0xB4
	  lfs       f0, -0x58FC(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f30, f0
	  b         .loc_0xCC

	.loc_0xB4:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f30, r4, r0

	.loc_0xCC:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5910(r2)
	  lfs       f4, 0x10(r1)
	  fmuls     f1, f0, f30
	  lfs       f2, 0x8(r1)
	  lfs       f3, 0xC(r1)
	  fadds     f4, f4, f31
	  lfs       f0, -0x5934(r2)
	  fadds     f2, f2, f1
	  fadds     f3, f3, f0
	  stfs      f2, 0x0(r30)
	  stfs      f3, 0x4(r30)
	  stfs      f4, 0x8(r30)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178140
 * Size:	00004C
 */
void Game::Onyon::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x224(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3C

	.loc_0x2C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x228(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017818C
 * Size:	0000AC
 */
void Game::Onyon::vsChargePikmin(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x40
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0x6FF
	  subi      r5, r5, 0x1980
	  crclr     6, 0x6
	  bl        -0x14DB88

	.loc_0x40:
	  lhz       r0, 0x22E(r31)
	  sth       r0, 0x230(r31)
	  lhz       r3, 0x22C(r31)
	  addi      r0, r3, 0x1
	  sth       r0, 0x22C(r31)
	  lwz       r3, 0x1B4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x68
	  lha       r0, 0x20(r3)
	  b         .loc_0x6C

	.loc_0x68:
	  li        r0, -0x1

	.loc_0x6C:
	  cmpwi     r0, 0
	  beq-      .loc_0x7C
	  cmpwi     r0, 0x2
	  bne-      .loc_0x98

	.loc_0x7C:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x8C
	  addi      r5, r31, 0x178

	.loc_0x8C:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x1
	  bl        0x2B0A68

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178238
 * Size:	000648
 */
void Game::Onyon::onKeyEvent_Onyon((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stmw      r27, 0x6C(r1)
	  mr        r27, r3
	  lwz       r3, 0x1B4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  lha       r3, 0x20(r3)
	  b         .loc_0x34

	.loc_0x30:
	  li        r3, -0x1

	.loc_0x34:
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x64
	  beq-      .loc_0x1F4
	  bge-      .loc_0x50
	  cmpwi     r0, 0x1
	  beq-      .loc_0x208
	  b         .loc_0x62C

	.loc_0x50:
	  cmpwi     r0, 0x3E8
	  beq-      .loc_0x5C
	  b         .loc_0x62C

	.loc_0x5C:
	  lhz       r0, 0x22C(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x62C
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x84
	  addi      r5, r27, 0x178

	.loc_0x84:
	  addi      r3, r27, 0x1A8
	  li        r4, 0x1
	  bl        0x2B09C4
	  b         .loc_0x62C

	.loc_0x94:
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x154
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x792CC
	  lwz       r5, -0x6B70(r13)
	  mr        r28, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x792B8
	  add.      r0, r28, r3
	  ble-      .loc_0x114
	  lfs       f31, -0x5930(r2)
	  mr        r3, r27
	  li        r4, 0x1
	  bl        0x1E94
	  stfs      f31, 0x0(r3)
	  li        r4, 0
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x62C

	.loc_0x114:
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, -0x5934(r2)
	  mr        r3, r27
	  li        r4, 0x1
	  bl        0x1E24
	  stfs      f31, 0x0(r3)
	  b         .loc_0x62C

	.loc_0x154:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r27)
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x17C
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2B08DC
	  b         .loc_0x62C

	.loc_0x17C:
	  mr        r3, r27
	  bl        0x11E4
	  cmpwi     r3, 0
	  ble-      .loc_0x1D4
	  lwz       r3, 0x1B4(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x1A0
	  lha       r0, 0x20(r3)
	  b         .loc_0x1A4

	.loc_0x1A0:
	  li        r0, -0x1

	.loc_0x1A4:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x1B4
	  cmpwi     r0, 0x3
	  bne-      .loc_0x62C

	.loc_0x1B4:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x1C4
	  addi      r5, r27, 0x178

	.loc_0x1C4:
	  addi      r3, r27, 0x1A8
	  li        r4, 0x2
	  bl        0x2B0884
	  b         .loc_0x62C

	.loc_0x1D4:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x1E4
	  addi      r5, r27, 0x178

	.loc_0x1E4:
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  bl        0x2B0864
	  b         .loc_0x62C

	.loc_0x1F4:
	  cmpwi     r3, 0x2
	  bne-      .loc_0x62C
	  mr        r3, r27
	  bl        0x10B4
	  b         .loc_0x62C

	.loc_0x208:
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x62C
	  cmpwi     r3, 0x2
	  beq-      .loc_0x4D4
	  bge-      .loc_0x62C
	  cmpwi     r3, 0x1
	  bge-      .loc_0x22C
	  b         .loc_0x62C

	.loc_0x22C:
	  lhz       r0, 0x22C(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C4
	  rlwinm.   r30,r0,31,17,31
	  bgt-      .loc_0x244
	  li        r30, 0x1

	.loc_0x244:
	  lis       r3, 0x8051
	  li        r29, 0
	  addi      r31, r3, 0x41E4
	  b         .loc_0x4B8

	.loc_0x254:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C4
	  li        r3, 0x1
	  bl        0x589B8
	  mr        r28, r3
	  li        r3, 0
	  bl        0x589AC
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x2A4
	  cmpwi     r3, 0x32
	  blt-      .loc_0x2A4
	  lhz       r3, 0x22C(r27)
	  subi      r0, r3, 0x1
	  sth       r0, 0x22C(r27)
	  b         .loc_0x4B4

	.loc_0x2A4:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2C4
	  cmpwi     r28, 0x32
	  blt-      .loc_0x2C4
	  lhz       r3, 0x22C(r27)
	  subi      r0, r3, 0x1
	  sth       r0, 0x22C(r27)
	  b         .loc_0x4B4

	.loc_0x2C4:
	  lwz       r3, -0x6B90(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  beq-      .loc_0x374
	  lhz       r0, 0x22E(r27)
	  lis       r7, 0x804B
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  sth       r0, 0x230(r27)
	  lis       r4, 0x8051
	  subi      r7, r7, 0x5D0C
	  addi      r6, r6, 0x2C7C
	  lhz       r8, 0x230(r27)
	  li        r0, 0
	  lfs       f3, 0x41E4(r4)
	  addi      r5, r5, 0x2C70
	  stw       r7, 0x14(r1)
	  addi      r4, r1, 0x14
	  lfs       f2, 0x4(r31)
	  stw       r6, 0x14(r1)
	  lfs       f1, 0x8(r31)
	  lfs       f0, -0x5938(r2)
	  stw       r5, 0x14(r1)
	  stw       r8, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stb       r0, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  bl        -0x3D5B8
	  lhz       r3, 0x22C(r27)
	  subi      r0, r3, 0x1
	  sth       r0, 0x22C(r27)
	  lhz       r3, 0x1F4(r28)
	  bl        0xB74D0
	  mr        r3, r27
	  mr        r4, r28
	  li        r5, 0
	  bl        .loc_0x648
	  b         .loc_0x4B4

	.loc_0x374:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x478
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x7
	  bl        0x6EE1C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x478
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x7
	  bl        0x6EDCC
	  lis       r3, 0x8051
	  lwzu      r12, 0x262C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  lis       r4, 0x8048
	  subi      r6, r4, 0x18D4
	  ble-      .loc_0x3D0
	  lis       r3, 0x8048
	  subi      r6, r3, 0x18E4

	.loc_0x3D0:
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0
	  lfs       f0, -0x5934(r2)
	  mr        r4, r27
	  lwz       r5, 0x58(r3)
	  addi      r3, r1, 0x8
	  lwz       r5, 0xC8(r5)
	  stw       r6, 0x34(r1)
	  stw       r0, 0x38(r1)
	  stw       r5, 0x40(r1)
	  stfs      f0, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  stw       r0, 0x5C(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x3C(r1)
	  stw       r0, 0x60(r1)
	  stw       r0, 0x48(r1)
	  stw       r0, 0x64(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r27
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x4C(r1)
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x58(r1)
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x3CC50
	  lwz       r3, -0x64AC(r13)
	  addi      r4, r1, 0x34
	  bl        0x2B4324

	.loc_0x478:
	  lhz       r0, 0x22E(r27)
	  li        r5, 0
	  sth       r0, 0x230(r27)
	  lwz       r3, -0x6B70(r13)
	  lhz       r4, 0x230(r27)
	  addi      r3, r3, 0xA8
	  bl        0x78D54
	  lwz       r4, 0x0(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x0(r3)
	  lhz       r3, 0x22E(r27)
	  bl        0xB7388
	  lhz       r3, 0x22C(r27)
	  subi      r0, r3, 0x1
	  sth       r0, 0x22C(r27)

	.loc_0x4B4:
	  addi      r29, r29, 0x1

	.loc_0x4B8:
	  cmpw      r29, r30
	  blt+      .loc_0x254
	  b         .loc_0x62C

	.loc_0x4C4:
	  lbz       r0, 0x1C0(r27)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1C0(r27)
	  b         .loc_0x62C

	.loc_0x4D4:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x590
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x78E90
	  lwz       r5, -0x6B70(r13)
	  mr        r28, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x78E7C
	  add.      r0, r28, r3
	  ble-      .loc_0x550
	  lfs       f31, -0x5930(r2)
	  mr        r3, r27
	  li        r4, 0x1
	  bl        0x1A58
	  stfs      f31, 0x0(r3)
	  li        r4, 0
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x62C

	.loc_0x550:
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, -0x5934(r2)
	  mr        r3, r27
	  li        r4, 0x1
	  bl        0x19E8
	  stfs      f31, 0x0(r3)
	  b         .loc_0x62C

	.loc_0x590:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r27)
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x5B8
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2B04A0
	  b         .loc_0x62C

	.loc_0x5B8:
	  mr        r3, r27
	  bl        0xDA8
	  cmpwi     r3, 0
	  ble-      .loc_0x610
	  lwz       r3, 0x1B4(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x5DC
	  lha       r0, 0x20(r3)
	  b         .loc_0x5E0

	.loc_0x5DC:
	  li        r0, -0x1

	.loc_0x5E0:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x5F0
	  cmpwi     r0, 0x3
	  bne-      .loc_0x62C

	.loc_0x5F0:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x600
	  addi      r5, r27, 0x178

	.loc_0x600:
	  addi      r3, r27, 0x1A8
	  li        r4, 0x2
	  bl        0x2B0448
	  b         .loc_0x62C

	.loc_0x610:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x620
	  addi      r5, r27, 0x178

	.loc_0x620:
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  bl        0x2B0428

	.loc_0x62C:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  lmw       r27, 0x6C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr

	.loc_0x648:
	*/
}

/*
 * --INFO--
 * Address:	80178880
 * Size:	000298
 */
void Game::Onyon::doEmit((Game::Creature*, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  lwz       r12, 0x0(r3)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r31, r5
	  lwz       r12, 0x1C0(r12)
	  li        r4, 0x2816
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x19C(r29)
	  lis       r6, 0x804B
	  lis       r5, 0x804E
	  lis       r4, 0x804B
	  stfs      f3, 0x34(r1)
	  lis       r3, 0x804B
	  subi      r10, r6, 0x5808
	  lfs       f0, -0x5878(r2)
	  lfs       f2, 0x1A0(r29)
	  addi      r9, r5, 0x6A64
	  addi      r5, r4, 0x268C
	  subi      r0, r3, 0x5814
	  stfs      f2, 0x38(r1)
	  fadds     f0, f2, f0
	  li        r8, 0x101
	  li        r7, 0x102
	  lfs       f1, 0x1A4(r29)
	  li        r6, 0
	  addi      r3, r1, 0x24
	  stw       r10, 0x24(r1)
	  addi      r4, r1, 0x14
	  stw       r9, 0x24(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x38(r1)
	  sth       r8, 0x28(r1)
	  sth       r7, 0x2A(r1)
	  stw       r6, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r5, 0x24(r1)
	  stw       r0, 0x14(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  bl        0x2366D0
	  mr        r3, r30
	  addi      r4, r1, 0x34
	  li        r5, 0
	  bl        -0x3D7AC
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x118
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x118
	  lis       r4, 0x8048
	  subi      r4, r4, 0x18C4
	  bl        0x2B5C38
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x118
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x3CF44

	.loc_0x118:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x17C
	  bl        -0xAF408
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  stw       r0, 0x40(r1)
	  lfd       f2, -0x5858(r2)
	  lfd       f1, 0x40(r1)
	  lfs       f0, -0x5874(r2)
	  fsubs     f1, f1, f2
	  lwz       r12, 0x64(r12)
	  fdivs     f31, f1, f0
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x5870(r2)
	  lfs       f0, -0x586C(r2)
	  fmsubs    f0, f2, f31, f0
	  fadds     f1, f0, f1
	  bl        0x2991DC
	  b         .loc_0x1BC

	.loc_0x17C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x18C
	  lfs       f1, -0x5934(r2)
	  b         .loc_0x1BC

	.loc_0x18C:
	  bl        -0xAF46C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  lfd       f3, -0x5858(r2)
	  stw       r0, 0x40(r1)
	  lfs       f1, -0x5874(r2)
	  lfd       f2, 0x40(r1)
	  lfs       f0, -0x5868(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f1, f0, f1

	.loc_0x1BC:
	  lfs       f0, -0x5934(r2)
	  fmr       f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1D0
	  fneg      f2, f1

	.loc_0x1D0:
	  lfs       f3, -0x5900(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5934(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, -0x5864(r2)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f2, f4, f0
	  bge-      .loc_0x230
	  lfs       f0, -0x58FC(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x248

	.loc_0x230:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x50(r1)
	  lwz       r0, 0x54(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x248:
	  fmuls     f1, f4, f0
	  lfs       f0, -0x5860(r2)
	  stfs      f2, 0x10(r1)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stfs      f1, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178B18
 * Size:	0000A0
 */
void Game::Onyon::getLegPart((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr.       r30, r4
	  lis       r4, 0x8048
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  subi      r31, r4, 0x19E0
	  blt-      .loc_0x3C
	  cmpwi     r30, 0x2
	  bgt-      .loc_0x3C
	  li        r0, 0x1

	.loc_0x3C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x58
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0x7D5
	  crclr     6, 0x6
	  bl        -0x14E52C

	.loc_0x58:
	  lwz       r3, 0x12C(r31)
	  rlwinm    r0,r30,2,0,29
	  lwz       r6, 0x130(r31)
	  addi      r4, r1, 0x8
	  lwz       r5, 0x134(r31)
	  stw       r3, 0x8(r1)
	  lwz       r3, 0x114(r29)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  lwzx      r4, r4, r0
	  bl        -0x42D54
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178BB8
 * Size:	0000C0
 */
void Game::Onyon::getFootPart((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr.       r30, r4
	  lis       r4, 0x8048
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  subi      r31, r4, 0x19E0
	  blt-      .loc_0x3C
	  cmpwi     r30, 0x2
	  bgt-      .loc_0x3C
	  li        r0, 0x1

	.loc_0x3C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x58
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0x7DE
	  crclr     6, 0x6
	  bl        -0x14E5CC

	.loc_0x58:
	  lwz       r3, 0x138(r31)
	  rlwinm    r0,r30,2,0,29
	  lwz       r6, 0x13C(r31)
	  addi      r4, r1, 0x8
	  lwz       r5, 0x140(r31)
	  stw       r3, 0x8(r1)
	  lwz       r3, 0x114(r29)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  lwzx      r4, r4, r0
	  bl        -0x42DF4
	  mr.       r30, r3
	  bne-      .loc_0xA0
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x144
	  li        r4, 0x7E4
	  crclr     6, 0x6
	  bl        -0x14E614

	.loc_0xA0:
	  lwz       r0, 0x34(r1)
	  mr        r3, r30
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178C78
 * Size:	00012C
 */
void Game::Onyon::makeTrMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x5934(r2)
	  stw       r0, 0x34(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  addi      r4, r31, 0x19C
	  lfs       f1, 0x228(r3)
	  addi      r3, r31, 0x138
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        0x2AFBDC
	  mr        r3, r31
	  bl        0x53958
	  lwz       r3, -0x6C18(r13)
	  bl        0x3C30C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x118
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x64
	  b         .loc_0x118

	.loc_0x64:
	  lbz       r0, 0x1E0(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lfs       f1, 0x1DC(r31)
	  lfs       f0, -0x5934(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x108
	  mr        r3, r31
	  bl        0xB54
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lwz       r3, 0x1D8(r31)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1D8(r31)
	  lwz       r0, 0x1D8(r31)
	  cmpwi     r0, 0
	  bgt-      .loc_0xB4
	  li        r0, 0
	  stb       r0, 0x1E0(r31)

	.loc_0xB4:
	  bl        -0xAF78C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f2, -0x5858(r2)
	  stw       r0, 0x18(r1)
	  lfs       f3, -0x5874(r2)
	  lfd       f0, 0x18(r1)
	  lfs       f1, -0x584C(r2)
	  fsubs     f4, f0, f2
	  lfs       f0, -0x58B0(r2)
	  lfs       f2, -0x5850(r2)
	  fdivs     f3, f4, f3
	  fmadds    f0, f1, f3, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x118

	.loc_0xF8:
	  li        r0, 0
	  stw       r0, 0x1D8(r31)
	  stb       r0, 0x1E0(r31)
	  b         .loc_0x118

	.loc_0x108:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1DC(r31)

	.loc_0x118:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80178DA4
 * Size:	000138
 */
void Game::Onyon::changeMaterial(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0xDC
	  lwz       r3, 0x1B4(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  lha       r31, 0x20(r3)
	  b         .loc_0x3C

	.loc_0x38:
	  li        r31, -0x1

	.loc_0x3C:
	  lwz       r3, 0x234(r30)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  bl        0x2BB2B4
	  b         .loc_0x58

	.loc_0x54:
	  lfs       f1, -0x5934(r2)

	.loc_0x58:
	  cmpwi     r31, 0x4
	  bne-      .loc_0xC4
	  lwz       r3, 0x1B4(r30)
	  lfs       f3, 0x1B0(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lwz       r3, 0x18(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lha       r0, 0x6(r3)
	  lfd       f2, -0x5858(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f2, f0, f2
	  b         .loc_0x9C

	.loc_0x98:
	  lfs       f2, -0x5934(r2)

	.loc_0x9C:
	  lfs       f0, -0x5934(r2)
	  lwz       r3, 0x234(r30)
	  fcmpu     cr0, f0, f2
	  beq-      .loc_0xB4
	  fdivs     f0, f3, f2
	  b         .loc_0xB8

	.loc_0xB4:
	  lfs       f0, -0x5908(r2)

	.loc_0xB8:
	  fmuls     f1, f1, f0
	  bl        0x2BB57C
	  b         .loc_0xCC

	.loc_0xC4:
	  lwz       r3, 0x234(r30)
	  bl        0x2BB570

	.loc_0xCC:
	  lwz       r3, 0x234(r30)
	  lfs       f1, -0x5934(r2)
	  bl        0x2BB6D4
	  b         .loc_0x120

	.loc_0xDC:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x120
	  lwz       r3, 0x234(r30)
	  lfs       f1, -0x5930(r2)
	  bl        0x2BB6BC
	  lwz       r3, 0x238(r30)
	  lfs       f1, -0x5930(r2)
	  bl        0x2BB6B0
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  bl        -0x112254

	.loc_0x120:
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
 * Address:	80178EDC
 * Size:	0001D4
 */
void Game::Onyon::setSpotEffect((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lhz       r6, 0x22E(r3)
	  cmplwi    r6, 0x4
	  bne-      .loc_0x5C
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x44
	  lwz       r3, 0x208(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x44:
	  lwz       r3, 0x208(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x5C:
	  cmplwi    r6, 0x3
	  bne-      .loc_0x130
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xDC
	  lis       r3, 0x804B
	  addi      r4, r1, 0x8
	  subi      r0, r3, 0x5814
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1FC(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x200(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1FC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1F8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x200(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x130:
	  bge-      .loc_0x1C0
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x1AC
	  lis       r4, 0x804B
	  lis       r3, 0x8051
	  addi      r5, r3, 0x41E4
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5814
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  addi      r0, r3, 0x2680
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  lfs       f0, 0x8(r5)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stw       r0, 0x18(r1)
	  sth       r6, 0x28(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x24(r1)
	  lwz       r3, 0x1EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x1AC:
	  lwz       r3, 0x1EC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C0:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801790B0
 * Size:	000134
 */
void Game::Onyon::setSpotEffectActive((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm.   r0,r4,0,24,31
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  beq-      .loc_0x40
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x40
	  li        r31, 0

	.loc_0x40:
	  lhz       r0, 0x22E(r30)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x84
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x70
	  lwz       r3, 0x20C(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x84

	.loc_0x70:
	  lwz       r3, 0x20C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  lhz       r6, 0x22E(r30)
	  cmplwi    r6, 0x3
	  bge-      .loc_0x11C
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x108
	  lis       r4, 0x804B
	  lis       r3, 0x8051
	  addi      r5, r3, 0x41E4
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5814
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  addi      r0, r3, 0x2680
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x8(r5)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stw       r0, 0x8(r1)
	  sth       r6, 0x18(r1)
	  lfs       f0, 0x19C(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r30)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r30)
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x1F0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x11C

	.loc_0x108:
	  lwz       r3, 0x1F0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x11C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801791E4
 * Size:	000168
 */
void Game::Onyon::efxSuikomi(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x2
	  bgt-      .loc_0x90
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  subi      r0, r4, 0x5808
	  lis       r4, 0x804E
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x6A78
	  lis       r3, 0x804B
	  addi      r5, r31, 0x138
	  stw       r0, 0x28(r1)
	  addi      r0, r4, 0x6A14
	  li        r7, 0x100
	  li        r6, 0
	  stw       r0, 0x28(r1)
	  addi      r0, r3, 0x266C
	  addi      r3, r1, 0x28
	  li        r4, 0
	  sth       r7, 0x2C(r1)
	  stw       r6, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stw       r0, 0x28(r1)
	  bl        0x236060
	  mr        r3, r31
	  li        r4, 0x3804
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x154

	.loc_0x90:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x120
	  lwz       r12, 0x0(r3)
	  li        r4, 0x381D
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x18(r1)
	  addi      r0, r3, 0x6A64
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x18(r1)
	  addi      r5, r4, 0x2658
	  subi      r0, r3, 0x5814
	  li        r3, 0x185
	  li        r7, 0x186
	  sth       r3, 0x1C(r1)
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x8
	  sth       r7, 0x1E(r1)
	  stw       r6, 0x20(r1)
	  stw       r6, 0x24(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x19C(r31)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x1A0(r31)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x1A4(r31)
	  stfs      f0, 0x14(r1)
	  bl        0x235D18
	  b         .loc_0x154

	.loc_0x120:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x154
	  lwz       r12, 0x0(r3)
	  li        r4, 0x381D
	  lwz       r12, 0x1C0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x214(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x154:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017934C
 * Size:	0001A0
 */
void Game::Onyon::efxPafuPafu(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  bl        -0xAFDC0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  lfd       f3, -0x5858(r2)
	  stw       r0, 0x40(r1)
	  lfs       f1, -0x5874(r2)
	  lfd       f2, 0x40(r1)
	  lfs       f0, -0x5850(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x18C
	  lis       r3, 0x8048
	  subi      r5, r3, 0x186C
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  bl        -0xAFE14
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  addi      r4, r1, 0x18
	  lfd       f3, -0x5858(r2)
	  stw       r0, 0x40(r1)
	  lfs       f1, -0x5874(r2)
	  lfd       f2, 0x40(r1)
	  lfs       f0, -0x58AC(r2)
	  fsubs     f2, f2, f3
	  lwz       r3, 0x174(r31)
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  bl        0x2C5BE4
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x18C
	  bl        0x2B0488
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r5, 0x5808
	  lis       r5, 0x804E
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A78
	  lis       r4, 0x804B
	  li        r7, 0x104
	  stw       r0, 0x8(r1)
	  addi      r5, r5, 0x6A14
	  li        r6, 0
	  addi      r0, r4, 0x2644
	  stw       r5, 0x8(r1)
	  li        r4, 0
	  stw       r3, 0x14(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        0x235E4C
	  lwz       r3, 0x17C(r31)
	  li        r4, 0x3831
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0x18C
	  lfs       f5, -0x5934(r2)
	  li        r0, 0
	  lfs       f1, -0x5908(r2)
	  addi      r3, r1, 0x24
	  stfs      f5, 0x28(r1)
	  lfs       f2, -0x58A0(r2)
	  stfs      f1, 0x24(r1)
	  lfs       f3, -0x5848(r2)
	  stfs      f5, 0x2C(r1)
	  lfs       f4, -0x589C(r2)
	  stfs      f5, 0x30(r1)
	  stfs      f5, 0x34(r1)
	  stb       r0, 0x38(r1)
	  stb       r0, 0x39(r1)
	  bl        0x1BB684
	  mr        r3, r31
	  addi      r4, r1, 0x24
	  bl        0x2F7F84

	.loc_0x18C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801794EC
 * Size:	0000B0
 */
void Game::Onyon::efxPafuKira(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  subi      r4, r2, 0x5844
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  bl        0x2C5ADC
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x9C
	  bl        0x2B0380
	  lis       r4, 0x804B
	  lfs       f0, 0xC(r3)
	  lfs       f1, 0x1C(r3)
	  subi      r0, r4, 0x5808
	  lfs       f2, 0x2C(r3)
	  lis       r3, 0x804E
	  addi      r5, r3, 0x6A78
	  lis       r4, 0x804B
	  stw       r0, 0x18(r1)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5814
	  li        r7, 0x103
	  li        r6, 0
	  stw       r5, 0x18(r1)
	  addi      r5, r4, 0x2630
	  addi      r3, r1, 0x18
	  sth       r7, 0x1C(r1)
	  addi      r4, r1, 0x8
	  stw       r6, 0x20(r1)
	  stw       r5, 0x18(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  bl        0x235A00

	.loc_0x9C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017959C
 * Size:	00002C
 */
void Game::Onyon::getStoreCount(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x6B70(r13)
	  lhz       r4, 0x22E(r3)
	  addi      r3, r5, 0xA8
	  bl        0x77FFC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801795C8
 * Size:	000244
 */
void Game::Onyon::enterPiki((Game::Piki*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lwz       r6, -0x6B70(r13)
	  lbz       r4, 0x2B8(r4)
	  mr        r31, r3
	  lbz       r5, 0x2B9(r30)
	  addi      r3, r6, 0xA8
	  bl        0x77E20
	  lwz       r7, 0x0(r3)
	  lis       r6, 0x804B
	  lis       r4, 0x804B
	  li        r5, 0x1
	  addi      r0, r7, 0x1
	  subi      r6, r6, 0x5D30
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1160
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3E544
	  lhz       r3, 0x22E(r31)
	  cmplwi    r3, 0x2
	  bgt-      .loc_0xC8
	  lhz       r0, 0x22C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  lwz       r3, 0x1B4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x9C
	  lha       r0, 0x20(r3)
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r0, -0x1

	.loc_0xA0:
	  cmpwi     r0, 0x1
	  beq-      .loc_0x224
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0xB8
	  addi      r5, r31, 0x178

	.loc_0xB8:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x1
	  bl        0x2AF600
	  b         .loc_0x224

	.loc_0xC8:
	  cmplwi    r3, 0x4
	  bne-      .loc_0x184
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x77F0C
	  lwz       r5, -0x6B70(r13)
	  mr        r30, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x77EF8
	  add.      r0, r30, r3
	  ble-      .loc_0x144
	  lfs       f31, -0x5930(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0xAD4
	  stfs      f31, 0x0(r3)
	  li        r4, 0
	  lwz       r3, 0x218(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x224

	.loc_0x144:
	  lwz       r3, 0x218(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, -0x5934(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0xA64
	  stfs      f31, 0x0(r3)
	  b         .loc_0x224

	.loc_0x184:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r31)
	  lhz       r4, 0x22E(r31)
	  cmplwi    r4, 0x3
	  bne-      .loc_0x1AC
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2AF51C
	  b         .loc_0x224

	.loc_0x1AC:
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x77E34
	  cmpwi     r3, 0
	  ble-      .loc_0x208
	  lwz       r3, 0x1B4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1D4
	  lha       r0, 0x20(r3)
	  b         .loc_0x1D8

	.loc_0x1D4:
	  li        r0, -0x1

	.loc_0x1D8:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x1E8
	  cmpwi     r0, 0x3
	  bne-      .loc_0x224

	.loc_0x1E8:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x1F8
	  addi      r5, r31, 0x178

	.loc_0x1F8:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x2
	  bl        0x2AF4C0
	  b         .loc_0x224

	.loc_0x208:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x218
	  addi      r5, r31, 0x178

	.loc_0x218:
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  bl        0x2AF4A0

	.loc_0x224:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017980C
 * Size:	000048
 */
void Game::Onyon::exitPikis((int, int))
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  lfs       f0, -0x5934(r2)
	  stb       r0, 0x1E0(r3)
	  cmpwi     r5, 0x3
	  lwz       r0, 0x1D8(r3)
	  add       r0, r0, r4
	  stw       r0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bne-      .loc_0x30
	  lwz       r0, 0x1E8(r3)
	  add       r0, r0, r4
	  stw       r0, 0x1E8(r3)

	.loc_0x30:
	  cmpwi     r5, 0x4
	  bnelr-
	  lwz       r0, 0x1E4(r3)
	  add       r0, r0, r4
	  stw       r0, 0x1E4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179854
 * Size:	000454
 */
void Game::Onyon::exitPiki(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stmw      r27, 0x5C(r1)
	  lwz       r4, -0x6C18(r13)
	  lis       r5, 0x8048
	  mr        r28, r3
	  lbz       r0, 0x3C(r4)
	  subi      r27, r5, 0x19E0
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x3C
	  li        r3, 0
	  b         .loc_0x438

	.loc_0x3C:
	  lhz       r0, 0x22E(r28)
	  li        r30, -0x1
	  cmplwi    r0, 0x4
	  mr        r31, r0
	  bne-      .loc_0x8C
	  lwz       r0, 0x1E4(r28)
	  cmpwi     r0, 0
	  ble-      .loc_0x64
	  li        r31, 0x4
	  b         .loc_0x8C

	.loc_0x64:
	  lwz       r0, 0x1E8(r28)
	  cmpwi     r0, 0
	  ble-      .loc_0x78
	  li        r31, 0x3
	  b         .loc_0x8C

	.loc_0x78:
	  addi      r3, r27, 0x18
	  addi      r5, r27, 0x180
	  li        r4, 0x8F8
	  crclr     6, 0x6
	  bl        -0x14F29C

	.loc_0x8C:
	  li        r29, 0x2

	.loc_0x90:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r31
	  mr        r5, r29
	  addi      r3, r3, 0xA8
	  bl        0x77B28
	  lwz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0xB8
	  mr        r30, r29
	  b         .loc_0xC0

	.loc_0xB8:
	  subic.    r29, r29, 0x1
	  bge+      .loc_0x90

	.loc_0xC0:
	  cmpwi     r30, -0x1
	  bne-      .loc_0xD0
	  li        r3, 0
	  b         .loc_0x438

	.loc_0xD0:
	  lwz       r3, -0x6D0C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  bne-      .loc_0x108
	  li        r0, 0
	  li        r3, 0
	  stw       r0, 0x1D8(r28)
	  stw       r0, 0x1E4(r28)
	  stw       r0, 0x1E8(r28)
	  stb       r0, 0x1E0(r28)
	  b         .loc_0x438

	.loc_0x108:
	  cmpwi     r31, 0x4
	  bne-      .loc_0x120
	  lwz       r3, 0x1E4(r28)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1E4(r28)
	  b         .loc_0x134

	.loc_0x120:
	  cmpwi     r31, 0x3
	  bne-      .loc_0x134
	  lwz       r3, 0x1E8(r28)
	  subi      r0, r3, 0x1
	  stw       r0, 0x1E8(r28)

	.loc_0x134:
	  cmplwi    r29, 0
	  bne-      .loc_0x150
	  addi      r3, r27, 0x18
	  addi      r5, r27, 0x60
	  li        r4, 0x922
	  crclr     6, 0x6
	  bl        -0x14F360

	.loc_0x150:
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r31
	  mr        r5, r30
	  addi      r3, r3, 0xA8
	  bl        0x77A68
	  lwz       r5, 0x0(r3)
	  mr        r4, r31
	  subi      r0, r5, 0x1
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x77BE0
	  mr        r3, r29
	  li        r4, 0
	  bl        -0x3EA14
	  mr        r3, r29
	  mr        r4, r31
	  bl        -0x2F428
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x2F284
	  lhz       r0, 0x22E(r28)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x408
	  mr        r4, r28
	  addi      r3, r1, 0x1C
	  bl        0x6A0
	  lfs       f2, 0x1C(r1)
	  mr        r4, r28
	  lfs       f1, 0x20(r1)
	  addi      r3, r1, 0x10
	  lfs       f0, 0x24(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x44(r1)
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x40(r1)
	  fsubs     f4, f2, f0
	  lfs       f0, 0x10(r1)
	  lfs       f3, 0x48(r1)
	  fsubs     f2, f1, f0
	  lfs       f0, 0x18(r1)
	  fmuls     f5, f4, f4
	  fsubs     f3, f3, f0
	  lfs       f1, -0x5934(r2)
	  fmuls     f0, f2, f2
	  stfs      f2, 0x34(r1)
	  fmuls     f6, f3, f3
	  fadds     f0, f0, f5
	  stfs      f4, 0x38(r1)
	  stfs      f3, 0x3C(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x258
	  fmadds    f0, f2, f2, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x25C
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x25C

	.loc_0x258:
	  fmr       f3, f1

	.loc_0x25C:
	  lfs       f0, -0x5934(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x294
	  lfs       f0, -0x5908(r2)
	  lfs       f2, 0x34(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x3C(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)

	.loc_0x294:
	  bl        -0xB0548
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  mr        r3, r29
	  lfd       f2, -0x5858(r2)
	  addi      r4, r1, 0x40
	  stw       r0, 0x50(r1)
	  li        r5, 0
	  lfs       f0, -0x5874(r2)
	  lfd       f1, 0x50(r1)
	  lfs       f4, -0x5930(r2)
	  fsubs     f5, f1, f2
	  lfs       f3, -0x5910(r2)
	  lfs       f2, 0x3C(r1)
	  lfs       f1, 0x38(r1)
	  fdivs     f5, f5, f0
	  lfs       f0, 0x34(r1)
	  fmadds    f3, f4, f5, f3
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x3C(r1)
	  stfs      f0, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  bl        -0x3E9A4
	  mr        r3, r29
	  addi      r4, r1, 0x34
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  mr        r4, r28
	  li        r5, 0x281E
	  li        r6, 0x1
	  bl        -0x31224
	  lfs       f0, 0x228(r28)
	  stfs      f0, 0x1FC(r29)
	  lwz       r3, 0x294(r29)
	  bl        0x1D518
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  stw       r3, 0x2C4(r29)
	  lis       r4, 0x804B
	  addi      r5, r4, 0x530
	  li        r0, 0
	  lis       r4, 0x804B
	  stw       r5, 0x28(r1)
	  addi      r5, r4, 0x524
	  lis       r4, 0x804B
	  stw       r5, 0x28(r1)
	  addi      r6, r4, 0xD44
	  addi      r5, r1, 0x28
	  li        r4, 0
	  stw       r3, 0x2C(r1)
	  stw       r6, 0x28(r1)
	  stb       r0, 0x30(r1)
	  stb       r0, 0x31(r1)
	  lwz       r3, 0x294(r29)
	  bl        0x1D3BC
	  b         .loc_0x39C

	.loc_0x38C:
	  lwz       r3, 0x294(r29)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x1D3A8

	.loc_0x39C:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x779B4
	  lwz       r5, -0x6B70(r13)
	  mr        r30, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x779A0
	  add.      r0, r30, r3
	  bne-      .loc_0x434
	  lwz       r3, 0x218(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, -0x5934(r2)
	  mr        r3, r28
	  li        r4, 0x1
	  bl        0x554
	  stfs      f31, 0x0(r3)
	  b         .loc_0x434

	.loc_0x408:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r4, r4, 0x530
	  stw       r28, 0xC(r1)
	  addi      r0, r3, 0x524
	  addi      r5, r1, 0x8
	  stw       r4, 0x8(r1)
	  li        r4, 0x3
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x294(r29)
	  bl        0x1D310

	.loc_0x434:
	  mr        r3, r29

	.loc_0x438:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  lmw       r27, 0x5C(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179CA8
 * Size:	0000B8
 */
void insideAccessArea__Q24Game5OnyonFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lhz       r0, 0x22E(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x6C
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x198(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r31)
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x0(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x8(r1)
	  lfs       f0, -0x583C(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xA0
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0x6C:
	  lfs       f1, 0x8(r31)
	  lfs       f0, 0x1A4(r3)
	  lfs       f2, 0x0(r31)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x19C(r3)
	  lfs       f0, -0x583C(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xA0
	  li        r3, 0x1
	  b         .loc_0xA4

	.loc_0xA0:
	  li        r3, 0

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void insideBootArea__Q24Game5OnyonFR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Game::Onyon::getOnyonState(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80179D60
 * Size:	00011C
 */
void generatorBirth__Q34Game9ItemOnyon3MgrFR10Vector3<float> R10Vector3<float>
PQ24Game11GenItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r29, r6
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  li        r30, 0
	  lwz       r0, 0x4(r6)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x6C
	  bge-      .loc_0x44
	  cmpwi     r0, 0
	  beq-      .loc_0x54
	  bge-      .loc_0x60
	  b         .loc_0x84

	.loc_0x44:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x80
	  bge-      .loc_0x84
	  b         .loc_0x78

	.loc_0x54:
	  li        r31, 0
	  li        r30, 0
	  b         .loc_0x84

	.loc_0x60:
	  li        r31, 0
	  li        r30, 0x1
	  b         .loc_0x84

	.loc_0x6C:
	  li        r31, 0
	  li        r30, 0x2
	  b         .loc_0x84

	.loc_0x78:
	  li        r31, 0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, 0x2

	.loc_0x84:
	  cmpwi     r31, 0
	  bne-      .loc_0xDC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x6D22C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB4
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xB4:
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x6D1F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xDC:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1094
	  lfs       f0, 0x4(r28)
	  mr        r30, r3
	  mr        r4, r27
	  li        r5, 0
	  stfs      f0, 0x228(r3)
	  bl        -0x3ECB8
	  mr        r3, r30

	.loc_0x108:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179E7C
 * Size:	000004
 */
void Game::ItemOnyon::Mgr::setupSoundViewerAndBas(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179E80
 * Size:	0000C4
 */
void Game::Onyon::getInEnd_UFO(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r0, 0x248(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  lfs       f1, -0x5934(r2)
	  mr        r3, r0
	  lfs       f0, -0x5838(r2)
	  stfs      f1, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x2AF9E8
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x8F2EC
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f2, 0x0(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x8(r31)
	  b         .loc_0xB0

	.loc_0x78:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0x9F1
	  subi      r5, r5, 0x1844
	  crclr     6, 0x6
	  bl        -0x14F8D0
	  lis       r3, 0x8051
	  lfsu      f0, 0x41E4(r3)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r31)

	.loc_0xB0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179F44
 * Size:	000168
 */
void Game::Onyon::getInStart_UFO(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r3, 0x248(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lfs       f1, -0x5934(r2)
	  lfs       f0, -0x5838(r2)
	  stfs      f1, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x2AF910
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x8F3C4
	  lfs       f31, 0x8(r1)
	  lfs       f30, 0x10(r1)
	  lfs       f0, 0xC(r1)
	  stfs      f31, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f30, 0x1C(r1)
	  b         .loc_0xA0

	.loc_0x78:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0x9F1
	  subi      r5, r5, 0x1844
	  crclr     6, 0x6
	  bl        -0x14F994
	  lis       r3, 0x8051
	  lfsu      f31, 0x41E4(r3)
	  lfs       f30, 0x8(r3)

	.loc_0xA0:
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f7, 0x20(r1)
	  lfs       f4, 0x28(r1)
	  fsubs     f2, f31, f7
	  lfs       f5, -0x5934(r2)
	  fsubs     f6, f30, f4
	  lfs       f3, 0x24(r1)
	  fmadds    f0, f2, f2, f5
	  fmuls     f1, f6, f6
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f5
	  ble-      .loc_0xF4
	  ble-      .loc_0xF8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xF8

	.loc_0xF4:
	  fmr       f1, f5

	.loc_0xF8:
	  lfs       f0, -0x5934(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x118
	  lfs       f0, -0x5908(r2)
	  fdivs     f0, f0, f1
	  fmuls     f2, f2, f0
	  fmuls     f5, f5, f0
	  fmuls     f6, f6, f0

	.loc_0x118:
	  lfs       f0, -0x5834(r2)
	  fmuls     f2, f2, f0
	  fmuls     f1, f5, f0
	  fmuls     f0, f6, f0
	  fadds     f2, f7, f2
	  fadds     f1, f3, f1
	  fadds     f0, f4, f0
	  stfs      f2, 0x0(r30)
	  stfs      f1, 0x4(r30)
	  stfs      f0, 0x8(r30)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A0AC
 * Size:	0000C4
 */
void Game::Onyon::getOutStart_UFO(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r0, 0x24C(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x78
	  lfs       f1, -0x5934(r2)
	  mr        r3, r0
	  lfs       f0, -0x5838(r2)
	  stfs      f1, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        0x2AF7BC
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x8F518
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f2, 0x0(r31)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x8(r31)
	  b         .loc_0xB0

	.loc_0x78:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0xA09
	  subi      r5, r5, 0x1838
	  crclr     6, 0x6
	  bl        -0x14FAFC
	  lis       r3, 0x8051
	  lfsu      f0, 0x41E4(r3)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x8(r31)

	.loc_0xB0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void Game::Onyon::init_pmotions(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017A170
 * Size:	000034
 */
void SysShape::Animator::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r4, 0x804F
	  subi      r5, r5, 0x4678
	  li        r0, 0
	  stw       r5, 0x0(r3)
	  subi      r4, r4, 0x4200
	  stw       r4, 0x0(r3)
	  stb       r0, 0x18(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x4(r3)
	  stb       r0, 0x18(r3)
	  stw       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A1A4
 * Size:	00007C
 */
void Game::Onyon::getPMotionSpeed((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x250(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0xA2B
	  subi      r5, r5, 0x1980
	  crclr     6, 0x6
	  bl        -0x14FBB8

	.loc_0x58:
	  lwz       r3, 0x258(r30)
	  rlwinm    r0,r31,2,0,29
	  add       r3, r3, r0
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
 * Address:	8017A220
 * Size:	00007C
 */
void Game::Onyon::getPAnimator((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x250(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0xA31
	  subi      r5, r5, 0x1980
	  crclr     6, 0x6
	  bl        -0x14FC34

	.loc_0x58:
	  mulli     r0, r31, 0x1C
	  lwz       r3, 0x254(r30)
	  add       r3, r3, r0
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
 * Address:	........
 * Size:	000094
 */
void Game::Onyon::start_pmotion((int, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8017A29C
 * Size:	000198
 */
void Game::Onyon::update_pmotions(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r24, 0x20(r1)
	  mr        r26, r3
	  lwz       r3, -0x6514(r13)
	  lhz       r0, 0x22E(r26)
	  lis       r4, 0x8048
	  lfs       f31, 0x54(r3)
	  subi      r31, r4, 0x19E0
	  cmplwi    r0, 0x4
	  bne-      .loc_0x17C
	  li        r30, 0
	  addi      r28, r1, 0x8
	  mr        r29, r30
	  li        r27, 0
	  b         .loc_0x170

	.loc_0x4C:
	  lwz       r5, 0x1CC(r31)
	  cmpwi     r27, 0
	  lwz       r4, 0x1D0(r31)
	  li        r3, 0
	  lwz       r0, 0x1D4(r31)
	  stw       r5, 0x8(r1)
	  stw       r4, 0xC(r1)
	  stw       r0, 0x10(r1)
	  blt-      .loc_0x80
	  lwz       r0, 0x250(r26)
	  cmpw      r27, r0
	  bge-      .loc_0x80
	  li        r3, 0x1

	.loc_0x80:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA31
	  crclr     6, 0x6
	  bl        -0x14FCF4

	.loc_0x9C:
	  lwz       r0, 0x254(r26)
	  cmpwi     r27, 0
	  li        r3, 0
	  add       r25, r0, r30
	  blt-      .loc_0xC0
	  lwz       r0, 0x250(r26)
	  cmpw      r27, r0
	  bge-      .loc_0xC0
	  li        r3, 0x1

	.loc_0xC0:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xDC
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x14FD34

	.loc_0xDC:
	  mr        r3, r25
	  lwz       r4, 0x258(r26)
	  lwz       r12, 0x0(r25)
	  lfsx      f0, r4, r29
	  lwz       r12, 0xC(r12)
	  fmuls     f1, f31, f0
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r26)
	  lwz       r4, 0x0(r28)
	  bl        0x2C4C44
	  cmplwi    r3, 0
	  beq-      .loc_0x148
	  lhz       r24, 0x38(r3)
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r25, 0x174(r26)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r25)
	  rlwinm    r0,r24,2,14,29
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwzx      r4, r4, r0
	  stw       r3, 0x54(r4)
	  b         .loc_0x160

	.loc_0x148:
	  lwz       r6, 0x0(r28)
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x1D8
	  li        r4, 0xA53
	  crclr     6, 0x6
	  bl        -0x14FDB8

	.loc_0x160:
	  addi      r30, r30, 0x1C
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x1

	.loc_0x170:
	  lwz       r0, 0x250(r26)
	  cmpw      r27, r0
	  blt+      .loc_0x4C

	.loc_0x17C:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A434
 * Size:	0001E8
 */
void Game::ItemOnyon::Mgr::initDependency(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  addi      r3, r3, 0x4C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x548
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB8

	.loc_0x64:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x64
	  b         .loc_0x1B8

	.loc_0xD8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1BC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x128:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x19C

	.loc_0x148:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x19C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x148

	.loc_0x1B8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD8
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A61C
 * Size:	000004
 */
void Game::BaseItem::initDependency(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A620
 * Size:	00004C
 */
void Game::ItemOnyon::Mgr::generatorGetShape((Game::GenItemParm*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r4)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x30
	  bge-      .loc_0x1C
	  cmpwi     r0, 0
	  bge-      .loc_0x28
	  b         .loc_0x3C

	.loc_0x1C:
	  cmpwi     r0, 0x5
	  bge-      .loc_0x3C
	  b         .loc_0x38

	.loc_0x28:
	  li        r4, 0
	  b         .loc_0x3C

	.loc_0x30:
	  li        r4, 0x1
	  b         .loc_0x3C

	.loc_0x38:
	  li        r4, 0x2

	.loc_0x3C:
	  lwz       r3, 0x1C(r3)
	  rlwinm    r0,r4,2,0,29
	  lwzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A66C
 * Size:	000054
 */
void Game::ItemOnyon::Mgr::generatorNewItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xC
	  stw       r0, 0x14(r1)
	  bl        -0x1567D8
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  addi      r0, r4, 0x2624
	  li        r4, 0
	  stw       r0, 0x0(r3)
	  addi      r5, r5, 0x2618
	  li        r0, 0x1
	  stw       r5, 0x0(r3)
	  stw       r4, 0x4(r3)
	  stb       r0, 0x8(r3)

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A6C0
 * Size:	00008C
 */
void Game::ItemOnyon::Mgr::generatorWrite((Stream&, Game::GenItemParm*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r3, r30
	  lwz       r4, 0x414(r4)
	  bl        0x299D50
	  lwz       r4, 0x4(r31)
	  mr        r3, r30
	  bl        0x29B0D0
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x17F8
	  crclr     6, 0x6
	  bl        0x299AD8
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x299D24
	  lbz       r4, 0x8(r31)
	  mr        r3, r30
	  bl        0x29AF54
	  lis       r4, 0x8048
	  mr        r3, r30
	  subi      r4, r4, 0x17E4
	  crclr     6, 0x6
	  bl        0x299AAC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A74C
 * Size:	000078
 */
void Game::ItemOnyon::Mgr::generatorRead((Stream&, Game::GenItemParm*,
                                          unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  mr        r3, r29
	  bl        0x29A31C
	  lis       r4, 0x3030
	  stw       r3, 0x4(r30)
	  addi      r0, r4, 0x3031
	  cmplw     r31, r0
	  blt-      .loc_0x5C
	  mr        r3, r29
	  bl        0x299D0C
	  rlwinm    r0,r3,0,24,31
	  subfic    r0, r0, 0x1
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,5,31
	  stb       r0, 0x8(r30)

	.loc_0x5C:
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
 * Address:	8017A7C4
 * Size:	000188
 */
void Game::ItemOnyon::Mgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  beq-      .loc_0x2C
	  addi      r0, r31, 0x118
	  stw       r0, 0x4(r31)

	.loc_0x2C:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x1
	  bl        0x52574
	  addi      r29, r31, 0x30
	  mr        r3, r29
	  bl        0x296B88
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5324
	  addi      r30, r31, 0x4C
	  lis       r3, 0x804B
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0x25EC
	  stw       r0, 0x0(r29)
	  lis       r3, 0x804B
	  addi      r4, r3, 0x242C
	  stb       r5, 0x18(r29)
	  addi      r0, r4, 0x74
	  mr        r3, r30
	  stw       r4, 0x0(r31)
	  stw       r0, 0x30(r31)
	  bl        0x296B48
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x25EC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r30)
	  li        r0, 0
	  addi      r6, r4, 0x2570
	  addi      r4, r3, 0x24F0
	  stb       r0, 0x18(r30)
	  subi      r0, r5, 0x4A10
	  addi      r29, r30, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r30)
	  addi      r0, r4, 0x2C
	  mr        r3, r29
	  stw       r6, 0x0(r30)
	  stw       r5, 0x1C(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x1C(r30)
	  bl        0x296AE8
	  lis       r3, 0x804B
	  lis       r4, 0x8043
	  addi      r0, r3, 0x24E0
	  li        r5, 0
	  stw       r0, 0x0(r29)
	  addi      r3, r31, 0xB4
	  addi      r4, r4, 0x4240
	  li        r6, 0x14
	  li        r7, 0x3
	  bl        -0xB9094
	  lis       r4, 0x8043
	  addi      r3, r31, 0xF0
	  addi      r4, r4, 0x4240
	  li        r5, 0
	  li        r6, 0x14
	  li        r7, 0x2
	  bl        -0xB90B0
	  li        r4, 0
	  subi      r0, r2, 0x5830
	  stw       r4, 0xA8(r31)
	  li        r3, 0xC
	  stw       r4, 0xA4(r31)
	  stw       r4, 0xA0(r31)
	  stw       r4, 0xB0(r31)
	  stw       r4, 0xAC(r31)
	  stw       r0, 0x8(r31)
	  bl        -0x156968
	  stw       r3, 0x1C(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x88(r31)
	  stw       r0, 0x8C(r31)
	  stw       r0, 0x90(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017A94C
 * Size:	0000C8
 */
void NodeObjectMgr<Game::Onyon>::~NodeObjectMgr()
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x20
	  addi      r3, r3, 0x24F0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  addi      r0, r4, 0x24E0
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x296BEC

	.loc_0x54:
	  cmplwi    r30, 0
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2570
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x25EC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x296BA4

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x156940

	.loc_0xAC:
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
 * Address:	8017AA14
 * Size:	000060
 */
void TObjectNode<Game::Onyon>::~TObjectNode()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x24E0
	  stw       r0, 0x0(r30)
	  bl        0x296B44
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1569A0

	.loc_0x44:
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
 * Address:	8017AA74
 * Size:	000088
 */
void ObjectMgr<Game::Onyon>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x2570
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x25EC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x296ABC

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x156A28

	.loc_0x6C:
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
 * Address:	8017AAFC
 * Size:	000070
 */
void Container<Game::Onyon>::~Container()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0x25EC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x296A4C

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x156A98

	.loc_0x54:
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
 * Address:	8017AB6C
 * Size:	00011C
 */
void Game::ItemOnyon::Mgr::__dt(void)
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
	  beq-      .loc_0x100
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x242C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x24F0
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x24E0
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x2969B4

	.loc_0x6C:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x2570
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x25EC
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x296964

	.loc_0xBC:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0xF0
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x25EC
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xF0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x296930

	.loc_0xF0:
	  extsh.    r0, r31
	  ble-      .loc_0x100
	  mr        r3, r30
	  bl        -0x156BB4

	.loc_0x100:
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
 * Address:	8017AC88
 * Size:	000254
 */
void Game::Onyon::on_movie_end((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lhz       r4, 0x22E(r3)
	  cmplwi    r4, 0x4
	  bne-      .loc_0x3C
	  lbz       r0, 0x240(r31)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x74
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x1D4(r31)
	  b         .loc_0x74

	.loc_0x3C:
	  cmplwi    r4, 0x2
	  li        r5, 0
	  bgt-      .loc_0x5C
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x5C
	  li        r5, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x6C
	  lwz       r3, -0x6B70(r13)
	  bl        0x6C3E8

	.loc_0x6C:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r31)

	.loc_0x74:
	  lhz       r4, 0x22E(r31)
	  cmplwi    r4, 0x2
	  bgt-      .loc_0xA0
	  lwz       r3, 0x1B4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lha       r0, 0x20(r3)
	  b         .loc_0x98

	.loc_0x94:
	  li        r0, -0x1

	.loc_0x98:
	  cmpwi     r0, 0x1
	  beq-      .loc_0x23C

	.loc_0xA0:
	  cmplwi    r4, 0x4
	  bne-      .loc_0x19C
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x76874
	  lwz       r5, -0x6B70(r13)
	  mr        r30, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x76860
	  add.      r0, r30, r3
	  ble-      .loc_0x13C
	  lwz       r0, 0x250(r31)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0xFC
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0xA2B
	  subi      r5, r5, 0x1980
	  crclr     6, 0x6
	  bl        -0x150740

	.loc_0xFC:
	  lfs       f0, -0x5930(r2)
	  li        r4, 0
	  lwz       r3, 0x258(r31)
	  stfs      f0, 0x4(r3)
	  lwz       r3, 0x218(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x23C

	.loc_0x13C:
	  lwz       r3, 0x218(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x250(r31)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x18C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x19C8
	  li        r4, 0xA2B
	  subi      r5, r5, 0x1980
	  crclr     6, 0x6
	  bl        -0x1507D0

	.loc_0x18C:
	  lfs       f0, -0x5934(r2)
	  lwz       r3, 0x258(r31)
	  stfs      f0, 0x4(r3)
	  b         .loc_0x23C

	.loc_0x19C:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r31)
	  lhz       r4, 0x22E(r31)
	  cmplwi    r4, 0x3
	  bne-      .loc_0x1C4
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2ADE44
	  b         .loc_0x23C

	.loc_0x1C4:
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x7675C
	  cmpwi     r3, 0
	  ble-      .loc_0x220
	  lwz       r3, 0x1B4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1EC
	  lha       r0, 0x20(r3)
	  b         .loc_0x1F0

	.loc_0x1EC:
	  li        r0, -0x1

	.loc_0x1F0:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x200
	  cmpwi     r0, 0x3
	  bne-      .loc_0x23C

	.loc_0x200:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x210
	  addi      r5, r31, 0x178

	.loc_0x210:
	  addi      r3, r31, 0x1A8
	  li        r4, 0x2
	  bl        0x2ADDE8
	  b         .loc_0x23C

	.loc_0x220:
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x230
	  addi      r5, r31, 0x178

	.loc_0x230:
	  addi      r3, r31, 0x1A8
	  li        r4, 0
	  bl        0x2ADDC8

	.loc_0x23C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017AEDC
 * Size:	000BC0
 */
void Game::ItemOnyon::Mgr::birth((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r30, r3
	  mr        r28, r4
	  mr        r26, r5
	  subi      r31, r6, 0x19E0
	  li        r25, 0
	  li        r3, 0x1C
	  bl        -0x157064
	  mr.       r29, r3
	  beq-      .loc_0x48
	  bl        0x29647C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x24E0
	  stw       r0, 0x0(r29)

	.loc_0x48:
	  cmpwi     r28, 0x1
	  beq-      .loc_0x410
	  bge-      .loc_0x60
	  cmpwi     r28, 0
	  bge-      .loc_0x6C
	  b         .loc_0xB84

	.loc_0x60:
	  cmpwi     r28, 0x3
	  bge-      .loc_0xB84
	  b         .loc_0x724

	.loc_0x6C:
	  li        r3, 0x260
	  bl        -0x1570A8
	  mr.       r27, r3
	  beq-      .loc_0xF8
	  li        r4, 0x402
	  bl        0x5108C
	  lis       r4, 0x804B
	  li        r3, 0x8
	  addi      r4, r4, 0x26B8
	  stw       r4, 0x0(r27)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r27)
	  bl        -0x1570D4
	  mr.       r0, r3
	  beq-      .loc_0xB0
	  bl        -0x46F28
	  mr        r0, r3

	.loc_0xB0:
	  stw       r0, 0x114(r27)
	  li        r0, 0
	  lfs       f0, -0x5934(r2)
	  li        r3, 0xC
	  stfs      f0, 0x118(r27)
	  stw       r0, 0x23C(r27)
	  stfs      f0, 0x228(r27)
	  bl        -0x157104
	  mr.       r25, r3
	  beq-      .loc_0xE8
	  bl        0x2B93A0
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r25)

	.loc_0xE8:
	  stw       r25, 0x234(r27)
	  li        r0, 0
	  stw       r0, 0x238(r27)
	  stw       r0, 0x1F4(r27)

	.loc_0xF8:
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x40014
	  rlwinm    r25,r28,2,0,29
	  addi      r3, r27, 0x1A8
	  add       r5, r30, r25
	  li        r4, 0
	  lwz       r0, 0x88(r5)
	  li        r5, 0
	  stw       r0, 0x1B8(r27)
	  bl        0x2ADC8C
	  lfs       f0, -0x5930(r2)
	  li        r3, 0x14
	  stfs      f0, 0x1D4(r27)
	  bl        -0x157168
	  mr.       r0, r3
	  beq-      .loc_0x154
	  lwz       r4, 0x1C(r30)
	  li        r5, 0
	  li        r6, 0x2
	  lwzx      r4, r4, r25
	  bl        0x2C31B0
	  mr        r0, r3

	.loc_0x154:
	  stw       r0, 0x174(r27)
	  mr        r3, r27
	  mr        r4, r26
	  bl        -0x5A84
	  add       r5, r30, r25
	  lwz       r3, 0x114(r27)
	  lwz       r4, 0x174(r27)
	  li        r6, 0
	  lwz       r5, 0x94(r5)
	  bl        -0x46FE8
	  lis       r4, 0x6C65
	  lwz       r3, 0x114(r27)
	  addi      r4, r4, 0x6731
	  bl        -0x45220
	  cmplwi    r3, 0
	  beq-      .loc_0x19C
	  li        r0, 0x1
	  stb       r0, 0x58(r3)

	.loc_0x19C:
	  lis       r4, 0x6C65
	  lwz       r3, 0x114(r27)
	  addi      r4, r4, 0x6732
	  bl        -0x45240
	  cmplwi    r3, 0
	  beq-      .loc_0x1BC
	  li        r0, 0x1
	  stb       r0, 0x58(r3)

	.loc_0x1BC:
	  lis       r4, 0x6C65
	  lwz       r3, 0x114(r27)
	  addi      r4, r4, 0x6733
	  bl        -0x45260
	  cmplwi    r3, 0
	  beq-      .loc_0x1DC
	  li        r0, 0x1
	  stb       r0, 0x58(r3)

	.loc_0x1DC:
	  cmplwi    r3, 0
	  bne-      .loc_0x1F8
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0xDC
	  li        r4, 0x695
	  crclr     6, 0x6
	  bl        -0x150A90

	.loc_0x1F8:
	  lis       r4, 0x666F
	  lwz       r3, 0x114(r27)
	  addi      r4, r4, 0x7431
	  bl        -0x4529C
	  cmplwi    r3, 0
	  bne-      .loc_0x224
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0xE8
	  li        r4, 0x69A
	  crclr     6, 0x6
	  bl        -0x150ABC

	.loc_0x224:
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x314
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x76498
	  lwz       r5, -0x6B70(r13)
	  mr        r28, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x76484
	  add.      r0, r28, r3
	  ble-      .loc_0x2BC
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x27C
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x150B14

	.loc_0x27C:
	  lfs       f0, -0x5930(r2)
	  li        r4, 0
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x4(r3)
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3B4

	.loc_0x2BC:
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x304
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x150B9C

	.loc_0x304:
	  lfs       f0, -0x5934(r2)
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x4(r3)
	  b         .loc_0x3B4

	.loc_0x314:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r27)
	  lhz       r4, 0x22E(r27)
	  cmplwi    r4, 0x3
	  bne-      .loc_0x33C
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2ADA78
	  b         .loc_0x3B4

	.loc_0x33C:
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x76390
	  cmpwi     r3, 0
	  ble-      .loc_0x398
	  lwz       r3, 0x1B4(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x364
	  lha       r0, 0x20(r3)
	  b         .loc_0x368

	.loc_0x364:
	  li        r0, -0x1

	.loc_0x368:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x378
	  cmpwi     r0, 0x3
	  bne-      .loc_0x3B4

	.loc_0x378:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x388
	  addi      r5, r27, 0x178

	.loc_0x388:
	  addi      r3, r27, 0x1A8
	  li        r4, 0x2
	  bl        0x2ADA1C
	  b         .loc_0x3B4

	.loc_0x398:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x3A8
	  addi      r5, r27, 0x178

	.loc_0x3A8:
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  bl        0x2AD9FC

	.loc_0x3B4:
	  rlwinm    r0,r26,2,0,29
	  mr        r25, r27
	  add       r3, r30, r0
	  mr        r4, r26
	  stw       r27, 0xA0(r3)
	  lwz       r3, -0x6B70(r13)
	  bl        0x6BE30
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xB84
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r26
	  bl        0x6BE14
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB84
	  addi      r3, r27, 0x1A8
	  li        r4, 0x4
	  li        r5, 0
	  bl        0x2AD9AC
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x1D4(r27)
	  b         .loc_0xB84

	.loc_0x410:
	  li        r3, 0x260
	  bl        -0x15744C
	  mr.       r27, r3
	  beq-      .loc_0x49C
	  li        r4, 0x402
	  bl        0x50CE8
	  lis       r4, 0x804B
	  li        r3, 0x8
	  addi      r4, r4, 0x26B8
	  stw       r4, 0x0(r27)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r27)
	  bl        -0x157478
	  mr.       r0, r3
	  beq-      .loc_0x454
	  bl        -0x472CC
	  mr        r0, r3

	.loc_0x454:
	  stw       r0, 0x114(r27)
	  li        r0, 0
	  lfs       f0, -0x5934(r2)
	  li        r3, 0xC
	  stfs      f0, 0x118(r27)
	  stw       r0, 0x23C(r27)
	  stfs      f0, 0x228(r27)
	  bl        -0x1574A8
	  mr.       r26, r3
	  beq-      .loc_0x48C
	  bl        0x2B8FFC
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r26)

	.loc_0x48C:
	  stw       r26, 0x234(r27)
	  li        r0, 0
	  stw       r0, 0x238(r27)
	  stw       r0, 0x1F4(r27)

	.loc_0x49C:
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4BC
	  mr        r4, r27
	  bl        0xC6798
	  lwz       r3, -0x6980(r13)
	  mr        r4, r27
	  bl        0xC6918

	.loc_0x4BC:
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x403D8
	  rlwinm    r25,r28,2,0,29
	  addi      r3, r27, 0x1A8
	  add       r5, r30, r25
	  li        r4, 0
	  lwz       r0, 0x88(r5)
	  li        r5, 0
	  stw       r0, 0x1B8(r27)
	  bl        0x2AD8C8
	  lfs       f0, -0x5930(r2)
	  li        r3, 0x14
	  stfs      f0, 0x1D4(r27)
	  bl        -0x15752C
	  mr.       r0, r3
	  beq-      .loc_0x518
	  lwz       r4, 0x1C(r30)
	  li        r5, 0
	  li        r6, 0x2
	  lwzx      r4, r4, r25
	  bl        0x2C2DEC
	  mr        r0, r3

	.loc_0x518:
	  stw       r0, 0x174(r27)
	  mr        r3, r27
	  li        r4, 0x3
	  bl        -0x5E48
	  add       r5, r30, r25
	  lwz       r3, 0x114(r27)
	  lwz       r4, 0x174(r27)
	  li        r6, 0
	  lwz       r5, 0x94(r5)
	  bl        -0x473AC
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x630
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x7617C
	  lwz       r5, -0x6B70(r13)
	  mr        r26, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x76168
	  add.      r0, r26, r3
	  ble-      .loc_0x5D8
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x598
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x150E30

	.loc_0x598:
	  lfs       f0, -0x5930(r2)
	  li        r4, 0
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x4(r3)
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x6D0

	.loc_0x5D8:
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x620
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x150EB8

	.loc_0x620:
	  lfs       f0, -0x5934(r2)
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x4(r3)
	  b         .loc_0x6D0

	.loc_0x630:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r27)
	  lhz       r4, 0x22E(r27)
	  cmplwi    r4, 0x3
	  bne-      .loc_0x658
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2AD75C
	  b         .loc_0x6D0

	.loc_0x658:
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x76074
	  cmpwi     r3, 0
	  ble-      .loc_0x6B4
	  lwz       r3, 0x1B4(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x680
	  lha       r0, 0x20(r3)
	  b         .loc_0x684

	.loc_0x680:
	  li        r0, -0x1

	.loc_0x684:
	  cmplwi    r0, 0x1
	  ble-      .loc_0x694
	  cmpwi     r0, 0x3
	  bne-      .loc_0x6D0

	.loc_0x694:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x6A4
	  addi      r5, r27, 0x178

	.loc_0x6A4:
	  addi      r3, r27, 0x1A8
	  li        r4, 0x2
	  bl        0x2AD700
	  b         .loc_0x6D0

	.loc_0x6B4:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0x6C4
	  addi      r5, r27, 0x178

	.loc_0x6C4:
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  bl        0x2AD6E0

	.loc_0x6D0:
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  bl        -0x114CC0
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  bl        -0x114DFC
	  stw       r27, 0xAC(r30)
	  mr        r25, r27
	  b         .loc_0xB84

	.loc_0x724:
	  li        r3, 0x260
	  bl        -0x157760
	  mr.       r27, r3
	  beq-      .loc_0x7B0
	  li        r4, 0x402
	  bl        0x509D4
	  lis       r4, 0x804B
	  li        r3, 0x8
	  addi      r4, r4, 0x26B8
	  stw       r4, 0x0(r27)
	  addi      r0, r4, 0x1B0
	  stw       r0, 0x178(r27)
	  bl        -0x15778C
	  mr.       r0, r3
	  beq-      .loc_0x768
	  bl        -0x475E0
	  mr        r0, r3

	.loc_0x768:
	  stw       r0, 0x114(r27)
	  li        r0, 0
	  lfs       f0, -0x5934(r2)
	  li        r3, 0xC
	  stfs      f0, 0x118(r27)
	  stw       r0, 0x23C(r27)
	  stfs      f0, 0x228(r27)
	  bl        -0x1577BC
	  mr.       r26, r3
	  beq-      .loc_0x7A0
	  bl        0x2B8CE8
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B74
	  stw       r0, 0x0(r26)

	.loc_0x7A0:
	  stw       r26, 0x234(r27)
	  li        r0, 0
	  stw       r0, 0x238(r27)
	  stw       r0, 0x1F4(r27)

	.loc_0x7B0:
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x406CC
	  rlwinm    r25,r28,2,0,29
	  addi      r3, r27, 0x1A8
	  add       r5, r30, r25
	  li        r4, 0
	  lwz       r0, 0x88(r5)
	  li        r5, 0
	  stw       r0, 0x1B8(r27)
	  bl        0x2AD5D4
	  lfs       f0, -0x5934(r2)
	  li        r0, 0x403
	  li        r3, 0x14
	  stfs      f0, 0x1D4(r27)
	  sth       r0, 0x128(r27)
	  bl        -0x157828
	  mr.       r0, r3
	  beq-      .loc_0x814
	  lwz       r4, 0x1C(r30)
	  lis       r5, 0x8
	  li        r6, 0x2
	  lwzx      r4, r4, r25
	  bl        0x2C2AF0
	  mr        r0, r3

	.loc_0x814:
	  stw       r0, 0x174(r27)
	  lis       r4, 0x100
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  bl        -0x115028
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  bl        -0x114E18
	  lwz       r3, 0x174(r27)
	  lwz       r3, 0x8(r3)
	  bl        -0x114F54
	  mr        r3, r27
	  li        r4, 0x4
	  bl        -0x619C
	  add       r5, r30, r25
	  lwz       r3, 0x114(r27)
	  lwz       r4, 0x174(r27)
	  li        r6, 0
	  lwz       r5, 0x94(r5)
	  bl        -0x47700
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x9DC
	  li        r0, 0x3
	  stw       r0, 0x250(r27)
	  lwz       r25, 0x250(r27)
	  mulli     r3, r25, 0x1C
	  addi      r3, r3, 0x10
	  bl        -0x1577E4
	  lis       r4, 0x8018
	  mr        r7, r25
	  subi      r4, r4, 0x5E90
	  li        r5, 0
	  li        r6, 0x1C
	  bl        -0xB9DB8
	  stw       r3, 0x254(r27)
	  lwz       r0, 0x250(r27)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x15780C
	  li        r5, 0
	  stw       r3, 0x258(r27)
	  mr        r6, r5
	  mr        r7, r5
	  b         .loc_0x92C

	.loc_0x8F4:
	  lwz       r4, 0x1B8(r27)
	  cmpwi     r5, 0
	  lwz       r3, 0x254(r27)
	  addi      r0, r6, 0x10
	  stwx      r4, r3, r0
	  bne-      .loc_0x914
	  lfs       f0, -0x5930(r2)
	  b         .loc_0x918

	.loc_0x914:
	  lfs       f0, -0x5934(r2)

	.loc_0x918:
	  lwz       r3, 0x258(r27)
	  addi      r6, r6, 0x1C
	  addi      r5, r5, 0x1
	  stfsx     f0, r3, r7
	  addi      r7, r7, 0x4

	.loc_0x92C:
	  lwz       r0, 0x250(r27)
	  cmpw      r5, r0
	  blt+      .loc_0x8F4
	  cmpwi     r0, 0
	  bgt-      .loc_0x954
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA31
	  crclr     6, 0x6
	  bl        -0x1511EC

	.loc_0x954:
	  lwz       r3, 0x254(r27)
	  li        r4, 0x1
	  li        r5, 0
	  bl        0x2AD44C
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0x984
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA31
	  crclr     6, 0x6
	  bl        -0x15121C

	.loc_0x984:
	  lwz       r3, 0x254(r27)
	  li        r4, 0x2
	  li        r5, 0
	  addi      r3, r3, 0x1C
	  bl        0x2AD418
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x2
	  bgt-      .loc_0x9B8
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA31
	  crclr     6, 0x6
	  bl        -0x151250

	.loc_0x9B8:
	  lwz       r3, 0x254(r27)
	  li        r4, 0x3
	  li        r5, 0
	  addi      r3, r3, 0x38
	  bl        0x2AD3E4
	  lfs       f0, -0x5930(r2)
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x8(r3)
	  b         .loc_0x9EC

	.loc_0x9DC:
	  li        r0, 0
	  stw       r0, 0x250(r27)
	  stw       r0, 0x254(r27)
	  stw       r0, 0x258(r27)

	.loc_0x9EC:
	  lhz       r0, 0x22E(r27)
	  cmplwi    r0, 0x4
	  bne-      .loc_0xADC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0xA8
	  bl        0x75CD0
	  lwz       r5, -0x6B70(r13)
	  mr        r26, r3
	  li        r4, 0x3
	  addi      r3, r5, 0xA8
	  bl        0x75CBC
	  add.      r0, r26, r3
	  ble-      .loc_0xA84
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0xA44
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x1512DC

	.loc_0xA44:
	  lfs       f0, -0x5930(r2)
	  li        r4, 0
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x4(r3)
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB7C

	.loc_0xA84:
	  lwz       r3, 0x218(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x21C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x250(r27)
	  cmpwi     r0, 0x1
	  bgt-      .loc_0xACC
	  addi      r3, r31, 0x18
	  addi      r5, r31, 0x60
	  li        r4, 0xA2B
	  crclr     6, 0x6
	  bl        -0x151364

	.loc_0xACC:
	  lfs       f0, -0x5934(r2)
	  lwz       r3, 0x258(r27)
	  stfs      f0, 0x4(r3)
	  b         .loc_0xB7C

	.loc_0xADC:
	  lfs       f0, -0x5930(r2)
	  stfs      f0, 0x1D4(r27)
	  lhz       r4, 0x22E(r27)
	  cmplwi    r4, 0x3
	  bne-      .loc_0xB04
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  li        r5, 0
	  bl        0x2AD2B0
	  b         .loc_0xB7C

	.loc_0xB04:
	  lwz       r3, -0x6B70(r13)
	  addi      r3, r3, 0xA8
	  bl        0x75BC8
	  cmpwi     r3, 0
	  ble-      .loc_0xB60
	  lwz       r3, 0x1B4(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0xB2C
	  lha       r0, 0x20(r3)
	  b         .loc_0xB30

	.loc_0xB2C:
	  li        r0, -0x1

	.loc_0xB30:
	  cmplwi    r0, 0x1
	  ble-      .loc_0xB40
	  cmpwi     r0, 0x3
	  bne-      .loc_0xB7C

	.loc_0xB40:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0xB50
	  addi      r5, r27, 0x178

	.loc_0xB50:
	  addi      r3, r27, 0x1A8
	  li        r4, 0x2
	  bl        0x2AD254
	  b         .loc_0xB7C

	.loc_0xB60:
	  cmplwi    r27, 0
	  mr        r5, r27
	  beq-      .loc_0xB70
	  addi      r5, r27, 0x178

	.loc_0xB70:
	  addi      r3, r27, 0x1A8
	  li        r4, 0
	  bl        0x2AD234

	.loc_0xB7C:
	  mr        r25, r27
	  stw       r27, 0xB0(r30)

	.loc_0xB84:
	  stw       r25, 0x18(r29)
	  mr        r4, r29
	  addi      r3, r30, 0x6C
	  bl        0x29599C
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017BA9C
 * Size:	000060
 */
void Game::ItemOnyon::Mgr::getOnyon((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  blt-      .loc_0x2C
	  cmpwi     r4, 0x3
	  bge-      .loc_0x2C
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0xA0(r3)
	  b         .loc_0x50

	.loc_0x2C:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  mr        r6, r4
	  li        r4, 0xB72
	  subi      r3, r3, 0x19C8
	  subi      r5, r5, 0x17C8
	  crclr     6, 0x6
	  bl        -0x1514A4
	  li        r3, 0

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017BAFC
 * Size:	000020
 */
void Game::ItemOnyon::Mgr::init(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x20:
	*/
}

/*
 * --INFO--
 * Address:	8017BB1C
 * Size:	000528
 */
void Game::ItemOnyon::Mgr::load(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0xB4(r1)
	  stmw      r27, 0x9C(r1)
	  mr        r31, r3
	  subi      r30, r4, 0x19E0
	  addi      r4, r30, 0x230
	  lwz       r3, -0x6514(r13)
	  bl        0x2A7818
	  addi      r3, r1, 0x68
	  addi      r4, r30, 0x23C
	  bl        0x2D0A88
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x68
	  bl        0x2D0BB8
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r29, 0x34(r3)
	  b         .loc_0x58

	.loc_0x54:
	  li        r29, 0

	.loc_0x58:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x230
	  bl        0x2A77E8
	  addi      r3, r30, 0x258
	  li        r4, 0
	  bl        -0x158B70
	  mr.       r27, r3
	  bne-      .loc_0x8C
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x264
	  li        r4, 0xB96
	  crclr     6, 0x6
	  bl        -0x151564

	.loc_0x8C:
	  mr        r3, r27
	  lis       r4, 0x24
	  bl        -0x10C31C
	  lwz       r4, 0x1C(r31)
	  li        r28, 0
	  li        r0, 0
	  stw       r3, 0x0(r4)
	  lwz       r3, -0x6C18(r13)
	  lwz       r4, 0x44(r3)
	  cmpwi     r4, 0x2
	  beq-      .loc_0xC0
	  cmpwi     r4, 0x3
	  bne-      .loc_0xC4

	.loc_0xC0:
	  li        r0, 0x1

	.loc_0xC4:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xD8
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0

	.loc_0xD8:
	  cmpwi     r4, 0x1
	  beq-      .loc_0x1C0
	  lwz       r5, -0x6B70(r13)
	  addi      r3, r1, 0x38
	  addi      r4, r30, 0x298
	  lbz       r0, 0x2F(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xFC
	  addi      r4, r30, 0x27C

	.loc_0xFC:
	  bl        0x2D09C0
	  lwz       r0, -0x77D4(r13)
	  addi      r4, r1, 0x38
	  lwz       r3, -0x63D8(r13)
	  stw       r0, 0x50(r1)
	  bl        0x2D0AE8
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  lwz       r28, 0x34(r3)
	  b         .loc_0x128

	.loc_0x124:
	  li        r28, 0

	.loc_0x128:
	  subi      r3, r2, 0x5828
	  li        r4, 0
	  bl        -0x158C34
	  mr.       r27, r3
	  bne-      .loc_0x150
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x2B0
	  li        r4, 0xBB6
	  crclr     6, 0x6
	  bl        -0x151628

	.loc_0x150:
	  mr        r3, r27
	  li        r4, 0x30
	  bl        -0x10C3E0
	  lwz       r5, 0x1C(r31)
	  mr        r27, r3
	  lis       r4, 0x4
	  stw       r27, 0x4(r5)
	  lwz       r3, 0x1C(r31)
	  lwz       r3, 0x4(r3)
	  bl        -0xF83B8
	  lwz       r3, 0x1C(r31)
	  lwz       r3, 0x4(r3)
	  bl        -0xF826C
	  li        r4, 0
	  b         .loc_0x1AC

	.loc_0x18C:
	  lwz       r3, 0x80(r27)
	  rlwinm    r0,r4,2,14,29
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x1AC:
	  lhz       r0, 0x7C(r27)
	  rlwinm    r3,r4,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x18C
	  b         .loc_0x1CC

	.loc_0x1C0:
	  lwz       r3, 0x1C(r31)
	  li        r0, 0
	  stw       r0, 0x4(r3)

	.loc_0x1CC:
	  lwz       r3, 0x1C(r31)
	  li        r4, 0
	  lwz       r3, 0x0(r3)
	  bl        0x2C25A8
	  addi      r3, r30, 0x2C8
	  li        r4, 0
	  bl        -0x158CE8
	  lwz       r5, 0x1C(r31)
	  mr        r4, r3
	  addi      r3, r31, 0xB4
	  lwz       r5, 0x0(r5)
	  bl        0x2B830C
	  addi      r3, r30, 0x2D8
	  li        r4, 0
	  bl        -0x158D08
	  lwz       r5, 0x1C(r31)
	  mr        r4, r3
	  addi      r3, r31, 0xC8
	  lwz       r5, 0x0(r5)
	  bl        0x2B82EC
	  addi      r3, r30, 0x2E8
	  li        r4, 0
	  bl        -0x158D28
	  lwz       r5, 0x1C(r31)
	  mr        r4, r3
	  addi      r3, r31, 0xDC
	  lwz       r5, 0x0(r5)
	  bl        0x2B82CC
	  addi      r0, r30, 0x2FC
	  mr        r3, r31
	  stw       r0, 0x28(r31)
	  addi      r4, r30, 0x310
	  bl        0x51464
	  lwz       r4, 0x1C(r31)
	  mr        r27, r3
	  mr        r6, r29
	  li        r7, 0
	  lwz       r5, 0x0(r4)
	  addi      r4, r30, 0x31C
	  bl        0x2C1FD8
	  stw       r3, 0x88(r31)
	  mr        r3, r27
	  addi      r4, r30, 0x330
	  bl        -0x43450
	  stw       r3, 0x94(r31)
	  mr        r3, r31
	  mr        r4, r27
	  bl        0x514AC
	  lwz       r3, -0x6C18(r13)
	  li        r0, 0
	  lwz       r4, 0x44(r3)
	  cmpwi     r4, 0x2
	  beq-      .loc_0x2A8
	  cmpwi     r4, 0x3
	  bne-      .loc_0x2AC

	.loc_0x2A8:
	  li        r0, 0x1

	.loc_0x2AC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2C0
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x338

	.loc_0x2C0:
	  cmpwi     r4, 0x1
	  beq-      .loc_0x338
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2E4
	  addi      r0, r30, 0x340
	  stw       r0, 0x28(r31)
	  b         .loc_0x2EC

	.loc_0x2E4:
	  addi      r0, r30, 0x354
	  stw       r0, 0x28(r31)

	.loc_0x2EC:
	  mr        r3, r31
	  addi      r4, r30, 0x310
	  bl        0x513BC
	  lwz       r4, 0x1C(r31)
	  mr        r27, r3
	  mr        r6, r28
	  li        r7, 0
	  lwz       r5, 0x4(r4)
	  addi      r4, r30, 0x364
	  bl        0x2C1F30
	  stw       r3, 0x8C(r31)
	  mr        r3, r27
	  addi      r4, r30, 0x370
	  bl        -0x434F8
	  stw       r3, 0x98(r31)
	  mr        r3, r31
	  mr        r4, r27
	  bl        0x51404
	  b         .loc_0x344

	.loc_0x338:
	  li        r0, 0
	  stw       r0, 0x8C(r31)
	  stw       r0, 0x98(r31)

	.loc_0x344:
	  lwz       r5, -0x6B70(r13)
	  addi      r3, r1, 0x8
	  addi      r4, r30, 0x398
	  lbz       r0, 0x2F(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x360
	  addi      r4, r30, 0x37C

	.loc_0x360:
	  bl        0x2D075C
	  lwz       r0, -0x77D4(r13)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x63D8(r13)
	  stw       r0, 0x20(r1)
	  bl        0x2D0884
	  cmplwi    r3, 0
	  beq-      .loc_0x388
	  lwz       r28, 0x34(r3)
	  b         .loc_0x38C

	.loc_0x388:
	  li        r28, 0

	.loc_0x38C:
	  subi      r3, r2, 0x5820
	  li        r4, 0
	  bl        -0x158E98
	  mr.       r27, r3
	  bne-      .loc_0x3B4
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x3B0
	  li        r4, 0xC33
	  crclr     6, 0x6
	  bl        -0x15188C

	.loc_0x3B4:
	  lis       r4, 0x2102
	  mr        r3, r27
	  addi      r4, r4, 0x30
	  bl        -0x10C648
	  lwz       r5, 0x1C(r31)
	  mr        r29, r3
	  lis       r4, 0x4
	  stw       r29, 0x8(r5)
	  lwz       r3, 0x1C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xF8620
	  lwz       r3, 0x1C(r31)
	  lwz       r3, 0x8(r3)
	  bl        -0xF84D4
	  li        r4, 0
	  b         .loc_0x414

	.loc_0x3F4:
	  lwz       r3, 0x80(r29)
	  rlwinm    r0,r4,2,14,29
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x414:
	  lhz       r0, 0x7C(r29)
	  rlwinm    r3,r4,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x3F4
	  lwz       r3, 0x1C(r31)
	  li        r4, 0
	  lwz       r3, 0x8(r3)
	  bl        0x2C2350
	  subi      r3, r2, 0x5818
	  li        r4, 0
	  bl        -0x158F40
	  mr.       r27, r3
	  bne-      .loc_0x45C
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x60
	  li        r4, 0xC4F
	  crclr     6, 0x6
	  bl        -0x151934

	.loc_0x45C:
	  lwz       r5, 0x1C(r31)
	  mr        r4, r27
	  addi      r3, r31, 0xF0
	  lwz       r5, 0x8(r5)
	  bl        0x2B8098
	  addi      r3, r30, 0x3C4
	  li        r4, 0
	  bl        -0x158F7C
	  mr.       r27, r3
	  bne-      .loc_0x498
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x60
	  li        r4, 0xC54
	  crclr     6, 0x6
	  bl        -0x151970

	.loc_0x498:
	  lwz       r5, 0x1C(r31)
	  mr        r4, r27
	  addi      r3, r31, 0x104
	  lwz       r5, 0x8(r5)
	  bl        0x2B805C
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x4C8
	  addi      r0, r30, 0x3D0
	  stw       r0, 0x28(r31)
	  b         .loc_0x4D0

	.loc_0x4C8:
	  addi      r0, r30, 0x3E4
	  stw       r0, 0x28(r31)

	.loc_0x4D0:
	  mr        r3, r31
	  addi      r4, r30, 0x310
	  bl        0x511D8
	  mr        r5, r29
	  mr        r27, r3
	  mr        r6, r28
	  addi      r4, r30, 0x3F4
	  li        r7, 0
	  bl        0x2C1D50
	  stw       r3, 0x90(r31)
	  mr        r3, r27
	  addi      r4, r30, 0x370
	  bl        -0x436D8
	  stw       r3, 0x9C(r31)
	  mr        r3, r31
	  mr        r4, r27
	  bl        0x51224
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C044
 * Size:	00000C
 */
void Game::ItemOnyon::Mgr::generatorGetID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x6F6E
	  addi      r3, r3, 0x796E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C050
 * Size:	00000C
 */
void Game::ItemOnyon::Mgr::generatorLocalVersion(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3031
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C05C
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	8017C088
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x68(r12)
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
 * Address:	8017C0B4
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x6C(r12)
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
 * Address:	8017C0E0
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x70(r12)
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
 * Address:	8017C10C
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x74(r12)
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
 * Address:	8017C138
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x78(r12)
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
 * Address:	8017C164
 * Size:	000004
 */
void Game::BaseItemMgr::killAll(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C168
 * Size:	000004
 */
void Game::BaseItemMgr::setup((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C16C
 * Size:	000004
 */
void Game::BaseItemMgr::onLoadResources(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C170
 * Size:	000008
 */
void Game::BaseItemMgr::loadEverytime(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C178
 * Size:	000004
 */
void Game::BaseItemMgr::onUpdateUseList((Game::GenItemParm*, int))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C17C
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::getEnd(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	8017C1A8
 * Size:	000008
 */
void NodeObjectMgr<Game::Onyon>::getEnd()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C1B0
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::getStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	8017C1DC
 * Size:	000008
 */
void NodeObjectMgr<Game::Onyon>::getStart()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C1E4
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::getNext((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	8017C210
 * Size:	000008
 */
void NodeObjectMgr<Game::Onyon>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C218
 * Size:	00002C
 */
void Game::ItemOnyon::Mgr::get((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
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
 * Address:	8017C244
 * Size:	000008
 */
void NodeObjectMgr<Game::Onyon>::get(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C24C
 * Size:	000008
 */
void Game::GenItemParm::getShapeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C254
 * Size:	000008
 */
void efx::ArgType::getName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5810
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C25C
 * Size:	000014
 */
void efx::OnyonSpotArg::getID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5350
	  lis       r3, 0x4F4E
	  addi      r4, r4, 0x4F54
	  addi      r3, r3, 0x595F
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C270
 * Size:	000008
 */
void Game::Onyon::getCreatureName(void)
{
	/*
	.loc_0x0:
	  subi      r3, r2, 0x5830
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C278
 * Size:	000008
 */
void Game::BaseItem::getCreatureID(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C280
 * Size:	000004
 */
void Game::BaseItem::do_setLODParm((Game::AILODParm&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C284
 * Size:	000008
 */
void Game::BaseItem::getMapCollisionRadius(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1D0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C28C
 * Size:	000008
 */
void Game::BaseItem::interactAttack((Game::InteractAttack&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C294
 * Size:	000008
 */
void Game::BaseItem::interactBreakBridge((Game::InteractBreakBridge&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C29C
 * Size:	000008
 */
void Game::BaseItem::interactEat((Game::InteractEat&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2A4
 * Size:	000008
 */
void Game::BaseItem::interactFlockAttack((Game::InteractFlockAttack&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2AC
 * Size:	000008
 */
void Game::BaseItem::interactAbsorb((Game::InteractAbsorb&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2B4
 * Size:	000008
 */
void Game::BaseItem::interactFue((Game::InteractFue&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2BC
 * Size:	000008
 */
void Game::BaseItem::interactFarmKarero((Game::InteractFarmKarero&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2C4
 * Size:	000008
 */
void Game::BaseItem::interactFarmHaero((Game::InteractFarmHaero&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2CC
 * Size:	000008
 */
void Game::BaseItem::interactGotKey((Game::InteractGotKey&))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2D4
 * Size:	000008
 */
void getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2DC
 * Size:	000008
 */
void Game::BaseItem::getWorkDistance((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f1, -0x5808(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2E4
 * Size:	000004
 */
void Game::BaseItem::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2E8
 * Size:	000004
 */
void Game::BaseItem::collisionCallback((Game::CollEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2EC
 * Size:	000004
 */
void Game::BaseItem::platCallback((Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2F0
 * Size:	000004
 */
void Game::BaseItem::updateBoundSphere(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2F4
 * Size:	000024
 */
void Game::BaseItem::getBoundingSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1C4(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x1C8(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x1CC(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x1D0(r3)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C318
 * Size:	000044
 */
void onSetPosition__Q24Game8BaseItemFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x19C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x1A0(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1A4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x21C(r12)
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
 * Address:	8017C35C
 * Size:	000004
 */
void Game::BaseItem::onSetPosition(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C360
 * Size:	00001C
 */
void Game::BaseItem::getVelocity(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x190(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x194(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x198(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C37C
 * Size:	000014
 */
void getVelocityAt__Q24Game8BaseItemFR10Vector3<float> R10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x5934(r2)
	  stfs      f0, 0x0(r5)
	  stfs      f0, 0x4(r5)
	  stfs      f0, 0x8(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C390
 * Size:	00009C
 */
void efx::TPodKira::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x29EC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xEC760

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x158358

	.loc_0x80:
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
 * Address:	8017C42C
 * Size:	00009C
 */
void efx::TPodOpenB::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2A54
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xEC7FC

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x1583F4

	.loc_0x80:
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
 * Address:	8017C4C8
 * Size:	00009C
 */
void efx::TPodOpenA::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2AA0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2C24
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xEC898

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x158490

	.loc_0x80:
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
 * Address:	8017C564
 * Size:	000004
 */
void efx::TForever::doExecuteEmitterOperation((JPABaseEmitter*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C568
 * Size:	00009C
 */
void efx::TUfoGasOut::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2AEC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xEC938

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x158530

	.loc_0x80:
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
 * Address:	8017C604
 * Size:	00009C
 */
void efx::TUfoGasIn::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2B38
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xEC9D4

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x1585CC

	.loc_0x80:
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
 * Address:	8017C6A0
 * Size:	00009C
 */
void efx::TUfoPodOpenSuck::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804B
	  addi      r3, r3, 0x2BBC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x68A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0xECA70

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x158668

	.loc_0x80:
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
 * Address:	8017C73C
 * Size:	00000C
 */
void Game::ItemPikihead::InitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x15A4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C748
 * Size:	00000C
 */
void Game::ItemInitArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x158C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C754
 * Size:	000018
 */
void NodeObjectMgr<Game::Onyon>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x30(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C76C
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x548
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017C950
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x548
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017CB34
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x548
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017CD28
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x548
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017CF0C
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x548
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017D100
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x548
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017D2F4
 * Size:	00002C
 */
void Container<Game::Onyon>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
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
 * Address:	8017D320
 * Size:	000008
 */
void Container<Game::Onyon>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017D328
 * Size:	000008
 */
void Container<Game::Onyon>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017D330
 * Size:	000028
 */
void __sinit_onyonMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6CD8(r13)
	  stfsu     f0, 0x2420(r3)
	  stfs      f0, -0x6CD4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017D358
 * Size:	000008
 */
void @4 @efx::TForever::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x7694
	*/
}

/*
 * --INFO--
 * Address:	8017D360
 * Size:	000008
 */
void @4 @efx::TUfoPodOpenSuck::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xCC4
	*/
}

/*
 * --INFO--
 * Address:	8017D368
 * Size:	000008
 */
void @4 @efx::TUfoGasIn::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xD68
	*/
}

/*
 * --INFO--
 * Address:	8017D370
 * Size:	000008
 */
void @4 @efx::TUfoGasOut::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xE0C
	*/
}

/*
 * --INFO--
 * Address:	8017D378
 * Size:	000008
 */
void @4 @efx::TPodOpenA::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xEB4
	*/
}

/*
 * --INFO--
 * Address:	8017D380
 * Size:	000008
 */
void @4 @efx::TPodOpenB::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xF58
	*/
}

/*
 * --INFO--
 * Address:	8017D388
 * Size:	000008
 */
void @4 @efx::TPodKira::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xFFC
	*/
}

/*
 * --INFO--
 * Address:	8017D390
 * Size:	000008
 */
void @376 @Game::Onyon::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x5254
	*/
}

/*
 * --INFO--
 * Address:	8017D398
 * Size:	000008
 */
void NodeObjectMgr<Game::Onyon>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xC48
	*/
}

/*
 * --INFO--
 * Address:	8017D3A0
 * Size:	000008
 */
void ObjectMgr<Game::Onyon>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2A4
	*/
}

/*
 * --INFO--
 * Address:	8017D3A8
 * Size:	000008
 */
void ObjectMgr<Game::Onyon>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x4A0
	*/
}

/*
 * --INFO--
 * Address:	8017D3B0
 * Size:	000008
 */
void ObjectMgr<Game::Onyon>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x68C
	*/
}

/*
 * --INFO--
 * Address:	8017D3B8
 * Size:	000008
 */
void ObjectMgr<Game::Onyon>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x888
	*/
}

/*
 * --INFO--
 * Address:	8017D3C0
 * Size:	000008
 */
void ObjectMgr<Game::Onyon>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xA74
	*/
}

/*
 * --INFO--
 * Address:	8017D3C8
 * Size:	000008
 */
void ObjectMgr<Game::Onyon>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xC60
	*/
}

/*
 * --INFO--
 * Address:	8017D3D0
 * Size:	000008
 */
void @48 @Game::ItemOnyon::Mgr::getEnd(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x1258
	*/
}

/*
 * --INFO--
 * Address:	8017D3D8
 * Size:	000008
 */
void @48 @Game::ItemOnyon::Mgr::getStart(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x122C
	*/
}

/*
 * --INFO--
 * Address:	8017D3E0
 * Size:	000008
 */
void @48 @Game::ItemOnyon::Mgr::getNext((void*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x1200
	*/
}

/*
 * --INFO--
 * Address:	8017D3E8
 * Size:	000008
 */
void @48 @Game::ItemOnyon::Mgr::get((void*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x11D4
	*/
}

/*
 * --INFO--
 * Address:	8017D3F0
 * Size:	000008
 */
void @48 @Game::ItemOnyon::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x2888
	*/
}
