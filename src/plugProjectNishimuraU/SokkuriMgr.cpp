

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
 * Address:	802F0C04
 * Size:	000050
 */
void __ct__Q34Game7Sokkuri3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C1F84
  lis       r3, 0x804D
  lis       r4, 0x8049
  addi      r5, r3, 0x4E78
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x31D0
  stw       r5, 0x4(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F0C54
 * Size:	000048
 */
void doAlloc__Q34Game7Sokkuri3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x998
  bl        -0x2CCDC8
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x1C13E8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	802F0C9C
 * Size:	000048
 */
void __ct__Q34Game7Sokkuri5ParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1E7514
  lis       r4, 0x804D
  addi      r3, r31, 0x7F8
  addi      r0, r4, 0x4F58
  li        r4, 0x1
  stw       r0, 0xD8(r31)
  bl        .loc_0x48
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x48:
*/
}

/*
 * --INFO--
 * Address:	802F0CE4
 * Size:	0002B0
 */
void __ct__Q44Game7Sokkuri5Parms11ProperParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  lis       r4, 0x8049
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x31E0
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x30
  addi      r0, r30, 0x19C
  stw       r0, 0x0(r30)

.loc_0x30:
  li        r0, 0
  lis       r5, 0x6670
  stw       r0, 0x4(r30)
  addi      r0, r31, 0x24
  mr        r4, r30
  addi      r3, r30, 0xC
  stw       r0, 0x8(r30)
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x34
  bl        0x122920
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1270(r2)
  stw       r0, 0xC(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0x34
  stfs      f0, 0x24(r30)
  addi      r5, r5, 0x3032
  lfs       f0, -0x1268(r2)
  addi      r6, r31, 0x44
  stfs      f1, 0x2C(r30)
  stfs      f0, 0x30(r30)
  bl        0x1228E4
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f1, -0x126C(r2)
  stw       r0, 0x34(r30)
  mr        r4, r30
  lfs       f0, -0x1268(r2)
  addi      r3, r30, 0x5C
  stfs      f1, 0x4C(r30)
  addi      r5, r5, 0x3033
  addi      r6, r31, 0x54
  stfs      f1, 0x54(r30)
  stfs      f0, 0x58(r30)
  bl        0x1228AC
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1264(r2)
  stw       r0, 0x5C(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0x84
  stfs      f0, 0x74(r30)
  addi      r5, r5, 0x3034
  lfs       f0, -0x1260(r2)
  addi      r6, r31, 0x64
  stfs      f1, 0x7C(r30)
  stfs      f0, 0x80(r30)
  bl        0x122870
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x125C(r2)
  stw       r0, 0x84(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0xAC
  stfs      f0, 0x9C(r30)
  addi      r5, r5, 0x3131
  lfs       f0, -0x1260(r2)
  addi      r6, r31, 0x74
  stfs      f1, 0xA4(r30)
  stfs      f0, 0xA8(r30)
  bl        0x122834
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1258(r2)
  stw       r0, 0xAC(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0xD4
  stfs      f0, 0xC4(r30)
  addi      r5, r5, 0x3132
  lfs       f0, -0x1270(r2)
  addi      r6, r31, 0x80
  stfs      f1, 0xCC(r30)
  stfs      f0, 0xD0(r30)
  bl        0x1227F8
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1254(r2)
  stw       r0, 0xD4(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0xFC
  stfs      f0, 0xEC(r30)
  addi      r5, r5, 0x3133
  lfs       f0, -0x1268(r2)
  addi      r6, r31, 0x90
  stfs      f1, 0xF4(r30)
  stfs      f0, 0xF8(r30)
  bl        0x1227BC
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1270(r2)
  stw       r0, 0xFC(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0x124
  stfs      f0, 0x114(r30)
  addi      r5, r5, 0x3231
  lfs       f0, -0x1268(r2)
  addi      r6, r31, 0xA0
  stfs      f1, 0x11C(r30)
  stfs      f0, 0x120(r30)
  bl        0x122780
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1250(r2)
  stw       r0, 0x124(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0x14C
  stfs      f0, 0x13C(r30)
  addi      r5, r5, 0x3232
  lfs       f0, -0x124C(r2)
  addi      r6, r31, 0xB0
  stfs      f1, 0x144(r30)
  stfs      f0, 0x148(r30)
  bl        0x122744
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x1248(r2)
  stw       r0, 0x14C(r30)
  mr        r4, r30
  lfs       f1, -0x126C(r2)
  addi      r3, r30, 0x174
  stfs      f0, 0x164(r30)
  addi      r5, r5, 0x3233
  lfs       f0, -0x1270(r2)
  addi      r6, r31, 0xC0
  stfs      f1, 0x16C(r30)
  stfs      f0, 0x170(r30)
  bl        0x122708
  lis       r3, 0x804B
  lfs       f2, -0x1270(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x126C(r2)
  stw       r0, 0x174(r30)
  mr        r3, r30
  lfs       f0, -0x1244(r2)
  stfs      f2, 0x18C(r30)
  stfs      f1, 0x194(r30)
  stfs      f0, 0x198(r30)
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
 * Address:	802F0F94
 * Size:	000060
 */
void createObj__Q34Game7Sokkuri3MgrFi(void)
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
  mulli     r3, r31, 0x2EC
  addi      r3, r3, 0x10
  bl        -0x2CD00C
  lis       r4, 0x802F
  lis       r5, 0x802F
  addi      r4, r4, 0x1264
  mr        r7, r31
  addi      r5, r5, 0xFF4
  li        r6, 0x2EC
  bl        -0x22F5E4
  stw       r3, 0x44(r30)
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
 * Address:	802F0FF4
 * Size:	0000BC
 */
void __dt__Q34Game7Sokkuri3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  beq-      .loc_0xA0
  lis       r3, 0x804D
  addi      r0, r31, 0x2DC
  addi      r4, r3, 0x4F7C
  stw       r4, 0x0(r31)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x2FC
  stw       r3, 0x178(r31)
  lwz       r3, 0x17C(r31)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r31)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0x90
  lis       r3, 0x804B
  addi      r0, r31, 0x2BC
  subi      r4, r3, 0x5CDC
  addi      r3, r31, 0x290
  stw       r4, 0x0(r31)
  addi      r5, r4, 0x1B0
  addi      r6, r4, 0x2F8
  li        r4, -0x1
  stw       r5, 0x178(r31)
  lwz       r5, 0x17C(r31)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r31)
  sub       r0, r0, r5
  stw       r0, 0xC(r5)
  bl        0x120508

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x2CCFDC

.loc_0xA0:
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
 * Address:	802F10B0
 * Size:	000010
 */
void getEnemy__Q34Game7Sokkuri3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2EC
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	802F10C0
 * Size:	000068
 */
void loadModelData__Q34Game7Sokkuri3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1C0FC8
  li        r5, 0
  b         .loc_0x40

.loc_0x20:
  lwz       r3, 0x80(r4)
  rlwinm    r0,r5,2,14,29
  addi      r5, r5, 0x1
  lwzx      r3, r3, r0
  lwz       r0, 0xC(r3)
  rlwinm    r0,r0,0,20,15
  ori       r0, r0, 0x2000
  stw       r0, 0xC(r3)

.loc_0x40:
  lwz       r4, 0x1C(r31)
  rlwinm    r0,r5,0,16,31
  lhz       r3, 0x7C(r4)
  cmplw     r0, r3
  blt+      .loc_0x20
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F1128
 * Size:	0000B0
 */
void __dt__Q34Game7Sokkuri3MgrFv(void)
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
  beq-      .loc_0x94
  lis       r3, 0x804D
  addi      r3, r3, 0x4E78
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x84
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0x1203E0

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x2CD104

.loc_0x94:
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
 * Address:	802F11D8
 * Size:	000008
 */
void getEnemyTypeID__Q34Game7Sokkuri3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4F
  blr
*/
}

/*
 * --INFO--
 * Address:	802F11E0
 * Size:	00002C
 */
void doLoadBmd__Q34Game7Sokkuri3MgrFPv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x2024
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x30
  bl        -0x281964
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802F120C
 * Size:	000050
 */
void read__Q34Game7Sokkuri5ParmsFR6Stream(void)
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
  bl        0x1225CC
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x1225C0
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x1225B4
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
 * Address:	802F125C
 * Size:	000008
 */
void @4@__dt__Q34Game7Sokkuri3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x138
*/
}