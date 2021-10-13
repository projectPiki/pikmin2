

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void kh::Screen::ObjFinalFloor::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80401D38
 * Size:	00021C
 */
void kh::Screen::ObjFinalFloor::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  subi      r31, r5, 0x78A8
	  bl        0x52250
	  lis       r4, 0x5F46
	  lis       r5, 0x46
	  addi      r6, r4, 0x4C52
	  li        r4, 0x4B48
	  addi      r5, r5, 0x494E
	  bl        -0xF2A54
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x20
	  li        r4, 0x39
	  crclr     6, 0x6
	  bl        -0x3D774C

	.loc_0x58:
	  mr        r3, r27
	  bl        0x52214
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  li        r0, 0x2
	  lis       r3, 0x8051
	  stw       r0, 0x68(r27)
	  addi      r3, r3, 0x4128
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x60(r27)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x64(r27)

	.loc_0x8C:
	  mr        r30, r27
	  li        r29, 0
	  b         .loc_0x128

	.loc_0x98:
	  li        r3, 0x148
	  bl        -0x3DDF30
	  mr.       r0, r3
	  beq-      .loc_0xB0
	  bl        0x32FCC
	  mr        r0, r3

	.loc_0xB0:
	  stw       r0, 0x38(r30)
	  mr        r6, r28
	  addi      r4, r31, 0x30
	  lis       r5, 0x4
	  lwz       r3, 0x38(r30)
	  bl        -0x3C27D8
	  mr        r4, r28
	  addi      r3, r31, 0x40
	  bl        -0x3DEDF0
	  bl        -0x3BA4F0
	  stw       r3, 0x40(r30)
	  mr        r4, r28
	  addi      r3, r31, 0x50
	  bl        -0x3DEE04
	  bl        -0x3BA504
	  stw       r3, 0x48(r30)
	  lwz       r3, 0x38(r30)
	  lwz       r4, 0x40(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x38(r30)
	  lwz       r4, 0x48(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x128:
	  lwz       r0, 0x68(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x98
	  lis       r3, 0xC001
	  addi      r3, r3, 0x1025
	  bl        0x698FC
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x160
	  addi      r3, r31, 0x60
	  addi      r5, r31, 0x6C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x3D7854

	.loc_0x160:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0x180
	  addi      r3, r31, 0x60
	  addi      r5, r31, 0x6C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x3D7874

	.loc_0x180:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A0
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0x6C
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x3D7894

	.loc_0x1A0:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0x1C4
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0x84
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x3D78B8

	.loc_0x1C4:
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F4
	  addi      r3, r31, 0xA8
	  addi      r5, r31, 0x6C
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x3D78E8

	.loc_0x1F4:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401F54
 * Size:	000020
 */
void kh::Screen::ObjFinalFloor::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x354
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80401F74
 * Size:	0000DC
 */
void kh::Screen::ObjFinalFloor::doDraw((Graphics&))
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
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  addi      r3, r28, 0xBC
	  lwz       r12, 0xBC(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0x1D28(r2)
	  mr        r30, r27
	  li        r29, 0
	  lis       r31, 0x524F
	  b         .loc_0xAC

	.loc_0x50:
	  lwz       r3, 0x38(r30)
	  addi      r6, r31, 0x4F54
	  lfs       f30, 0x60(r30)
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0xD4(r3)
	  stfs      f30, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x38(r30)
	  mr        r4, r28
	  addi      r5, r28, 0xBC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  lwz       r0, 0x68(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x50
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402050
 * Size:	000038
 */
void kh::Screen::ObjFinalFloor::doUpdateFadein(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  addi      r5, r4, 0x6C
	  li        r4, 0x1824
	  lwz       r3, -0x67A8(r13)
	  bl        -0xC9A00
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402088
 * Size:	0001F8
 */
void kh::Screen::ObjFinalFloor::doUpdateFadeout(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  lwz       r4, -0x6C18(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x50
	  lwz       r3, 0x44(r4)
	  mr        r0, r30
	  cmpwi     r3, 0x2
	  beq-      .loc_0x40
	  cmpwi     r3, 0x3
	  bne-      .loc_0x44

	.loc_0x40:
	  li        r0, 0x1

	.loc_0x44:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x50
	  li        r30, 0x1

	.loc_0x50:
	  mr        r3, r31
	  bl        0x51ECC
	  lis       r4, 0x5F46
	  lis       r5, 0x46
	  addi      r6, r4, 0x4C52
	  li        r4, 0x4B48
	  addi      r5, r5, 0x494E
	  bl        -0xF2DD8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x789C
	  li        r4, 0x97
	  subi      r5, r5, 0x7888
	  crclr     6, 0x6
	  bl        -0x3D7AD8

	.loc_0x94:
	  mr        r3, r31
	  bl        0x51E88
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x1A0
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804F
	  stw       r0, 0x10(r1)
	  subi      r0, r3, 0x7588
	  lfs       f0, 0x1D2C(r2)
	  lis       r3, 0x804F
	  stw       r0, 0x10(r1)
	  subi      r4, r4, 0x57D8
	  subi      r0, r3, 0x57E8
	  mr        r3, r31
	  stw       r4, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  bl        0x4FE3C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1DC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x10
	  bl        0x4FDB8
	  b         .loc_0x1DC

	.loc_0x128:
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804F
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x7588
	  lfs       f0, 0x1D2C(r2)
	  lis       r3, 0x804F
	  stw       r0, 0x8(r1)
	  subi      r4, r4, 0x57D8
	  subi      r0, r3, 0x57F8
	  mr        r3, r31
	  stw       r4, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  bl        0x4FDC4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1DC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x8
	  bl        0x4FD40
	  b         .loc_0x1DC

	.loc_0x1A0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  bl        0x4FD84
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1DC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        0x4FD00

	.loc_0x1DC:
	  lwz       r0, 0x24(r1)
	  li        r3, 0x1
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402280
 * Size:	000034
 */
void kh::Screen::ObjFinalFloor::doUpdateFadeoutFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
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
 * Address:	804022B4
 * Size:	0001C8
 */
void kh::Screen::ObjFinalFloor::updateAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r26, 0x18(r1)
	  mr        r28, r3
	  lis       r3, 0x8051
	  lfd       f31, 0x1D30(r2)
	  mr        r31, r28
	  addi      r26, r3, 0x4128
	  li        r30, 0
	  li        r29, 0
	  lis       r27, 0x4330
	  b         .loc_0x19C

	.loc_0x3C:
	  lfs       f0, 0x50(r31)
	  lwz       r3, 0x40(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x58(r31)
	  lwz       r3, 0x48(r31)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x38(r31)
	  bl        -0x3C17E0
	  lwz       r3, -0x6560(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lwz       r3, 0x18(r3)
	  lbz       r0, 0x92(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x108
	  lwz       r4, 0x38(r31)
	  li        r0, 0
	  lis       r3, 0x4330
	  lfd       f1, 0x1D30(r2)
	  stb       r0, 0xB0(r4)
	  lwz       r4, 0x40(r31)
	  stw       r3, 0x8(r1)
	  lha       r4, 0x6(r4)
	  lfs       f2, 0x50(r31)
	  mulli     r0, r4, 0x3
	  srawi     r0, r0, 0x2
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xF8
	  xoris     r0, r4, 0x8000
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r3, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x50(r31)
	  lwz       r3, 0x48(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x58(r31)
	  b         .loc_0x114

	.loc_0xF8:
	  lfs       f0, 0x1D28(r2)
	  stfs      f0, 0x58(r31)
	  stfs      f0, 0x50(r31)
	  b         .loc_0x114

	.loc_0x108:
	  lwz       r3, 0x38(r31)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x114:
	  lfs       f1, 0x50(r31)
	  lfs       f0, 0x0(r26)
	  stw       r27, 0x10(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x50(r31)
	  lfs       f1, 0x58(r31)
	  lfs       f0, 0x0(r26)
	  fadds     f0, f1, f0
	  stfs      f0, 0x58(r31)
	  lwz       r3, 0x40(r31)
	  lfs       f1, 0x50(r31)
	  lha       r0, 0x6(r3)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f31
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  beq-      .loc_0x190
	  lwz       r3, 0x48(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  lha       r0, 0x6(r3)
	  lfs       f1, 0x58(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f31
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x194

	.loc_0x190:
	  li        r30, 0x1

	.loc_0x194:
	  addi      r31, r31, 0x4
	  addi      r29, r29, 0x1

	.loc_0x19C:
	  lwz       r0, 0x68(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x3C
	  mr        r3, r30
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040247C
 * Size:	000040
 */
void kh::Screen::ObjFinalFloor::stopSound(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x6C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  bl        0x693C8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804024BC
 * Size:	00015C
 */
void kh::Screen::ObjFinalFloor::restartSound(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r5, r3
	  lfd       f1, 0x1D30(r2)
	  stw       r0, 0x24(r1)
	  lis       r0, 0x4330
	  lis       r4, 0x804A
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x78A8
	  stw       r30, 0x18(r1)
	  lwz       r3, 0x40(r3)
	  stw       r0, 0x8(r1)
	  lha       r0, 0x6(r3)
	  lfs       f2, 0x50(r5)
	  mulli     r0, r0, 0x3
	  srawi     r0, r0, 0x2
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x144
	  lwz       r3, -0x67A8(r13)
	  addi      r5, r5, 0x6C
	  li        r4, 0x1824
	  li        r6, 0
	  bl        -0xC9EB8
	  lis       r3, 0xC001
	  addi      r3, r3, 0x1025
	  bl        0x6923C
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  addi      r3, r31, 0x60
	  addi      r5, r31, 0x6C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x3D7F14

	.loc_0x9C:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xBC
	  addi      r3, r31, 0x60
	  addi      r5, r31, 0x6C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x3D7F34

	.loc_0xBC:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0x6C
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x3D7F54

	.loc_0xDC:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  bne-      .loc_0x100
	  addi      r3, r31, 0x78
	  addi      r5, r31, 0x84
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x3D7F78

	.loc_0x100:
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x130
	  addi      r3, r31, 0xA8
	  addi      r5, r31, 0x6C
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x3D7FA8

	.loc_0x130:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
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
 * Address:	80402618
 * Size:	000040
 */
void kh::Screen::SceneFinalFloor::doConfirmSetScene((Screen::SetSceneArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  subfic    r4, r3, 0x271A
	  subi      r0, r3, 0x271A
	  or        r0, r4, r0
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402658
 * Size:	00000C
 */
void kh::Screen::SceneFinalFloor::getResName( const
{
	/*
	.loc_0x0:
	  lis       r3, 0x804A
	  subi      r3, r3, 0x77EC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402664
 * Size:	000008
 */
void kh::Screen::SceneFinalFloor::isUseBackupSceneInfo(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040266C
 * Size:	000008
 */
void kh::Screen::SceneFinalFloor::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4E22
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402674
 * Size:	000008
 */
void kh::Screen::SceneFinalFloor::getOwnerID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8040267C
 * Size:	000014
 */
void kh::Screen::SceneFinalFloor::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5F46
	  lis       r3, 0x46
	  addi      r4, r4, 0x4C52
	  addi      r3, r3, 0x494E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402690
 * Size:	0000BC
 */
void kh::Screen::SceneFinalFloor::doCreateObj( (JKRArchive *))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x70
	  bl        -0x3DE810
	  mr.       r31, r3
	  beq-      .loc_0x8C
	  bl        0x51428
	  lis       r4, 0x804F
	  li        r3, 0
	  subi      r4, r4, 0x5304
	  lfs       f0, 0x1D28(r2)
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x10
	  li        r0, 0x1
	  stw       r4, 0x18(r31)
	  stw       r3, 0x38(r31)
	  stw       r3, 0x40(r31)
	  stw       r3, 0x48(r31)
	  stfs      f0, 0x58(r31)
	  stfs      f0, 0x50(r31)
	  stfs      f0, 0x60(r31)
	  stw       r3, 0x3C(r31)
	  stw       r3, 0x44(r31)
	  stw       r3, 0x4C(r31)
	  stfs      f0, 0x5C(r31)
	  stfs      f0, 0x54(r31)
	  stfs      f0, 0x64(r31)
	  stw       r0, 0x68(r31)
	  stw       r3, 0x6C(r31)

	.loc_0x8C:
	  stw       r31, 0x220(r29)
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x4F648
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
 * Address:	8040274C
 * Size:	0000AC
 */
void kh::Screen::ObjFinalFloor::__dt(void)
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
	  lis       r4, 0x804F
	  subi      r4, r4, 0x5304
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
	  bl        0xEE20
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x3E5788
	  mr        r3, r30
	  li        r4, 0
	  bl        0xEDC0

	.loc_0x80:
	  extsh.    r0, r31
	  ble-      .loc_0x90
	  mr        r3, r30
	  bl        -0x3DE724

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
 * Address:	804027F8
 * Size:	00004C
 */
void __sinit_khFinalFloor_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  li        r0, -0x1
	  addi      r5, r3, 0x48B0
	  lis       r4, 0x804F
	  lfs       f3, 0x0(r5)
	  lis       r3, 0x8051
	  lfs       f2, 0x1D38(r2)
	  addi      r3, r3, 0x4128
	  stfsu     f3, -0x5360(r4)
	  lfs       f1, 0x1D3C(r2)
	  lfs       f0, 0x1D40(r2)
	  stw       r0, -0x6550(r13)
	  stfs      f3, -0x654C(r13)
	  stfs      f3, 0x4(r4)
	  stfs      f3, 0x8(r4)
	  stfs      f2, 0x4(r3)
	  stfs      f1, 0x8(r3)
	  stfs      f0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80402844
 * Size:	000008
 */
void @24@kh::Screen::ObjFinalFloor::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0xFC
	*/
}
