

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
 * Size:	000068
 */
void __ct__Q24Game11CaveOtakaraFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void __ct__Q24Game15CaveOtakaraInfoFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AD378
 * Size:	000060
 */
void __dt__Q24Game11CaveOtakaraFv(void)
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
  addi      r0, r5, 0x5798
  stw       r0, 0x0(r30)
  bl        0x2641E0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x189304

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
 * Size:	0000EC
 */
void read__Q24Game15CaveOtakaraInfoFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void get_index__Q24Game15CaveOtakaraInfoFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void get_id__Q24Game15CaveOtakaraInfoFR4ID32(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void getCaveIndex_FromID__Q24Game15CaveOtakaraInfoFR4ID32(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void getCaveID_FromIndex__Q24Game15CaveOtakaraInfoFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __ct__Q24Game12LimitGenInfoFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AD3D8
 * Size:	000060
 */
void __dt__Q24Game8LimitGenFv(void)
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
  addi      r0, r5, 0x5788
  stw       r0, 0x0(r30)
  bl        0x264180
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x189364

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
 * Size:	0000CC
 */
void read__Q24Game12LimitGenInfoFR6Stream(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AD438
 * Size:	000154
 */
void __ct__Q24Game10CourseInfoFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  bl        0x263F3C
  lis       r3, 0x804B
  addi      r30, r31, 0x50
  addi      r0, r3, 0x5778
  stw       r0, 0x0(r31)
  mr        r3, r30
  bl        0x263F24
  lis       r3, 0x804B
  addi      r29, r31, 0x78
  addi      r3, r3, 0x5788
  li        r0, 0
  stw       r3, 0x0(r30)
  mr        r3, r29
  stw       r0, 0x4C(r31)
  stw       r0, 0x60(r31)
  stw       r0, 0x5C(r31)
  stw       r0, 0x58(r31)
  stw       r0, 0x54(r31)
  bl        0x263EF4
  lis       r3, 0x804B
  addi      r30, r31, 0xA0
  addi      r3, r3, 0x5788
  li        r0, 0
  stw       r3, 0x0(r29)
  mr        r3, r30
  stw       r0, 0x74(r31)
  stw       r0, 0x88(r31)
  stw       r0, 0x84(r31)
  stw       r0, 0x80(r31)
  stw       r0, 0x7C(r31)
  bl        0x263EC4
  lis       r4, 0x804B
  addi      r3, r30, 0x18
  addi      r0, r4, 0x5798
  stw       r0, 0x0(r30)
  bl        0x265D90
  li        r0, 0
  lis       r4, 0x7878
  stb       r0, 0x24(r30)
  addi      r3, r30, 0x18
  addi      r4, r4, 0x7878
  bl        0x265DE0
  lis       r3, 0x8048
  li        r4, 0
  subi      r3, r3, 0x74C
  subi      r0, r2, 0x5098
  stw       r3, 0x28(r30)
  addi      r3, r31, 0xD0
  lfs       f0, -0x5090(r2)
  stw       r4, 0x9C(r31)
  stw       r4, 0xB0(r31)
  stw       r4, 0xAC(r31)
  stw       r4, 0xA8(r31)
  stw       r4, 0xA4(r31)
  stw       r0, 0x14(r31)
  stw       r4, 0x34(r31)
  stw       r4, 0x30(r31)
  stw       r4, 0x2C(r31)
  stw       r4, 0x28(r31)
  stw       r4, 0x24(r31)
  stw       r4, 0x20(r31)
  stw       r4, 0x18(r31)
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stfs      f0, 0x44(r31)
  stw       r4, 0x48(r31)
  bl        -0xC32C0
  li        r0, 0
  mr        r3, r31
  stw       r0, 0xCC(r31)
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
 * Address:	........
 * Size:	00006C
 */
void __dt__Q24Game15CaveOtakaraInfoFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __dt__Q24Game12LimitGenInfoFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AD58C
 * Size:	000004
 */
void dump__Q24Game10CourseInfoFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801AD590
 * Size:	0004C4
 */
void read__Q24Game10CourseInfoFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x34(r1)
  stmw      r26, 0x18(r1)
  mr        r30, r4
  mr        r29, r3
  subi      r31, r5, 0x758
  li        r4, 0
  mr        r3, r30
  li        r5, 0
  bl        0x267B18
  subi      r4, r2, 0x508C
  mr        r26, r3
  bl        -0xE2F08
  cmpwi     r3, 0
  bne-      .loc_0x6C
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267AF4
  stw       r3, 0x14(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267AE0
  mr        r26, r3

.loc_0x6C:
  mr        r3, r26
  subi      r4, r2, 0x5084
  bl        -0xE2F44
  cmpwi     r3, 0
  bne-      .loc_0xA8
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267AB8
  stw       r3, 0x18(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267AA4
  mr        r26, r3

.loc_0xA8:
  mr        r3, r26
  addi      r4, r31, 0x20
  bl        -0xE2F80
  cmpwi     r3, 0
  bne-      .loc_0xE4
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267A7C
  stw       r3, 0x1C(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267A68
  mr        r26, r3

.loc_0xE4:
  mr        r3, r26
  subi      r4, r2, 0x507C
  bl        -0xE2FBC
  cmpwi     r3, 0
  bne-      .loc_0x120
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267A40
  stw       r3, 0x20(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267A2C
  mr        r26, r3

.loc_0x120:
  mr        r3, r26
  addi      r4, r31, 0x2C
  bl        -0xE2FF8
  cmpwi     r3, 0
  bne-      .loc_0x15C
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267A04
  stw       r3, 0x24(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x2679F0
  mr        r26, r3

.loc_0x15C:
  mr        r3, r26
  addi      r4, r31, 0x38
  bl        -0xE3034
  cmpwi     r3, 0
  bne-      .loc_0x198
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x2679C8
  stw       r3, 0x28(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x2679B4
  mr        r26, r3

.loc_0x198:
  mr        r3, r26
  subi      r4, r2, 0x5074
  bl        -0xE3070
  cmpwi     r3, 0
  bne-      .loc_0x1D4
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x26798C
  stw       r3, 0x2C(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267978
  mr        r26, r3

.loc_0x1D4:
  mr        r3, r26
  subi      r4, r2, 0x506C
  bl        -0xE30AC
  cmpwi     r3, 0
  bne-      .loc_0x210
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267950
  stw       r3, 0x30(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x26793C
  mr        r26, r3

.loc_0x210:
  mr        r3, r26
  subi      r4, r2, 0x5064
  bl        -0xE30E8
  cmpwi     r3, 0
  bne-      .loc_0x24C
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267914
  stw       r3, 0x34(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267900
  mr        r26, r3

.loc_0x24C:
  mr        r3, r26
  subi      r4, r2, 0x505C
  bl        -0xE3124
  cmpwi     r3, 0
  bne-      .loc_0x280
  mr        r4, r30
  addi      r3, r29, 0x38
  bl        0x264198
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x2678CC
  mr        r26, r3

.loc_0x280:
  mr        r3, r26
  addi      r4, r31, 0x44
  bl        -0xE3158
  cmpwi     r3, 0
  bne-      .loc_0x2E4
  mr        r3, r30
  bl        0x267584
  stfs      f1, 0x44(r29)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267898
  lfs       f2, -0x5050(r2)
  addi      r3, r29, 0xD0
  lfs       f1, 0x44(r29)
  addi      r4, r29, 0x38
  lfs       f0, -0x5090(r2)
  addi      r5, r1, 0x8
  fmuls     f1, f2, f1
  lfs       f2, -0x5054(r2)
  stfs      f0, 0x8(r1)
  fmuls     f1, f2, f1
  stfs      f0, 0x10(r1)
  stfs      f1, 0xC(r1)
  bl        0x27B018

.loc_0x2E4:
  mr        r3, r30
  bl        0x267218
  stw       r3, 0x4C(r29)
  addi      r26, r29, 0x50
  li        r28, 0
  b         .loc_0x364

.loc_0x2FC:
  li        r3, 0x24
  bl        -0x1899EC
  mr.       r27, r3
  beq-      .loc_0x31C
  bl        0x263AF4
  lis       r3, 0x804B
  addi      r0, r3, 0x5788
  stw       r0, 0x0(r27)

.loc_0x31C:
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x26781C
  stw       r3, 0x14(r27)
  mr        r3, r30
  bl        0x2671CC
  stw       r3, 0x18(r27)
  mr        r3, r30
  bl        0x2671C0
  stw       r3, 0x1C(r27)
  mr        r3, r30
  bl        0x2671B4
  stw       r3, 0x20(r27)
  mr        r3, r26
  mr        r4, r27
  bl        0x263B1C
  addi      r28, r28, 0x1

.loc_0x364:
  lwz       r0, 0x4C(r29)
  cmpw      r28, r0
  blt+      .loc_0x2FC
  mr        r3, r30
  bl        0x26718C
  stw       r3, 0x74(r29)
  addi      r26, r29, 0x78
  li        r28, 0
  b         .loc_0x3F0

.loc_0x388:
  li        r3, 0x24
  bl        -0x189A78
  mr.       r27, r3
  beq-      .loc_0x3A8
  bl        0x263A68
  lis       r3, 0x804B
  addi      r0, r3, 0x5788
  stw       r0, 0x0(r27)

.loc_0x3A8:
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x267790
  stw       r3, 0x14(r27)
  mr        r3, r30
  bl        0x267140
  stw       r3, 0x18(r27)
  mr        r3, r30
  bl        0x267134
  stw       r3, 0x1C(r27)
  mr        r3, r30
  bl        0x267128
  stw       r3, 0x20(r27)
  mr        r3, r26
  mr        r4, r27
  bl        0x263A90
  addi      r28, r28, 0x1

.loc_0x3F0:
  lwz       r0, 0x74(r29)
  cmpw      r28, r0
  blt+      .loc_0x388
  mr        r3, r30
  bl        0x267100
  stw       r3, 0x9C(r29)
  addi      r26, r29, 0xA0
  li        r28, 0
  b         .loc_0x498

.loc_0x414:
  li        r3, 0x2C
  bl        -0x189B04
  mr.       r27, r3
  beq-      .loc_0x45C
  bl        0x2639DC
  lis       r4, 0x804B
  addi      r3, r27, 0x18
  addi      r0, r4, 0x5798
  stw       r0, 0x0(r27)
  bl        0x2658A8
  li        r0, 0
  lis       r4, 0x7878
  stb       r0, 0x24(r27)
  addi      r3, r27, 0x18
  addi      r4, r4, 0x7878
  bl        0x2658F8
  addi      r0, r31, 0xC
  stw       r0, 0x28(r27)

.loc_0x45C:
  mr        r4, r30
  addi      r3, r27, 0x18
  bl        0x265AFC
  mr        r3, r30
  bl        0x266AA0
  stb       r3, 0x24(r27)
  mr        r3, r30
  li        r4, 0
  li        r5, 0
  bl        0x2676C4
  stw       r3, 0x28(r27)
  mr        r3, r26
  mr        r4, r27
  bl        0x2639E8
  addi      r28, r28, 0x1

.loc_0x498:
  lwz       r0, 0x9C(r29)
  cmpw      r28, r0
  blt+      .loc_0x414
  mr        r3, r30
  bl        0x267058
  stw       r3, 0xCC(r29)
  lmw       r26, 0x18(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADA54
 * Size:	000088
 */
void getOtakaraNum__Q24Game10CourseInfoFR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  li        r31, 0
  addi      r29, r27, 0xA0
  b         .loc_0x50

.loc_0x24:
  mr        r3, r29
  mr        r4, r31
  bl        0x263C1C
  mr        r30, r3
  lwz       r4, 0x8(r28)
  addi      r3, r30, 0x18
  bl        0x2659A4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C
  b         .loc_0x60

.loc_0x4C:
  addi      r31, r31, 0x1

.loc_0x50:
  lwz       r0, 0x9C(r27)
  cmpw      r31, r0
  blt+      .loc_0x24
  li        r30, 0

.loc_0x60:
  cmplwi    r30, 0
  beq-      .loc_0x70
  lbz       r3, 0x24(r30)
  b         .loc_0x74

.loc_0x70:
  li        r3, -0x1

.loc_0x74:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADADC
 * Size:	000038
 */
void getOtakaraNum__Q24Game10CourseInfoFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0xA0
  stw       r0, 0x14(r1)
  bl        0x263BB0
  cmplwi    r3, 0
  beq-      .loc_0x24
  lbz       r3, 0x24(r3)
  b         .loc_0x28

.loc_0x24:
  li        r3, -0x1

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADB14
 * Size:	00008C
 */
void getCaveIndex_FromID__Q24Game10CourseInfoFR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  addi      r30, r28, 0xA0
  b         .loc_0x58

.loc_0x30:
  mr        r3, r30
  mr        r4, r31
  bl        0x263B50
  lwz       r4, 0x8(r29)
  addi      r3, r3, 0x18
  bl        0x2658DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x54
  b         .loc_0x68

.loc_0x54:
  addi      r31, r31, 0x1

.loc_0x58:
  lwz       r0, 0x9C(r28)
  cmpw      r31, r0
  blt+      .loc_0x30
  li        r31, -0x1

.loc_0x68:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Address:	801ADBA0
 * Size:	00009C
 */
void getCaveinfoFilename_FromID__Q24Game10CourseInfoFR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  li        r31, 0
  addi      r29, r27, 0xA0
  b         .loc_0x50

.loc_0x24:
  mr        r3, r29
  mr        r4, r31
  bl        0x263AD0
  mr        r30, r3
  lwz       r4, 0x8(r28)
  addi      r3, r30, 0x18
  bl        0x265858
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C
  b         .loc_0x60

.loc_0x4C:
  addi      r31, r31, 0x1

.loc_0x50:
  lwz       r0, 0x9C(r27)
  cmpw      r31, r0
  blt+      .loc_0x24
  li        r30, 0

.loc_0x60:
  cmplwi    r30, 0
  bne-      .loc_0x84
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x708
  li        r4, 0x11A
  subi      r5, r5, 0x6F8
  crclr     6, 0x6
  bl        -0x1835E0

.loc_0x84:
  lwz       r3, 0x28(r30)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADC3C
 * Size:	00003C
 */
void getCaveID_FromIndex__Q24Game10CourseInfoFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0xA0
  stw       r0, 0x14(r1)
  bl        0x263A50
  cmplwi    r3, 0
  beq-      .loc_0x24
  lwz       r3, 0x20(r3)
  b         .loc_0x2C

.loc_0x24:
  lis       r3, 0x6E6F
  addi      r3, r3, 0x6E65

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADC78
 * Size:	000008
 */
void getCaveNum__Q24Game10CourseInfoFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x9C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADC80
 * Size:	0001EC
 */
void __ct__Q24Game6StagesFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  stw       r0, 0x444(r1)
  stw       r31, 0x43C(r1)
  stw       r30, 0x438(r1)
  mr        r30, r3
  mr        r0, r30
  stw       r29, 0x434(r1)
  mr        r31, r0
  stw       r28, 0x430(r1)
  bl        0x2636E8
  lis       r3, 0x804B
  addi      r29, r31, 0x50
  addi      r0, r3, 0x5778
  stw       r0, 0x0(r31)
  mr        r3, r29
  bl        0x2636D0
  lis       r3, 0x804B
  addi      r28, r31, 0x78
  addi      r3, r3, 0x5788
  li        r0, 0
  stw       r3, 0x0(r29)
  mr        r3, r28
  stw       r0, 0x4C(r31)
  stw       r0, 0x60(r31)
  stw       r0, 0x5C(r31)
  stw       r0, 0x58(r31)
  stw       r0, 0x54(r31)
  bl        0x2636A0
  lis       r3, 0x804B
  addi      r29, r31, 0xA0
  addi      r3, r3, 0x5788
  li        r0, 0
  stw       r3, 0x0(r28)
  mr        r3, r29
  stw       r0, 0x74(r31)
  stw       r0, 0x88(r31)
  stw       r0, 0x84(r31)
  stw       r0, 0x80(r31)
  stw       r0, 0x7C(r31)
  bl        0x263670
  lis       r4, 0x804B
  addi      r3, r29, 0x18
  addi      r0, r4, 0x5798
  stw       r0, 0x0(r29)
  bl        0x26553C
  li        r0, 0
  lis       r4, 0x7878
  stb       r0, 0x24(r29)
  addi      r3, r29, 0x18
  addi      r4, r4, 0x7878
  bl        0x26558C
  lis       r3, 0x8048
  li        r4, 0
  subi      r3, r3, 0x74C
  subi      r0, r2, 0x5098
  stw       r3, 0x28(r29)
  addi      r3, r31, 0xD0
  lfs       f0, -0x5090(r2)
  stw       r4, 0x9C(r31)
  stw       r4, 0xB0(r31)
  stw       r4, 0xAC(r31)
  stw       r4, 0xA8(r31)
  stw       r4, 0xA4(r31)
  stw       r0, 0x14(r31)
  stw       r4, 0x34(r31)
  stw       r4, 0x30(r31)
  stw       r4, 0x2C(r31)
  stw       r4, 0x28(r31)
  stw       r4, 0x24(r31)
  stw       r4, 0x20(r31)
  stw       r4, 0x18(r31)
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stfs      f0, 0x44(r31)
  stw       r4, 0x48(r31)
  bl        -0xC3B14
  li        r0, 0
  lis       r3, 0x8048
  stw       r0, 0xCC(r31)
  subi      r3, r3, 0x6EC
  li        r4, 0
  li        r5, 0
  stw       r0, 0x10(r30)
  li        r6, 0
  li        r7, 0
  li        r8, 0x2
  stw       r0, 0xC(r30)
  li        r9, 0
  li        r10, 0
  stw       r0, 0x8(r30)
  stw       r0, 0x4(r30)
  sth       r0, 0x108(r30)
  stw       r0, 0x104(r30)
  stb       r0, 0x10A(r30)
  stw       r0, 0x8(r1)
  bl        -0x18EC7C
  mr        r31, r3
  addi      r3, r1, 0x10
  li        r5, -0x1
  mr        r4, r31
  bl        0x267AE0
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x1C(r1)
  bne-      .loc_0x1B4
  li        r0, 0
  stw       r0, 0x424(r1)

.loc_0x1B4:
  mr        r3, r30
  addi      r4, r1, 0x10
  bl        0x478
  mr        r3, r31
  bl        -0x189D6C
  lwz       r0, 0x444(r1)
  mr        r3, r30
  lwz       r31, 0x43C(r1)
  lwz       r30, 0x438(r1)
  lwz       r29, 0x434(r1)
  lwz       r28, 0x430(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}

/*
 * --INFO--
 * Address:	801ADE6C
 * Size:	0000D0
 */
void __dt__Q24Game10CourseInfoFv(void)
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
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addic.    r0, r30, 0x9C
  addi      r0, r3, 0x5778
  stw       r0, 0x0(r30)
  beq-      .loc_0x50
  addic.    r3, r30, 0xA0
  beq-      .loc_0x50
  lis       r4, 0x804B
  addi      r0, r4, 0x5798
  stw       r0, 0xA0(r30)
  li        r4, 0
  bl        0x2636D0

.loc_0x50:
  addic.    r0, r30, 0x74
  beq-      .loc_0x74
  addic.    r3, r30, 0x78
  beq-      .loc_0x74
  lis       r4, 0x804B
  addi      r0, r4, 0x5788
  stw       r0, 0x78(r30)
  li        r4, 0
  bl        0x2636AC

.loc_0x74:
  addic.    r0, r30, 0x4C
  beq-      .loc_0x98
  addic.    r3, r30, 0x50
  beq-      .loc_0x98
  lis       r4, 0x804B
  addi      r0, r4, 0x5788
  stw       r0, 0x50(r30)
  li        r4, 0
  bl        0x263688

.loc_0x98:
  mr        r3, r30
  li        r4, 0
  bl        0x26367C
  extsh.    r0, r31
  ble-      .loc_0xB4
  mr        r3, r30
  bl        -0x189E68

.loc_0xB4:
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
 * Size:	000008
 */
void update__Q24Game6StagesFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ADF3C
 * Size:	000070
 */
void getCourseInfo__Q24Game6StagesFPc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r31, 0x10(r3)
  b         .loc_0x4C

.loc_0x20:
  mr        r3, r30
  bl        -0xE3650
  lwz       r4, 0x14(r31)
  mr        r5, r3
  mr        r3, r30
  bl        -0xE38F0
  cmpwi     r3, 0
  bne-      .loc_0x48
  mr        r3, r31
  b         .loc_0x58

.loc_0x48:
  lwz       r31, 0x4(r31)

.loc_0x4C:
  cmplwi    r31, 0
  bne+      .loc_0x20
  li        r3, 0

.loc_0x58:
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
 * Address:	801ADFAC
 * Size:	000074
 */
void getCourseInfo__Q24Game6StagesFi(void)
{
/*
.loc_0x0:
  cmpwi     r4, 0
  lwz       r3, 0x10(r3)
  li        r6, 0
  blelr-    
  cmpwi     r4, 0x8
  subi      r5, r4, 0x8
  ble-      .loc_0x58
  addi      r0, r5, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0x58

.loc_0x30:
  lwz       r3, 0x4(r3)
  addi      r6, r6, 0x8
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  bdnz+     .loc_0x30

.loc_0x58:
  sub       r0, r4, r6
  mtctr     r0
  cmpw      r6, r4
  bgelr-    

.loc_0x68:
  lwz       r3, 0x4(r3)
  bdnz+     .loc_0x68
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003FC
 */
void draw2d__Q24Game6StagesFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AE020
 * Size:	000234
 */
void createMapMgr__Q24Game6StagesFPQ24Game10CourseInfoPQ24Game8RouteMgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x640(r1)
  mflr      r0
  stw       r0, 0x644(r1)
  stw       r31, 0x63C(r1)
  mr        r31, r4
  stw       r30, 0x638(r1)
  mr        r30, r3
  stw       r29, 0x634(r1)
  stw       r28, 0x630(r1)
  lwz       r6, 0x20(r3)
  cmplwi    r6, 0
  beq-      .loc_0x44
  lwz       r5, 0x18(r30)
  addi      r3, r1, 0x528
  subi      r4, r2, 0x504C
  crclr     6, 0x6
  bl        -0xE6C28

.loc_0x44:
  lwz       r6, 0x24(r30)
  cmplwi    r6, 0
  beq-      .loc_0x64
  lwz       r5, 0x18(r30)
  addi      r3, r1, 0x428
  subi      r4, r2, 0x504C
  crclr     6, 0x6
  bl        -0xE6C48

.loc_0x64:
  lwz       r6, 0x28(r30)
  cmplwi    r6, 0
  beq-      .loc_0x84
  lwz       r5, 0x18(r30)
  addi      r3, r1, 0x328
  subi      r4, r2, 0x504C
  crclr     6, 0x6
  bl        -0xE6C68

.loc_0x84:
  lwz       r6, 0x2C(r30)
  cmplwi    r6, 0
  beq-      .loc_0xA4
  lwz       r5, 0x18(r30)
  addi      r3, r1, 0x228
  subi      r4, r2, 0x504C
  crclr     6, 0x6
  bl        -0xE6C88

.loc_0xA4:
  lwz       r6, 0x30(r30)
  cmplwi    r6, 0
  beq-      .loc_0xC4
  lwz       r5, 0x18(r30)
  addi      r3, r1, 0x128
  subi      r4, r2, 0x504C
  crclr     6, 0x6
  bl        -0xE6CA8

.loc_0xC4:
  lwz       r6, 0x34(r30)
  cmplwi    r6, 0
  beq-      .loc_0xE4
  lwz       r5, 0x1C(r30)
  addi      r3, r1, 0x28
  subi      r4, r2, 0x504C
  crclr     6, 0x6
  bl        -0xE6CC8

.loc_0xE4:
  li        r3, 0x5C
  bl        -0x18A264
  mr.       r29, r3
  beq-      .loc_0x150
  addi      r0, r29, 0x54
  lis       r4, 0x804B
  stw       r0, 0x0(r29)
  subi      r0, r4, 0x4A10
  li        r4, 0
  stw       r0, 0x54(r29)
  bl        -0x4BB48
  lis       r3, 0x804B
  addi      r28, r29, 0x38
  addi      r3, r3, 0x18B4
  addi      r0, r29, 0x54
  stw       r3, 0x4(r29)
  addi      r5, r3, 0x60
  mr        r3, r28
  lwz       r4, 0x0(r29)
  stw       r5, 0x0(r4)
  lwz       r4, 0x0(r29)
  sub       r0, r0, r4
  stw       r0, 0x4(r4)
  bl        0x263230
  lis       r3, 0x804F
  subi      r0, r3, 0x4908
  stw       r0, 0x0(r28)

.loc_0x150:
  stw       r29, -0x6CF8(r13)
  addi      r12, r1, 0x28
  addi      r9, r1, 0x428
  addi      r3, r1, 0x528
  stw       r31, 0x8(r29)
  li        r6, 0
  addi      r5, r1, 0x328
  addi      r0, r1, 0x228
  lwz       r7, -0x6CF8(r13)
  addi      r4, r1, 0x8
  stw       r30, 0xC(r7)
  lwz       r10, 0x34(r30)
  lwz       r11, 0x24(r30)
  lwz       r8, 0x20(r30)
  neg       r7, r10
  or        r7, r7, r10
  neg       r10, r11
  srawi     r31, r7, 0x1F
  neg       r7, r8
  or        r10, r10, r11
  stw       r6, 0x18(r1)
  srawi     r10, r10, 0x1F
  or        r7, r7, r8
  srawi     r7, r7, 0x1F
  and       r8, r12, r31
  and       r9, r9, r10
  stw       r8, 0x24(r1)
  and       r7, r3, r7
  lwz       r3, -0x6CF8(r13)
  stw       r7, 0x10(r1)
  stw       r9, 0x14(r1)
  stw       r6, 0x20(r1)
  lwz       r6, 0x18(r30)
  stw       r6, 0x8(r1)
  lwz       r6, 0x1C(r30)
  stw       r6, 0xC(r1)
  lwz       r7, 0x28(r30)
  neg       r6, r7
  or        r6, r6, r7
  srawi     r6, r6, 0x1F
  and       r5, r5, r6
  stw       r5, 0x18(r1)
  lwz       r6, 0x2C(r30)
  neg       r5, r6
  or        r5, r5, r6
  srawi     r5, r5, 0x1F
  and       r0, r0, r5
  stw       r0, 0x1C(r1)
  bl        -0x4B148
  lwz       r0, 0x644(r1)
  lwz       r31, 0x63C(r1)
  lwz       r30, 0x638(r1)
  lwz       r29, 0x634(r1)
  lwz       r28, 0x630(r1)
  mtlr      r0
  addi      r1, r1, 0x640
  blr
*/
}

/*
 * --INFO--
 * Address:	801AE254
 * Size:	000060
 */
void MapCollision::~MapCollision()
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
  subi      r0, r5, 0x4908
  stw       r0, 0x0(r30)
  bl        0x263304
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x18A1E0

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
 * Size:	000018
 */
void dump__Q24Game6StagesFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AE2B4
 * Size:	000194
 */
void read__Q24Game6StagesFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r28, r4
  mr        r27, r3
  mr        r3, r28
  bl        0x266494
  sth       r3, 0x100(r27)
  rlwinm    r30,r3,0,16,31
  li        r29, 0
  b         .loc_0x178

.loc_0x30:
  li        r3, 0x100
  bl        -0x18A444
  mr.       r31, r3
  beq-      .loc_0x158
  bl        0x26309C
  lis       r3, 0x804B
  addi      r26, r31, 0x50
  addi      r0, r3, 0x5778
  stw       r0, 0x0(r31)
  mr        r3, r26
  bl        0x263084
  lis       r3, 0x804B
  addi      r25, r31, 0x78
  addi      r3, r3, 0x5788
  li        r0, 0
  stw       r3, 0x0(r26)
  mr        r3, r25
  stw       r0, 0x4C(r31)
  stw       r0, 0x60(r31)
  stw       r0, 0x5C(r31)
  stw       r0, 0x58(r31)
  stw       r0, 0x54(r31)
  bl        0x263054
  lis       r3, 0x804B
  addi      r26, r31, 0xA0
  addi      r3, r3, 0x5788
  li        r0, 0
  stw       r3, 0x0(r25)
  mr        r3, r26
  stw       r0, 0x74(r31)
  stw       r0, 0x88(r31)
  stw       r0, 0x84(r31)
  stw       r0, 0x80(r31)
  stw       r0, 0x7C(r31)
  bl        0x263024
  lis       r4, 0x804B
  addi      r3, r26, 0x18
  addi      r0, r4, 0x5798
  stw       r0, 0x0(r26)
  bl        0x264EF0
  li        r0, 0
  lis       r4, 0x7878
  stb       r0, 0x24(r26)
  addi      r3, r26, 0x18
  addi      r4, r4, 0x7878
  bl        0x264F40
  lis       r3, 0x8048
  li        r4, 0
  subi      r3, r3, 0x74C
  subi      r0, r2, 0x5098
  stw       r3, 0x28(r26)
  addi      r3, r31, 0xD0
  lfs       f0, -0x5090(r2)
  stw       r4, 0x9C(r31)
  stw       r4, 0xB0(r31)
  stw       r4, 0xAC(r31)
  stw       r4, 0xA8(r31)
  stw       r4, 0xA4(r31)
  stw       r0, 0x14(r31)
  stw       r4, 0x34(r31)
  stw       r4, 0x30(r31)
  stw       r4, 0x2C(r31)
  stw       r4, 0x28(r31)
  stw       r4, 0x24(r31)
  stw       r4, 0x20(r31)
  stw       r4, 0x18(r31)
  stfs      f0, 0x38(r31)
  stfs      f0, 0x3C(r31)
  stfs      f0, 0x40(r31)
  stfs      f0, 0x44(r31)
  stw       r4, 0x48(r31)
  bl        -0xC4160
  li        r0, 0
  stw       r0, 0xCC(r31)

.loc_0x158:
  stw       r29, 0x48(r31)
  mr        r3, r31
  mr        r4, r28
  bl        -0xE88
  mr        r3, r27
  mr        r4, r31
  bl        0x262FE4
  addi      r29, r29, 0x1

.loc_0x178:
  cmpw      r29, r30
  blt+      .loc_0x30
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}