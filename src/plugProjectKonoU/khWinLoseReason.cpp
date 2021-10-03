

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void kh::Screen::ObjWinLoseReason::__ct( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80410714
 * Size:	0000CC
 */
void kh::Screen::ObjWinLoseReason::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x6B10
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x148
  bl        -0x3EC89C
  mr.       r0, r3
  beq-      .loc_0x40
  bl        0x24660
  mr        r0, r3

.loc_0x40:
  stw       r0, 0x38(r29)
  mr        r6, r30
  addi      r4, r31, 0x14
  lis       r5, 0x104
  lwz       r3, 0x38(r29)
  bl        -0x3D1144
  mr        r4, r30
  addi      r3, r31, 0x24
  bl        -0x3ED75C
  bl        -0x3C8E5C
  stw       r3, 0x3C(r29)
  mr        r4, r30
  addi      r3, r31, 0x34
  bl        -0x3ED770
  bl        -0x3C8E70
  stw       r3, 0x40(r29)
  lwz       r3, 0x38(r29)
  lwz       r4, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  lwz       r4, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	804107E0
 * Size:	000008
 */
void kh::Screen::ObjWinLoseReason::doUpdate(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	804107E8
 * Size:	000004
 */
void kh::Screen::ObjWinLoseReason::doDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void kh::Screen::ObjWinLoseReason::updateAnimation(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804107EC
 * Size:	000060
 */
void kh::Screen::SceneWinLoseReason::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x40F90
  lis       r3, 0x804F
  li        r4, 0
  subi      r3, r3, 0x4BA0
  li        r0, -0x1
  stw       r3, 0x0(r31)
  mr        r3, r31
  stw       r4, 0x224(r31)
  stw       r4, 0x220(r31)
  stw       r0, 0x22C(r31)
  stw       r0, 0x228(r31)
  stb       r4, 0x231(r31)
  stb       r4, 0x230(r31)
  stw       r4, 0x234(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041084C
 * Size:	000588
 */
void kh::Screen::SceneWinLoseReason::doCreateObj( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  lis       r5, 0x5F52
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r3
  mr        r29, r4
  subi      r31, r6, 0x6B10
  addi      r6, r5, 0x534E
  li        r4, 0x4B48
  li        r5, 0x574C
  lwz       r3, 0x21C(r3)
  bl        -0x101564
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  addi      r3, r31, 0
  addi      r5, r31, 0x44
  li        r4, 0x8C
  crclr     6, 0x6
  bl        -0x3E625C

.loc_0x54:
  lwz       r30, 0x21C(r28)
  lwz       r0, 0x8(r30)
  stw       r0, 0x228(r28)
  lwz       r0, 0x8(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x118
  bge-      .loc_0x7C
  cmpwi     r0, 0x1
  bge-      .loc_0x88
  b         .loc_0x210

.loc_0x7C:
  cmpwi     r0, 0x4
  bge-      .loc_0x210
  b         .loc_0x1A8

.loc_0x88:
  li        r3, 0x90
  bl        -0x3ECA34
  mr.       r27, r3
  beq-      .loc_0xB4
  addi      r4, r31, 0x54
  bl        -0xC89A0
  lis       r3, 0x804E
  subi      r3, r3, 0x4880
  stw       r3, 0x0(r27)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r27)

.loc_0xB4:
  stw       r27, 0x220(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x220(r28)
  bl        0x41464
  lwz       r27, 0x220(r28)
  cmplwi    r27, 0
  bne-      .loc_0xE8
  addi      r3, r31, 0
  addi      r5, r31, 0x60
  li        r4, 0x95
  crclr     6, 0x6
  bl        -0x3E62F0

.loc_0xE8:
  lis       r4, 0x8051
  lwz       r3, 0x7C(r27)
  addi      r4, r4, 0x41C8
  lfs       f1, 0x4(r4)
  bl        -0xC7F9C
  li        r0, 0x1
  lis       r3, 0x8051
  stw       r0, 0x88(r27)
  addi      r3, r3, 0x41C8
  lbz       r0, 0x18(r3)
  sth       r0, 0x8C(r27)
  b         .loc_0x218

.loc_0x118:
  li        r3, 0x90
  bl        -0x3ECAC4
  mr.       r27, r3
  beq-      .loc_0x144
  addi      r4, r31, 0x6C
  bl        -0xC8A30
  lis       r3, 0x804E
  subi      r3, r3, 0x49F4
  stw       r3, 0x0(r27)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r27)

.loc_0x144:
  stw       r27, 0x220(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x220(r28)
  bl        0x413D4
  lwz       r27, 0x220(r28)
  cmplwi    r27, 0
  bne-      .loc_0x178
  addi      r3, r31, 0
  addi      r5, r31, 0x60
  li        r4, 0x9F
  crclr     6, 0x6
  bl        -0x3E6380

.loc_0x178:
  lis       r4, 0x8051
  lwz       r3, 0x7C(r27)
  addi      r4, r4, 0x41C8
  lfs       f1, 0x4(r4)
  bl        -0xC802C
  li        r0, 0x1
  lis       r3, 0x8051
  stw       r0, 0x88(r27)
  addi      r3, r3, 0x41C8
  lbz       r0, 0x18(r3)
  sth       r0, 0x8C(r27)
  b         .loc_0x218

.loc_0x1A8:
  li        r3, 0x50
  bl        -0x3ECB54
  mr.       r27, r3
  beq-      .loc_0x1F0
  bl        0x430E4
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x4B50
  lfs       f0, 0x1EE0(r2)
  stw       r3, 0x0(r27)
  addi      r3, r3, 0x10
  stw       r3, 0x18(r27)
  stw       r0, 0x38(r27)
  stw       r0, 0x3C(r27)
  stw       r0, 0x40(r27)
  stfs      f0, 0x48(r27)
  stfs      f0, 0x44(r27)
  stw       r0, 0x4C(r27)

.loc_0x1F0:
  stw       r27, 0x220(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x220(r28)
  bl        0x41328
  li        r0, 0x1
  stb       r0, 0x230(r28)
  b         .loc_0x218

.loc_0x210:
  li        r0, 0x1
  stb       r0, 0x230(r28)

.loc_0x218:
  lwz       r0, 0xC(r30)
  stw       r0, 0x22C(r28)
  lwz       r0, 0xC(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x2D8
  bge-      .loc_0x23C
  cmpwi     r0, 0x1
  bge-      .loc_0x248
  b         .loc_0x3D4

.loc_0x23C:
  cmpwi     r0, 0x4
  bge-      .loc_0x3D4
  b         .loc_0x368

.loc_0x248:
  li        r3, 0x90
  bl        -0x3ECBF4
  mr.       r30, r3
  beq-      .loc_0x274
  addi      r4, r31, 0x78
  bl        -0xC8B60
  lis       r3, 0x804E
  subi      r3, r3, 0x48FC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r30)

.loc_0x274:
  stw       r30, 0x224(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x224(r28)
  bl        0x412A4
  lwz       r27, 0x224(r28)
  cmplwi    r27, 0
  bne-      .loc_0x2A8
  addi      r3, r31, 0
  addi      r5, r31, 0x60
  li        r4, 0xB4
  crclr     6, 0x6
  bl        -0x3E64B0

.loc_0x2A8:
  lis       r4, 0x8051
  lwz       r3, 0x7C(r27)
  addi      r4, r4, 0x41C8
  lfs       f1, 0x8(r4)
  bl        -0xC815C
  li        r0, 0x2
  lis       r3, 0x8051
  stw       r0, 0x88(r27)
  addi      r3, r3, 0x41C8
  lbz       r0, 0x18(r3)
  sth       r0, 0x8C(r27)
  b         .loc_0x3DC

.loc_0x2D8:
  li        r3, 0x90
  bl        -0x3ECC84
  mr.       r30, r3
  beq-      .loc_0x304
  addi      r4, r31, 0x6C
  bl        -0xC8BF0
  lis       r3, 0x804E
  subi      r3, r3, 0x49F4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x10
  stw       r0, 0x18(r30)

.loc_0x304:
  stw       r30, 0x224(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x224(r28)
  bl        0x41214
  lwz       r27, 0x224(r28)
  cmplwi    r27, 0
  bne-      .loc_0x338
  addi      r3, r31, 0
  addi      r5, r31, 0x60
  li        r4, 0xBE
  crclr     6, 0x6
  bl        -0x3E6540

.loc_0x338:
  lis       r4, 0x8051
  lwz       r3, 0x7C(r27)
  addi      r4, r4, 0x41C8
  lfs       f1, 0x8(r4)
  bl        -0xC81EC
  li        r0, 0x2
  lis       r3, 0x8051
  stw       r0, 0x88(r27)
  addi      r3, r3, 0x41C8
  lbz       r0, 0x18(r3)
  sth       r0, 0x8C(r27)
  b         .loc_0x3DC

.loc_0x368:
  li        r3, 0x50
  bl        -0x3ECD14
  mr.       r30, r3
  beq-      .loc_0x3B4
  bl        0x42F24
  lis       r4, 0x804F
  li        r3, 0
  subi      r4, r4, 0x4B50
  lfs       f0, 0x1EE0(r2)
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x10
  li        r0, 0x1
  stw       r4, 0x18(r30)
  stw       r3, 0x38(r30)
  stw       r3, 0x3C(r30)
  stw       r3, 0x40(r30)
  stfs      f0, 0x48(r30)
  stfs      f0, 0x44(r30)
  stw       r0, 0x4C(r30)

.loc_0x3B4:
  stw       r30, 0x224(r28)
  mr        r3, r28
  mr        r5, r29
  lwz       r4, 0x224(r28)
  bl        0x41164
  li        r0, 0x1
  stb       r0, 0x231(r28)
  b         .loc_0x3DC

.loc_0x3D4:
  li        r0, 0x1
  stb       r0, 0x231(r28)

.loc_0x3DC:
  mr        r3, r28
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0xA0
  bl        0x41648
  lwz       r0, 0x228(r28)
  li        r3, 0
  cmpwi     r0, 0x2
  beq-      .loc_0x420
  bge-      .loc_0x414
  cmpwi     r0, 0x1
  bge-      .loc_0x428
  b         .loc_0x434

.loc_0x414:
  cmpwi     r0, 0x4
  bge-      .loc_0x434
  b         .loc_0x430

.loc_0x420:
  ori       r3, r3, 0x1
  b         .loc_0x434

.loc_0x428:
  ori       r3, r3, 0x2
  b         .loc_0x434

.loc_0x430:
  ori       r3, r3, 0x4

.loc_0x434:
  lwz       r0, 0x22C(r28)
  cmpwi     r0, 0x2
  beq-      .loc_0x45C
  bge-      .loc_0x450
  cmpwi     r0, 0x1
  bge-      .loc_0x464
  b         .loc_0x470

.loc_0x450:
  cmpwi     r0, 0x4
  bge-      .loc_0x470
  b         .loc_0x46C

.loc_0x45C:
  ori       r3, r3, 0x10
  b         .loc_0x470

.loc_0x464:
  ori       r3, r3, 0x20
  b         .loc_0x470

.loc_0x46C:
  ori       r3, r3, 0x40

.loc_0x470:
  andi.     r0, r3, 0x44
  bne-      .loc_0x574
  rlwinm.   r0,r3,0,30,31
  bne-      .loc_0x4A0
  rlwinm.   r0,r3,0,26,26
  beq-      .loc_0x494
  lis       r3, 0xC001
  addi      r3, r3, 0x103D
  b         .loc_0x4D0

.loc_0x494:
  lis       r3, 0xC001
  addi      r3, r3, 0x1040
  b         .loc_0x4D0

.loc_0x4A0:
  rlwinm.   r0,r3,0,26,27
  bne-      .loc_0x4C8
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x4BC
  lis       r3, 0xC001
  addi      r3, r3, 0x103E
  b         .loc_0x4D0

.loc_0x4BC:
  lis       r3, 0xC001
  addi      r3, r3, 0x1041
  b         .loc_0x4D0

.loc_0x4C8:
  lis       r3, 0xC001
  addi      r3, r3, 0x1045

.loc_0x4D0:
  bl        0x5AA54
  bl        0x5B1C8
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x4F8
  addi      r3, r31, 0x84
  addi      r5, r31, 0x60
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x3E6700

.loc_0x4F8:
  lwz       r27, -0x6780(r13)
  cmplwi    r27, 0
  bne-      .loc_0x518
  addi      r3, r31, 0x84
  addi      r5, r31, 0x60
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x3E6720

.loc_0x518:
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x538
  addi      r3, r31, 0x90
  addi      r5, r31, 0x60
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x3E6740

.loc_0x538:
  lwz       r3, 0x4(r27)
  lwz       r27, 0x4(r3)
  cmplwi    r27, 0
  bne-      .loc_0x55C
  addi      r3, r31, 0x90
  addi      r5, r31, 0x9C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x3E6764

.loc_0x55C:
  mr        r3, r27
  li        r4, 0x2
  lwz       r12, 0x0(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x574:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80410DD4
 * Size:	0000CC
 */
void kh::Screen::SceneWinLoseReason::doUpdateActive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x8051
  li        r28, 0
  mr        r29, r31
  addi      r30, r3, 0x41C8
  lwz       r4, 0x234(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x234(r31)

.loc_0x30:
  lwz       r0, 0x228(r29)
  cmpwi     r0, 0x3
  bge-      .loc_0xA8
  cmpwi     r0, 0x1
  bge-      .loc_0x48
  b         .loc_0xA8

.loc_0x48:
  lwz       r3, 0x234(r31)
  lwz       r0, 0xC(r30)
  cmpw      r3, r0
  bne-      .loc_0x90
  lwz       r27, 0x220(r29)
  cmplwi    r27, 0
  bne-      .loc_0x80
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x6B10
  li        r4, 0x110
  subi      r5, r5, 0x6AB0
  crclr     6, 0x6
  bl        -0x3E6810

.loc_0x80:
  lbz       r0, 0x18(r30)
  neg       r0, r0
  sth       r0, 0x8C(r27)
  b         .loc_0xA8

.loc_0x90:
  lwz       r0, 0x10(r30)
  cmpw      r3, r0
  ble-      .loc_0xA8
  addi      r0, r28, 0x230
  li        r3, 0x1
  stbx      r3, r31, r0

.loc_0xA8:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x2
  blt+      .loc_0x30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80410EA0
 * Size:	000020
 */
void kh::Screen::SceneWinLoseReason::doEnd( (Screen::EndSceneArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x40E4C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80410EC0
 * Size:	00000C
 */
void kh::Screen::SceneWinLoseReason::getResName( const
{
/*
.loc_0x0:
  lis       r3, 0x804A
  subi      r3, r3, 0x6A50
  blr
*/
}

/*
 * --INFO--
 * Address:	80410ECC
 * Size:	000008
 */
void kh::Screen::SceneWinLoseReason::getSceneType(void)
{
/*
.loc_0x0:
  li        r3, 0x4E29
  blr
*/
}

/*
 * --INFO--
 * Address:	80410ED4
 * Size:	000008
 */
void kh::Screen::SceneWinLoseReason::getOwnerID(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	80410EDC
 * Size:	000010
 */
void kh::Screen::SceneWinLoseReason::getMemberID(void)
{
/*
.loc_0x0:
  lis       r4, 0x5F52
  li        r3, 0x574C
  addi      r4, r4, 0x534E
  blr
*/
}

/*
 * --INFO--
 * Address:	80410EEC
 * Size:	0000AC
 */
void kh::Screen::ObjWinLoseReason::__dt(void)
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
  subi      r4, r4, 0x4B50
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
  bl        0x680
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3F3F28
  mr        r3, r30
  li        r4, 0
  bl        0x620

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3ECEC4

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
 * Address:	80410F98
 * Size:	000040
 */
void __sinit_khWinLoseReason_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  lfs       f2, 0x1EE4(r2)
  addi      r5, r3, 0x41C8
  li        r4, 0x64
  lfs       f1, 0x1EE8(r2)
  li        r3, 0x7D
  lfs       f0, 0x1EEC(r2)
  li        r0, 0x2
  stfs      f2, 0x0(r5)
  stfs      f1, 0x4(r5)
  stfs      f0, 0x8(r5)
  stw       r4, 0xC(r5)
  stw       r3, 0x10(r5)
  stw       r4, 0x14(r5)
  stb       r0, 0x18(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	80410FD8
 * Size:	000008
 */
void @24@kh::Screen::ObjWinLoseReason::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xF0
*/
}
