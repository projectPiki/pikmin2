

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
 * Address:	8030421C
 * Size:	0000BC
 */
void __ct__Q32og6Screen13PikminCounterFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x130B7C
  lis       r3, 0x804D
  lfs       f1, -0xDE0(r2)
  addi      r0, r3, 0x7D40
  li        r8, 0
  stw       r0, 0x0(r31)
  li        r7, 0x4D2
  li        r6, 0x32
  lfs       f0, -0xDDC(r2)
  stfs      f1, 0x148(r31)
  li        r5, 0x1
  li        r4, 0x2
  li        r0, 0xA
  stw       r8, 0x14C(r31)
  mr        r3, r31
  stw       r8, 0x154(r31)
  stw       r7, 0x150(r31)
  stw       r6, 0x158(r31)
  stb       r8, 0x15C(r31)
  stw       r8, 0x160(r31)
  stfs      f0, 0x164(r31)
  stw       r5, 0x168(r31)
  stw       r4, 0x16C(r31)
  stw       r0, 0x170(r31)
  stw       r0, 0x174(r31)
  stb       r5, 0x178(r31)
  stw       r8, 0x17C(r31)
  stw       r8, 0x180(r31)
  stw       r8, 0x184(r31)
  stw       r8, 0x188(r31)
  stb       r8, 0x18C(r31)
  stw       r8, 0x190(r31)
  stw       r8, 0x194(r31)
  stfs      f1, 0x198(r31)
  stfs      f1, 0x19C(r31)
  stfs      f1, 0x1A0(r31)
  stfs      f1, 0x1A4(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803042D8
 * Size:	00006C
 */
void setParam__Q32og6Screen13PikminCounterFRQ32og6Screen8DataGameRQ32og6Screen8DataNavi(void)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  stfs      f0, 0x148(r3)
  lwz       r0, 0x4(r4)
  stw       r0, 0x14C(r3)
  lwz       r0, 0x8(r4)
  stw       r0, 0x150(r3)
  lwz       r0, 0xC(r4)
  stw       r0, 0x154(r3)
  lwz       r0, 0x10(r4)
  stw       r0, 0x158(r3)
  lbz       r0, 0x14(r4)
  stb       r0, 0x15C(r3)
  lwz       r0, 0x18(r4)
  stw       r0, 0x160(r3)
  lfs       f0, 0x0(r5)
  stfs      f0, 0x164(r3)
  lwz       r0, 0x4(r5)
  stw       r0, 0x168(r3)
  lwz       r0, 0x8(r5)
  stw       r0, 0x16C(r3)
  lwz       r0, 0xC(r5)
  stw       r0, 0x170(r3)
  lwz       r0, 0x10(r5)
  stw       r0, 0x174(r3)
  lbz       r0, 0x14(r5)
  stb       r0, 0x178(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
void setCallBackCommon__Q32og6Screen13PikminCounterFP10JKRArchiveb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80304344
 * Size:	0000F8
 */
void update__Q32og6Screen13PikminCounterFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x190(r3)
  cmplwi    r0, 0
  beq-      .loc_0xDC
  lbz       r0, 0x18C(r31)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  lfs       f1, 0x1A0(r31)
  lfs       f0, -0xDD8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x94
  lfs       f0, -0xDD4(r2)
  fadds     f0, f1, f0
  stfs      f0, 0x1A0(r31)
  b         .loc_0x94

.loc_0x4C:
  lfs       f1, 0x1A0(r31)
  lfs       f0, 0x198(r31)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x94
  lfs       f2, -0xDD4(r2)
  fsubs     f0, f1, f2
  stfs      f0, 0x1A0(r31)
  lfs       f0, 0x1A0(r31)
  lfs       f1, 0x198(r31)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bne-      .loc_0x94
  stfs      f1, 0x1A0(r31)
  lfs       f1, -0xDD0(r2)
  lwz       r3, 0x194(r31)
  lfs       f3, -0xDCC(r2)
  lfs       f4, -0xDE0(r2)
  bl        0x24B04

.loc_0x94:
  lwz       r3, 0x190(r31)
  lfs       f1, 0x1A4(r31)
  lfs       f0, 0x1A0(r31)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x194(r31)
  bl        0x24B84
  lwz       r3, 0x190(r31)
  stfs      f1, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0xDC:
  mr        r3, r31
  bl        0x1308BC
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030443C
 * Size:	000230
 */
void setCallBack__Q32og6Screen13PikminCounterFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  bl        -0x1148
  li        r3, 0x44
  bl        -0x2E05C0
  mr.       r0, r3
  beq-      .loc_0x3C
  bl        0x33B0
  mr        r0, r3

.loc_0x3C:
  stw       r0, 0x17C(r30)
  lis       r5, 0x7069
  mr        r4, r30
  mr        r8, r31
  lwz       r3, 0x17C(r30)
  addi      r6, r5, 0x6B69
  addi      r7, r30, 0x16C
  li        r5, 0
  bl        0x3444
  lis       r4, 0x7069
  lwz       r7, 0x17C(r30)
  mr        r3, r30
  li        r5, 0
  addi      r6, r4, 0x6B69
  bl        0x130674
  addi      r0, r30, 0x168
  lis       r4, 0x635F
  stw       r0, 0x8(r1)
  li        r3, 0x4
  li        r5, 0x3
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r30
  addi      r6, r4, 0x6D72
  addi      r8, r4, 0x6D63
  stw       r5, 0x10(r1)
  addi      r10, r4, 0x6D6C
  li        r5, 0
  li        r7, 0
  stw       r0, 0x14(r1)
  li        r9, 0
  stw       r31, 0x18(r1)
  bl        0x8038
  li        r0, 0
  lis       r4, 0x6463
  stb       r0, 0x18C(r30)
  addi      r29, r30, 0x14C
  li        r0, 0xA
  mr        r3, r30
  stw       r29, 0x8(r1)
  addi      r6, r4, 0x7372
  addi      r8, r4, 0x736C
  addi      r10, r4, 0x7363
  stw       r0, 0xC(r1)
  li        r5, 0
  li        r7, 0
  li        r9, 0
  stw       r31, 0x10(r1)
  bl        0x90EC
  stw       r29, 0x8(r1)
  lis       r4, 0x6463
  li        r0, 0xA
  mr        r3, r30
  stw       r0, 0xC(r1)
  addi      r6, r4, 0x5F72
  addi      r8, r4, 0x5F6C
  addi      r10, r4, 0x5F63
  stw       r31, 0x10(r1)
  li        r5, 0
  li        r7, 0
  li        r9, 0
  bl        0x90B8
  addi      r0, r30, 0x158
  lis       r4, 0x635F
  stw       r0, 0x8(r1)
  li        r3, 0xA
  li        r5, 0x3
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r30
  addi      r6, r4, 0x6C72
  addi      r8, r4, 0x6C63
  stw       r5, 0x10(r1)
  addi      r10, r4, 0x6C6C
  li        r5, 0
  li        r7, 0
  stw       r0, 0x14(r1)
  li        r9, 0
  stw       r31, 0x18(r1)
  bl        0x7F7C
  addi      r0, r30, 0x150
  lis       r4, 0x635F
  stw       r0, 0x8(r1)
  li        r3, 0xA
  li        r5, 0x4
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r30
  addi      r6, r4, 0x7331
  addi      r8, r4, 0x7372
  stw       r5, 0x10(r1)
  addi      r10, r4, 0x736C
  li        r5, 0
  li        r7, 0
  stw       r0, 0x14(r1)
  li        r9, 0
  stw       r31, 0x18(r1)
  bl        0x7F34
  li        r0, 0x1828
  lis       r4, 0x635F
  stw       r0, 0x94(r3)
  li        r0, 0x182A
  addi      r6, r4, 0x7363
  li        r5, 0
  stw       r0, 0x98(r3)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  bl        -0x2CB554
  cmplwi    r3, 0
  beq-      .loc_0x214
  mr        r3, r30
  bl        -0x2CB564
  mr        r4, r30
  bl        -0x2CCE18

.loc_0x214:
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
 * Address:	8030466C
 * Size:	000240
 */
void setCallBack__Q32og6Screen17PikminCounterCaveFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  bl        -0x1378
  li        r3, 0x44
  bl        -0x2E07F0
  mr.       r0, r3
  beq-      .loc_0x3C
  bl        0x3180
  mr        r0, r3

.loc_0x3C:
  stw       r0, 0x17C(r30)
  lis       r5, 0x7069
  mr        r4, r30
  mr        r8, r31
  lwz       r3, 0x17C(r30)
  addi      r6, r5, 0x6B69
  addi      r7, r30, 0x16C
  li        r5, 0
  bl        0x3214
  lis       r4, 0x7069
  lwz       r7, 0x17C(r30)
  mr        r3, r30
  li        r5, 0
  addi      r6, r4, 0x6B69
  bl        0x130444
  addi      r0, r30, 0x168
  lis       r4, 0x635F
  stw       r0, 0x8(r1)
  li        r3, 0x4
  li        r5, 0x3
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r30
  addi      r6, r4, 0x6D72
  addi      r8, r4, 0x6D63
  stw       r5, 0x10(r1)
  addi      r10, r4, 0x6D6C
  li        r5, 0
  li        r7, 0
  stw       r0, 0x14(r1)
  li        r9, 0
  stw       r31, 0x18(r1)
  bl        0x7E08
  li        r0, 0
  lis       r5, 0x6963
  stb       r0, 0x18C(r30)
  mr        r3, r30
  lis       r4, 0x4E64
  addi      r6, r5, 0x6F6E
  lwz       r12, 0x0(r30)
  addi      r5, r4, 0x6179
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x190(r30)
  lwz       r3, 0x190(r30)
  cmplwi    r3, 0
  beq-      .loc_0x160
  lfs       f0, 0xD4(r3)
  stfs      f0, 0x198(r30)
  lwz       r3, 0x190(r30)
  lfs       f0, 0xD8(r3)
  stfs      f0, 0x19C(r30)
  lfs       f0, 0x198(r30)
  stfs      f0, 0x1A0(r30)
  lfs       f0, 0x19C(r30)
  stfs      f0, 0x1A4(r30)
  lwz       r3, 0x190(r30)
  lfs       f1, 0x1A4(r30)
  lfs       f0, 0x1A0(r30)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1C
  bl        -0x2E0910
  mr.       r0, r3
  beq-      .loc_0x15C
  bl        0x24644
  mr        r0, r3

.loc_0x15C:
  stw       r0, 0x194(r30)

.loc_0x160:
  addi      r29, r30, 0x154
  lis       r4, 0x6463
  stw       r29, 0x8(r1)
  li        r0, 0x4
  mr        r3, r30
  addi      r6, r4, 0x5F72
  stw       r0, 0xC(r1)
  addi      r8, r4, 0x5F6C
  addi      r10, r4, 0x5F63
  li        r5, 0
  stw       r31, 0x10(r1)
  li        r7, 0
  li        r9, 0
  bl        0x8E24
  stw       r29, 0x8(r1)
  lis       r4, 0x6463
  li        r0, 0x4
  mr        r3, r30
  stw       r0, 0xC(r1)
  addi      r6, r4, 0x7372
  addi      r8, r4, 0x736C
  addi      r10, r4, 0x7363
  stw       r31, 0x10(r1)
  li        r5, 0
  li        r7, 0
  li        r9, 0
  bl        0x8DF0
  addi      r0, r30, 0x158
  lis       r4, 0x635F
  stw       r0, 0x8(r1)
  li        r3, 0xA
  li        r5, 0x3
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r30
  addi      r6, r4, 0x6C72
  addi      r8, r4, 0x6C63
  stw       r5, 0x10(r1)
  addi      r10, r4, 0x6C6C
  li        r5, 0
  li        r7, 0
  stw       r0, 0x14(r1)
  li        r9, 0
  stw       r31, 0x18(r1)
  bl        0x7CB4
  li        r4, 0x1828
  li        r0, 0x182A
  stw       r4, 0x94(r3)
  stw       r0, 0x98(r3)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803048AC
 * Size:	0001F8
 */
void setCallBack__Q32og6Screen24PikminCounterChallenge1PFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  bl        -0x15B4
  li        r3, 0x44
  bl        -0x2E0A2C
  mr.       r0, r3
  beq-      .loc_0x38
  bl        0x2F44
  mr        r0, r3

.loc_0x38:
  stw       r0, 0x17C(r30)
  lis       r5, 0x7069
  mr        r4, r30
  mr        r8, r31
  lwz       r3, 0x17C(r30)
  addi      r6, r5, 0x6B69
  addi      r7, r30, 0x16C
  li        r5, 0
  bl        0x2FD8
  lis       r4, 0x7069
  lwz       r7, 0x17C(r30)
  mr        r3, r30
  li        r5, 0
  addi      r6, r4, 0x6B69
  bl        0x130208
  addi      r0, r30, 0x168
  lis       r4, 0x635F
  stw       r0, 0x8(r1)
  li        r3, 0x4
  li        r5, 0x3
  li        r0, 0x1
  stw       r3, 0xC(r1)
  mr        r3, r30
  addi      r6, r4, 0x6D72
  addi      r8, r4, 0x6D63
  stw       r5, 0x10(r1)
  addi      r10, r4, 0x6D6C
  li        r5, 0
  li        r7, 0
  stw       r0, 0x14(r1)
  li        r9, 0
  stw       r31, 0x18(r1)
  bl        0x7BCC
  li        r0, 0
  lis       r5, 0x6963
  stb       r0, 0x18C(r30)
  mr        r3, r30
  lis       r4, 0x4E64
  addi      r6, r5, 0x6F6E
  lwz       r12, 0x0(r30)
  addi      r5, r4, 0x6179
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x190(r30)
  lwz       r3, 0x190(r30)
  cmplwi    r3, 0
  beq-      .loc_0x15C
  lfs       f0, 0xD4(r3)
  stfs      f0, 0x198(r30)
  lwz       r3, 0x190(r30)
  lfs       f0, 0xD8(r3)
  stfs      f0, 0x19C(r30)
  lfs       f0, 0x198(r30)
  stfs      f0, 0x1A0(r30)
  lfs       f0, 0x19C(r30)
  stfs      f0, 0x1A4(r30)
  lwz       r3, 0x190(r30)
  lfs       f1, 0x1A4(r30)
  lfs       f0, 0x1A0(r30)
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1C
  bl        -0x2E0B4C
  mr.       r0, r3
  beq-      .loc_0x158
  bl        0x24408
  mr        r0, r3

.loc_0x158:
  stw       r0, 0x194(r30)

.loc_0x15C:
  mr        r3, r30
  lis       r5, 0x6963
  lwz       r12, 0x0(r30)
  lis       r4, 0x4E64
  addi      r6, r5, 0x6F6E
  lwz       r12, 0x3C(r12)
  addi      r5, r4, 0x6179
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x635F
  stb       r0, 0xB0(r3)
  addi      r0, r30, 0x158
  li        r5, 0xA
  li        r7, 0x3
  stw       r0, 0x8(r1)
  li        r0, 0x1
  mr        r3, r30
  addi      r6, r4, 0x6C72
  stw       r5, 0xC(r1)
  addi      r8, r4, 0x6C63
  addi      r10, r4, 0x6C6C
  li        r5, 0
  stw       r7, 0x10(r1)
  li        r7, 0
  li        r9, 0
  stw       r0, 0x14(r1)
  stw       r31, 0x18(r1)
  bl        0x7AB8
  li        r4, 0x1828
  li        r0, 0x182A
  stw       r4, 0x94(r3)
  stw       r0, 0x98(r3)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80304AA4
 * Size:	0000B4
 */
void __dt__Q32og6Screen24PikminCounterChallenge1PFv(void)
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
  beq-      .loc_0x98
  lis       r3, 0x804D
  addi      r0, r3, 0x7BF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804D
  addi      r0, r3, 0x7D40
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  subi      r0, r3, 0x3B00
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r30)
  beq-      .loc_0x7C
  lis       r4, 0x804D
  addi      r3, r30, 0x118
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x118(r30)
  bl        0x10CA6C

.loc_0x7C:
  mr        r3, r30
  li        r4, 0
  bl        -0x2C560C

.loc_0x88:
  extsh.    r0, r31
  ble-      .loc_0x98
  mr        r3, r30
  bl        -0x2E0A84

.loc_0x98:
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
 * Address:	80304B58
 * Size:	0000B4
 */
void __dt__Q32og6Screen17PikminCounterCaveFv(void)
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
  beq-      .loc_0x98
  lis       r3, 0x804D
  addi      r0, r3, 0x7C9C
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804D
  addi      r0, r3, 0x7D40
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  subi      r0, r3, 0x3B00
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r30)
  beq-      .loc_0x7C
  lis       r4, 0x804D
  addi      r3, r30, 0x118
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x118(r30)
  bl        0x10C9B8

.loc_0x7C:
  mr        r3, r30
  li        r4, 0
  bl        -0x2C56C0

.loc_0x88:
  extsh.    r0, r31
  ble-      .loc_0x98
  mr        r3, r30
  bl        -0x2E0B38

.loc_0x98:
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
 * Address:	80304C0C
 * Size:	0000A4
 */
void __dt__Q32og6Screen13PikminCounterFv(void)
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
  beq-      .loc_0x88
  lis       r3, 0x804D
  addi      r0, r3, 0x7D40
  stw       r0, 0x0(r30)
  beq-      .loc_0x78
  lis       r3, 0x804F
  subi      r0, r3, 0x3B00
  stw       r0, 0x0(r30)
  beq-      .loc_0x78
  lis       r3, 0x804F
  addic.    r0, r30, 0x118
  subi      r0, r3, 0x3A60
  stw       r0, 0x0(r30)
  beq-      .loc_0x6C
  lis       r4, 0x804D
  addi      r3, r30, 0x118
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x118(r30)
  bl        0x10C914

.loc_0x6C:
  mr        r3, r30
  li        r4, 0
  bl        -0x2C5764

.loc_0x78:
  extsh.    r0, r31
  ble-      .loc_0x88
  mr        r3, r30
  bl        -0x2E0BDC

.loc_0x88:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}