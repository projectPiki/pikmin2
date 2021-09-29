

/*
 * --INFO--
 * Address:	8043F188
 * Size:	000050
 */
void __ct__Q35P2JME6Window8DrawInfoFv(void)
{
/*
.loc_0x0:
  lis       r5, 0x804F
  lis       r4, 0x804F
  subi      r0, r5, 0x4AD8
  li        r6, 0
  stw       r0, 0x0(r3)
  addi      r5, r2, 0x25C0
  subi      r4, r4, 0x3254
  li        r0, -0x1
  stw       r6, 0x10(r3)
  lfs       f1, 0x25C4(r2)
  stw       r6, 0xC(r3)
  lfs       f0, 0x25C8(r2)
  stw       r6, 0x8(r3)
  stw       r6, 0x4(r3)
  stw       r5, 0x14(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x18(r3)
  stfs      f1, 0x1C(r3)
  stfs      f0, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void update__Q35P2JME6Window8DrawInfoFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void init__Q35P2JME6Window8DrawInfoFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void __ct__Q35P2JME6Window11DrawInfoMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void init__Q35P2JME6Window11DrawInfoMgrFUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F1D8
 * Size:	000060
 */
void __dt__Q35P2JME6Window8DrawInfoFv(void)
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
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x3254
  stw       r0, 0x0(r30)
  bl        -0x2DC80
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x41B164

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
 * Address:	........
 * Size:	000040
 */
void update__Q35P2JME6Window11DrawInfoMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void reset__Q35P2JME6Window11DrawInfoMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F238
 * Size:	000030
 */
void searchDrawInfo__Q35P2JME6Window11DrawInfoMgrFi(void)
{
/*
.loc_0x0:
  lwz       r5, 0x10(r3)
  li        r3, 0
  b         .loc_0x24

.loc_0xC:
  lwz       r0, 0x18(r5)
  cmpw      r4, r0
  bne-      .loc_0x20
  mr        r3, r5
  blr       

.loc_0x20:
  lwz       r5, 0x4(r5)

.loc_0x24:
  cmplwi    r5, 0
  bne+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F268
 * Size:	000060
 */
void getDrawInfo__Q35P2JME6Window11DrawInfoMgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r31, 0x28(r3)
  cmplwi    r31, 0
  beq-      .loc_0x44
  stw       r4, 0x18(r31)
  mr        r3, r31
  lfs       f0, 0x25C4(r2)
  stfs      f0, 0x1C(r31)
  bl        -0x2DCCC
  mr        r3, r30
  mr        r4, r31
  bl        -0x2DEA0

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
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
 * Size:	000078
 */
void releaseDrawInfo__Q35P2JME6Window11DrawInfoMgrFPQ35P2JME6Window8DrawInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F2C8
 * Size:	00003C
 */
void __ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x7A98
  lis       r4, 0x804F
  mr        r3, r31
  subi      r0, r4, 0x32CC
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F304
 * Size:	0000A4
 */
void doCharacterSE__Q35P2JME6Window18TSequenceProcessorFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r4, -0x64AC(r13)
  cmplwi    r4, 0
  beq-      .loc_0x2C
  beq-      .loc_0x90
  lwz       r0, 0x1F0(r4)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x90

.loc_0x2C:
  lwz       r0, 0x68(r3)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x90
  lbz       r0, 0x6C(r3)
  li        r31, 0
  cmpwi     r0, 0
  beq-      .loc_0x58
  blt-      .loc_0x58
  cmpwi     r0, 0x3
  bge-      .loc_0x58
  li        r31, 0x1

.loc_0x58:
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x80
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5318
  li        r4, 0x237
  subi      r5, r5, 0x5338
  crclr     6, 0x6
  bl        -0x414D40

.loc_0x80:
  lwz       r3, -0x6E38(r13)
  mr        r5, r31
  li        r4, 0x1850
  bl        -0x100028

.loc_0x90:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F3A8
 * Size:	00007C
 */
void doCharacterSEStart__Q35P2JME6Window18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, -0x64AC(r13)
  cmplwi    r4, 0
  beq-      .loc_0x28
  beq-      .loc_0x6C
  lwz       r0, 0x1F0(r4)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x6C

.loc_0x28:
  lwz       r0, 0x68(r3)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x6C
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5318
  li        r4, 0x237
  subi      r5, r5, 0x5338
  crclr     6, 0x6
  bl        -0x414DC0

.loc_0x5C:
  lwz       r3, -0x6E38(r13)
  li        r4, 0x1846
  li        r5, 0
  bl        -0x1000A8

.loc_0x6C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F424
 * Size:	00007C
 */
void doCharacterSEEnd__Q35P2JME6Window18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, -0x64AC(r13)
  cmplwi    r4, 0
  beq-      .loc_0x28
  beq-      .loc_0x6C
  lwz       r0, 0x1F0(r4)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x6C

.loc_0x28:
  lwz       r0, 0x68(r3)
  rlwinm.   r0,r0,0,28,28
  bne-      .loc_0x6C
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5318
  li        r4, 0x237
  subi      r5, r5, 0x5338
  crclr     6, 0x6
  bl        -0x414E3C

.loc_0x5C:
  lwz       r3, -0x6E38(r13)
  li        r4, 0x185F
  li        r5, 0
  bl        -0x100124

.loc_0x6C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F4A0
 * Size:	00005C
 */
void doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x34
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5318
  li        r4, 0x237
  subi      r5, r5, 0x5338
  crclr     6, 0x6
  bl        -0x414E90

.loc_0x34:
  lwz       r3, -0x6E38(r13)
  bl        -0x100050
  lwz       r3, -0x67A8(r13)
  li        r4, 0x186E
  li        r5, 0
  bl        -0x106EB8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F4FC
 * Size:	000060
 */
void __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        -0x6134
  lis       r3, 0x804F
  addi      r30, r31, 0x110
  subi      r0, r3, 0x335C
  stw       r0, 0x0(r31)
  mr        r3, r30
  bl        -0x2E19C
  addi      r3, r30, 0x18
  bl        -0x2E1A4
  lfs       f0, 0x25CC(r2)
  mr        r3, r31
  stfs      f0, 0x140(r31)
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
 * Size:	000064
 */
void __dt__Q35P2JME6Window11DrawInfoMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void initDrawInfoMgr__Q35P2JME6Window19TRenderingProcessorFUl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043F55C
 * Size:	000344
 */
void doDrawCommon__Q35P2JME6Window19TRenderingProcessorFffP7MatrixfP7Matrixf(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stfd      f30, 0xC0(r1)
  psq_st    f30,0xC8(r1),0,0
  stfd      f29, 0xB0(r1)
  psq_st    f29,0xB8(r1),0,0
  stfd      f28, 0xA0(r1)
  psq_st    f28,0xA8(r1),0,0
  stfd      f27, 0x90(r1)
  psq_st    f27,0x98(r1),0,0
  stmw      r27, 0x7C(r1)
  mr        r29, r3
  fmr       f30, f1
  fmr       f31, f2
  lwz       r6, 0x40(r3)
  lwz       r3, 0x120(r3)
  mr        r30, r4
  mr        r31, r5
  li        r27, 0xFF
  li        r28, 0
  b         .loc_0x78

.loc_0x60:
  lwz       r0, 0x18(r3)
  cmpw      r6, r0
  bne-      .loc_0x74
  mr        r28, r3
  b         .loc_0x80

.loc_0x74:
  lwz       r3, 0x4(r3)

.loc_0x78:
  cmplwi    r3, 0
  bne+      .loc_0x60

.loc_0x80:
  lfs       f1, 0x140(r29)
  fneg      f0, f1
  fcmpo     cr0, f31, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x2D4
  lfs       f2, 0x3C(r29)
  fadds     f0, f2, f1
  fcmpo     cr0, f31, f0
  bge-      .loc_0x2D4
  lfs       f0, 0x25C4(r2)
  fcmpo     cr0, f31, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xC8
  fcmpo     cr0, f31, f2
  bge-      .loc_0xC8
  fmr       f28, f0
  fmr       f27, f0
  b         .loc_0x17C

.loc_0xC8:
  lfs       f0, 0x25C4(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0xDC
  fmr       f28, f31
  b         .loc_0xE0

.loc_0xDC:
  fsubs     f28, f31, f2

.loc_0xE0:
  fmuls     f2, f28, f28
  lfs       f0, 0x25C4(r2)
  fmsubs    f1, f1, f1, f2
  fcmpo     cr0, f1, f0
  ble-      .loc_0x104
  ble-      .loc_0x108
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x108

.loc_0x104:
  fmr       f1, f0

.loc_0x108:
  fneg      f29, f1
  lis       r3, 0x8051
  fmr       f2, f28
  subi      r3, r3, 0x2E20
  fmr       f1, f29
  bl        -0x40A570
  lfs       f5, 0x140(r29)
  lfs       f4, 0x25D0(r2)
  fdivs     f3, f28, f5
  lfs       f2, 0x25D4(r2)
  lfs       f0, 0x25C4(r2)
  fabs      f3, f3
  fadds     f27, f4, f1
  fadds     f28, f29, f5
  frsp      f1, f3
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x160
  lfs       f0, 0x25C8(r2)
  fadds     f0, f0, f1
  b         .loc_0x168

.loc_0x160:
  lfs       f0, 0x25C8(r2)
  fsubs     f0, f1, f0

.loc_0x168:
  fctiwz    f0, f0
  stfd      f0, 0x60(r1)
  lwz       r0, 0x64(r1)
  subfic    r0, r0, 0xFF
  rlwinm    r27,r0,0,24,31

.loc_0x17C:
  cmplwi    r28, 0
  bne-      .loc_0x1CC
  lwz       r28, 0x138(r29)
  lwz       r0, 0x40(r29)
  cmplwi    r28, 0
  beq-      .loc_0x1B4
  stw       r0, 0x18(r28)
  mr        r3, r28
  lfs       f0, 0x25C4(r2)
  stfs      f0, 0x1C(r28)
  bl        -0x2E130
  mr        r4, r28
  addi      r3, r29, 0x110
  bl        -0x2E304

.loc_0x1B4:
  lwz       r12, 0x0(r29)
  mr        r3, r29
  mr        r4, r28
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     

.loc_0x1CC:
  cmplwi    r28, 0
  beq-      .loc_0x220
  stfs      f30, 0x20(r1)
  mr        r3, r29
  fmr       f1, f27
  mr        r5, r28
  stfs      f31, 0x24(r1)
  addi      r4, r1, 0x2C
  lwz       r8, 0x20(r1)
  addi      r6, r1, 0x8
  stfs      f28, 0x28(r1)
  lwz       r7, 0x24(r1)
  lwz       r0, 0x28(r1)
  stw       r8, 0x8(r1)
  stw       r7, 0xC(r1)
  stw       r0, 0x10(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x238

.loc_0x220:
  stfs      f30, 0x14(r1)
  addi      r3, r1, 0x2C
  addi      r4, r1, 0x14
  stfs      f31, 0x18(r1)
  stfs      f28, 0x1C(r1)
  bl        -0x16F50

.loc_0x238:
  cmplwi    r31, 0
  beq-      .loc_0x28C
  mr        r4, r31
  addi      r3, r1, 0x2C
  bl        -0x3554D8
  lfs       f2, 0xC(r31)
  mr        r4, r31
  lfs       f1, 0x25D8(r2)
  mr        r5, r31
  lfs       f3, 0x1C(r31)
  lfs       f0, 0x25DC(r2)
  fadds     f2, f2, f1
  fadds     f3, f3, f0
  stfs      f2, 0xC(r31)
  stfs      f3, 0x1C(r31)
  lwz       r3, 0x44(r29)
  bl        -0x3554D4
  lwz       r3, 0x48(r29)
  mr        r4, r31
  mr        r5, r31
  bl        -0x3554E4

.loc_0x28C:
  addi      r4, r1, 0x2C
  lwz       r3, 0x44(r29)
  mr        r5, r4
  bl        -0x3554F4
  addi      r4, r1, 0x2C
  lwz       r3, 0x48(r29)
  mr        r5, r4
  bl        -0x355504
  cmplwi    r30, 0
  beq-      .loc_0x2C4
  mr        r4, r30
  addi      r3, r1, 0x2C
  bl        -0x35554C
  b         .loc_0x2D8

.loc_0x2C4:
  addi      r3, r1, 0x2C
  li        r4, 0
  bl        -0x3562B0
  b         .loc_0x2D8

.loc_0x2D4:
  li        r27, 0

.loc_0x2D8:
  rlwinm    r3,r27,0,24,31
  lis       r0, 0x4330
  stw       r3, 0x64(r1)
  lfd       f2, 0x25E0(r2)
  stw       r0, 0x60(r1)
  lfs       f0, 0x78(r29)
  lfd       f1, 0x60(r1)
  fsubs     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x68(r1)
  lwz       r3, 0x6C(r1)
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  psq_l     f28,0xA8(r1),0,0
  lfd       f28, 0xA0(r1)
  psq_l     f27,0x98(r1),0,0
  lfd       f27, 0x90(r1)
  lmw       r27, 0x7C(r1)
  lwz       r0, 0xE4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F8A0
 * Size:	000004
 */
void doGetDrawInfo__Q35P2JME6Window19TRenderingProcessorFPQ35P2JME6Window8DrawInfo(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8043F8A4
 * Size:	000284
 */
void makeMatrix__Q35P2JME6Window19TRenderingProcessorFP7MatrixfPQ35P2JME6Window8DrawInfof10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  lbz       r0, 0xDC(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x11C
  bge-      .loc_0x28
  cmpwi     r0, 0
  bge-      .loc_0x34
  b         .loc_0x274

.loc_0x28:
  cmpwi     r0, 0x3
  bge-      .loc_0x274
  b         .loc_0x1C4

.loc_0x34:
  lfs       f3, 0x1C(r5)
  lfs       f0, 0x20(r5)
  lfs       f2, 0x25E8(r2)
  fdivs     f5, f3, f0
  lfs       f0, 0x25C4(r2)
  fmuls     f2, f2, f5
  fcmpo     cr0, f2, f0
  bge-      .loc_0x58
  fneg      f2, f2

.loc_0x58:
  lfs       f0, 0x25EC(r2)
  lis       r3, 0x8050
  lfs       f4, 0x25F0(r2)
  addi      r3, r3, 0x71A0
  fmuls     f3, f2, f0
  lfs       f2, 0x25F4(r2)
  fsubs     f0, f4, f5
  addi      r7, r3, 0x4
  stfs      f4, 0x44(r1)
  fctiwz    f5, f3
  fmuls     f3, f2, f0
  stfs      f4, 0x4C(r1)
  lfs       f2, 0x25E8(r2)
  stfd      f5, 0x50(r1)
  lfs       f0, 0x25C4(r2)
  lwz       r0, 0x54(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f5, r7, r0
  fnmsubs   f3, f3, f5, f4
  stfs      f3, 0x48(r1)
  lfs       f4, 0x1C(r5)
  lfs       f3, 0x20(r5)
  fdivs     f5, f4, f3
  fmuls     f3, f2, f5
  fcmpo     cr0, f3, f0
  bge-      .loc_0xC4
  fneg      f3, f3

.loc_0xC4:
  lfs       f2, 0x25EC(r2)
  mr        r3, r4
  lfs       f0, 0x25F0(r2)
  addi      r4, r1, 0x44
  fmuls     f4, f3, f2
  stfs      f1, 0x38(r1)
  lfs       f3, 0x25C4(r2)
  fsubs     f0, f0, f5
  lfs       f2, 0x25D0(r2)
  addi      r5, r1, 0x38
  fctiwz    f1, f4
  stfs      f3, 0x3C(r1)
  fmuls     f0, f2, f0
  stfd      f1, 0x58(r1)
  lwz       r0, 0x5C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r7, r0
  fmuls     f0, f0, f1
  fneg      f0, f0
  stfs      f0, 0x40(r1)
  bl        -0x176E0
  b         .loc_0x274

.loc_0x11C:
  lfs       f3, 0x1C(r5)
  lfs       f0, 0x20(r5)
  lfs       f2, 0x25FC(r2)
  fdivs     f4, f3, f0
  lfs       f3, 0x25F8(r2)
  lfs       f0, 0x25C4(r2)
  fmuls     f2, f2, f4
  fmuls     f3, f3, f2
  fcmpo     cr0, f3, f0
  bge-      .loc_0x148
  fneg      f3, f3

.loc_0x148:
  lfs       f2, 0x25EC(r2)
  lis       r3, 0x8050
  lfs       f0, 0x25C4(r2)
  addi      r7, r3, 0x71A0
  fmuls     f2, f3, f2
  stfs      f1, 0x20(r1)
  lfs       f5, 0x25F0(r2)
  mr        r3, r4
  lfs       f3, 0x25F8(r2)
  addi      r4, r1, 0x2C
  fctiwz    f1, f2
  stfs      f0, 0x24(r1)
  fsubs     f4, f5, f4
  addi      r5, r1, 0x20
  stfs      f0, 0x28(r1)
  stfd      f1, 0x58(r1)
  lwz       r0, 0x5C(r1)
  rlwinm    r0,r0,3,18,28
  add       r7, r7, r0
  lfs       f0, 0x4(r7)
  fmuls     f0, f3, f0
  fmuls     f0, f0, f4
  fmuls     f0, f4, f0
  fabs      f0, f0
  frsp      f0, f0
  fadds     f0, f5, f0
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x30(r1)
  stfs      f0, 0x34(r1)
  bl        -0x17788
  b         .loc_0x274

.loc_0x1C4:
  lfs       f3, 0x1C(r5)
  lfs       f0, 0x20(r5)
  lfs       f2, 0x25FC(r2)
  fdivs     f4, f3, f0
  lfs       f3, 0x25F8(r2)
  lfs       f0, 0x25C4(r2)
  fmuls     f2, f2, f4
  fmuls     f2, f3, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1F0
  fneg      f2, f2

.loc_0x1F0:
  lfs       f0, 0x25EC(r2)
  lis       r3, 0x8050
  lfs       f7, 0x25F0(r2)
  addi      r7, r3, 0x71A0
  fmuls     f0, f2, f0
  lfs       f3, 0x25C4(r2)
  fsubs     f6, f7, f4
  mr        r3, r4
  lfs       f5, 0x2600(r2)
  addi      r4, r1, 0x14
  fctiwz    f4, f0
  stfs      f1, 0x8(r1)
  lfs       f2, 0x2604(r2)
  addi      r5, r1, 0x8
  lfs       f0, 0x4(r6)
  stfd      f4, 0x58(r1)
  lwz       r0, 0x5C(r1)
  stfs      f7, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  add       r7, r7, r0
  stfs      f7, 0x18(r1)
  lfs       f4, 0x4(r7)
  stfs      f7, 0x1C(r1)
  fmuls     f1, f5, f4
  stfs      f3, 0xC(r1)
  fmuls     f1, f1, f6
  stfs      f3, 0x10(r1)
  fmuls     f1, f6, f1
  fabs      f1, f1
  frsp      f1, f1
  fnmsubs   f0, f2, f1, f0
  stfs      f0, 0x4(r6)
  bl        -0x1783C

.loc_0x274:
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8043FB28
 * Size:	000188
 */
void doDrawLetter__Q35P2JME6Window19TRenderingProcessorFffffib(void)
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  stw       r0, 0xB4(r1)
  stfd      f31, 0xA0(r1)
  psq_st    f31,0xA8(r1),0,0
  stfd      f30, 0x90(r1)
  psq_st    f30,0x98(r1),0,0
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  stw       r29, 0x84(r1)
  stw       r28, 0x80(r1)
  lwz       r12, 0x0(r3)
  mr        r29, r4
  mr        r30, r5
  fmr       f30, f3
  lwz       r12, 0x84(r12)
  fmr       f31, f4
  mr        r28, r3
  addi      r4, r1, 0x50
  addi      r5, r1, 0x20
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  mr        r31, r3
  beq-      .loc_0x140
  addi      r3, r1, 0x20
  li        r4, 0
  bl        -0x35661C
  li        r3, -0x1
  rlwinm    r0,r31,31,25,31
  stw       r3, 0x1C(r1)
  li        r3, 0
  addi      r4, r1, 0x18
  addi      r5, r1, 0x14
  stb       r3, 0x1E(r1)
  stb       r3, 0x1D(r1)
  stb       r3, 0x1C(r1)
  stb       r0, 0x1F(r1)
  lwz       r0, 0x1C(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x8(r1)
  lwz       r3, 0x4C(r28)
  bl        -0x4129C4
  lwz       r3, 0x4C(r28)
  fmr       f3, f30
  lfs       f1, 0x25C4(r2)
  fmr       f4, f31
  lwz       r12, 0x0(r3)
  mr        r4, r29
  fmr       f2, f1
  lwz       r12, 0x14(r12)
  mr        r5, r30
  mtctr     r12
  bctrl     
  addi      r3, r1, 0x50
  li        r4, 0
  bl        -0x356694
  stb       r31, 0x67(r28)
  addi      r4, r1, 0x10
  addi      r5, r1, 0xC
  stb       r31, 0x6B(r28)
  lwz       r0, 0x68(r28)
  stw       r0, 0xC(r1)
  lwz       r0, 0x64(r28)
  stw       r0, 0x10(r1)
  lwz       r3, 0x4C(r28)
  bl        -0x412A24
  lwz       r3, 0x4C(r28)
  fmr       f3, f30
  lfs       f1, 0x25C4(r2)
  fmr       f4, f31
  lwz       r12, 0x0(r3)
  mr        r4, r29
  fmr       f2, f1
  lwz       r12, 0x14(r12)
  mr        r5, r30
  mtctr     r12
  bctrl     
  b         .loc_0x158

.loc_0x140:
  fmr       f1, f30
  lwz       r4, 0x4C(r28)
  mr        r3, r28
  mr        r5, r29
  mr        r6, r30
  bl        -0x3968

.loc_0x158:
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  lwz       r29, 0x84(r1)
  lwz       r0, 0xB4(r1)
  lwz       r28, 0x80(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	8043FCB0
 * Size:	00017C
 */
void doDrawRuby__Q35P2JME6Window19TRenderingProcessorFffffib(void)
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
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  lwz       r12, 0x0(r3)
  mr        r30, r4
  mr        r31, r5
  fmr       f30, f3
  lwz       r12, 0x84(r12)
  fmr       f31, f4
  mr        r29, r3
  li        r4, 0
  li        r5, 0
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x130
  lwz       r0, 0x6C(r29)
  addi      r4, r1, 0x10
  stw       r0, 0x18(r1)
  stb       r3, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x10(r1)
  lwz       r3, 0x50(r29)
  bl        -0x412B6C
  lwz       r0, 0xCC(r29)
  addi      r4, r1, 0xC
  li        r3, 0x1
  stw       r0, 0x14(r1)
  lbz       r5, 0x14(r1)
  lbz       r6, 0x15(r1)
  rlwinm    r0,r5,1,31,31
  lbz       r7, 0x16(r1)
  add       r5, r0, r5
  srawi     r9, r5, 0x1
  rlwinm    r0,r6,1,31,31
  add       r0, r0, r6
  rlwinm    r6,r7,1,31,31
  srawi     r8, r0, 0x1
  lbz       r5, 0x17(r1)
  add       r6, r6, r7
  stb       r9, 0x14(r1)
  rlwinm    r0,r5,1,31,31
  srawi     r6, r6, 0x1
  stb       r8, 0x15(r1)
  add       r0, r0, r5
  srawi     r0, r0, 0x1
  stb       r6, 0x16(r1)
  stb       r0, 0x17(r1)
  lwz       r0, 0x14(r1)
  stw       r0, 0xC(r1)
  bl        -0x357734
  lwz       r3, 0x50(r29)
  fmr       f3, f30
  lfs       f1, 0x25C4(r2)
  fmr       f4, f31
  lwz       r12, 0x0(r3)
  mr        r4, r30
  fmr       f2, f1
  lwz       r12, 0x14(r12)
  mr        r5, r31
  mtctr     r12
  bctrl     
  lwz       r0, 0xCC(r29)
  fmr       f31, f1
  addi      r4, r1, 0x8
  li        r3, 0x1
  stw       r0, 0x8(r1)
  bl        -0x357778
  b         .loc_0x14C

.loc_0x130:
  fmr       f1, f30
  lwz       r4, 0x50(r29)
  mr        r3, r29
  mr        r5, r30
  mr        r6, r31
  bl        -0x3AE0
  fmr       f31, f1

.loc_0x14C:
  fmr       f1, f31
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r0, 0x54(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8043FE2C
 * Size:	0001DC
 */
void doDrawImage__Q35P2JME6Window19TRenderingProcessorFP10JUTTextureffff(void)
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
  stw       r31, 0x7C(r1)
  stw       r30, 0x78(r1)
  lwz       r12, 0x0(r3)
  mr        r31, r4
  fmr       f30, f3
  mr        r30, r3
  lwz       r12, 0x84(r12)
  fmr       f31, f4
  addi      r4, r1, 0x40
  addi      r5, r1, 0x10
  mtctr     r12
  bctrl     
  rlwinm.   r7,r3,0,24,31
  beq-      .loc_0x1B4
  lbz       r0, 0x73(r30)
  li        r6, -0x1
  lis       r4, 0x8081
  stw       r6, 0xC(r1)
  mullw     r0, r0, r7
  mr        r3, r30
  subi      r5, r4, 0x7F7F
  stw       r6, 0x8(r1)
  mulhw     r4, r5, r0
  add       r0, r4, r0
  srawi     r0, r0, 0x7
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r4
  stb       r0, 0x73(r30)
  lbz       r0, 0x77(r30)
  mullw     r0, r0, r7
  mulhw     r4, r5, r0
  add       r0, r4, r0
  srawi     r0, r0, 0x7
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r4
  stb       r0, 0x77(r30)
  lbz       r10, 0x70(r30)
  lbz       r9, 0x71(r30)
  lbz       r8, 0x72(r30)
  lbz       r7, 0x73(r30)
  lbz       r6, 0x74(r30)
  lbz       r5, 0x75(r30)
  lbz       r4, 0x76(r30)
  lbz       r0, 0x77(r30)
  stb       r10, 0xC(r1)
  stb       r9, 0xD(r1)
  stb       r8, 0xE(r1)
  stb       r7, 0xF(r1)
  stb       r6, 0x8(r1)
  stb       r5, 0x9(r1)
  stb       r4, 0xA(r1)
  stb       r0, 0xB(r1)
  bl        -0x443C
  addi      r3, r1, 0x10
  li        r4, 0
  bl        -0x3569AC
  lbz       r0, 0x73(r30)
  li        r5, 0
  lfs       f1, 0x25C4(r2)
  fmr       f3, f30
  stb       r5, 0x70(r30)
  rlwinm    r0,r0,31,24,31
  fmr       f2, f1
  mr        r3, r30
  stb       r5, 0x71(r30)
  fmr       f4, f31
  mr        r4, r31
  stb       r5, 0x72(r30)
  stb       r0, 0x73(r30)
  lbz       r0, 0x77(r30)
  stb       r5, 0x74(r30)
  rlwinm    r0,r0,31,24,31
  stb       r5, 0x75(r30)
  stb       r5, 0x76(r30)
  stb       r0, 0x77(r30)
  bl        -0x4164
  addi      r3, r1, 0x40
  li        r4, 0
  bl        -0x356A08
  lbz       r0, 0xC(r1)
  fmr       f3, f30
  lfs       f1, 0x25C4(r2)
  fmr       f4, f31
  stb       r0, 0x70(r30)
  mr        r3, r30
  lbz       r0, 0xD(r1)
  lbz       r5, 0xE(r1)
  fmr       f2, f1
  stb       r0, 0x71(r30)
  mr        r4, r31
  lbz       r0, 0xF(r1)
  stb       r5, 0x72(r30)
  lbz       r5, 0x8(r1)
  stb       r0, 0x73(r30)
  lbz       r0, 0x9(r1)
  stb       r5, 0x74(r30)
  lbz       r5, 0xA(r1)
  stb       r0, 0x75(r30)
  lbz       r0, 0xB(r1)
  stb       r5, 0x76(r30)
  stb       r0, 0x77(r30)
  bl        -0x41CC

.loc_0x1B4:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  lwz       r31, 0x7C(r1)
  lwz       r0, 0xA4(r1)
  lwz       r30, 0x78(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	80440008
 * Size:	000040
 */
void update__Q35P2JME6Window19TRenderingProcessorFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x120(r3)
  b         .loc_0x34

.loc_0x8:
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1C(r4)
  lfs       f0, 0x54(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x1C(r4)
  lfs       f0, 0x1C(r4)
  lfs       f1, 0x20(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x30
  stfs      f1, 0x1C(r4)

.loc_0x30:
  lwz       r4, 0x4(r4)

.loc_0x34:
  cmplwi    r4, 0
  bne+      .loc_0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	80440048
 * Size:	0000A4
 */
void reset__Q35P2JME6Window19TRenderingProcessorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stmw      r26, 0x8(r1)
  mr        r26, r3
  bl        -0x3D60
  lis       r4, 0x804A
  lis       r3, 0x804A
  lwz       r27, 0x120(r26)
  subi      r29, r4, 0x534C
  lfs       f31, 0x25C4(r2)
  subi      r30, r3, 0x5338
  li        r31, -0x1
  b         .loc_0x80

.loc_0x40:
  cmplwi    r27, 0
  lwz       r28, 0x4(r27)
  bne-      .loc_0x60
  mr        r3, r29
  mr        r5, r30
  li        r4, 0xFD
  crclr     6, 0x6
  bl        -0x415A64

.loc_0x60:
  stw       r31, 0x18(r27)
  mr        r3, r27
  stfs      f31, 0x1C(r27)
  bl        -0x2EAE4
  mr        r4, r27
  addi      r3, r26, 0x128
  bl        -0x2ECB8
  mr        r27, r28

.loc_0x80:
  cmplwi    r27, 0
  bne+      .loc_0x40
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  lmw       r26, 0x8(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804400EC
 * Size:	000050
 */
void __ct__Q35P2JME6Window8TControlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x76CC
  lis       r3, 0x804F
  lfs       f1, 0x2600(r2)
  subi      r0, r3, 0x33A4
  lfs       f0, 0x25C4(r2)
  stw       r0, 0x0(r31)
  mr        r3, r31
  stfs      f1, 0x50(r31)
  stfs      f0, 0x54(r31)
  stfs      f0, 0x58(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8044013C
 * Size:	000100
 */
void initRenderingProcessor__Q35P2JME6Window8TControlFUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r4
  subi      r31, r5, 0x5358
  lwz       r30, 0x40(r3)
  lwz       r12, 0x128(r30)
  addi      r3, r30, 0x128
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  beq-      .loc_0x50
  addi      r3, r31, 0xC
  addi      r5, r31, 0x20
  li        r4, 0x9E
  crclr     6, 0x6
  bl        -0x415B48

.loc_0x50:
  addi      r3, r30, 0x110
  lwz       r12, 0x110(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  beq-      .loc_0x80
  addi      r3, r31, 0xC
  addi      r5, r31, 0x20
  li        r4, 0x9F
  crclr     6, 0x6
  bl        -0x415B78

.loc_0x80:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x2C
  li        r5, 0
  bl        -0x1CE6C
  mulli     r3, r27, 0x24
  addi      r3, r3, 0x10
  bl        -0x41C228
  lis       r4, 0x8044
  lis       r5, 0x8044
  subi      r4, r4, 0xE78
  mr        r7, r27
  subi      r5, r5, 0xE28
  li        r6, 0x24
  bl        -0x37E800
  li        r29, 0
  mr        r28, r3
  b         .loc_0xD8

.loc_0xC4:
  mr        r4, r28
  addi      r3, r30, 0x128
  bl        -0x2EE00
  addi      r28, r28, 0x24
  addi      r29, r29, 0x1

.loc_0xD8:
  cmplw     r29, r27
  blt+      .loc_0xC4
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x2C
  bl        -0x1CEC0
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8044023C
 * Size:	000188
 */
void update__Q35P2JME6Window8TControlFP10ControllerP10Controller(void)
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
  bl        -0x77B0
  mr        r3, r30
  bl        -0x7414
  lwz       r4, 0x3C(r30)
  cmplwi    r4, 0
  beq-      .loc_0x170
  lwz       r5, 0x68(r4)
  rlwinm.   r0,r5,0,29,29
  beq-      .loc_0x170
  rlwinm.   r0,r5,0,31,31
  bne-      .loc_0x7C
  ori       r0, r5, 0x1
  lfs       f0, 0x25C4(r2)
  stw       r0, 0x68(r4)
  lwz       r4, 0x40(r30)
  lfs       f1, 0x58(r4)
  stfs      f1, 0x54(r30)
  lwz       r4, 0x40(r30)
  lfs       f2, 0x54(r30)
  lfs       f1, 0x3C(r4)
  fsubs     f1, f2, f1
  stfs      f1, 0x58(r30)
  stfs      f0, 0x48(r30)
  b         .loc_0x170

.loc_0x7C:
  lfs       f1, 0x48(r30)
  lfs       f0, 0x25C8(r2)
  lfs       f2, 0x25F0(r2)
  fdivs     f3, f1, f0
  fcmpo     cr0, f3, f2
  ble-      .loc_0xB0
  rlwinm    r0,r5,0,0,30
  stw       r0, 0x68(r4)
  lwz       r4, 0x3C(r30)
  lwz       r0, 0x68(r4)
  rlwinm    r0,r0,0,30,28
  stw       r0, 0x68(r4)
  b         .loc_0x100

.loc_0xB0:
  lfs       f1, 0x2608(r2)
  lfs       f0, 0x25C4(r2)
  fmuls     f2, f1, f3
  fcmpo     cr0, f2, f0
  bge-      .loc_0xC8
  fneg      f2, f2

.loc_0xC8:
  lfs       f0, 0x25EC(r2)
  lis       r4, 0x8050
  addi      r4, r4, 0x71A0
  lfs       f1, 0x25F0(r2)
  fmuls     f0, f2, f0
  lfs       f2, 0x25C8(r2)
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  add       r4, r4, r0
  lfs       f0, 0x4(r4)
  fsubs     f0, f1, f0
  fmuls     f2, f2, f0

.loc_0x100:
  lfs       f1, 0x54(r30)
  cmplwi    r31, 0
  lfs       f0, 0x58(r30)
  lwz       r4, 0x40(r30)
  fsubs     f0, f0, f1
  fmadds    f0, f2, f0, f1
  stfs      f0, 0x58(r4)
  beq-      .loc_0x12C
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x140

.loc_0x12C:
  cmplwi    r31, 0
  beq-      .loc_0x15C
  lwz       r0, 0x18(r31)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x15C

.loc_0x140:
  lwz       r4, -0x6514(r13)
  lfs       f2, 0x25F8(r2)
  lfs       f1, 0x54(r4)
  lfs       f0, 0x48(r30)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x48(r30)
  b         .loc_0x170

.loc_0x15C:
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x48(r30)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x48(r30)

.loc_0x170:
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
 * Address:	804403C4
 * Size:	000020
 */
void reset__Q35P2JME6Window8TControlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x75F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804403E4
 * Size:	00007C
 */
void draw__Q35P2JME6Window8TControlFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lfs       f2, 0x260C(r2)
  stw       r0, 0x54(r1)
  lfs       f1, 0x2610(r2)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  lfs       f0, 0x25C4(r2)
  addi      r4, r1, 0x8
  stw       r30, 0x48(r1)
  mr        r30, r3
  addi      r3, r1, 0x14
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x17BE0
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  addi      r4, r1, 0x14
  addi      r5, r31, 0x210
  bl        -0x7548
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80440460
 * Size:	000050
 */
void onInit__Q35P2JME6Window8TControlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6428(r13)
  cmplwi    r4, 0
  beq-      .loc_0x38
  lwz       r4, 0x18(r4)
  bl        -0x79B8
  lwz       r4, -0x6428(r13)
  mr        r3, r31
  lwz       r4, 0x18(r4)
  bl        -0x795C

.loc_0x38:
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
 * Address:	804404B0
 * Size:	0000A8
 */
void __dt__Q35P2JME6Window19TRenderingProcessorFv(void)
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
  beq-      .loc_0x8C
  lis       r3, 0x804F
  addic.    r0, r30, 0x110
  subi      r0, r3, 0x335C
  stw       r0, 0x0(r30)
  beq-      .loc_0x4C
  addi      r3, r30, 0x128
  li        r4, -0x1
  bl        -0x2EF64
  addi      r3, r30, 0x110
  li        r4, -0x1
  bl        -0x2EF70

.loc_0x4C:
  cmplwi    r30, 0
  beq-      .loc_0x7C
  lis       r3, 0x804F
  subi      r0, r3, 0x3550
  stw       r0, 0x0(r30)
  beq-      .loc_0x7C
  lis       r4, 0x804F
  mr        r3, r30
  subi      r0, r4, 0x34CC
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        -0x43842C

.loc_0x7C:
  extsh.    r0, r31
  ble-      .loc_0x8C
  mr        r3, r30
  bl        -0x41C484

.loc_0x8C:
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
 * Address:	80440558
 * Size:	000070
 */
void __dt__Q35P2JME6Window18TSequenceProcessorFv(void)
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
  subi      r0, r4, 0x32CC
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x3708
  stw       r0, 0x0(r30)
  bl        -0x438D70

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x41C4F4

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
 * Address:	804405C8
 * Size:	000028
 */
void __sinit_windowMessage_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x63F8(r13)
  stfsu     f0, -0x33B0(r3)
  stfs      f0, -0x63F4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}