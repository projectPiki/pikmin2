

/*
 * --INFO--
 * Address:	80340838
 * Size:	0000A4
 */
void __ct__Q28PSSystem9EnvSeBaseFUlf(void)
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
  fmr       f31, f1
  mr        r30, r3
  mr        r31, r4
  mr        r4, r30
  bl        -0x31A0AC
  lis       r3, 0x804E
  lfs       f1, -0x1A0(r2)
  subi      r0, r3, 0x5118
  li        r5, 0
  stw       r0, 0x10(r30)
  li        r4, 0x2
  lfs       f0, -0x19C(r2)
  li        r0, 0x1
  stfs      f1, 0x14(r30)
  mr        r3, r30
  stw       r5, 0x18(r30)
  stw       r4, 0x1C(r30)
  stb       r5, 0x20(r30)
  stw       r31, 0x24(r30)
  stfs      f31, 0x28(r30)
  stfs      f1, 0x2C(r30)
  stfs      f0, 0x30(r30)
  stw       r5, 0x34(r30)
  stb       r0, 0x38(r30)
  stb       r5, 0x39(r30)
  stb       r5, 0x3A(r30)
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
 * Address:	........
 * Size:	000054
 */
void JSULink<PSSystem::EnvSeBase>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void requestMoveParam__Q28PSSystem9EnvSeBaseFQ28PSSystem12MoveParamSet(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void doMoveParamRequest__Q28PSSystem9EnvSeBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void setPauseFlag__Q28PSSystem9EnvSeBaseFUc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803408DC
 * Size:	00035C
 */
void exec__Q28PSSystem9EnvSeBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lbz       r0, 0x39(r3)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lwz       r3, 0x34(r31)
  cmplwi    r3, 0
  beq-      .loc_0x344
  lwz       r12, 0x10(r3)
  li        r4, 0
  lfs       f1, -0x1A0(r2)
  li        r5, 0x5
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x344

.loc_0x50:
  lbz       r0, 0x38(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x344
  bge-      .loc_0x6C
  cmpwi     r0, 0
  bge-      .loc_0x78
  b         .loc_0x328

.loc_0x6C:
  cmpwi     r0, 0x3
  bge-      .loc_0x328
  b         .loc_0x1D0

.loc_0x78:
  lwz       r12, 0x10(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr.       r30, r3
  beq-      .loc_0x344
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x10(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, 0x28(r31)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, -0x198(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, -0x194(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0x14
  li        r5, 0x5
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, 0x30(r31)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x344
  cmpwi     r0, 0x1
  beq-      .loc_0x170
  bge-      .loc_0x194
  cmpwi     r0, 0
  bge-      .loc_0x14C
  b         .loc_0x194

.loc_0x14C:
  lwz       r3, 0x34(r31)
  lfs       f1, 0x14(r31)
  lwz       r12, 0x10(r3)
  lwz       r4, 0x18(r31)
  lwz       r12, 0x1C(r12)
  lbz       r5, 0x20(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x1B0

.loc_0x170:
  lwz       r3, 0x34(r31)
  lfs       f1, 0x14(r31)
  lwz       r12, 0x10(r3)
  lwz       r4, 0x18(r31)
  lwz       r12, 0x2C(r12)
  lbz       r5, 0x20(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x1B0

.loc_0x194:
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x3E
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316448

.loc_0x1B0:
  lfs       f0, -0x1A0(r2)
  li        r3, 0
  li        r0, 0x2
  stfs      f0, 0x14(r31)
  stw       r3, 0x18(r31)
  stw       r0, 0x1C(r31)
  stb       r3, 0x20(r31)
  b         .loc_0x344

.loc_0x1D0:
  lwz       r12, 0x10(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr.       r30, r3
  beq-      .loc_0x344
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x10(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, 0x28(r31)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, -0x198(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, 0x2C(r31)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0x5
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lfs       f1, 0x30(r31)
  lwz       r12, 0x10(r30)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x344
  cmpwi     r0, 0x1
  beq-      .loc_0x2C8
  bge-      .loc_0x2EC
  cmpwi     r0, 0
  bge-      .loc_0x2A4
  b         .loc_0x2EC

.loc_0x2A4:
  lwz       r3, 0x34(r31)
  lfs       f1, 0x14(r31)
  lwz       r12, 0x10(r3)
  lwz       r4, 0x18(r31)
  lwz       r12, 0x1C(r12)
  lbz       r5, 0x20(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x308

.loc_0x2C8:
  lwz       r3, 0x34(r31)
  lfs       f1, 0x14(r31)
  lwz       r12, 0x10(r3)
  lwz       r4, 0x18(r31)
  lwz       r12, 0x2C(r12)
  lbz       r5, 0x20(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x308

.loc_0x2EC:
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x3E
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x3165A0

.loc_0x308:
  lfs       f0, -0x1A0(r2)
  li        r3, 0
  li        r0, 0x2
  stfs      f0, 0x14(r31)
  stw       r3, 0x18(r31)
  stw       r0, 0x1C(r31)
  stb       r3, 0x20(r31)
  b         .loc_0x344

.loc_0x328:
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x84
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x3165DC

.loc_0x344:
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
 * Address:	80340C38
 * Size:	000040
 */
void play__Q28PSSystem9EnvSeBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r6, 0x3C
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r5, r31, 0x34
  lwz       r3, -0x67A8(r13)
  lwz       r4, 0x24(r31)
  bl        -0x85EC
  lwz       r0, 0x14(r1)
  lwz       r3, 0x34(r31)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80340C78
 * Size:	000034
 */
void setAllPauseFlag__Q28PSSystem8EnvSeMgrFUc(void)
{
/*
.loc_0x0:
  lwz       r6, 0x0(r3)
  li        r0, 0
  b         .loc_0x28

.loc_0xC:
  lwz       r5, 0x0(r6)
  stb       r4, 0x38(r5)
  lbz       r3, 0x3A(r5)
  cmplwi    r3, 0
  beq-      .loc_0x24
  stb       r0, 0x38(r5)

.loc_0x24:
  lwz       r6, 0xC(r6)

.loc_0x28:
  cmplwi    r6, 0
  bne+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void setPauseFlag__Q28PSSystem8EnvSeMgrFUlUc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80340CAC
 * Size:	000024
 */
void on__Q28PSSystem8EnvSeMgrFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x0(r3)
  li        r0, 0x1
  b         .loc_0x18

.loc_0xC:
  lwz       r3, 0x0(r4)
  stb       r0, 0x39(r3)
  lwz       r4, 0xC(r4)

.loc_0x18:
  cmplwi    r4, 0
  bne+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	80340CD0
 * Size:	000050
 */
void on__Q28PSSystem8EnvSeMgrFUlb(void)
{
/*
.loc_0x0:
  lwz       r7, 0x0(r3)
  rlwinm    r5,r5,0,24,31
  li        r0, 0x1
  b         .loc_0x44

.loc_0x10:
  lwz       r6, 0x0(r7)
  lwz       r3, 0x24(r6)
  cmplw     r4, r3
  bne-      .loc_0x28
  cmplwi    r5, 0x1
  beq-      .loc_0x3C

.loc_0x28:
  lwz       r3, 0x24(r6)
  cmplw     r4, r3
  beq-      .loc_0x40
  cmplwi    r5, 0
  bne-      .loc_0x40

.loc_0x3C:
  stb       r0, 0x39(r6)

.loc_0x40:
  lwz       r7, 0xC(r7)

.loc_0x44:
  cmplwi    r7, 0
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80340D20
 * Size:	000024
 */
void off__Q28PSSystem8EnvSeMgrFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x0(r3)
  li        r0, 0
  b         .loc_0x18

.loc_0xC:
  lwz       r3, 0x0(r4)
  stb       r0, 0x39(r3)
  lwz       r4, 0xC(r4)

.loc_0x18:
  cmplwi    r4, 0
  bne+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	80340D44
 * Size:	000050
 */
void off__Q28PSSystem8EnvSeMgrFUlb(void)
{
/*
.loc_0x0:
  lwz       r7, 0x0(r3)
  rlwinm    r5,r5,0,24,31
  li        r0, 0
  b         .loc_0x44

.loc_0x10:
  lwz       r6, 0x0(r7)
  lwz       r3, 0x24(r6)
  cmplw     r4, r3
  bne-      .loc_0x28
  cmplwi    r5, 0x1
  beq-      .loc_0x3C

.loc_0x28:
  lwz       r3, 0x24(r6)
  cmplw     r4, r3
  beq-      .loc_0x40
  cmplwi    r5, 0
  bne-      .loc_0x40

.loc_0x3C:
  stb       r0, 0x39(r6)

.loc_0x40:
  lwz       r7, 0xC(r7)

.loc_0x44:
  cmplwi    r7, 0
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80340D94
 * Size:	00000C
 */
void reservePauseOff__Q28PSSystem8EnvSeMgrFv(void)
{
/*
.loc_0x0:
  li        r0, 0x1F
  sth       r0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80340DA0
 * Size:	000070
 */
void setVolumeRequest__Q28PSSystem8EnvSeMgrFfUlUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  lwz       r7, 0x0(r3)
  li        r3, 0
  b         .loc_0x60

.loc_0x10:
  lwz       r6, 0x0(r7)
  cmplwi    r6, 0
  beq-      .loc_0x5C
  stfs      f1, 0x18(r1)
  lwz       r0, 0x18(r1)
  stb       r5, 0x24(r1)
  stw       r0, 0x8(r1)
  lwz       r0, 0x24(r1)
  lfs       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  stfs      f0, 0x14(r6)
  lbz       r0, 0x14(r1)
  stw       r4, 0x18(r6)
  stw       r3, 0x1C(r6)
  stw       r4, 0x1C(r1)
  stw       r3, 0x20(r1)
  stw       r4, 0xC(r1)
  stw       r3, 0x10(r1)
  stb       r0, 0x20(r6)

.loc_0x5C:
  lwz       r7, 0xC(r7)

.loc_0x60:
  cmplwi    r7, 0
  bne+      .loc_0x10
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80340E10
 * Size:	000080
 */
void exec__Q28PSSystem8EnvSeMgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lhz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x44
  subi      r0, r3, 0x1
  cmplwi    r3, 0x1
  sth       r0, 0x10(r31)
  bne-      .loc_0x44
  addi      r3, r31, 0xC
  lwz       r12, 0xC(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x44:
  lwz       r31, 0x0(r31)
  b         .loc_0x64

.loc_0x4C:
  lwz       r3, 0x0(r31)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0xC(r31)

.loc_0x64:
  cmplwi    r31, 0
  bne+      .loc_0x4C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80340E90
 * Size:	000038
 */
void reservatorTask__Q28PSSystem24EnvSe_PauseOffReservatorFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0x8(r3)
  li        r3, 0
  lwz       r4, 0x0(r4)
  b         .loc_0x2C

.loc_0x10:
  lwz       r5, 0x0(r4)
  stb       r3, 0x38(r5)
  lbz       r0, 0x3A(r5)
  cmplwi    r0, 0
  beq-      .loc_0x28
  stb       r3, 0x38(r5)

.loc_0x28:
  lwz       r4, 0xC(r4)

.loc_0x2C:
  cmplwi    r4, 0
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80340EC8
 * Size:	000020
 */
void __ct__Q38PSSystem9ClusterSe11PartInitArgFv(void)
{
/*
.loc_0x0:
  li        r4, 0xFF
  li        r0, -0x1
  stb       r4, 0x0(r3)
  stb       r4, 0x1(r3)
  stb       r4, 0x2(r3)
  stb       r4, 0x3(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001AC
 */
void check__Q38PSSystem9ClusterSe11PartInitArgFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80340EE8
 * Size:	00002C
 */
void __ct__Q38PSSystem9ClusterSe4PartFv(void)
{
/*
.loc_0x0:
  lis       r5, 0x804E
  li        r4, 0xFF
  subi      r5, r5, 0x5130
  li        r0, -0x1
  stw       r5, 0x0(r3)
  stb       r4, 0x4(r3)
  stb       r4, 0x5(r3)
  stb       r4, 0x6(r3)
  stb       r4, 0x7(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void identify__Q38PSSystem9ClusterSe4PartFQ38PSSystem9ClusterSe11PartInitArg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void play__Q38PSSystem9ClusterSe4PartFUcPQ27JAInter6Object(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80340F14
 * Size:	00003C
 */
void callSe__Q38PSSystem9ClusterSe4PartFPQ27JAInter6Object(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  mr        r3, r4
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x8(r5)
  li        r5, 0
  lwz       r12, 0xC(r12)
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
 * Address:	80340F50
 * Size:	000060
 */
void __ct__Q38PSSystem9ClusterSe7FactoryFUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804E
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,24,31
  stw       r31, 0xC(r1)
  mr        r31, r3
  subi      r3, r5, 0x5140
  stw       r3, 0x0(r31)
  stb       r4, 0x4(r31)
  bne-      .loc_0x48
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x1DA
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316954

.loc_0x48:
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
 * Address:	80340FB0
 * Size:	000074
 */
void constructPart__Q38PSSystem9ClusterSe7FactoryFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lbz       r31, 0x4(r3)
  mulli     r3, r31, 0xC
  addi      r3, r3, 0x10
  bl        -0x31D020
  lis       r4, 0x8034
  mr        r7, r31
  addi      r4, r4, 0xEE8
  li        r5, 0
  li        r6, 0xC
  bl        -0x27F5F4
  mr.       r31, r3
  bne-      .loc_0x5C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x1E4
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x3169C8

.loc_0x5C:
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
 * Address:	80341024
 * Size:	0002B4
 */
void constructParts__Q38PSSystem9ClusterSe3MgrFRQ38PSSystem9ClusterSe7Factory(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r3
  stw       r28, 0x20(r1)
  mr        r28, r4
  mr        r3, r28
  lbz       r0, 0x4(r4)
  stb       r0, 0x0(r29)
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r29)
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x1FA
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316A4C

.loc_0x6C:
  li        r30, 0
  b         .loc_0x284

.loc_0x74:
  mr        r4, r28
  addi      r3, r1, 0x10
  lwz       r12, 0x0(r28)
  rlwinm    r5,r30,0,24,31
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lbz       r5, 0x10(r1)
  rlwinm    r0,r30,0,24,31
  lbz       r4, 0x11(r1)
  mulli     r3, r0, 0xC
  lbz       r7, 0x12(r1)
  li        r0, 0
  lbz       r6, 0x13(r1)
  stb       r5, 0x18(r1)
  lwz       r5, 0x14(r1)
  stb       r4, 0x19(r1)
  lwz       r4, 0x4(r29)
  stb       r7, 0x1A(r1)
  add       r31, r4, r3
  stb       r6, 0x1B(r1)
  lwz       r3, 0x18(r1)
  stw       r5, 0x1C(r1)
  stw       r3, 0x8(r1)
  lbz       r3, 0x8(r1)
  stw       r5, 0xC(r1)
  cmplwi    r3, 0
  beq-      .loc_0xF0
  cmplwi    r3, 0xFF
  beq-      .loc_0xF0
  li        r0, 0x1

.loc_0xF0:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x114
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x170
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316AF4

.loc_0x114:
  lbz       r4, 0x9(r1)
  li        r3, 0
  cmplwi    r4, 0xFF
  beq-      .loc_0x134
  lbz       r0, 0x8(r1)
  cmplw     r0, r4
  ble-      .loc_0x134
  li        r3, 0x1

.loc_0x134:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x158
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x171
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316B38

.loc_0x158:
  lbz       r0, 0xA(r1)
  cmplwi    r0, 0xFF
  bne-      .loc_0x180
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x172
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316B60

.loc_0x180:
  lbz       r0, 0xB(r1)
  cmplwi    r0, 0xFF
  bne-      .loc_0x1A8
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x173
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316B88

.loc_0x1A8:
  lbz       r3, 0x8(r1)
  lbz       r0, 0xA(r1)
  cmplw     r3, r0
  bge-      .loc_0x1D4
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x175
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316BB4

.loc_0x1D4:
  lbz       r3, 0xA(r1)
  lbz       r0, 0xB(r1)
  cmplw     r3, r0
  bgt-      .loc_0x200
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x176
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316BE0

.loc_0x200:
  lbz       r3, 0xB(r1)
  lbz       r0, 0x9(r1)
  cmplw     r3, r0
  bge-      .loc_0x22C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x177
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316C0C

.loc_0x22C:
  lwz       r3, 0xC(r1)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x258
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x179
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316C38

.loc_0x258:
  lbz       r0, 0x8(r1)
  addi      r30, r30, 0x1
  lbz       r3, 0x9(r1)
  stb       r0, 0x4(r31)
  lbz       r0, 0xA(r1)
  stb       r3, 0x5(r31)
  lbz       r3, 0xB(r1)
  stb       r0, 0x6(r31)
  lwz       r0, 0xC(r1)
  stb       r3, 0x7(r31)
  stw       r0, 0x8(r31)

.loc_0x284:
  lbz       r0, 0x0(r29)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x74
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
 * Address:	803412D8
 * Size:	0001A4
 */
void play__Q38PSSystem9ClusterSe3MgrFUcPQ27JAInter6Object(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r25, 0x24(r1)
  mr.       r30, r5
  mr        r28, r3
  mr        r29, r4
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x100
  li        r4, 0x20A
  addi      r5, r5, 0x110
  crclr     6, 0x6
  bl        -0x316CD0

.loc_0x3C:
  rlwinm    r27,r29,0,24,31
  li        r31, 0
  b         .loc_0x180

.loc_0x48:
  rlwinm    r0,r31,0,24,31
  lwz       r3, 0x4(r28)
  mulli     r0, r0, 0xC
  add       r25, r3, r0
  lbz       r0, 0x4(r25)
  cmplw     r27, r0
  bgt-      .loc_0x17C
  lbz       r0, 0x5(r25)
  cmplw     r27, r0
  blt-      .loc_0x17C
  mr        r3, r25
  mr        r4, r30
  lwz       r12, 0x0(r25)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr.       r26, r3
  beq-      .loc_0x17C
  lbz       r5, 0x6(r25)
  rlwinm    r3,r29,0,24,31
  lfs       f5, -0x194(r2)
  cmplw     r3, r5
  ble-      .loc_0xF4
  lis       r4, 0x4330
  lbz       r0, 0x4(r25)
  stw       r3, 0xC(r1)
  li        r3, 0x1
  lfd       f3, -0x190(r2)
  stw       r4, 0x8(r1)
  lfs       f4, -0x1A0(r2)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f1, f0, f3
  stw       r4, 0x10(r1)
  lfd       f0, 0x10(r1)
  stw       r5, 0x1C(r1)
  fsubs     f2, f0, f3
  stw       r4, 0x18(r1)
  lfd       f0, 0x18(r1)
  fsubs     f3, f0, f3
  bl        -0x28717C
  fmr       f5, f1
  b         .loc_0x150

.loc_0xF4:
  lbz       r5, 0x7(r25)
  cmplw     r5, r3
  ble-      .loc_0x150
  lbz       r0, 0x5(r25)
  lis       r4, 0x4330
  stw       r3, 0x1C(r1)
  fmr       f4, f5
  lfd       f3, -0x190(r2)
  li        r3, 0x1
  stw       r4, 0x18(r1)
  lfs       f5, -0x1A0(r2)
  lfd       f0, 0x18(r1)
  stw       r5, 0x14(r1)
  fsubs     f1, f0, f3
  stw       r4, 0x10(r1)
  lfd       f0, 0x10(r1)
  stw       r0, 0xC(r1)
  fsubs     f2, f0, f3
  stw       r4, 0x8(r1)
  lfd       f0, 0x8(r1)
  fsubs     f3, f0, f3
  bl        -0x2871DC
  fmr       f5, f1

.loc_0x150:
  lfs       f0, -0x194(r2)
  fcmpu     cr0, f0, f5
  beq-      .loc_0x17C
  mr        r3, r26
  fmr       f1, f5
  lwz       r12, 0x10(r26)
  li        r4, 0
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x17C:
  addi      r31, r31, 0x1

.loc_0x180:
  lbz       r0, 0x0(r28)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x48
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}