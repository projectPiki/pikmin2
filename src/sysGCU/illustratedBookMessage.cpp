

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void P2JME::IllustratedBook::TSequenceProcessor::__ct( (JMessage::TReference *, JMessage::TControl *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80454F88
 * Size:	000070
 */
void P2JME::TSeqProcNoSeq::__dt(void)
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
  lis       r4, 0x804F
  subi      r0, r4, 0x25C8
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x3708
  stw       r0, 0x0(r30)
  bl        -0x44D7A0

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x430F24

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
 * Address:	80454FF8
 * Size:	00004C
 */
void makeMatrix__Q35P2JME15IllustratedBook19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mr        r3, r4
  lfs       f2, 0x2860(r2)
  stw       r0, 0x24(r1)
  addi      r4, r1, 0x14
  lfs       f0, 0x2864(r2)
  addi      r5, r1, 0x8
  stfs      f2, 0x14(r1)
  stfs      f2, 0x18(r1)
  stfs      f2, 0x1C(r1)
  stfs      f1, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x2CD58
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80455044
 * Size:	000060
 */
void P2JME::IllustratedBook::TControl::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x14F6C
  lis       r3, 0x804F
  lfs       f2, 0x2864(r2)
  subi      r3, r3, 0x2718
  li        r0, 0
  stw       r3, 0x0(r31)
  mr        r3, r31
  lfs       f1, 0x2868(r2)
  stfs      f2, 0x5C(r31)
  lfs       f0, 0x286C(r2)
  stfs      f2, 0x60(r31)
  stw       r0, 0x64(r31)
  stfs      f1, 0x6C(r31)
  stfs      f0, 0x70(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804550A4
 * Size:	00003C
 */
void P2JME::IllustratedBook::TControl::onInit(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x14C58
  mr        r3, r31
  li        r4, 0x200
  bl        -0x14F88
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804550E0
 * Size:	00003C
 */
void P2JME::IllustratedBook::TControl::reset(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x14D30
  lfs       f0, 0x2864(r2)
  stfs      f0, 0x5C(r31)
  stfs      f0, 0x68(r31)
  stfs      f0, 0x60(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8045511C
 * Size:	000028
 */
void P2JME::IllustratedBook::TControl::getScrollPosition(void)
{
/*
.loc_0x0:
  lfs       f1, 0x68(r3)
  lfs       f0, 0x2864(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1C
  lfs       f1, 0x2860(r2)
  blr       

.loc_0x1C:
  lfs       f0, 0x5C(r3)
  fdivs     f1, f0, f1
  blr
*/
}

/*
 * --INFO--
 * Address:	80455144
 * Size:	0000F4
 */
void P2JME::IllustratedBook::TControl::scroll( (float))
{
/*
.loc_0x0:
  lfs       f0, 0x2864(r2)
  stwu      r1, -0x20(r1)
  fcmpu     cr0, f0, f1
  beq-      .loc_0xE4
  lfs       f0, 0x6C(r3)
  lwz       r4, -0x6514(r13)
  fmuls     f3, f1, f0
  lfs       f4, 0x2870(r2)
  lfs       f2, 0x54(r4)
  lfs       f0, 0x5C(r3)
  fmuls     f3, f4, f3
  fmadds    f0, f3, f2, f0
  stfs      f0, 0x5C(r3)
  lfs       f0, 0x5C(r3)
  lfs       f2, 0x68(r3)
  fcmpo     cr0, f0, f2
  bge-      .loc_0x48
  stfs      f2, 0x5C(r3)

.loc_0x48:
  lfs       f2, 0x5C(r3)
  lfs       f0, 0x2864(r2)
  fcmpo     cr0, f2, f0
  ble-      .loc_0x5C
  stfs      f0, 0x5C(r3)

.loc_0x5C:
  lfs       f0, 0x2864(r2)
  lwz       r4, 0x40(r3)
  fcmpo     cr0, f1, f0
  lfs       f2, 0xC0(r4)
  ble-      .loc_0x78
  li        r4, 0
  b         .loc_0x7C

.loc_0x78:
  li        r4, -0x1

.loc_0x7C:
  lfs       f0, 0x5C(r3)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  fdivs     f0, f0, f2
  lfd       f1, 0x2878(r2)
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  add       r0, r4, r0
  xoris     r0, r0, 0x8000
  stw       r0, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f0, f2
  stfs      f0, 0x60(r3)
  lfs       f0, 0x60(r3)
  lfs       f1, 0x68(r3)
  fcmpo     cr0, f0, f1
  bge-      .loc_0xCC
  stfs      f1, 0x60(r3)

.loc_0xCC:
  lfs       f1, 0x60(r3)
  lfs       f0, 0x2864(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xEC
  stfs      f0, 0x60(r3)
  b         .loc_0xEC

.loc_0xE4:
  lfs       f0, 0x60(r3)
  stfs      f0, 0x5C(r3)

.loc_0xEC:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80455238
 * Size:	0000D0
 */
void P2JME::IllustratedBook::TControl::update( (Controller *, Controller *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  bl        -0x1C400
  lwz       r5, 0x40(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lbz       r4, 0xA4(r5)
  lfd       f2, 0x2878(r2)
  addi      r4, r4, 0x1
  lfs       f4, 0xC0(r5)
  xoris     r4, r4, 0x8000
  lfs       f0, 0x3C(r5)
  stw       r4, 0xC(r1)
  lfs       f3, 0x2870(r2)
  lfd       f1, 0x8(r1)
  stw       r0, 0x18(r1)
  fsubs     f1, f1, f2
  fnmsubs   f0, f4, f1, f0
  stfs      f0, 0x68(r31)
  lwz       r4, 0x40(r31)
  lfs       f0, 0x68(r31)
  lfs       f1, 0xC0(r4)
  fdivs     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x1C(r1)
  lfd       f0, 0x18(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  stfs      f0, 0x68(r31)
  lwz       r5, 0x40(r31)
  lwz       r4, -0x6514(r13)
  lfs       f4, 0x58(r5)
  lfs       f0, 0x5C(r31)
  lfs       f2, 0x70(r31)
  fsubs     f1, f0, f4
  lfs       f0, 0x54(r4)
  fmuls     f1, f2, f1
  fmuls     f1, f3, f1
  fmuls     f0, f1, f0
  fadds     f0, f0, f4
  stfs      f0, 0x58(r5)
  lwz       r31, 0x2C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80455308
 * Size:	000080
 */
void P2JME::IllustratedBook::TControl::setTextBoxInfo( (J2DTextBox *))
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
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  beq-      .loc_0x58
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x4560
  li        r4, 0xD4
  subi      r5, r5, 0x4544
  crclr     6, 0x6
  bl        -0x42AD1C

.loc_0x58:
  stw       r31, 0x64(r30)
  lwz       r3, 0x40(r30)
  lwz       r4, 0x64(r30)
  bl        -0x18500
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
 * Address:	80455388
 * Size:	000078
 */
void P2JME::IllustratedBook::TControl::draw( (float (*)[4], float (*)[4]))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bne-      .loc_0x54
  lwz       r0, 0x64(r30)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x4560
  li        r4, 0xE1
  subi      r5, r5, 0x4544
  crclr     6, 0x6
  bl        -0x42AD90

.loc_0x4C:
  lwz       r3, 0x64(r30)
  addi      r4, r3, 0x80

.loc_0x54:
  mr        r3, r30
  mr        r5, r31
  bl        -0x1C4E8
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
 * Address:	80455400
 * Size:	000080
 */
void P2JME::IllustratedBook::TControl::__dt(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x2718
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0x33A4
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x3610
  stw       r0, 0x0(r30)
  bl        -0x44D068

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x4313AC

.loc_0x64:
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
 * Address:	80455480
 * Size:	000020
 */
void P2JME::IllustratedBook::TControl::draw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x150A8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804554A0
 * Size:	000084
 */
void P2JME::IllustratedBook::TControl::createRenderingProcessor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x144
  bl        -0x431618
  mr.       r31, r3
  beq-      .loc_0x68
  lwz       r0, 0x38(r30)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x4538
  li        r4, 0x79
  subi      r5, r5, 0x4544
  crclr     6, 0x6
  bl        -0x42AEAC

.loc_0x50:
  lwz       r4, 0x38(r30)
  mr        r3, r31
  bl        -0x15FFC
  lis       r3, 0x804F
  subi      r0, r3, 0x26D0
  stw       r0, 0x0(r31)

.loc_0x68:
  stw       r31, 0x40(r30)
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
 * Address:	80455524
 * Size:	000094
 */
void P2JME::IllustratedBook::TControl::createSequenceProcessor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0x70
  bl        -0x43169C
  mr.       r31, r3
  beq-      .loc_0x78
  lwz       r0, 0x38(r30)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x4538
  li        r4, 0x79
  subi      r5, r5, 0x4544
  crclr     6, 0x6
  bl        -0x42AF30

.loc_0x50:
  lwz       r4, 0x38(r30)
  mr        r3, r31
  mr        r5, r30
  bl        -0x1DD3C
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x25C8
  stw       r0, 0x0(r31)
  subi      r0, r3, 0x2640
  stw       r0, 0x0(r31)

.loc_0x78:
  stw       r31, 0x3C(r30)
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
 * Address:	804555B8
 * Size:	0000B8
 */
void P2JME::IllustratedBook::TRenderingProcessor::__dt(void)
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
  beq-      .loc_0x9C
  lis       r3, 0x804F
  subi      r0, r3, 0x26D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x8C
  lis       r3, 0x804F
  addic.    r0, r30, 0x110
  subi      r0, r3, 0x335C
  stw       r0, 0x0(r30)
  beq-      .loc_0x5C
  addi      r3, r30, 0x128
  li        r4, -0x1
  bl        -0x4407C
  addi      r3, r30, 0x110
  li        r4, -0x1
  bl        -0x44088

.loc_0x5C:
  cmplwi    r30, 0
  beq-      .loc_0x8C
  lis       r3, 0x804F
  subi      r0, r3, 0x3550
  stw       r0, 0x0(r30)
  beq-      .loc_0x8C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x34CC
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x44D544

.loc_0x8C:
  extsh.    r0, r31
  ble-      .loc_0x9C
  mr        r3, r30
  bl        -0x43159C

.loc_0x9C:
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
 * Address:	80455670
 * Size:	000008
 */
void P2JME::IllustratedBook::TRenderingProcessor::doTagControlAbtnWait(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80455678
 * Size:	000080
 */
void P2JME::IllustratedBook::TSequenceProcessor::__dt(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x2640
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0x25C8
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x3708
  stw       r0, 0x0(r30)
  bl        -0x44DEA0

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x431624

.loc_0x64:
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
 * Address:	804556F8
 * Size:	000008
 */
void P2JME::TSeqProcNoSeq::do_isReady(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}
