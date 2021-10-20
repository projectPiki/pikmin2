

/*
 * --INFO--
 * Address:	801E4B98
 * Size:	000664
 */
void Game::ItemMgr::createManagers(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r5, 0xDB0
	  li        r5, 0
	  stw       r30, 0x18(r1)
	  rlwinm    r30,r4,31,31,31
	  stw       r29, 0x14(r1)
	  rlwinm    r29,r4,0,31,31
	  addi      r4, r31, 0x18
	  lwz       r3, -0x6514(r13)
	  bl        0x23E790
	  li        r3, 0x90
	  bl        -0x1C0D30
	  mr.       r0, r3
	  beq-      .loc_0x54
	  li        r4, 0x1
	  bl        0x13A04
	  mr        r0, r3

	.loc_0x54:
	  stw       r0, -0x6B10(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B10(r13)
	  bl        -0x16F24
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x18
	  bl        0x23E74C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x24
	  li        r5, 0
	  bl        0x23E734
	  li        r3, 0x65C
	  bl        -0x1C0D8C
	  mr.       r0, r3
	  beq-      .loc_0xB0
	  li        r4, 0x1
	  bl        0x24AB8
	  mr        r0, r3

	.loc_0xB0:
	  stw       r0, -0x6AC0(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6AC0(r13)
	  bl        -0x16F80
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x24
	  bl        0x23E6F0
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49D0
	  li        r5, 0
	  bl        0x23E6D8
	  cmplwi    r30, 0
	  beq-      .loc_0x13C
	  li        r3, 0x8C
	  bl        -0x1C0DF0
	  mr.       r0, r3
	  beq-      .loc_0x114
	  li        r4, 0x1
	  bl        0x2B210
	  mr        r0, r3

	.loc_0x114:
	  stw       r0, -0x6AA0(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6AA0(r13)
	  bl        -0x16FE4
	  b         .loc_0x144

	.loc_0x13C:
	  li        r0, 0
	  stw       r0, -0x6AA0(r13)

	.loc_0x144:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49D0
	  bl        0x23E680
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x30
	  li        r5, 0
	  bl        0x23E668
	  li        r3, 0x90
	  bl        -0x1C0E58
	  mr.       r0, r3
	  beq-      .loc_0x17C
	  li        r4, 0x1
	  bl        0x1159C
	  mr        r0, r3

	.loc_0x17C:
	  stw       r0, -0x6B20(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B20(r13)
	  bl        -0x1704C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x30
	  bl        0x23E624
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x3C
	  li        r5, 0
	  bl        0x23E60C
	  li        r3, 0x90
	  bl        -0x1C0EB4
	  mr.       r0, r3
	  beq-      .loc_0x1D8
	  li        r4, 0x1
	  bl        0xF400
	  mr        r0, r3

	.loc_0x1D8:
	  stw       r0, -0x6B30(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B30(r13)
	  bl        -0x170A8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x3C
	  bl        0x23E5C8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x48
	  li        r5, 0
	  bl        0x23E5B0
	  li        r3, 0x84
	  bl        -0x1C0F10
	  mr.       r0, r3
	  beq-      .loc_0x234
	  li        r4, 0x1
	  bl        -0xA75C
	  mr        r0, r3

	.loc_0x234:
	  stw       r0, -0x6B90(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B90(r13)
	  bl        -0x17104
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x48
	  bl        0x23E56C
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49C8
	  li        r5, 0
	  bl        0x23E554
	  cmplwi    r30, 0
	  beq-      .loc_0x2C0
	  li        r3, 0x94
	  bl        -0x1C0F74
	  mr.       r0, r3
	  beq-      .loc_0x298
	  li        r4, 0x1
	  bl        -0x5528
	  mr        r0, r3

	.loc_0x298:
	  stw       r0, -0x6B88(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B88(r13)
	  bl        -0x17168
	  b         .loc_0x2C8

	.loc_0x2C0:
	  li        r0, 0
	  stw       r0, -0x6B88(r13)

	.loc_0x2C8:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49C8
	  bl        0x23E4FC
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49C0
	  li        r5, 0
	  bl        0x23E4E4
	  cmplwi    r30, 0
	  beq-      .loc_0x330
	  li        r3, 0x90
	  bl        -0x1C0FE4
	  mr.       r0, r3
	  beq-      .loc_0x308
	  li        r4, 0x1
	  bl        -0x2578
	  mr        r0, r3

	.loc_0x308:
	  stw       r0, -0x6B80(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B80(r13)
	  bl        -0x171D8
	  b         .loc_0x338

	.loc_0x330:
	  li        r0, 0
	  stw       r0, -0x6B80(r13)

	.loc_0x338:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49C0
	  bl        0x23E48C
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49B8
	  li        r5, 0
	  bl        0x23E474
	  li        r3, 0x84
	  bl        -0x1C104C
	  mr.       r0, r3
	  beq-      .loc_0x370
	  li        r4, 0x1
	  bl        -0x11138
	  mr        r0, r3

	.loc_0x370:
	  stw       r0, -0x6BB0(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6BB0(r13)
	  bl        -0x17240
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49B8
	  bl        0x23E430
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49B0
	  li        r5, 0
	  bl        0x23E418
	  li        r3, 0x11C
	  bl        -0x1C10A8
	  mr.       r4, r3
	  beq-      .loc_0x3CC
	  li        r4, 0x1
	  bl        -0x6A798
	  mr        r4, r3

	.loc_0x3CC:
	  stw       r4, -0x6CD0(r13)
	  lwz       r3, -0x6BC8(r13)
	  bl        -0x17284
	  lwz       r3, -0x6CD0(r13)
	  bl        -0x69478
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49B0
	  bl        0x23E3E4
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49A8
	  li        r5, 0
	  bl        0x23E3CC
	  cmplwi    r29, 0
	  beq-      .loc_0x448
	  li        r3, 0x94
	  bl        -0x1C10FC
	  mr.       r0, r3
	  beq-      .loc_0x420
	  li        r4, 0x1
	  bl        -0x1286C
	  mr        r0, r3

	.loc_0x420:
	  stw       r0, -0x6BB8(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6BB8(r13)
	  bl        -0x172F0
	  b         .loc_0x450

	.loc_0x448:
	  li        r0, 0
	  stw       r0, -0x6BB8(r13)

	.loc_0x450:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49A8
	  bl        0x23E374
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49A0
	  li        r5, 0
	  bl        0x23E35C
	  cmplwi    r30, 0
	  beq-      .loc_0x4B8
	  li        r3, 0x94
	  bl        -0x1C116C
	  mr.       r0, r3
	  beq-      .loc_0x490
	  li        r4, 0x1
	  bl        0x6248
	  mr        r0, r3

	.loc_0x490:
	  stw       r0, -0x6B60(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B60(r13)
	  bl        -0x17360
	  b         .loc_0x4C0

	.loc_0x4B8:
	  li        r0, 0
	  stw       r0, -0x6B60(r13)

	.loc_0x4C0:
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x49A0
	  bl        0x23E304
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x54
	  li        r5, 0
	  bl        0x23E2EC
	  cmplwi    r29, 0
	  beq-      .loc_0x528
	  li        r3, 0x94
	  bl        -0x1C11DC
	  mr.       r0, r3
	  beq-      .loc_0x500
	  li        r4, 0x1
	  bl        0x8498
	  mr        r0, r3

	.loc_0x500:
	  stw       r0, -0x6B50(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B50(r13)
	  bl        -0x173D0
	  b         .loc_0x530

	.loc_0x528:
	  li        r0, 0
	  stw       r0, -0x6B50(r13)

	.loc_0x530:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x54
	  bl        0x23E294
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x64
	  li        r5, 0
	  bl        0x23E27C
	  cmplwi    r30, 0
	  beq-      .loc_0x598
	  li        r3, 0x98
	  bl        -0x1C124C
	  mr.       r0, r3
	  beq-      .loc_0x570
	  li        r4, 0x1
	  bl        0xAFC8
	  mr        r0, r3

	.loc_0x570:
	  stw       r0, -0x6B48(r13)
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B48(r13)
	  bl        -0x17440
	  b         .loc_0x5A0

	.loc_0x598:
	  li        r0, 0
	  stw       r0, -0x6B48(r13)

	.loc_0x5A0:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x64
	  bl        0x23E224
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4998
	  li        r5, 0
	  bl        0x23E20C
	  li        r3, 0x8C
	  bl        -0x1C12B4
	  mr.       r4, r3
	  beq-      .loc_0x5D8
	  li        r4, 0x1
	  bl        -0x1C7F0
	  mr        r4, r3

	.loc_0x5D8:
	  stw       r4, -0x6BD0(r13)
	  lwz       r3, -0x6BC8(r13)
	  bl        -0x17490
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x4998
	  bl        0x23E1E0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x70
	  li        r5, 0
	  bl        0x23E1C8
	  cmplwi    r30, 0
	  beq-      .loc_0x634
	  li        r3, 0xA4
	  bl        -0x1C1300
	  mr.       r4, r3
	  beq-      .loc_0x624
	  li        r4, 0x1
	  bl        -0x1B4D0
	  mr        r4, r3

	.loc_0x624:
	  stw       r4, -0x6BCC(r13)
	  lwz       r3, -0x6BC8(r13)
	  bl        -0x174DC
	  b         .loc_0x63C

	.loc_0x634:
	  li        r0, 0
	  stw       r0, -0x6BCC(r13)

	.loc_0x63C:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x70
	  bl        0x23E188
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
 * Address:	801E51FC
 * Size:	000048
 */
void Game::ItemMgr::clearGlobalPointers()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, -0x6B10(r13)
	  stw       r0, -0x6AC0(r13)
	  stw       r0, -0x6AA0(r13)
	  stw       r0, -0x6B20(r13)
	  stw       r0, -0x6B30(r13)
	  stw       r0, -0x6B90(r13)
	  stw       r0, -0x6B88(r13)
	  stw       r0, -0x6B80(r13)
	  stw       r0, -0x6BB0(r13)
	  stw       r0, -0x6CD0(r13)
	  stw       r0, -0x6BB8(r13)
	  stw       r0, -0x6B60(r13)
	  stw       r0, -0x6B50(r13)
	  stw       r0, -0x6B48(r13)
	  stw       r0, -0x6BD0(r13)
	  stw       r0, -0x6BCC(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E5244
 * Size:	0000E8
 */
void Game::ItemMgr::killAllExceptOnyonMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6B88(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r4, -0x6B88(r13)
	  bl        -0x2F2C8
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B88(r13)
	  bl        -0x2F07C

	.loc_0x48:
	  li        r0, 0
	  stw       r0, -0x6B88(r13)

	.loc_0x50:
	  lwz       r3, -0x6B80(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r4, -0x6B80(r13)
	  bl        -0x2F30C
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6B80(r13)
	  bl        -0x2F0C0

	.loc_0x8C:
	  li        r0, 0
	  stw       r0, -0x6B80(r13)

	.loc_0x94:
	  lwz       r3, -0x6BB0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD0
	  lwz       r4, -0x6BB0(r13)
	  bl        -0x2F350
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, -0x6BB0(r13)
	  bl        -0x2F104

	.loc_0xD0:
	  li        r0, 0
	  stw       r0, -0x6BB0(r13)

	.loc_0xD8:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801E532C
 * Size:	000028
 */
void __sinit_registItem_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6B78(r13)
	  stfsu     f0, -0x5CA0(r3)
	  stfs      f0, -0x6B74(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
