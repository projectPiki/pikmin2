

/*
 * --INFO--
 * Address:	800B0944
 * Size:	000488
 */
void JAInter::SequenceMgr::init(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stfd      f29, 0x50(r1)
  psq_st    f29,0x58(r1),0,0
  stfd      f28, 0x40(r1)
  psq_st    f28,0x48(r1),0,0
  stmw      r20, 0x10(r1)
  subi      r3, r13, 0x73F0
  bl        0x4D84
  lwz       r21, -0x7494(r13)
  bl        -0x2EB4
  rlwinm    r3,r3,2,0,29
  mr        r4, r21
  li        r5, 0x20
  bl        -0x8C948
  stw       r3, -0x73F4(r13)
  li        r21, 0
  b         .loc_0x84

.loc_0x5C:
  lwz       r3, -0x7498(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r0, r3
  lwz       r3, -0x73F0(r13)
  mr        r4, r0
  bl        -0x8A0DC
  addi      r21, r21, 0x1

.loc_0x84:
  bl        -0x2F14
  cmplw     r21, r3
  blt+      .loc_0x5C
  lwz       r6, -0x73F0(r13)
  lis       r3, 0x800B
  subi      r23, r3, 0x1A9C
  lis       r4, 0x800B
  lis       r5, 0x800B
  lis       r3, 0x800B
  lwz       r30, 0x0(r6)
  subi      r29, r4, 0x1ACC
  mr        r24, r23
  mr        r25, r23
  mr        r26, r23
  mr        r28, r23
  subi      r27, r5, 0x1AB4
  addi      r22, r3, 0xDCC
  b         .loc_0x360

.loc_0xCC:
  lwz       r31, 0x0(r30)
  bl        -0x2E88
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r21,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x8C9E4
  mr        r4, r23
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10FB0
  stw       r3, 0x298(r31)
  bl        -0x2EBC
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r21,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x8CA18
  mr        r4, r23
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10F7C
  stw       r3, 0x29C(r31)
  bl        -0x2EF0
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r21,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x8CA4C
  mr        r4, r24
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10F48
  stw       r3, 0x2A0(r31)
  bl        -0x2F24
  rlwinm    r6,r3,4,20,27
  lwz       r4, -0x7494(r13)
  rlwinm    r21,r3,0,24,31
  li        r5, 0x20
  addi      r3, r6, 0x10
  bl        -0x8CA80
  mr        r4, r25
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10F14
  stw       r3, 0x2A4(r31)
  bl        -0x3038
  mr        r21, r3
  rlwinm    r3,r3,4,0,27
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  addi      r3, r3, 0x10
  bl        -0x8CAB4
  mr        r4, r26
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10EE0
  stw       r3, 0x2A8(r31)
  bl        -0x306C
  mr        r21, r3
  rlwinm    r3,r3,4,0,27
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  addi      r3, r3, 0x10
  bl        -0x8CAE8
  mr        r4, r27
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10EAC
  stw       r3, 0x2AC(r31)
  bl        -0x30A0
  mr        r21, r3
  rlwinm    r3,r3,4,0,27
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  addi      r3, r3, 0x10
  bl        -0x8CB1C
  mr        r4, r28
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10E78
  stw       r3, 0x2B0(r31)
  bl        -0x30D4
  mr        r21, r3
  rlwinm    r3,r3,4,0,27
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  addi      r3, r3, 0x10
  bl        -0x8CB50
  mr        r4, r29
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10E44
  stw       r3, 0x2B4(r31)
  bl        -0x3108
  mr        r21, r3
  rlwinm    r3,r3,4,0,27
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  addi      r3, r3, 0x10
  bl        -0x8CB84
  mr        r4, r29
  mr        r7, r21
  li        r5, 0
  li        r6, 0x10
  bl        0x10E10
  stw       r3, 0x2B8(r31)
  lwz       r21, -0x7494(r13)
  bl        -0x3140
  rlwinm    r3,r3,2,0,29
  mr        r4, r21
  li        r5, 0x20
  bl        -0x8CBB4
  stw       r3, 0x2BC(r31)
  li        r20, 0
  li        r21, 0
  b         .loc_0x2EC

.loc_0x2CC:
  lwz       r4, -0x7494(r13)
  li        r3, 0x20
  li        r5, 0x20
  bl        -0x8CBD4
  lwz       r4, 0x2BC(r31)
  addi      r20, r20, 0x1
  stwx      r3, r4, r21
  addi      r21, r21, 0x4

.loc_0x2EC:
  bl        -0x3184
  cmplw     r20, r3
  blt+      .loc_0x2CC
  lwz       r21, -0x7494(r13)
  bl        -0x3194
  rlwinm    r3,r3,2,0,29
  mr        r4, r21
  li        r5, 0x20
  bl        -0x8CC08
  stw       r3, 0x2FC(r31)
  lwz       r21, -0x7494(r13)
  bl        -0x31B0
  mr        r4, r21
  li        r5, 0x20
  bl        -0x8CC20
  stw       r3, 0x300(r31)
  bl        -0x31C4
  mr        r21, r3
  lwz       r4, -0x7494(r13)
  li        r5, 0x20
  addi      r3, r21, 0x10
  bl        -0x8CC3C
  mr        r4, r22
  mr        r7, r21
  li        r5, 0
  li        r6, 0x1
  bl        0x10D58
  stw       r3, 0x304(r31)
  lwz       r30, 0xC(r30)

.loc_0x360:
  cmplwi    r30, 0
  bne+      .loc_0xCC
  bl        -0x31E0
  mr        r21, r3
  lwz       r4, -0x7494(r13)
  mulli     r3, r21, 0x50
  li        r5, 0x20
  addi      r3, r3, 0x10
  bl        -0x8CC7C
  lis       r4, 0x800B
  mr        r7, r21
  addi      r4, r4, 0xDEC
  li        r5, 0
  li        r6, 0x50
  bl        0x10D14
  li        r25, 0
  stw       r3, -0x73F8(r13)
  lfs       f29, -0x73C0(r2)
  mr        r26, r25
  lfs       f30, -0x73B4(r2)
  li        r20, 0
  lfs       f31, -0x73B8(r2)
  lfs       f28, -0x73BC(r2)
  b         .loc_0x448

.loc_0x3C0:
  lwz       r3, -0x73F4(r13)
  li        r22, 0
  mr        r21, r22
  stwx      r22, r3, r25
  mr        r24, r22
  lwz       r0, -0x73F8(r13)
  add       r23, r0, r26
  stfs      f29, 0xC(r23)
  stfs      f28, 0x18(r23)
  stfs      f29, 0x10(r23)
  stfs      f31, 0x14(r23)
  stfs      f31, 0x1C(r23)
  stfs      f29, 0x20(r23)
  b         .loc_0x430

.loc_0x3F8:
  lwz       r3, 0x24(r23)
  addi      r21, r21, 0x1
  stfsx     f29, r3, r24
  lwz       r3, 0x30(r23)
  stfsx     f30, r3, r24
  lwz       r3, 0x28(r23)
  stfsx     f29, r3, r24
  lwz       r3, 0x2C(r23)
  stfsx     f31, r3, r24
  lwz       r3, 0x34(r23)
  stfsx     f31, r3, r24
  lwz       r3, 0x44(r23)
  stwx      r22, r3, r24
  addi      r24, r24, 0x4

.loc_0x430:
  bl        -0x32C8
  cmplw     r21, r3
  blt+      .loc_0x3F8
  addi      r25, r25, 0x4
  addi      r26, r26, 0x50
  addi      r20, r20, 0x1

.loc_0x448:
  bl        -0x32C0
  cmplw     r20, r3
  blt+      .loc_0x3C0
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  psq_l     f28,0x48(r1),0,0
  lfd       f28, 0x40(r1)
  lmw       r20, 0x10(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	800B0DCC
 * Size:	000020
 */
void JAInter::MuteBit::__ct(void)
{
/*
.loc_0x0:
  lbz       r0, 0x0(r3)
  li        r4, 0
  rlwimi    r0,r4,7,24,24
  stb       r0, 0x0(r3)
  lbz       r0, 0x0(r3)
  rlwimi    r0,r4,5,26,26
  stb       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B0DEC
 * Size:	00012C
 */
void JAInter::SeqUpdateData::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x20
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  stb       r0, 0x0(r3)
  li        r3, 0x958
  stb       r0, 0x1(r31)
  stb       r0, 0x2(r31)
  stb       r0, 0x3(r31)
  stw       r0, 0x8(r31)
  stw       r0, 0x48(r31)
  lwz       r4, -0x7494(r13)
  bl        -0x8CDE4
  lis       r4, 0x800B
  lis       r5, 0x800B
  addi      r4, r4, 0xF80
  li        r6, 0x48
  addi      r5, r5, 0xF18
  li        r7, 0x21
  bl        0x10BA8
  stw       r3, 0x4C(r31)
  lwz       r30, -0x7494(r13)
  bl        -0x33A8
  rlwinm    r3,r3,2,0,29
  mr        r4, r30
  li        r5, 0x20
  bl        -0x8CE1C
  stw       r3, 0x24(r31)
  lwz       r30, -0x7494(r13)
  bl        -0x33C4
  rlwinm    r3,r3,2,0,29
  mr        r4, r30
  li        r5, 0x20
  bl        -0x8CE38
  stw       r3, 0x30(r31)
  lwz       r30, -0x7494(r13)
  bl        -0x33E0
  rlwinm    r3,r3,2,0,29
  mr        r4, r30
  li        r5, 0x20
  bl        -0x8CE54
  stw       r3, 0x28(r31)
  lwz       r30, -0x7494(r13)
  bl        -0x33FC
  rlwinm    r3,r3,2,0,29
  mr        r4, r30
  li        r5, 0x20
  bl        -0x8CE70
  stw       r3, 0x2C(r31)
  lwz       r30, -0x7494(r13)
  bl        -0x3418
  rlwinm    r3,r3,2,0,29
  mr        r4, r30
  li        r5, 0x20
  bl        -0x8CE8C
  stw       r3, 0x34(r31)
  lwz       r30, -0x7494(r13)
  bl        -0x3434
  addi      r0, r3, 0x1
  mr        r4, r30
  rlwinm    r3,r0,2,0,29
  li        r5, 0x20
  bl        -0x8CEAC
  stw       r3, 0x44(r31)
  mr        r3, r31
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
 * Address:	800B0F18
 * Size:	000068
 */
void JAInter::PlayerParameter::__dt(void)
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
  beq-      .loc_0x4C
  addic.    r0, r30, 0x30
  beq-      .loc_0x3C
  addic.    r0, r30, 0x30
  beq-      .loc_0x3C
  addi      r3, r30, 0x30
  li        r4, 0
  bl        -0x8A780

.loc_0x3C:
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x8CEAC

.loc_0x4C:
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
 * Address:	800B0F80
 * Size:	000050
 */
void JAInter::PlayerParameter::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r31, r30, 0x30
  mr        r3, r31
  mr        r4, r31
  bl        -0x8A7EC
  li        r0, 0
  mr        r3, r30
  stw       r0, 0x10(r31)
  stw       r0, 0x14(r31)
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
 * Address:	800B0FD0
 * Size:	000058
 */
void JASPortCmd::~JASPortCmd()
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
  beq-      .loc_0x3C
  beq-      .loc_0x2C
  li        r4, 0
  bl        -0x8A828

.loc_0x2C:
  extsh.    r0, r31
  ble-      .loc_0x3C
  mr        r3, r30
  bl        -0x8CF54

.loc_0x3C:
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
 * Size:	000054
 */
void JSULink<JASPortCmd>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B1028
 * Size:	00006C
 */
void JAInter::SequenceMgr::getArchiveName( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stb       r0, 0x0(r3)
  bl        -0x3500
  cmplwi    r3, 0
  beq-      .loc_0x38
  bl        -0x350C
  mr        r4, r3
  mr        r3, r31
  bl        0x1978C

.loc_0x38:
  bl        -0x352C
  mr        r4, r3
  mr        r3, r31
  bl        0x1977C
  bl        -0x3524
  mr        r4, r3
  mr        r3, r31
  bl        0x1976C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B1094
 * Size:	000008
 */
void JAInter::SequenceMgr::setArchivePointer( (JKRArchive *))
{
/*
.loc_0x0:
  stw       r3, -0x73E8(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B109C
 * Size:	000008
 */
void JAInter::SequenceMgr::getArchivePointer(void)
{
/*
.loc_0x0:
  lwz       r3, -0x73E8(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B10A4
 * Size:	000008
 */
void JAInter::SequenceMgr::setCustomHeapCallback( (JAInter::SequenceMgr::CustomHeapInfo (*)(unsigned long, unsigned short, JAISequence *)))
{
/*
.loc_0x0:
  stw       r3, -0x73E4(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800B10AC
 * Size:	000038
 */
void JAInter::SequenceMgr::processGFrameSequence(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        .loc_0x38
  bl        0x530
  bl        0x5D0
  bl        0x450
  bl        0x6B4
  bl        0x750
  bl        0x970
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x38:
*/
}

/*
 * --INFO--
 * Address:	800B10E4
 * Size:	000430
 */
void JAInter::SequenceMgr::checkEntriedSeq(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r22, 0x18(r1)
  li        r29, 0
  li        r30, 0
  b         .loc_0x410

.loc_0x1C:
  lwz       r0, -0x73F8(r13)
  add       r28, r0, r30
  lwz       r3, 0x48(r28)
  cmplwi    r3, 0
  beq-      .loc_0x408
  lwz       r0, 0x8(r28)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x408
  lwz       r4, 0x44(r3)
  lwz       r3, -0x73E8(r13)
  lhz       r27, 0x6(r4)
  mr        r4, r27
  bl        -0x9AC0
  lwz       r12, -0x73E4(r13)
  mr        r26, r3
  cmplwi    r12, 0
  beq-      .loc_0x108
  mr        r5, r27
  addi      r3, r1, 0xC
  lwz       r6, 0x48(r28)
  li        r4, 0
  mtctr     r12
  bctrl     
  lbz       r0, 0x10(r1)
  lwz       r23, 0xC(r1)
  cmplwi    r0, 0x1
  mr        r31, r23
  bne-      .loc_0xF8
  lwz       r3, 0x48(r28)
  li        r4, 0x40
  bl        0x29DC
  cmplwi    r3, 0
  bne-      .loc_0xD4
  lwz       r5, 0x48(r28)
  li        r0, 0x1
  lis       r3, 0x800B
  mr        r4, r27
  stb       r0, 0x15(r5)
  addi      r7, r3, 0x2DFC
  mr        r5, r23
  mr        r6, r26
  stb       r0, 0x3(r28)
  mr        r8, r29
  lwz       r3, -0x73E8(r13)
  bl        -0x99A0
  b         .loc_0x3E4

.loc_0xD4:
  lwz       r3, -0x73E8(r13)
  mr        r4, r27
  mr        r5, r23
  mr        r6, r26
  bl        -0x9A88
  lwz       r3, 0x48(r28)
  li        r0, 0x2
  stb       r0, 0x15(r3)
  b         .loc_0x3E4

.loc_0xF8:
  lwz       r3, 0x48(r28)
  li        r0, 0x2
  stb       r0, 0x15(r3)
  b         .loc_0x3E4

.loc_0x108:
  lbz       r0, 0x3(r28)
  cmplwi    r0, 0
  bne-      .loc_0x408
  lwz       r3, 0x48(r28)
  addi      r4, r1, 0x8
  li        r25, 0
  lwz       r0, 0x20(r3)
  rlwinm    r3,r0,0,22,31
  bl        -0xC70
  mr.       r31, r3
  bne-      .loc_0x3A4
  lwz       r3, 0x48(r28)
  li        r4, 0x10
  bl        0x2934
  cmplwi    r3, 0
  beq-      .loc_0x188
  bl        -0xA3C
  stb       r3, 0x8(r1)
  mr        r3, r26
  lwz       r4, 0x48(r28)
  lwz       r0, 0x20(r4)
  rlwinm    r4,r0,0,22,31
  bl        -0xA48
  mr.       r31, r3
  bne-      .loc_0x178
  lwz       r3, 0x48(r28)
  li        r4, 0x20
  bl        0x28FC

.loc_0x178:
  lwz       r3, 0x48(r28)
  li        r0, 0xFF
  li        r25, 0x1
  stb       r0, 0x2C0(r3)

.loc_0x188:
  cmplwi    r31, 0
  bne-      .loc_0x2FC
  lwz       r3, 0x48(r28)
  li        r4, 0x20
  bl        0x28D8
  cmplwi    r3, 0
  bne-      .loc_0x1B8
  lwz       r3, 0x48(r28)
  li        r4, 0x10
  bl        0x28C4
  cmplwi    r3, 0
  bne-      .loc_0x2FC

.loc_0x1B8:
  bl        -0xBDC
  stb       r3, 0x8(r1)
  bl        -0x37E8
  lbz       r0, 0x8(r1)
  cmplw     r0, r3
  blt-      .loc_0x2AC
  li        r24, 0
  li        r31, 0
  b         .loc_0x274

.loc_0x1DC:
  bl        -0xD2C
  add       r3, r3, r31
  lwz       r3, 0x10(r3)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x26C
  li        r23, 0
  b         .loc_0x248

.loc_0x1FC:
  mulli     r22, r23, 0x50
  lwz       r3, -0x73F8(r13)
  addi      r0, r22, 0x48
  lwzx      r0, r3, r0
  cmplwi    r0, 0
  beq-      .loc_0x244
  bl        -0xD64
  lwz       r4, -0x73F8(r13)
  addi      r0, r22, 0x48
  add       r5, r3, r31
  lwzx      r3, r4, r0
  lwz       r0, 0x8(r5)
  lwz       r3, 0x20(r3)
  rlwinm    r3,r3,0,22,31
  cmplw     r3, r0
  bne-      .loc_0x244
  bl        -0x3854
  mr        r23, r3

.loc_0x244:
  addi      r23, r23, 0x1

.loc_0x248:
  bl        -0x3860
  cmplw     r23, r3
  blt+      .loc_0x1FC
  bl        -0x386C
  cmplw     r23, r3
  bne-      .loc_0x26C
  rlwinm    r3,r24,0,24,31
  bl        -0xCAC
  stb       r24, 0x8(r1)

.loc_0x26C:
  addi      r31, r31, 0x14
  addi      r24, r24, 0x1

.loc_0x274:
  bl        -0x389C
  cmplw     r24, r3
  blt+      .loc_0x1DC
  bl        -0x38A8
  lbz       r0, 0x8(r1)
  cmplw     r0, r3
  blt-      .loc_0x2D8
  lwz       r3, 0x48(r28)
  li        r4, 0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x408

.loc_0x2AC:
  bl        -0x3884
  cmplw     r26, r3
  blt-      .loc_0x2D8
  bl        -0x3890
  lwz       r3, 0x48(r28)
  li        r4, 0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x408

.loc_0x2D8:
  lbz       r0, 0x8(r1)
  lwz       r3, 0x48(r28)
  stb       r0, 0x2C0(r3)
  lwz       r3, 0x48(r28)
  lwz       r0, 0x20(r3)
  lbz       r3, 0x2C0(r3)
  rlwinm    r4,r0,0,22,31
  bl        -0xC30
  mr        r31, r3

.loc_0x2FC:
  lwz       r3, 0x48(r28)
  li        r4, 0x40
  bl        0x276C
  cmplwi    r3, 0
  bne-      .loc_0x380
  lwz       r4, 0x48(r28)
  li        r5, 0x1
  rlwinm    r0,r27,16,0,15
  rlwinm.   r3,r25,0,24,31
  stb       r5, 0x15(r4)
  or        r0, r29, r0
  rlwinm    r5,r25,15,9,16
  lbz       r3, 0x8(r1)
  rlwinm    r4,r3,8,16,23
  or        r0, r4, r0
  or        r22, r5, r0
  bne-      .loc_0x34C
  li        r4, 0x1
  bl        -0xB24
  b         .loc_0x354

.loc_0x34C:
  li        r4, 0x1
  bl        -0xB1C

.loc_0x354:
  li        r0, 0x1
  lis       r3, 0x800B
  stb       r0, 0x3(r28)
  addi      r7, r3, 0x2D18
  mr        r4, r27
  mr        r5, r31
  lwz       r3, -0x73E8(r13)
  mr        r6, r26
  mr        r8, r22
  bl        -0x9C4C
  b         .loc_0x3E4

.loc_0x380:
  lwz       r3, -0x73E8(r13)
  mr        r4, r27
  mr        r5, r31
  mr        r6, r26
  bl        -0x9D34
  lwz       r3, 0x48(r28)
  li        r0, 0x2
  stb       r0, 0x15(r3)
  b         .loc_0x3E4

.loc_0x3A4:
  addis     r0, r31, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0x408
  lbz       r3, 0x8(r1)
  cmplwi    r3, 0xFF
  beq-      .loc_0x3CC
  lwz       r4, 0x48(r28)
  lwz       r0, 0x20(r4)
  rlwinm    r4,r0,0,22,31
  bl        -0xD04

.loc_0x3CC:
  lbz       r4, 0x8(r1)
  li        r0, 0x2
  lwz       r3, 0x48(r28)
  stb       r4, 0x2C0(r3)
  lwz       r3, 0x48(r28)
  stb       r0, 0x15(r3)

.loc_0x3E4:
  cmplwi    r31, 0
  beq-      .loc_0x400
  stw       r31, 0x40(r28)
  lwz       r0, 0x8(r28)
  xori      r0, r0, 0x1
  stw       r0, 0x8(r28)
  b         .loc_0x408

.loc_0x400:
  lwz       r3, 0x48(r28)
  bl        0x1700

.loc_0x408:
  addi      r30, r30, 0x50
  addi      r29, r29, 0x1

.loc_0x410:
  bl        -0x3A28
  cmplw     r29, r3
  blt+      .loc_0x1C
  lmw       r22, 0x18(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	800B1514
 * Size:	0000B8
 */
void JAInter::SequenceMgr::checkFadeoutSeq(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  b         .loc_0x90

.loc_0x24:
  lwz       r0, -0x73F8(r13)
  add       r29, r0, r31
  lwz       r3, 0x48(r29)
  cmplwi    r3, 0
  beq-      .loc_0x88
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x5
  bne-      .loc_0x88
  lwz       r12, 0x10(r3)
  li        r4, 0x7
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x73B8(r2)
  fcmpu     cr0, f0, f1
  bne-      .loc_0x88
  lwz       r3, 0x48(r29)
  addi      r3, r3, 0x30C
  bl        -0x10628
  lwz       r3, 0x48(r29)
  bl        0x25E8
  lwz       r3, 0x48(r29)
  bl        0x1658
  li        r0, 0
  stw       r0, 0x8(r29)

.loc_0x88:
  addi      r31, r31, 0x50
  addi      r30, r30, 0x1

.loc_0x90:
  bl        -0x3AD8
  cmplw     r30, r3
  blt+      .loc_0x24
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
 * Address:	800B15CC
 * Size:	000020
 */
void JAISequence::getVolume(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x3ED0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B15EC
 * Size:	0000A4
 */
void JAInter::SequenceMgr::checkStoppedSeq(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  mr        r31, r30
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  b         .loc_0x78

.loc_0x2C:
  lwz       r0, -0x73F8(r13)
  add       r28, r0, r30
  lwz       r3, 0x48(r28)
  cmplwi    r3, 0
  beq-      .loc_0x70
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x4
  beq-      .loc_0x54
  cmplwi    r0, 0x5
  bne-      .loc_0x70

.loc_0x54:
  lbz       r0, 0x667(r3)
  cmplwi    r0, 0
  bne-      .loc_0x70
  bl        0x2524
  lwz       r3, 0x48(r28)
  bl        0x1594
  stw       r31, 0x8(r28)

.loc_0x70:
  addi      r30, r30, 0x50
  addi      r29, r29, 0x1

.loc_0x78:
  bl        -0x3B98
  cmplw     r29, r3
  blt+      .loc_0x2C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B1690
 * Size:	0000EC
 */
void JAInter::SequenceMgr::checkPlayingSeq(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  li        r31, 0
  li        r29, 0
  b         .loc_0xCC

.loc_0x1C:
  lwz       r0, -0x73F8(r13)
  add       r30, r0, r29
  lwz       r3, 0x48(r30)
  cmplwi    r3, 0
  beq-      .loc_0xC4
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x4
  blt-      .loc_0xC4
  mr        r3, r31
  bl        0x448
  li        r27, 0
  b         .loc_0xB0

.loc_0x4C:
  lwz       r3, 0x44(r30)
  rlwinm    r0,r27,2,22,29
  rlwinm    r28,r27,0,24,31
  lwzx      r6, r3, r0
  cmplwi    r6, 0
  beq-      .loc_0xAC
  cmplwi    r28, 0x20
  beq-      .loc_0x88
  lwz       r3, 0x48(r30)
  li        r0, 0x1
  slw       r4, r0, r4
  lwz       r3, 0x308(r3)
  lwz       r0, 0x4(r3)
  and.      r0, r4, r0
  beq-      .loc_0xAC

.loc_0x88:
  mr        r3, r30
  mr        r4, r28
  li        r5, 0x2
  bl        0x7944
  mulli     r3, r28, 0x48
  lwz       r0, 0x4C(r30)
  addi      r3, r3, 0x30
  add       r3, r0, r3
  bl        -0xB014

.loc_0xAC:
  addi      r27, r27, 0x1

.loc_0xB0:
  bl        -0x3C94
  addi      r0, r3, 0x1
  rlwinm    r4,r27,0,24,31
  cmplw     r4, r0
  blt+      .loc_0x4C

.loc_0xC4:
  addi      r29, r29, 0x50
  addi      r31, r31, 0x1

.loc_0xCC:
  bl        -0x3C90
  cmplw     r31, r3
  blt+      .loc_0x1C
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B177C
 * Size:	0000A0
 */
void JAInter::SequenceMgr::checkStartedSeq(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0x4
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  b         .loc_0x74

.loc_0x2C:
  lwz       r0, -0x73F8(r13)
  add       r28, r0, r30
  lwz       r3, 0x48(r28)
  cmplwi    r3, 0
  beq-      .loc_0x6C
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x3
  bne-      .loc_0x6C
  addi      r3, r3, 0x30C
  bl        0x7748
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  lwz       r4, 0x48(r28)
  mr        r3, r28
  stb       r31, 0x15(r4)
  bl        0x78F8

.loc_0x6C:
  addi      r30, r30, 0x50
  addi      r29, r29, 0x1

.loc_0x74:
  bl        -0x3D24
  cmplw     r29, r3
  blt+      .loc_0x2C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B181C
 * Size:	000224
 */
void JAInter::SequenceMgr::checkReadSeq(void)
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
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stmw      r24, 0x10(r1)
  li        r29, 0
  li        r31, 0
  b         .loc_0x1EC

.loc_0x34:
  lwz       r0, -0x73F8(r13)
  add       r28, r0, r31
  lwz       r30, 0x48(r28)
  cmplwi    r30, 0
  beq-      .loc_0x1E4
  lbz       r0, 0x15(r30)
  cmplwi    r0, 0x2
  bne-      .loc_0x1E4
  lwz       r3, 0x2C4(r30)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x1E4
  lwz       r3, 0x308(r30)
  lbz       r0, 0x2(r3)
  cmplwi    r0, 0
  bne-      .loc_0x1E4
  lbz       r0, 0x667(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1E4
  lwz       r4, 0x44(r30)
  lwz       r3, -0x73E8(r13)
  lhz       r4, 0x6(r4)
  bl        -0xA238
  lwz       r4, 0x40(r28)
  mr        r5, r3
  addi      r3, r30, 0x30C
  bl        -0x10A3C
  lwz       r3, 0x48(r28)
  li        r26, 0
  lwz       r4, -0x73F8(r13)
  mr        r24, r26
  lbz       r0, 0x14(r3)
  mr        r27, r26
  lfs       f29, -0x73C0(r2)
  mulli     r0, r0, 0x50
  lfs       f0, -0x73BC(r2)
  lfs       f30, -0x73B8(r2)
  lfs       f31, -0x73B4(r2)
  add       r25, r4, r0
  stfs      f29, 0xC(r25)
  stfs      f0, 0x18(r25)
  stfs      f29, 0x10(r25)
  stfs      f30, 0x14(r25)
  stfs      f30, 0x1C(r25)
  stfs      f29, 0x20(r25)
  b         .loc_0x124

.loc_0xEC:
  lwz       r3, 0x24(r25)
  addi      r26, r26, 0x1
  stfsx     f29, r3, r24
  lwz       r3, 0x30(r25)
  stfsx     f31, r3, r24
  lwz       r3, 0x28(r25)
  stfsx     f29, r3, r24
  lwz       r3, 0x2C(r25)
  stfsx     f30, r3, r24
  lwz       r3, 0x34(r25)
  stfsx     f30, r3, r24
  lwz       r3, 0x44(r25)
  stwx      r27, r3, r24
  addi      r24, r24, 0x4

.loc_0x124:
  bl        -0x3E94
  cmplw     r26, r3
  blt+      .loc_0xEC
  lwz       r3, 0x48(r28)
  li        r0, 0x3
  stb       r0, 0x15(r3)
  lwz       r3, 0x48(r28)
  lwz       r0, 0x28(r3)
  cmplwi    r0, 0x1
  ble-      .loc_0x188
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, -0x73B8(r2)
  li        r5, 0x7
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r28)
  li        r5, 0x7
  lfs       f1, -0x73C0(r2)
  lwz       r12, 0x10(r3)
  lwz       r4, 0x28(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x188:
  lbz       r4, 0x0(r28)
  cmplwi    r4, 0
  beq-      .loc_0x1A8
  lwz       r3, 0x48(r28)
  lbz       r5, 0x1(r28)
  bl        0x37A0
  lfs       f0, -0x73B0(r2)
  stfs      f0, 0xC(r28)

.loc_0x1A8:
  lwz       r3, -0x7498(r13)
  lwz       r4, 0x48(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r3, r29
  bl        0x138
  lwz       r0, 0x48(r28)
  cmplwi    r0, 0
  beq-      .loc_0x1E4
  mr        r3, r28
  bl        0x7690
  addi      r3, r30, 0x30C
  bl        -0x10B1C

.loc_0x1E4:
  addi      r31, r31, 0x50
  addi      r29, r29, 0x1

.loc_0x1EC:
  bl        -0x3F3C
  cmplw     r29, r3
  blt+      .loc_0x34
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lmw       r24, 0x10(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	800B1A40
 * Size:	0000D8
 */
void JAInter::SequenceMgr::checkSeqWave(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  li        r30, 0
  b         .loc_0xB4

.loc_0x20:
  lwz       r3, -0x73F8(r13)
  addi      r0, r31, 0x48
  lwzx      r3, r3, r0
  cmplwi    r3, 0
  beq-      .loc_0xAC
  addic.    r5, r3, 0x48
  beq-      .loc_0xAC
  lwz       r4, 0x27C(r5)
  addis     r0, r4, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0xAC
  lwz       r6, -0x7EBC(r13)
  addis     r0, r6, 0x1
  cmplwi    r0, 0xFFFF
  beq-      .loc_0xAC
  cmplw     r4, r6
  beq-      .loc_0xA4
  addis     r0, r4, 0x100
  cmplwi    r0, 0xFF00
  beq-      .loc_0xA4
  rlwinm    r3,r4,0,0,15
  rlwinm    r0,r6,0,0,15
  cmplw     r3, r0
  bne-      .loc_0x88
  cmplwi    r4, 0xFFFF
  beq-      .loc_0xA4

.loc_0x88:
  rlwinm    r3,r4,0,16,31
  rlwinm    r0,r6,0,16,31
  cmplw     r3, r0
  bne-      .loc_0xAC
  addis     r0, r4, 0x1
  cmplwi    r0, 0
  bne-      .loc_0xAC

.loc_0xA4:
  li        r0, -0x1
  stw       r0, 0x27C(r5)

.loc_0xAC:
  addi      r31, r31, 0x50
  addi      r30, r30, 0x1

.loc_0xB4:
  bl        -0x4028
  cmplw     r30, r3
  blt+      .loc_0x20
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
 * Address:	........
 * Size:	000138
 */
void JAInter::SequenceMgr::checkPlayingSeqUpdateMultiplication( (unsigned long, unsigned char, unsigned long, JAInter::MoveParaSet *, unsigned long *, unsigned char, float *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void JAInter::SequenceMgr::checkPlayingSeqUpdateAddition( (unsigned long, unsigned char, unsigned long, JAInter::MoveParaSet *, unsigned long *, unsigned char, float *, float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000118
 */
void JAInter::SequenceMgr::checkPlayingSeqUpdateTrack( (unsigned long, unsigned long, JAInter::MoveParaSet *, unsigned long *, unsigned char, float *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B1B18
 * Size:	001078
 */
void JAInter::SequenceMgr::checkPlayingSeqTrack( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stfd      f29, 0x70(r1)
  psq_st    f29,0x78(r1),0,0
  stfd      f28, 0x60(r1)
  psq_st    f28,0x68(r1),0,0
  stmw      r20, 0x30(r1)
  mulli     r29, r3, 0x50
  lwz       r0, -0x73F8(r13)
  add       r31, r0, r29
  lwz       r3, 0x48(r31)
  addi      r30, r3, 0x48
  lbz       r0, 0x2C1(r3)
  cmplwi    r0, 0x2
  beq-      .loc_0x1044
  lwz       r28, 0x44(r31)
  li        r20, 0
  li        r22, 0
  b         .loc_0x6C

.loc_0x60:
  rlwinm    r0,r20,2,22,29
  addi      r20, r20, 0x1
  stwx      r22, r28, r0

.loc_0x6C:
  bl        -0x40D8
  addi      r3, r3, 0x1
  rlwinm    r0,r20,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x60
  lwz       r0, 0x8(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x108
  lwz       r3, 0x48(r31)
  lwz       r4, 0x28(r3)
  cmplwi    r4, 0
  beq-      .loc_0xA8
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x4
  bge-      .loc_0xD8

.loc_0xA8:
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x3
  blt-      .loc_0xBC
  addi      r3, r30, 0x2C4
  bl        -0x10C78

.loc_0xBC:
  lwz       r3, 0x48(r31)
  bl        0x1F98
  lwz       r3, 0x48(r31)
  bl        0x1008
  li        r0, 0
  stw       r0, 0x8(r31)
  b         .loc_0x1044

.loc_0xD8:
  lwz       r12, 0x10(r3)
  li        r5, 0x7
  lfs       f1, -0x73B8(r2)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  li        r0, 0x5
  stb       r0, 0x15(r3)
  lwz       r0, 0x8(r31)
  xori      r0, r0, 0x2
  stw       r0, 0x8(r31)

.loc_0x108:
  lwz       r3, 0x48(r31)
  cmplwi    r3, 0
  beq-      .loc_0x3B0
  lwz       r0, 0x38(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3B0
  lbz       r3, 0x18(r3)
  cmplwi    r3, 0x4
  bne-      .loc_0x13C
  li        r20, 0
  bl        -0x40C4
  mr        r25, r3
  b         .loc_0x144

.loc_0x13C:
  mr        r20, r3
  addi      r25, r3, 0x1

.loc_0x144:
  mulli     r23, r20, 0x1C
  lfs       f31, -0x73B8(r2)
  lfs       f28, -0x7390(r2)
  mr        r26, r20
  lfd       f29, -0x7388(r2)
  lis       r22, 0x4330
  mulli     r24, r20, 0xC
  b         .loc_0x3A8

.loc_0x164:
  lwz       r3, 0x48(r31)
  addi      r0, r24, 0x8
  lwz       r3, 0x34(r3)
  add       r27, r3, r23
  lfs       f0, 0x0(r27)
  mr        r5, r27
  stfs      f0, 0xC(r27)
  lfs       f0, 0x4(r27)
  stfs      f0, 0x10(r27)
  lfs       f0, 0x8(r27)
  stfs      f0, 0x14(r27)
  lwz       r4, -0x7498(r13)
  lwz       r3, 0x48(r31)
  lwz       r6, 0x4(r4)
  lwz       r4, 0x3C(r3)
  lwzx      r3, r6, r0
  bl        0x38F1C
  lfs       f1, 0x0(r27)
  lfs       f0, 0x4(r27)
  fmuls     f1, f1, f1
  lfs       f2, 0x8(r27)
  fmuls     f0, f0, f0
  fmuls     f2, f2, f2
  fadds     f0, f1, f0
  fadds     f4, f2, f0
  fcmpo     cr0, f4, f31
  ble-      .loc_0x218
  fsqrte    f1, f4
  lfd       f3, -0x73A8(r2)
  lfd       f2, -0x73A0(r2)
  fmul      f0, f1, f1
  fmul      f1, f3, f1
  fnmsub    f0, f4, f0, f2
  fmul      f1, f1, f0
  fmul      f0, f1, f1
  fmul      f1, f3, f1
  fnmsub    f0, f4, f0, f2
  fmul      f1, f1, f0
  fmul      f0, f1, f1
  fmul      f1, f3, f1
  fnmsub    f0, f4, f0, f2
  fmul      f0, f1, f0
  fmul      f4, f4, f0
  frsp      f4, f4
  b         .loc_0x29C

.loc_0x218:
  lfd       f0, -0x7398(r2)
  fcmpo     cr0, f4, f0
  bge-      .loc_0x230
  lis       r3, 0x8051
  lfs       f4, 0x48B0(r3)
  b         .loc_0x29C

.loc_0x230:
  stfs      f4, 0xC(r1)
  lis       r0, 0x7F80
  lwz       r4, 0xC(r1)
  rlwinm    r3,r4,0,1,8
  cmpw      r3, r0
  beq-      .loc_0x258
  bge-      .loc_0x288
  cmpwi     r3, 0
  beq-      .loc_0x270
  b         .loc_0x288

.loc_0x258:
  rlwinm.   r0,r4,0,9,31
  beq-      .loc_0x268
  li        r0, 0x1
  b         .loc_0x28C

.loc_0x268:
  li        r0, 0x2
  b         .loc_0x28C

.loc_0x270:
  rlwinm.   r0,r4,0,9,31
  beq-      .loc_0x280
  li        r0, 0x5
  b         .loc_0x28C

.loc_0x280:
  li        r0, 0x3
  b         .loc_0x28C

.loc_0x288:
  li        r0, 0x4

.loc_0x28C:
  cmpwi     r0, 0x1
  bne-      .loc_0x29C
  lis       r3, 0x8051
  lfs       f4, 0x48B0(r3)

.loc_0x29C:
  stfs      f4, 0x18(r27)
  bl        -0x42E4
  lwz       r3, 0x48(r31)
  li        r4, 0
  lwz       r12, 0x10(r3)
  lwz       r12, 0xBC(r12)
  mtctr     r12
  bctrl     
  fmr       f30, f1
  bl        -0x427C
  fmuls     f0, f28, f30
  rlwinm    r4,r3,0,24,31
  lwz       r3, 0x48(r31)
  li        r5, 0x4
  stw       r22, 0x18(r1)
  fctiwz    f0, f0
  lwz       r12, 0x10(r3)
  stfd      f0, 0x10(r1)
  lwz       r12, 0x1C(r12)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,0,24,31
  stw       r0, 0x1C(r1)
  lfd       f0, 0x18(r1)
  fsubs     f1, f0, f29
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  lwz       r12, 0x10(r3)
  lwz       r12, 0xC0(r12)
  mtctr     r12
  bctrl     
  fmr       f30, f1
  bl        -0x42D8
  fctiwz    f0, f30
  rlwinm    r4,r3,0,24,31
  lwz       r3, 0x48(r31)
  li        r5, 0x4
  stw       r22, 0x28(r1)
  lwz       r12, 0x10(r3)
  stfd      f0, 0x20(r1)
  lwz       r12, 0x24(r12)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,0,24,31
  stw       r0, 0x2C(r1)
  lfd       f0, 0x28(r1)
  fsubs     f1, f0, f29
  mtctr     r12
  bctrl     
  lwz       r3, 0x48(r31)
  li        r4, 0x100
  lwz       r12, 0x10(r3)
  lwz       r12, 0xB8(r12)
  mtctr     r12
  bctrl     
  fmr       f30, f1
  bl        -0x433C
  mr        r4, r3
  lwz       r3, 0x48(r31)
  fmr       f1, f30
  li        r5, 0x4
  lwz       r12, 0x10(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r23, r23, 0x1C
  addi      r24, r24, 0xC
  addi      r26, r26, 0x1

.loc_0x3A8:
  cmplw     r26, r25
  blt+      .loc_0x164

.loc_0x3B0:
  lwz       r4, 0x48(r31)
  cmplwi    r4, 0
  beq-      .loc_0x3C8
  lwz       r3, 0x2C(r4)
  addi      r0, r3, 0x1
  stw       r0, 0x2C(r4)

.loc_0x3C8:
  lwz       r0, 0x8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x1044
  bl        -0x4420
  lwz       r26, -0x73F8(r13)
  addi      r27, r29, 0x8
  addi      r3, r3, 0xC
  lwzx      r0, r26, r27
  rlwinm    r23,r3,0,24,31
  rlwinm.   r0,r0,0,13,13
  beq-      .loc_0x4BC
  lfs       f28, -0x73C0(r2)
  li        r25, 0
  li        r22, 0x1
  b         .loc_0x44C

.loc_0x404:
  rlwinm    r3,r25,0,24,31
  lwz       r0, 0x284(r30)
  slw       r21, r22, r3
  rlwinm    r3,r25,4,20,27
  and.      r0, r0, r21
  add       r24, r30, r3
  addi      r24, r24, 0x110
  beq-      .loc_0x440
  mr        r3, r24
  bl        0x39B0
  cmpwi     r3, 0
  bne-      .loc_0x440
  lwz       r0, 0x284(r30)
  xor       r0, r0, r21
  stw       r0, 0x284(r30)

.loc_0x440:
  lfs       f0, 0x4(r24)
  addi      r25, r25, 0x1
  fmuls     f28, f28, f0

.loc_0x44C:
  rlwinm    r0,r25,0,24,31
  cmplw     r0, r23
  blt+      .loc_0x404
  lfs       f0, 0xC(r31)
  fcmpu     cr0, f0, f28
  beq-      .loc_0x4A4
  stfs      f28, 0xC(r31)
  bl        -0x44D4
  fmr       f1, f28
  lwz       r0, -0x73F8(r13)
  mr        r4, r3
  li        r5, 0x3
  add       r3, r0, r29
  bl        0x70B4
  bl        -0x44F0
  lwz       r0, -0x73F8(r13)
  rlwinm    r4,r3,2,0,29
  add       r3, r0, r29
  lwz       r3, 0x44(r3)
  lwzx      r0, r3, r4
  ori       r0, r0, 0x1
  stwx      r0, r3, r4

.loc_0x4A4:
  lwz       r0, 0x284(r30)
  cmplwi    r0, 0
  bne-      .loc_0x4BC
  lwzx      r0, r26, r27
  xoris     r0, r0, 0x4
  stwx      r0, r26, r27

.loc_0x4BC:
  lwz       r24, 0x250(r30)
  bl        -0x444C
  lwz       r26, -0x73F8(r13)
  addi      r25, r29, 0x8
  lwzx      r0, r26, r25
  rlwinm.   r0,r0,0,12,12
  beq-      .loc_0x5D4
  lfs       f28, -0x73B8(r2)
  rlwinm    r22,r3,0,24,31
  lfs       f31, -0x73BC(r2)
  li        r27, 0
  li        r23, 0x1
  b         .loc_0x538

.loc_0x4F0:
  rlwinm    r3,r27,0,24,31
  lwz       r0, 0x288(r30)
  slw       r20, r23, r3
  rlwinm    r3,r27,4,20,27
  and.      r0, r0, r20
  add       r21, r24, r3
  beq-      .loc_0x528
  mr        r3, r21
  bl        0x38C8
  cmpwi     r3, 0
  bne-      .loc_0x528
  lwz       r0, 0x288(r30)
  xor       r0, r0, r20
  stw       r0, 0x288(r30)

.loc_0x528:
  lfs       f0, 0x4(r21)
  addi      r27, r27, 0x1
  fsubs     f0, f0, f31
  fadds     f28, f28, f0

.loc_0x538:
  rlwinm    r0,r27,0,24,31
  cmplw     r0, r22
  blt+      .loc_0x4F0
  lfs       f1, -0x73BC(r2)
  lfs       f0, -0x73C0(r2)
  fadds     f28, f28, f1
  fcmpo     cr0, f28, f0
  ble-      .loc_0x560
  fmr       f28, f0
  b         .loc_0x570

.loc_0x560:
  lfs       f0, -0x73B8(r2)
  fcmpo     cr0, f28, f0
  bge-      .loc_0x570
  fmr       f28, f0

.loc_0x570:
  lfs       f0, 0x18(r31)
  fcmpu     cr0, f0, f28
  beq-      .loc_0x5BC
  stfs      f28, 0x18(r31)
  bl        -0x45EC
  fmr       f1, f28
  lwz       r0, -0x73F8(r13)
  mr        r4, r3
  li        r5, 0x5
  add       r3, r0, r29
  bl        0x6F9C
  bl        -0x4608
  lwz       r0, -0x73F8(r13)
  rlwinm    r4,r3,2,0,29
  add       r3, r0, r29
  lwz       r3, 0x44(r3)
  lwzx      r0, r3, r4
  ori       r0, r0, 0x4
  stwx      r0, r3, r4

.loc_0x5BC:
  lwz       r0, 0x288(r30)
  cmplwi    r0, 0
  bne-      .loc_0x5D4
  lwzx      r0, r26, r25
  xoris     r0, r0, 0x8
  stwx      r0, r26, r25

.loc_0x5D4:
  lwz       r27, 0x254(r30)
  bl        -0x4564
  lwz       r26, -0x73F8(r13)
  addi      r25, r29, 0x8
  lwzx      r0, r26, r25
  rlwinm.   r0,r0,0,11,11
  beq-      .loc_0x6B8
  lfs       f28, -0x73C0(r2)
  rlwinm    r22,r3,0,24,31
  li        r24, 0
  li        r23, 0x1
  b         .loc_0x648

.loc_0x604:
  rlwinm    r3,r24,0,24,31
  lwz       r0, 0x28C(r30)
  slw       r20, r23, r3
  rlwinm    r3,r24,4,20,27
  and.      r0, r0, r20
  add       r21, r27, r3
  beq-      .loc_0x63C
  mr        r3, r21
  bl        0x37B4
  cmpwi     r3, 0
  bne-      .loc_0x63C
  lwz       r0, 0x28C(r30)
  xor       r0, r0, r20
  stw       r0, 0x28C(r30)

.loc_0x63C:
  lfs       f0, 0x4(r21)
  addi      r24, r24, 0x1
  fmuls     f28, f28, f0

.loc_0x648:
  rlwinm    r0,r24,0,24,31
  cmplw     r0, r22
  blt+      .loc_0x604
  lfs       f0, 0x10(r31)
  fcmpu     cr0, f0, f28
  beq-      .loc_0x6A0
  stfs      f28, 0x10(r31)
  bl        -0x46D0
  fmr       f1, f28
  lwz       r0, -0x73F8(r13)
  mr        r4, r3
  li        r5, 0x4
  add       r3, r0, r29
  bl        0x6EB8
  bl        -0x46EC
  lwz       r0, -0x73F8(r13)
  rlwinm    r4,r3,2,0,29
  add       r3, r0, r29
  lwz       r3, 0x44(r3)
  lwzx      r0, r3, r4
  ori       r0, r0, 0x2
  stwx      r0, r3, r4

.loc_0x6A0:
  lwz       r0, 0x28C(r30)
  cmplwi    r0, 0
  bne-      .loc_0x6B8
  lwzx      r0, r26, r25
  xoris     r0, r0, 0x10
  stwx      r0, r26, r25

.loc_0x6B8:
  lwz       r27, 0x258(r30)
  bl        -0x4648
  lwz       r26, -0x73F8(r13)
  addi      r25, r29, 0x8
  lwzx      r0, r26, r25
  rlwinm.   r0,r0,0,10,10
  beq-      .loc_0x7CC
  lfs       f28, -0x73B8(r2)
  rlwinm    r22,r3,0,24,31
  li        r24, 0
  li        r23, 0x1
  fmr       f31, f28
  b         .loc_0x734

.loc_0x6EC:
  rlwinm    r3,r24,0,24,31
  lwz       r0, 0x290(r30)
  slw       r20, r23, r3
  rlwinm    r3,r24,4,20,27
  and.      r0, r0, r20
  add       r21, r27, r3
  beq-      .loc_0x724
  mr        r3, r21
  bl        0x36CC
  cmpwi     r3, 0
  bne-      .loc_0x724
  lwz       r0, 0x290(r30)
  xor       r0, r0, r20
  stw       r0, 0x290(r30)

.loc_0x724:
  lfs       f0, 0x4(r21)
  addi      r24, r24, 0x1
  fsubs     f0, f0, f31
  fadds     f28, f28, f0

.loc_0x734:
  rlwinm    r0,r24,0,24,31
  cmplw     r0, r22
  blt+      .loc_0x6EC
  lfs       f1, -0x73B8(r2)
  lfs       f0, -0x73C0(r2)
  fadds     f28, f28, f1
  fcmpo     cr0, f28, f0
  ble-      .loc_0x75C
  fmr       f28, f0
  b         .loc_0x768

.loc_0x75C:
  fcmpo     cr0, f28, f1
  bge-      .loc_0x768
  fmr       f28, f1

.loc_0x768:
  lfs       f0, 0x14(r31)
  fcmpu     cr0, f0, f28
  beq-      .loc_0x7B4
  stfs      f28, 0x14(r31)
  bl        -0x47E4
  fmr       f1, f28
  lwz       r0, -0x73F8(r13)
  mr        r4, r3
  li        r5, 0x6
  add       r3, r0, r29
  bl        0x6DA4
  bl        -0x4800
  lwz       r0, -0x73F8(r13)
  rlwinm    r4,r3,2,0,29
  add       r3, r0, r29
  lwz       r3, 0x44(r3)
  lwzx      r0, r3, r4
  ori       r0, r0, 0x8
  stwx      r0, r3, r4

.loc_0x7B4:
  lwz       r0, 0x290(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7CC
  lwzx      r0, r26, r25
  xoris     r0, r0, 0x20
  stwx      r0, r26, r25

.loc_0x7CC:
  lwz       r27, 0x25C(r30)
  bl        -0x475C
  lwz       r26, -0x73F8(r13)
  addi      r25, r29, 0x8
  lwzx      r0, r26, r25
  rlwinm.   r0,r0,0,9,9
  beq-      .loc_0x8E4
  lfs       f28, -0x73B8(r2)
  rlwinm    r23,r3,0,24,31
  lfs       f31, -0x73BC(r2)
  li        r24, 0
  li        r22, 0x1
  b         .loc_0x848

.loc_0x800:
  rlwinm    r3,r24,0,24,31
  lwz       r0, 0x294(r30)
  slw       r20, r22, r3
  rlwinm    r3,r24,4,20,27
  and.      r0, r0, r20
  add       r21, r27, r3
  beq-      .loc_0x838
  mr        r3, r21
  bl        0x35B8
  cmpwi     r3, 0
  bne-      .loc_0x838
  lwz       r0, 0x294(r30)
  xor       r0, r0, r20
  stw       r0, 0x294(r30)

.loc_0x838:
  lfs       f0, 0x4(r21)
  addi      r24, r24, 0x1
  fsubs     f0, f0, f31
  fadds     f28, f28, f0

.loc_0x848:
  rlwinm    r0,r24,0,24,31
  cmplw     r0, r23
  blt+      .loc_0x800
  lfs       f1, -0x73BC(r2)
  lfs       f0, -0x73C0(r2)
  fadds     f28, f28, f1
  fcmpo     cr0, f28, f0
  ble-      .loc_0x870
  fmr       f28, f0
  b         .loc_0x880

.loc_0x870:
  lfs       f0, -0x73B8(r2)
  fcmpo     cr0, f28, f0
  bge-      .loc_0x880
  fmr       f28, f0

.loc_0x880:
  lfs       f0, 0x1C(r31)
  fcmpu     cr0, f0, f28
  beq-      .loc_0x8CC
  stfs      f28, 0x1C(r31)
  bl        -0x48FC
  fmr       f1, f28
  lwz       r0, -0x73F8(r13)
  mr        r4, r3
  li        r5, 0x7
  add       r3, r0, r29
  bl        0x6C8C
  bl        -0x4918
  lwz       r0, -0x73F8(r13)
  rlwinm    r4,r3,2,0,29
  add       r3, r0, r29
  lwz       r3, 0x44(r3)
  lwzx      r0, r3, r4
  ori       r0, r0, 0x10
  stwx      r0, r3, r4

.loc_0x8CC:
  lwz       r0, 0x294(r30)
  cmplwi    r0, 0
  bne-      .loc_0x8E4
  lwzx      r0, r26, r25
  xoris     r0, r0, 0x40
  stwx      r0, r26, r25

.loc_0x8E4:
  lwz       r0, 0x8(r31)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x950
  mr        r3, r30
  bl        0x34E4
  cmpwi     r3, 0
  bne-      .loc_0x90C
  lwz       r0, 0x8(r31)
  xori      r0, r0, 0x4
  stw       r0, 0x8(r31)

.loc_0x90C:
  lfs       f0, 0x20(r31)
  lfs       f1, 0x4(r30)
  fcmpu     cr0, f0, f1
  beq-      .loc_0x950
  stfs      f1, 0x20(r31)
  bl        -0x498C
  lwz       r0, -0x73F8(r13)
  mr        r4, r3
  lfs       f1, 0x4(r30)
  li        r5, 0xA
  add       r3, r0, r29
  bl        0x6BFC
  bl        -0x49A8
  rlwinm    r3,r3,2,0,29
  lwzx      r0, r28, r3
  ori       r0, r0, 0x80
  stwx      r0, r28, r3

.loc_0x950:
  lwz       r0, 0x8(r31)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0xA18
  li        r23, 0
  b         .loc_0x9F4

.loc_0x964:
  rlwinm    r21,r23,0,24,31
  li        r0, 0x1
  lwz       r3, 0x280(r30)
  slw       r20, r0, r21
  and.      r0, r3, r20
  beq-      .loc_0x9A0
  rlwinm    r3,r23,4,20,27
  addi      r3, r3, 0x10
  add       r3, r30, r3
  bl        0x3450
  cmpwi     r3, 0
  bne-      .loc_0x9A0
  lwz       r0, 0x280(r30)
  xor       r0, r0, r20
  stw       r0, 0x280(r30)

.loc_0x9A0:
  rlwinm    r20,r21,16,0,15
  addi      r3, r30, 0x2C4
  mr        r4, r20
  addi      r5, r1, 0x8
  bl        -0x10288
  rlwinm    r3,r23,4,20,27
  lhz       r4, 0x8(r1)
  addi      r0, r3, 0x14
  lfsx      f0, r30, r0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,0,16,31
  cmplw     r4, r0
  beq-      .loc_0x9F0
  stfd      f0, 0x28(r1)
  mr        r4, r20
  addi      r3, r30, 0x2C4
  lwz       r5, 0x2C(r1)
  bl        -0x10378

.loc_0x9F0:
  addi      r23, r23, 0x1

.loc_0x9F4:
  rlwinm    r0,r23,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0x964
  lwz       r0, 0x280(r30)
  cmplwi    r0, 0
  bne-      .loc_0xA18
  lwz       r0, 0x8(r31)
  xori      r0, r0, 0x10
  stw       r0, 0x8(r31)

.loc_0xA18:
  lwz       r3, 0x8(r31)
  rlwinm.   r0,r3,0,26,26
  beq-      .loc_0xAD8
  xori      r0, r3, 0x20
  li        r23, 0
  stw       r0, 0x8(r31)
  b         .loc_0xAC8

.loc_0xA34:
  lwz       r26, 0x2BC(r30)
  rlwinm    r27,r23,0,24,31
  lbzx      r4, r26, r27
  rlwinm    r3,r4,27,31,31
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r0,r0,1,31,31
  cmplwi    r0, 0x1
  bne-      .loc_0xAC4
  rlwinm    r5,r4,25,31,31
  rlwinm    r3,r4,26,31,31
  neg       r4, r5
  neg       r0, r3
  or        r4, r4, r5
  or        r0, r0, r3
  rlwinm    r3,r4,1,31,31
  rlwinm    r0,r0,1,31,31
  cmplw     r3, r0
  beq-      .loc_0xAC4
  lwz       r3, 0x48(r31)
  mr        r4, r23
  bl        0x6A60
  cmplwi    r3, 0
  beq-      .loc_0xAAC
  lbzx      r0, r26, r27
  rlwinm    r4,r0,26,31,31
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r4,r0,1,31,31
  bl        -0x112DC

.loc_0xAAC:
  lbzx      r4, r26, r27
  rlwinm    r3,r4,26,31,31
  neg       r0, r3
  or        r0, r0, r3
  rlwimi    r4,r0,8,24,24
  stbx      r4, r26, r27

.loc_0xAC4:
  addi      r23, r23, 0x1

.loc_0xAC8:
  bl        -0x4B34
  rlwinm    r0,r23,0,24,31
  cmplw     r0, r3
  blt+      .loc_0xA34

.loc_0xAD8:
  lwz       r27, -0x73F8(r13)
  addi      r25, r29, 0x8
  lwz       r23, 0x24(r31)
  lwzx      r0, r27, r25
  lwz       r26, 0x260(r30)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0xBAC
  li        r24, 0
  b         .loc_0xB84

.loc_0xAFC:
  li        r0, 0x1
  lwz       r3, 0x298(r30)
  slw       r20, r0, r4
  rlwinm    r4,r24,4,20,27
  and.      r0, r3, r20
  rlwinm    r22,r24,0,24,31
  add       r21, r26, r4
  beq-      .loc_0xB80
  mr        r3, r21
  bl        0x32B8
  cmpwi     r3, 0
  bne-      .loc_0xB38
  lwz       r0, 0x298(r30)
  xor       r0, r0, r20
  stw       r0, 0x298(r30)

.loc_0xB38:
  rlwinm    r20,r22,2,0,29
  lfs       f1, 0x4(r21)
  lfsx      f0, r23, r20
  fcmpu     cr0, f1, f0
  beq-      .loc_0xB80
  stfsx     f1, r23, r20
  mr        r4, r22
  li        r5, 0x3
  lwz       r0, -0x73F8(r13)
  lfs       f1, 0x4(r21)
  add       r3, r0, r29
  bl        0x69D0
  lwz       r3, -0x73F8(r13)
  addi      r0, r3, 0x44
  lwzx      r3, r29, r0
  lwzx      r0, r3, r20
  ori       r0, r0, 0x1
  stwx      r0, r3, r20

.loc_0xB80:
  addi      r24, r24, 0x1

.loc_0xB84:
  bl        -0x4BF0
  rlwinm    r4,r24,0,24,31
  cmplw     r4, r3
  blt+      .loc_0xAFC
  lwz       r0, 0x298(r30)
  cmplwi    r0, 0
  bne-      .loc_0xBAC
  lwzx      r0, r27, r25
  xori      r0, r0, 0x40
  stwx      r0, r27, r25

.loc_0xBAC:
  lwz       r27, -0x73F8(r13)
  addi      r24, r29, 0x8
  lwz       r26, 0x30(r31)
  lwzx      r0, r27, r24
  lwz       r25, 0x264(r30)
  rlwinm.   r0,r0,0,24,24
  beq-      .loc_0xC80
  li        r23, 0
  b         .loc_0xC58

.loc_0xBD0:
  li        r0, 0x1
  lwz       r3, 0x29C(r30)
  slw       r20, r0, r4
  rlwinm    r4,r23,4,20,27
  and.      r0, r3, r20
  rlwinm    r22,r23,0,24,31
  add       r21, r25, r4
  beq-      .loc_0xC54
  mr        r3, r21
  bl        0x31E4
  cmpwi     r3, 0
  bne-      .loc_0xC0C
  lwz       r0, 0x29C(r30)
  xor       r0, r0, r20
  stw       r0, 0x29C(r30)

.loc_0xC0C:
  rlwinm    r20,r22,2,0,29
  lfs       f1, 0x4(r21)
  lfsx      f0, r26, r20
  fcmpu     cr0, f1, f0
  beq-      .loc_0xC54
  stfsx     f1, r26, r20
  mr        r4, r22
  li        r5, 0x5
  lwz       r0, -0x73F8(r13)
  lfs       f1, 0x4(r21)
  add       r3, r0, r29
  bl        0x68FC
  lwz       r3, -0x73F8(r13)
  addi      r0, r3, 0x44
  lwzx      r3, r29, r0
  lwzx      r0, r3, r20
  ori       r0, r0, 0x4
  stwx      r0, r3, r20

.loc_0xC54:
  addi      r23, r23, 0x1

.loc_0xC58:
  bl        -0x4CC4
  rlwinm    r4,r23,0,24,31
  cmplw     r4, r3
  blt+      .loc_0xBD0
  lwz       r0, 0x29C(r30)
  cmplwi    r0, 0
  bne-      .loc_0xC80
  lwzx      r0, r27, r24
  xori      r0, r0, 0x80
  stwx      r0, r27, r24

.loc_0xC80:
  lwz       r27, -0x73F8(r13)
  addi      r24, r29, 0x8
  lwz       r26, 0x28(r31)
  lwzx      r0, r27, r24
  lwz       r25, 0x268(r30)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0xD54
  li        r23, 0
  b         .loc_0xD2C

.loc_0xCA4:
  li        r0, 0x1
  lwz       r3, 0x2A0(r30)
  slw       r20, r0, r4
  rlwinm    r4,r23,4,20,27
  and.      r0, r3, r20
  rlwinm    r22,r23,0,24,31
  add       r21, r25, r4
  beq-      .loc_0xD28
  mr        r3, r21
  bl        0x3110
  cmpwi     r3, 0
  bne-      .loc_0xCE0
  lwz       r0, 0x2A0(r30)
  xor       r0, r0, r20
  stw       r0, 0x2A0(r30)

.loc_0xCE0:
  rlwinm    r20,r22,2,0,29
  lfs       f1, 0x4(r21)
  lfsx      f0, r26, r20
  fcmpu     cr0, f1, f0
  beq-      .loc_0xD28
  stfsx     f1, r26, r20
  mr        r4, r22
  li        r5, 0x4
  lwz       r0, -0x73F8(r13)
  lfs       f1, 0x4(r21)
  add       r3, r0, r29
  bl        0x6828
  lwz       r3, -0x73F8(r13)
  addi      r0, r3, 0x44
  lwzx      r3, r29, r0
  lwzx      r0, r3, r20
  ori       r0, r0, 0x2
  stwx      r0, r3, r20

.loc_0xD28:
  addi      r23, r23, 0x1

.loc_0xD2C:
  bl        -0x4D98
  rlwinm    r4,r23,0,24,31
  cmplw     r4, r3
  blt+      .loc_0xCA4
  lwz       r0, 0x2A0(r30)
  cmplwi    r0, 0
  bne-      .loc_0xD54
  lwzx      r0, r27, r24
  xori      r0, r0, 0x200
  stwx      r0, r27, r24

.loc_0xD54:
  lwz       r27, -0x73F8(r13)
  addi      r24, r29, 0x8
  lwz       r26, 0x2C(r31)
  lwzx      r0, r27, r24
  lwz       r25, 0x26C(r30)
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0xE28
  li        r23, 0
  b         .loc_0xE00

.loc_0xD78:
  li        r0, 0x1
  lwz       r3, 0x2A4(r30)
  slw       r20, r0, r4
  rlwinm    r4,r23,4,20,27
  and.      r0, r3, r20
  rlwinm    r22,r23,0,24,31
  add       r21, r25, r4
  beq-      .loc_0xDFC
  mr        r3, r21
  bl        0x303C
  cmpwi     r3, 0
  bne-      .loc_0xDB4
  lwz       r0, 0x2A4(r30)
  xor       r0, r0, r20
  stw       r0, 0x2A4(r30)

.loc_0xDB4:
  rlwinm    r20,r22,2,0,29
  lfs       f1, 0x4(r21)
  lfsx      f0, r26, r20
  fcmpu     cr0, f1, f0
  beq-      .loc_0xDFC
  stfsx     f1, r26, r20
  mr        r4, r22
  li        r5, 0x6
  lwz       r0, -0x73F8(r13)
  lfs       f1, 0x4(r21)
  add       r3, r0, r29
  bl        0x6754
  lwz       r3, -0x73F8(r13)
  addi      r0, r3, 0x44
  lwzx      r3, r29, r0
  lwzx      r0, r3, r20
  ori       r0, r0, 0x8
  stwx      r0, r3, r20

.loc_0xDFC:
  addi      r23, r23, 0x1

.loc_0xE00:
  bl        -0x4E6C
  rlwinm    r4,r23,0,24,31
  cmplw     r4, r3
  blt+      .loc_0xD78
  lwz       r0, 0x2A4(r30)
  cmplwi    r0, 0
  bne-      .loc_0xE28
  lwzx      r0, r27, r24
  xori      r0, r0, 0x800
  stwx      r0, r27, r24

.loc_0xE28:
  lwz       r27, -0x73F8(r13)
  addi      r24, r29, 0x8
  lwz       r26, 0x34(r31)
  lwzx      r0, r27, r24
  lwz       r25, 0x270(r30)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0xEFC
  li        r23, 0
  b         .loc_0xED4

.loc_0xE4C:
  li        r0, 0x1
  lwz       r3, 0x2A8(r30)
  slw       r20, r0, r4
  rlwinm    r4,r23,4,20,27
  and.      r0, r3, r20
  rlwinm    r22,r23,0,24,31
  add       r21, r25, r4
  beq-      .loc_0xED0
  mr        r3, r21
  bl        0x2F68
  cmpwi     r3, 0
  bne-      .loc_0xE88
  lwz       r0, 0x2A8(r30)
  xor       r0, r0, r20
  stw       r0, 0x2A8(r30)

.loc_0xE88:
  rlwinm    r20,r22,2,0,29
  lfs       f1, 0x4(r21)
  lfsx      f0, r26, r20
  fcmpu     cr0, f1, f0
  beq-      .loc_0xED0
  stfsx     f1, r26, r20
  mr        r4, r22
  li        r5, 0x7
  lwz       r0, -0x73F8(r13)
  lfs       f1, 0x4(r21)
  add       r3, r0, r29
  bl        0x6680
  lwz       r3, -0x73F8(r13)
  addi      r0, r3, 0x44
  lwzx      r3, r29, r0
  lwzx      r0, r3, r20
  ori       r0, r0, 0x10
  stwx      r0, r3, r20

.loc_0xED0:
  addi      r23, r23, 0x1

.loc_0xED4:
  bl        -0x4F40
  rlwinm    r4,r23,0,24,31
  cmplw     r4, r3
  blt+      .loc_0xE4C
  lwz       r0, 0x2A8(r30)
  cmplwi    r0, 0
  bne-      .loc_0xEFC
  lwzx      r0, r27, r24
  xori      r0, r0, 0x100
  stwx      r0, r27, r24

.loc_0xEFC:
  lwz       r3, 0x8(r31)
  rlwinm.   r0,r3,0,8,8
  beq-      .loc_0xF74
  xoris     r0, r3, 0x80
  li        r21, 0
  stw       r0, 0x8(r31)
  li        r23, 0
  b         .loc_0xF64

.loc_0xF1C:
  lwz       r3, 0x2B8(r30)
  rlwinm    r20,r21,0,24,31
  lbzx      r0, r3, r20
  cmplwi    r0, 0x1
  bne-      .loc_0xF60
  rlwinm    r3,r20,2,0,29
  mr        r4, r20
  lwzx      r0, r28, r3
  li        r5, 0x9
  li        r6, 0x1
  ori       r0, r0, 0x40
  stwx      r0, r28, r3
  lwz       r0, -0x73F8(r13)
  add       r3, r0, r29
  bl        0x65FC
  lwz       r3, 0x2B8(r30)
  stbx      r23, r3, r20

.loc_0xF60:
  addi      r21, r21, 0x1

.loc_0xF64:
  bl        -0x4FD0
  rlwinm    r0,r21,0,24,31
  cmplw     r0, r3
  blt+      .loc_0xF1C

.loc_0xF74:
  lwz       r0, 0x8(r31)
  rlwinm.   r0,r0,0,19,19
  beq-      .loc_0x1044
  li        r23, 0
  b         .loc_0x101C

.loc_0xF88:
  li        r0, 0x1
  lwz       r3, 0x2B0(r30)
  slw       r4, r0, r4
  and.      r0, r3, r4
  beq-      .loc_0x1018
  xor       r0, r3, r4
  rlwinm    r21,r23,2,22,29
  stw       r0, 0x2B0(r30)
  li        r24, 0
  b         .loc_0x100C

.loc_0xFB0:
  lwz       r0, 0x2B4(r30)
  rlwinm    r3,r24,0,24,31
  li        r4, 0x1
  lwzx      r0, r21, r0
  slw       r20, r4, r3
  and.      r0, r20, r0
  beq-      .loc_0x1008
  lwz       r3, 0x48(r31)
  mr        r4, r23
  mr        r5, r24
  bl        0x29E4
  lwz       r5, 0x274(r30)
  mr        r4, r3
  rlwinm    r0,r24,1,23,30
  addi      r3, r30, 0x2C4
  lwzx      r5, r21, r5
  lhzx      r5, r5, r0
  bl        -0x10980
  lwz       r3, 0x2B4(r30)
  lwzx      r0, r21, r3
  xor       r0, r0, r20
  stwx      r0, r21, r3

.loc_0x1008:
  addi      r24, r24, 0x1

.loc_0x100C:
  rlwinm    r0,r24,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0xFB0

.loc_0x1018:
  addi      r23, r23, 0x1

.loc_0x101C:
  bl        -0x5088
  rlwinm    r4,r23,0,24,31
  cmplw     r4, r3
  blt+      .loc_0xF88
  lwz       r0, 0x2B0(r30)
  cmplwi    r0, 0
  bne-      .loc_0x1044
  lwz       r0, 0x8(r31)
  xori      r0, r0, 0x1000
  stw       r0, 0x8(r31)

.loc_0x1044:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  lmw       r20, 0x30(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	800B2B90
 * Size:	00002C
 */
void JAISequence::setPitch(float, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  mr        r4, r5
  mr        r5, r0
  bl        0x1884
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B2BBC
 * Size:	00002C
 */
void JAISequence::setPan(float, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  mr        r4, r5
  mr        r5, r0
  bl        0x17D0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800B2BE8
 * Size:	000130
 */
void JAInter::SequenceMgr::stopSeq( (JAISequence *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        0xF40
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x98
  li        r30, 0
  li        r31, 0
  b         .loc_0x8C

.loc_0x38:
  lwz       r3, -0x73F8(r13)
  addi      r0, r31, 0x48
  lwzx      r29, r3, r0
  cmplw     r28, r29
  beq-      .loc_0x84
  cmplwi    r29, 0
  beq-      .loc_0x84
  mr        r3, r29
  bl        0xF08
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x84
  mr        r3, r29
  lfs       f1, -0x73C0(r2)
  lwz       r12, 0x10(r29)
  li        r4, 0xA
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x84:
  addi      r31, r31, 0x50
  addi      r30, r30, 0x1

.loc_0x8C:
  bl        -0x51A8
  cmplw     r30, r3
  blt+      .loc_0x38

.loc_0x98:
  li        r0, 0
  stw       r0, 0x40(r28)
  stw       r0, 0x308(r28)
  lbz       r0, 0x15(r28)
  cmplwi    r0, 0x3
  blt-      .loc_0xE4
  lwz       r12, -0x73E4(r13)
  cmplwi    r12, 0
  beq-      .loc_0xDC
  lwz       r4, 0x44(r28)
  mr        r6, r28
  addi      r3, r1, 0x8
  lhz       r5, 0x6(r4)
  li        r4, 0x2
  mtctr     r12
  bctrl     
  b         .loc_0xE4

.loc_0xDC:
  lbz       r3, 0x2C0(r28)
  bl        -0x262C

.loc_0xE4:
  li        r0, 0
  mr        r4, r28
  stb       r0, 0x15(r28)
  subi      r3, r13, 0x73F0
  bl        0x2B10
  lbz       r0, 0x14(r28)
  li        r4, 0
  lwz       r3, -0x73F8(r13)
  mulli     r0, r0, 0x50
  add       r3, r3, r0
  stw       r4, 0x48(r3)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B2D18
 * Size:	0000E4
 */
void JAInter::SequenceMgr::checkDvdLoadArc( (unsigned long, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  rlwinm    r31,r4,0,24,31
  stw       r30, 0x18(r1)
  rlwinm    r30,r4,16,22,31
  stw       r29, 0x14(r1)
  rlwinm    r29,r4,24,25,31
  stw       r28, 0x10(r1)
  rlwinm.   r28,r4,17,31,31
  bne-      .loc_0x40
  mr        r3, r29
  li        r4, 0
  bl        -0x244C
  b         .loc_0x4C

.loc_0x40:
  mr        r3, r29
  li        r4, 0
  bl        -0x2448

.loc_0x4C:
  cmplwi    r31, 0xFE
  bge-      .loc_0xB0
  mulli     r3, r31, 0x50
  lwz       r4, -0x73F8(r13)
  li        r0, 0
  add       r3, r4, r3
  lwz       r4, 0x48(r3)
  cmplwi    r4, 0
  stb       r0, 0x3(r3)
  beq-      .loc_0x9C
  lbz       r0, 0x15(r4)
  cmplwi    r0, 0x1
  bne-      .loc_0x9C
  lwz       r3, 0x44(r4)
  lhz       r0, 0x6(r3)
  cmplw     r30, r0
  bne-      .loc_0x9C
  li        r0, 0x2
  stb       r0, 0x15(r4)
  b         .loc_0xC4

.loc_0x9C:
  cmplwi    r28, 0
  bne-      .loc_0xC4
  mr        r3, r29
  bl        -0x2724
  b         .loc_0xC4

.loc_0xB0:
  bne-      .loc_0xC4
  cmplwi    r28, 0
  bne-      .loc_0xC4
  mr        r3, r29
  bl        -0x273C

.loc_0xC4:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800B2DFC
 * Size:	00009C
 */
void JAInter::SequenceMgr::checkCustomDvdLoadArc( (unsigned long, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mulli     r4, r4, 0x50
  stw       r0, 0x24(r1)
  li        r0, 0
  addi      r3, r1, 0x10
  stw       r31, 0x1C(r1)
  lwz       r5, -0x73F8(r13)
  add       r5, r5, r4
  li        r4, 0x1
  lwz       r31, 0x48(r5)
  stb       r0, 0x3(r5)
  mr        r6, r31
  lwz       r5, 0x44(r31)
  lwz       r12, -0x73E4(r13)
  lhz       r5, 0x6(r5)
  mtctr     r12
  bctrl     
  cmplwi    r31, 0
  beq-      .loc_0x68
  lbz       r0, 0x15(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x68
  li        r0, 0x2
  stb       r0, 0x15(r31)
  b         .loc_0x88

.loc_0x68:
  lwz       r4, 0x44(r31)
  mr        r6, r31
  lwz       r12, -0x73E4(r13)
  addi      r3, r1, 0x8
  lhz       r5, 0x6(r4)
  li        r4, 0x2
  mtctr     r12
  bctrl     

.loc_0x88:
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
 * Size:	00003C
 */
void JAInter::SequenceMgr::checkCustomDvdPreloadArc( (unsigned long, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B2E98
 * Size:	000430
 */
void JAInter::SequenceMgr::storeSeqBuffer( (JAISequence **, JAInter::Actor *, unsigned long, unsigned long, unsigned char, JAInter::SoundInfo *))
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stmw      r17, 0x24(r1)
  mr.       r22, r3
  mr        r27, r8
  mr        r23, r4
  mr        r24, r5
  mr        r25, r6
  mr        r26, r7
  lbz       r29, 0x5(r8)
  beq-      .loc_0x74
  lwz       r3, 0x0(r22)
  cmplwi    r3, 0
  beq-      .loc_0x74
  lbz       r0, 0x14(r3)
  cmplw     r29, r0
  beq-      .loc_0x60
  lwz       r12, 0x10(r3)
  li        r4, 0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x74

.loc_0x60:
  mr        r4, r24
  mr        r5, r27
  bl        0x2610
  cmplwi    r3, 0
  bne-      .loc_0x41C

.loc_0x74:
  mulli     r31, r29, 0x50
  lwz       r21, -0x73F8(r13)
  addi      r28, r31, 0x48
  lwzx      r4, r21, r28
  cmplwi    r4, 0
  bne-      .loc_0x94
  li        r5, 0x1
  b         .loc_0x2F4

.loc_0x94:
  lbz       r0, 0x15(r4)
  cmplwi    r0, 0x5
  bne-      .loc_0x1B0
  addi      r3, r4, 0x30C
  bl        -0x11FE4
  lwzx      r3, r21, r28
  bl        0xC2C
  lwzx      r19, r21, r28
  mr        r3, r19
  bl        0xBF8
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x130
  li        r20, 0
  mr        r18, r20
  b         .loc_0x124

.loc_0xD0:
  lwz       r3, -0x73F8(r13)
  addi      r0, r18, 0x48
  lwzx      r17, r3, r0
  cmplw     r19, r17
  beq-      .loc_0x11C
  cmplwi    r17, 0
  beq-      .loc_0x11C
  mr        r3, r17
  bl        0xBC0
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x11C
  mr        r3, r17
  lfs       f1, -0x73C0(r2)
  lwz       r12, 0x10(r17)
  li        r4, 0xA
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x11C:
  addi      r18, r18, 0x50
  addi      r20, r20, 0x1

.loc_0x124:
  bl        -0x54F0
  cmplw     r20, r3
  blt+      .loc_0xD0

.loc_0x130:
  li        r0, 0
  stw       r0, 0x40(r19)
  stw       r0, 0x308(r19)
  lbz       r0, 0x15(r19)
  cmplwi    r0, 0x3
  blt-      .loc_0x17C
  lwz       r12, -0x73E4(r13)
  cmplwi    r12, 0
  beq-      .loc_0x174
  lwz       r4, 0x44(r19)
  mr        r6, r19
  addi      r3, r1, 0x10
  lhz       r5, 0x6(r4)
  li        r4, 0x2
  mtctr     r12
  bctrl     
  b         .loc_0x17C

.loc_0x174:
  lbz       r3, 0x2C0(r19)
  bl        -0x2974

.loc_0x17C:
  li        r0, 0
  mr        r4, r19
  stb       r0, 0x15(r19)
  subi      r3, r13, 0x73F0
  bl        0x27C8
  lbz       r0, 0x14(r19)
  li        r4, 0
  lwz       r3, -0x73F8(r13)
  li        r5, 0x1
  mulli     r0, r0, 0x50
  add       r3, r3, r0
  stw       r4, 0x48(r3)
  b         .loc_0x2F4

.loc_0x1B0:
  cmplwi    r0, 0x1
  bne-      .loc_0x1C4
  li        r0, 0
  stw       r0, 0x0(r22)
  b         .loc_0x41C

.loc_0x1C4:
  lwz       r3, 0x44(r4)
  lbz       r0, 0x4(r27)
  lbz       r3, 0x4(r3)
  cmplw     r3, r0
  bgt-      .loc_0x2E8
  addi      r3, r4, 0x30C
  bl        -0x1211C
  lwzx      r3, r21, r28
  bl        0xAF4
  lwzx      r20, r21, r28
  mr        r3, r20
  bl        0xAC0
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x268
  li        r19, 0
  mr        r18, r19
  b         .loc_0x25C

.loc_0x208:
  lwz       r3, -0x73F8(r13)
  addi      r0, r18, 0x48
  lwzx      r17, r3, r0
  cmplw     r20, r17
  beq-      .loc_0x254
  cmplwi    r17, 0
  beq-      .loc_0x254
  mr        r3, r17
  bl        0xA88
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x254
  mr        r3, r17
  lfs       f1, -0x73C0(r2)
  lwz       r12, 0x10(r17)
  li        r4, 0xA
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x254:
  addi      r18, r18, 0x50
  addi      r19, r19, 0x1

.loc_0x25C:
  bl        -0x5628
  cmplw     r19, r3
  blt+      .loc_0x208

.loc_0x268:
  li        r0, 0
  stw       r0, 0x40(r20)
  stw       r0, 0x308(r20)
  lbz       r0, 0x15(r20)
  cmplwi    r0, 0x3
  blt-      .loc_0x2B4
  lwz       r12, -0x73E4(r13)
  cmplwi    r12, 0
  beq-      .loc_0x2AC
  lwz       r4, 0x44(r20)
  mr        r6, r20
  addi      r3, r1, 0x8
  lhz       r5, 0x6(r4)
  li        r4, 0x2
  mtctr     r12
  bctrl     
  b         .loc_0x2B4

.loc_0x2AC:
  lbz       r3, 0x2C0(r20)
  bl        -0x2AAC

.loc_0x2B4:
  li        r0, 0
  mr        r4, r20
  stb       r0, 0x15(r20)
  subi      r3, r13, 0x73F0
  bl        0x2690
  lbz       r0, 0x14(r20)
  li        r4, 0
  lwz       r3, -0x73F8(r13)
  li        r5, 0x1
  mulli     r0, r0, 0x50
  add       r3, r3, r0
  stw       r4, 0x48(r3)
  b         .loc_0x2F4

.loc_0x2E8:
  li        r0, 0
  stw       r0, 0x0(r22)
  b         .loc_0x41C

.loc_0x2F4:
  cmplwi    r5, 0
  beq-      .loc_0x3E4
  subi      r3, r13, 0x73F0
  bl        0x25D4
  mr.       r30, r3
  bne-      .loc_0x318
  li        r0, 0
  stw       r0, 0x0(r22)
  b         .loc_0x41C

.loc_0x318:
  addi      r3, r30, 0x48
  bl        .loc_0x430
  stwx      r30, r21, r28
  li        r4, 0x1
  li        r18, 0
  lwzx      r3, r21, r28
  stw       r24, 0x20(r3)
  lwz       r0, -0x73F8(r13)
  lwzx      r3, r21, r28
  add       r0, r0, r31
  stw       r0, 0x308(r3)
  lwzx      r3, r21, r28
  stb       r29, 0x14(r3)
  lwz       r0, -0x73F8(r13)
  add       r3, r0, r31
  stw       r4, 0x8(r3)
  lwz       r0, -0x73F8(r13)
  add       r3, r0, r31
  stb       r18, 0x2(r3)
  lwz       r0, -0x73F8(r13)
  add       r3, r0, r31
  stw       r18, 0x4(r3)
  lwz       r0, 0x0(r27)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x3E4
  li        r17, 0
  b         .loc_0x3D8

.loc_0x384:
  lwz       r3, -0x73F8(r13)
  addi      r0, r18, 0x48
  cmplw     r17, r29
  lwzx      r19, r3, r0
  beq-      .loc_0x3D0
  cmplwi    r19, 0
  beq-      .loc_0x3D0
  mr        r3, r19
  bl        0x90C
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0x3D0
  mr        r3, r19
  lfs       f1, -0x73B8(r2)
  lwz       r12, 0x10(r19)
  li        r4, 0xA
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x3D0:
  addi      r18, r18, 0x50
  addi      r17, r17, 0x1

.loc_0x3D8:
  bl        -0x57A4
  cmplw     r17, r3
  blt+      .loc_0x384

.loc_0x3E4:
  mr        r3, r30
  mr        r4, r22
  lwz       r12, 0x10(r30)
  mr        r5, r23
  mr        r6, r24
  mr        r7, r25
  lwz       r12, 0xC8(r12)
  mr        r8, r26
  mr        r9, r27
  mtctr     r12
  bctrl     
  cmplwi    r22, 0
  beq-      .loc_0x41C
  stw       r30, 0x0(r22)

.loc_0x41C:
  lmw       r17, 0x24(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr       

.loc_0x430:
*/
}

/*
 * --INFO--
 * Address:	800B32C8
 * Size:	000388
 */
void JAInter::SeqParameter::init(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r3, r28, 0x2C4
  addi      r4, r28, 0x62C
  bl        -0x13C38
  li        r0, -0x1
  li        r31, 0
  stw       r0, 0x27C(r28)
  mr        r30, r31
  lfs       f31, -0x73C0(r2)
  li        r29, 0
  lfs       f30, -0x73BC(r2)
  stfs      f31, 0x4(r28)
  lfs       f29, -0x73B8(r2)
  stfs      f31, 0x0(r28)
  stw       r31, 0xC(r28)
  stb       r31, 0x279(r28)
  sth       r31, 0x27A(r28)
  stw       r31, 0x280(r28)
  stw       r31, 0x284(r28)
  stw       r31, 0x288(r28)
  stw       r31, 0x28C(r28)
  stw       r31, 0x290(r28)
  stw       r31, 0x294(r28)
  stw       r31, 0x298(r28)
  stw       r31, 0x29C(r28)
  stw       r31, 0x2A0(r28)
  stw       r31, 0x2A4(r28)
  stw       r31, 0x2A8(r28)
  stw       r31, 0x2AC(r28)
  stw       r31, 0x2B0(r28)
  b         .loc_0x1C4

.loc_0xB0:
  lwz       r4, 0x260(r28)
  li        r3, 0
  li        r0, 0x2
  add       r4, r4, r31
  stfs      f31, 0x4(r4)
  stfs      f31, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r4, 0x264(r28)
  add       r4, r4, r31
  stfs      f30, 0x4(r4)
  stfs      f30, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r4, 0x268(r28)
  add       r4, r4, r31
  stfs      f31, 0x4(r4)
  stfs      f31, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r4, 0x26C(r28)
  add       r4, r4, r31
  stfs      f29, 0x4(r4)
  stfs      f29, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r4, 0x270(r28)
  add       r4, r4, r31
  stfs      f30, 0x4(r4)
  stfs      f30, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r4, 0x2B8(r28)
  stbx      r3, r4, r29
  lwz       r4, 0x2B4(r28)
  stwx      r3, r4, r30
  mtctr     r0

.loc_0x130:
  lwz       r0, 0x274(r28)
  li        r11, 0
  addi      r9, r3, 0x2
  addi      r8, r3, 0x4
  lwzx      r4, r30, r0
  addi      r7, r3, 0x6
  addi      r6, r3, 0x8
  addi      r5, r3, 0xA
  sthx      r11, r4, r3
  addi      r4, r3, 0xC
  addi      r0, r3, 0xE
  addi      r3, r3, 0x10
  lwz       r10, 0x274(r28)
  lwzx      r10, r30, r10
  sthx      r11, r10, r9
  lwz       r9, 0x274(r28)
  lwzx      r9, r30, r9
  sthx      r11, r9, r8
  lwz       r8, 0x274(r28)
  lwzx      r8, r30, r8
  sthx      r11, r8, r7
  lwz       r7, 0x274(r28)
  lwzx      r7, r30, r7
  sthx      r11, r7, r6
  lwz       r6, 0x274(r28)
  lwzx      r6, r30, r6
  sthx      r11, r6, r5
  lwz       r5, 0x274(r28)
  lwzx      r5, r30, r5
  sthx      r11, r5, r4
  lwz       r4, 0x274(r28)
  lwzx      r4, r30, r4
  sthx      r11, r4, r0
  bdnz+     .loc_0x130
  addi      r31, r31, 0x10
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x1C4:
  bl        -0x59E0
  cmplw     r29, r3
  blt+      .loc_0xB0
  lfs       f0, -0x73B8(r2)
  li        r29, 0
  lfs       f29, -0x73C0(r2)
  mr        r30, r28
  stfs      f0, 0x14(r28)
  li        r31, 0
  stfs      f0, 0x10(r28)
  stw       r29, 0x1C(r28)
  stfs      f0, 0x24(r28)
  stfs      f0, 0x20(r28)
  stw       r29, 0x2C(r28)
  stfs      f0, 0x34(r28)
  stfs      f0, 0x30(r28)
  stw       r29, 0x3C(r28)
  stfs      f0, 0x44(r28)
  stfs      f0, 0x40(r28)
  stw       r29, 0x4C(r28)
  stfs      f0, 0x54(r28)
  stfs      f0, 0x50(r28)
  stw       r29, 0x5C(r28)
  stfs      f0, 0x64(r28)
  stfs      f0, 0x60(r28)
  stw       r29, 0x6C(r28)
  stfs      f0, 0x74(r28)
  stfs      f0, 0x70(r28)
  stw       r29, 0x7C(r28)
  stfs      f0, 0x84(r28)
  stfs      f0, 0x80(r28)
  stw       r29, 0x8C(r28)
  stfs      f0, 0x94(r28)
  stfs      f0, 0x90(r28)
  stw       r29, 0x9C(r28)
  stfs      f0, 0xA4(r28)
  stfs      f0, 0xA0(r28)
  stw       r29, 0xAC(r28)
  stfs      f0, 0xB4(r28)
  stfs      f0, 0xB0(r28)
  stw       r29, 0xBC(r28)
  stfs      f0, 0xC4(r28)
  stfs      f0, 0xC0(r28)
  stw       r29, 0xCC(r28)
  stfs      f0, 0xD4(r28)
  stfs      f0, 0xD0(r28)
  stw       r29, 0xDC(r28)
  stfs      f0, 0xE4(r28)
  stfs      f0, 0xE0(r28)
  stw       r29, 0xEC(r28)
  stfs      f0, 0xF4(r28)
  stfs      f0, 0xF0(r28)
  stw       r29, 0xFC(r28)
  stfs      f0, 0x104(r28)
  stfs      f0, 0x100(r28)
  stw       r29, 0x10C(r28)
  b         .loc_0x2BC

.loc_0x2A8:
  stfs      f29, 0x114(r30)
  addi      r31, r31, 0x1
  stfs      f29, 0x110(r30)
  stw       r29, 0x11C(r30)
  addi      r30, r30, 0x10

.loc_0x2BC:
  bl        -0x5AB8
  addi      r0, r3, 0xC
  cmplw     r31, r0
  blt+      .loc_0x2A8
  lfs       f29, -0x73BC(r2)
  li        r30, 0
  lfs       f30, -0x73C0(r2)
  li        r29, 0
  lfs       f31, -0x73B8(r2)
  b         .loc_0x340

.loc_0x2E4:
  lwz       r0, 0x250(r28)
  li        r3, 0
  addi      r30, r30, 0x1
  add       r4, r0, r29
  stfs      f29, 0x4(r4)
  stfs      f29, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r0, 0x254(r28)
  add       r4, r0, r29
  stfs      f30, 0x4(r4)
  stfs      f30, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r0, 0x258(r28)
  add       r4, r0, r29
  stfs      f31, 0x4(r4)
  stfs      f31, 0x0(r4)
  stw       r3, 0xC(r4)
  lwz       r0, 0x25C(r28)
  add       r4, r0, r29
  addi      r29, r29, 0x10
  stfs      f29, 0x4(r4)
  stfs      f29, 0x0(r4)
  stw       r3, 0xC(r4)

.loc_0x340:
  bl        -0x5A7C
  rlwinm    r0,r3,0,24,31
  cmplw     r30, r0
  blt+      .loc_0x2E4
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x54(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	800B3650
 * Size:	0001D8
 */
void JAInter::SequenceMgr::releaseSeqBuffer( (JAISequence *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0x4
  blt-      .loc_0x34
  cmplwi    r4, 0
  bne-      .loc_0x184

.loc_0x34:
  cmplwi    r0, 0x3
  blt-      .loc_0x48
  addi      r3, r31, 0x30C
  bl        -0x12738
  b         .loc_0x84

.loc_0x48:
  cmplwi    r0, 0x1
  blt-      .loc_0x84
  lwz       r12, -0x73E4(r13)
  cmplwi    r12, 0
  beq-      .loc_0x7C
  lwz       r4, 0x44(r31)
  mr        r6, r31
  addi      r3, r1, 0x10
  lhz       r5, 0x6(r4)
  li        r4, 0x2
  mtctr     r12
  bctrl     
  b         .loc_0x84

.loc_0x7C:
  lbz       r3, 0x2C0(r31)
  bl        -0x3034

.loc_0x84:
  mr        r3, r31
  bl        0x498
  mr        r3, r31
  bl        0x468
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x108
  li        r29, 0
  mr        r28, r29
  b         .loc_0xFC

.loc_0xA8:
  lwz       r3, -0x73F8(r13)
  addi      r0, r28, 0x48
  lwzx      r30, r3, r0
  cmplw     r31, r30
  beq-      .loc_0xF4
  cmplwi    r30, 0
  beq-      .loc_0xF4
  mr        r3, r30
  bl        0x430
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0xF4
  mr        r3, r30
  lfs       f1, -0x73C0(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0xA
  li        r5, 0xA
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xF4:
  addi      r28, r28, 0x50
  addi      r29, r29, 0x1

.loc_0xFC:
  bl        -0x5C80
  cmplw     r29, r3
  blt+      .loc_0xA8

.loc_0x108:
  li        r0, 0
  stw       r0, 0x40(r31)
  stw       r0, 0x308(r31)
  lbz       r0, 0x15(r31)
  cmplwi    r0, 0x3
  blt-      .loc_0x154
  lwz       r12, -0x73E4(r13)
  cmplwi    r12, 0
  beq-      .loc_0x14C
  lwz       r4, 0x44(r31)
  mr        r6, r31
  addi      r3, r1, 0x8
  lhz       r5, 0x6(r4)
  li        r4, 0x2
  mtctr     r12
  bctrl     
  b         .loc_0x154

.loc_0x14C:
  lbz       r3, 0x2C0(r31)
  bl        -0x3104

.loc_0x154:
  li        r0, 0
  mr        r4, r31
  stb       r0, 0x15(r31)
  subi      r3, r13, 0x73F0
  bl        0x2038
  lbz       r0, 0x14(r31)
  li        r4, 0
  lwz       r3, -0x73F8(r13)
  mulli     r0, r0, 0x50
  add       r3, r3, r0
  stw       r4, 0x48(r3)
  b         .loc_0x1B8

.loc_0x184:
  lbz       r0, 0x14(r31)
  lwz       r3, -0x73F8(r13)
  mulli     r0, r0, 0x50
  add       r3, r3, r0
  lwz       r0, 0x8(r3)
  ori       r0, r0, 0x2
  stw       r0, 0x8(r3)
  lbz       r0, 0x14(r31)
  lwz       r3, -0x73F8(r13)
  mulli     r0, r0, 0x50
  add       r3, r3, r0
  lwz       r3, 0x48(r3)
  stw       r4, 0x28(r3)

.loc_0x1B8:
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
 * Size:	0000A0
 */
void JAInter::SequenceMgr::stopPlayingSeq( (unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void JAInter::SequenceMgr::checkPlayingSoundTrack( (unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B3828
 * Size:	000010
 */
void JAInter::SequenceMgr::getPlayTrackInfo( (unsigned long))
{
/*
.loc_0x0:
  mulli     r0, r3, 0x50
  lwz       r3, -0x73F8(r13)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void JAInter::SequenceMgr::loadArcSeqData( (unsigned long, bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAInter::SequenceMgr::loadCustomArcSeqData( (unsigned short, bool))
{
	// UNUSED FUNCTION
}
