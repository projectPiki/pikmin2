

/*
 * --INFO--
 * Address:	8009B0B8
 * Size:	0001FC
 */
void JASDrumSet::getParam(int, int, JASInstParam *) const
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r28, r4
  cmplwi    r28, 0x80
  mr        r29, r5
  mr        r30, r6
  blt-      .loc_0x2C
  li        r3, 0
  b         .loc_0x1E8

.loc_0x2C:
  rlwinm    r4,r28,5,0,26
  li        r5, 0
  addi      r31, r4, 0x4
  stb       r5, 0x0(r30)
  add       r31, r3, r31
  li        r4, 0x1
  stb       r4, 0x24(r30)
  lis       r3, 0x804F
  lfs       f0, 0x0(r31)
  lfs       f1, 0x4(r31)
  stfs      f0, 0x10(r30)
  lfs       f0, 0x8(r31)
  stfs      f1, 0x14(r30)
  lhz       r0, 0xC(r31)
  stfs      f0, 0x18(r30)
  lfs       f1, -0x7688(r2)
  sth       r0, 0x26(r30)
  lfs       f0, -0x7684(r2)
  stwu      r5, 0x550(r3)
  lbz       r0, -0x75CC(r13)
  stfs      f1, 0x4(r3)
  extsb.    r0, r0
  stw       r5, 0x8(r3)
  stw       r5, 0xC(r3)
  stfs      f1, 0x10(r3)
  stfs      f0, 0x14(r3)
  bne-      .loc_0xA0
  stw       r3, -0x75D0(r13)
  stb       r4, -0x75CC(r13)

.loc_0xA0:
  subi      r3, r13, 0x75D0
  li        r0, 0x1
  stw       r3, 0x8(r30)
  li        r26, 0
  li        r27, 0
  stw       r0, 0xC(r30)
  b         .loc_0x178

.loc_0xBC:
  lwz       r3, 0x10(r31)
  lwzx      r25, r3, r27
  cmplwi    r25, 0
  beq-      .loc_0x170
  mr        r3, r25
  mr        r4, r28
  lwz       r12, 0x0(r25)
  mr        r5, r29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x4(r25)
  cmpwi     r0, 0x2
  beq-      .loc_0x138
  bge-      .loc_0x108
  cmpwi     r0, 0
  beq-      .loc_0x118
  bge-      .loc_0x128
  b         .loc_0x170

.loc_0x108:
  cmpwi     r0, 0x4
  beq-      .loc_0x164
  bge-      .loc_0x170
  b         .loc_0x154

.loc_0x118:
  lfs       f0, 0x10(r30)
  fmuls     f0, f0, f1
  stfs      f0, 0x10(r30)
  b         .loc_0x170

.loc_0x128:
  lfs       f0, 0x14(r30)
  fmuls     f0, f0, f1
  stfs      f0, 0x14(r30)
  b         .loc_0x170

.loc_0x138:
  lfd       f0, -0x7680(r2)
  lfs       f2, 0x18(r30)
  fsub      f0, f1, f0
  fadd      f0, f2, f0
  frsp      f0, f0
  stfs      f0, 0x18(r30)
  b         .loc_0x170

.loc_0x154:
  lfs       f0, 0x1C(r30)
  fadds     f0, f0, f1
  stfs      f0, 0x1C(r30)
  b         .loc_0x170

.loc_0x164:
  lfs       f0, 0x20(r30)
  fadds     f0, f0, f1
  stfs      f0, 0x20(r30)

.loc_0x170:
  addi      r27, r27, 0x4
  addi      r26, r26, 0x1

.loc_0x178:
  lwz       r0, 0x14(r31)
  cmplw     r26, r0
  blt+      .loc_0xBC
  lwz       r0, 0x18(r31)
  li        r3, 0
  mtctr     r0
  cmplwi    r0, 0
  ble-      .loc_0x1E4

.loc_0x198:
  lwz       r0, 0x1C(r31)
  add       r4, r0, r3
  lwz       r0, 0x0(r4)
  cmpw      r29, r0
  bgt-      .loc_0x1DC
  lfs       f1, 0x10(r30)
  li        r3, 0x1
  lfs       f0, 0x8(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x10(r30)
  lfs       f1, 0x14(r30)
  lfs       f0, 0xC(r4)
  fmuls     f0, f1, f0
  stfs      f0, 0x14(r30)
  lwz       r0, 0x4(r4)
  stw       r0, 0x4(r30)
  b         .loc_0x1E8

.loc_0x1DC:
  addi      r3, r3, 0x10
  bdnz+     .loc_0x198

.loc_0x1E4:
  li        r3, 0

.loc_0x1E8:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8009B2B4
 * Size:	000014
 */
void JASDrumSet::getPerc(int)
{
/*
.loc_0x0:
  rlwinm    r4,r4,5,0,26
  mr        r0, r3
  addi      r3, r4, 0x4
  add       r3, r0, r3
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void JASDrumSet::getPerc(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009B2C8
 * Size:	000034
 */
void __ct__Q210JASDrumSet5TPercFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x7688(r2)
  li        r4, 0x3E8
  lfs       f0, -0x7678(r2)
  li        r0, 0
  stfs      f1, 0x0(r3)
  stfs      f1, 0x4(r3)
  stfs      f0, 0x8(r3)
  sth       r4, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009B2FC
 * Size:	00005C
 */
void __dt__Q210JASDrumSet5TPercFv(void)
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
  beq-      .loc_0x40
  lwz       r3, 0x10(r30)
  bl        -0x77248
  lwz       r3, 0x1C(r30)
  bl        -0x77250
  extsh.    r0, r31
  ble-      .loc_0x40
  mr        r3, r30
  bl        -0x77284

.loc_0x40:
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
 * Address:	8009B358
 * Size:	000078
 */
void setEffectCount__Q210JASDrumSet5TPercFUl(void)
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
  lwz       r3, 0x10(r3)
  bl        -0x772A0
  cmplwi    r31, 0
  stw       r31, 0x14(r30)
  bne-      .loc_0x3C
  li        r0, 0
  stw       r0, 0x10(r30)
  b         .loc_0x60

.loc_0x3C:
  bl        0xF68
  mr        r4, r3
  rlwinm    r3,r31,2,0,29
  li        r5, 0
  bl        -0x7735C
  stw       r3, 0x10(r30)
  rlwinm    r4,r31,2,0,29
  lwz       r3, 0x10(r30)
  bl        0xAEB0

.loc_0x60:
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
 * Address:	8009B3D0
 * Size:	000058
 */
void setVeloRegionCount__Q210JASDrumSet5TPercFUl(void)
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
  lwz       r3, 0x1C(r3)
  bl        -0x77318
  bl        0xF08
  mr        r4, r3
  rlwinm    r3,r31,4,0,27
  li        r5, 0
  bl        -0x773BC
  stw       r3, 0x1C(r30)
  stw       r31, 0x18(r30)
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
 * Address:	8009B428
 * Size:	000010
 */
void getVeloRegion__Q210JASDrumSet5TPercFi(void)
{
/*
.loc_0x0:
  lwz       r3, 0x1C(r3)
  rlwinm    r0,r4,4,0,27
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void getVeloRegion__Q210JASDrumSet5TPercCFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009B438
 * Size:	000010
 */
void setEffect__Q210JASDrumSet5TPercFiP13JASInstEffect(void)
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  rlwinm    r0,r4,2,0,29
  stwx      r5, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void getEffect__Q210JASDrumSet5TPercFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009B448
 * Size:	000008
 */
void setRelease__Q210JASDrumSet5TPercFUl(void)
{
/*
.loc_0x0:
  sth       r4, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009B450
 * Size:	000084
 */
void JASDrumSet::~JASDrumSet()
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
  lis       r3, 0x804A
  lis       r4, 0x800A
  addi      r0, r3, 0x3820
  li        r5, 0x20
  stw       r0, 0x0(r30)
  addi      r3, r30, 0x4
  subi      r4, r4, 0x4D04
  li        r6, 0x80
  bl        0x26334
  cmplwi    r30, 0
  beq-      .loc_0x58
  lis       r3, 0x804A
  addi      r0, r3, 0x3790
  stw       r0, 0x0(r30)

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x77400

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
 * Address:	8009B4D4
 * Size:	00000C
 */
void JASDrumSet::getType() const
{
/*
.loc_0x0:
  lis       r3, 0x5045
  addi      r3, r3, 0x5243
  blr
*/
}