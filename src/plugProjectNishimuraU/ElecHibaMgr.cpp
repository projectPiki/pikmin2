

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
 * Address:	8026EA08
 * Size:	00008C
 */
void __ct__Q34Game8ElecHiba9GeneratorFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8048
  lis       r4, 0x804F
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x4AD8
  lis       r4, 0x3F3F
  li        r6, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r5, r5, 0x6518
  addi      r4, r4, 0x3F3F
  stw       r0, 0x0(r3)
  lis       r3, 0x804B
  subi      r0, r3, 0x2450
  mr        r7, r31
  stw       r6, 0x10(r31)
  addi      r3, r7, 0x18
  stw       r6, 0xC(r31)
  stw       r6, 0x8(r31)
  stw       r6, 0x4(r31)
  stw       r5, 0x14(r31)
  stw       r0, 0x0(r31)
  bl        0x1A4844
  lis       r3, 0x804C
  lfs       f0, -0x32A0(r2)
  addi      r0, r3, 0x5F04
  mr        r3, r31
  stw       r0, 0x0(r31)
  stfs      f0, 0x24(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026EA94
 * Size:	00000C
 */
void getLatestVersion__Q34Game8ElecHiba9GeneratorFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x3030
  addi      r3, r3, 0x3030
  blr
*/
}

/*
 * --INFO--
 * Address:	8026EAA0
 * Size:	000074
 */
void doRead__Q34Game8ElecHiba9GeneratorFR6Stream(void)
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
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r30, 0x18
  bl        0x1A4960
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  mr        r3, r30
  mr        r4, r31
  bl        0x8C
  b         .loc_0x5C

.loc_0x50:
  mr        r3, r30
  mr        r4, r31
  bl        0xB0

.loc_0x5C:
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
 * Address:	8026EB14
 * Size:	000060
 */
void doWrite__Q34Game8ElecHiba9GeneratorFR6Stream(void)
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
  lwz       r4, 0x414(r4)
  bl        0x1A58FC
  lfs       f1, 0x24(r30)
  mr        r3, r31
  bl        0x1A6D04
  lis       r4, 0x8048
  mr        r3, r31
  addi      r4, r4, 0x6530
  crclr     6, 0x6
  bl        0x1A5684
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
 * Address:	8026EB74
 * Size:	000034
 */
void doReadLatestVersion__Q34Game8ElecHiba9GeneratorFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r3, r4
  bl        0x1A6220
  stfs      f1, 0x24(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026EBA8
 * Size:	000004
 */
void doReadOldVersion__Q34Game8ElecHiba9GeneratorFR6Stream(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026EBAC
 * Size:	000064
 */
void __ct__Q34Game8ElecHiba3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x13FF2C
  lis       r3, 0x804C
  lis       r4, 0x804C
  addi      r5, r3, 0x53D4
  lis       r3, 0x8048
  stw       r5, 0x0(r31)
  addi      r6, r5, 0x38
  addi      r5, r4, 0x5E08
  addi      r0, r3, 0x6540
  stw       r6, 0x4(r31)
  addi      r4, r5, 0x38
  mr        r3, r31
  stw       r5, 0x0(r31)
  stw       r4, 0x4(r31)
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
 * Address:	8026EC10
 * Size:	000048
 */
void doAlloc__Q34Game8ElecHiba3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x8F8
  bl        -0x24AD84
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x13F3A4
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
 * Address:	8026EC58
 * Size:	0001CC
 */
void __ct__Q34Game8ElecHiba5ParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x6508
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x1654DC
  lis       r3, 0x804C
  lis       r5, 0x6670
  addi      r0, r3, 0x5EF8
  addi      r4, r30, 0x8F4
  stw       r0, 0xD8(r30)
  li        r7, 0
  addi      r0, r31, 0x4C
  addi      r3, r30, 0x804
  stw       r4, 0x7F8(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3032
  addi      r6, r31, 0x5C
  stw       r7, 0x7FC(r30)
  stw       r0, 0x800(r30)
  bl        0x1A49A4
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x329C(r2)
  stw       r0, 0x804(r30)
  addi      r3, r30, 0x82C
  lfs       f1, -0x3298(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x81C(r30)
  addi      r5, r5, 0x3033
  lfs       f0, -0x32A0(r2)
  addi      r6, r31, 0x6C
  stfs      f1, 0x824(r30)
  stfs      f0, 0x828(r30)
  bl        0x1A4968
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x329C(r2)
  stw       r0, 0x82C(r30)
  addi      r3, r30, 0x854
  lfs       f1, -0x3298(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x844(r30)
  addi      r5, r5, 0x3031
  lfs       f0, -0x32A0(r2)
  addi      r6, r31, 0x78
  stfs      f1, 0x84C(r30)
  stfs      f0, 0x850(r30)
  bl        0x1A492C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x329C(r2)
  stw       r0, 0x854(r30)
  addi      r3, r30, 0x87C
  lfs       f1, -0x3298(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x86C(r30)
  addi      r5, r5, 0x3034
  lfs       f0, -0x32A0(r2)
  addi      r6, r31, 0x84
  stfs      f1, 0x874(r30)
  stfs      f0, 0x878(r30)
  bl        0x1A48F0
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x3294(r2)
  stw       r0, 0x87C(r30)
  addi      r3, r30, 0x8A4
  lfs       f1, -0x3298(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x894(r30)
  addi      r5, r5, 0x3930
  lfs       f0, -0x32A0(r2)
  addi      r6, r31, 0x90
  stfs      f1, 0x89C(r30)
  stfs      f0, 0x8A0(r30)
  bl        0x1A48B4
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x3290(r2)
  stw       r0, 0x8A4(r30)
  addi      r3, r30, 0x8CC
  lfs       f1, -0x3298(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x8BC(r30)
  addi      r5, r5, 0x3931
  lfs       f0, -0x328C(r2)
  addi      r6, r31, 0x9C
  stfs      f1, 0x8C4(r30)
  stfs      f0, 0x8C8(r30)
  bl        0x1A4878
  lis       r3, 0x804B
  lfs       f2, -0x3288(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x3298(r2)
  stw       r0, 0x8CC(r30)
  mr        r3, r30
  lfs       f0, -0x328C(r2)
  stfs      f2, 0x8E4(r30)
  stfs      f1, 0x8EC(r30)
  stfs      f0, 0x8F0(r30)
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
 * Address:	8026EE24
 * Size:	000060
 */
void createObj__Q34Game8ElecHiba3MgrFi(void)
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
  mulli     r3, r31, 0x314
  addi      r3, r3, 0x10
  bl        -0x24AE9C
  lis       r4, 0x8027
  lis       r5, 0x8027
  subi      r4, r4, 0xDA8
  mr        r7, r31
  subi      r5, r5, 0x117C
  li        r6, 0x314
  bl        -0x1AD474
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
 * Address:	8026EE84
 * Size:	0000E0
 */
void __dt__Q34Game8ElecHiba3ObjFv(void)
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
  beq-      .loc_0xC4
  lis       r4, 0x804C
  addi      r3, r30, 0x304
  addi      r5, r4, 0x5F9C
  addic.    r0, r30, 0x2C8
  stw       r5, 0x0(r30)
  addi      r4, r5, 0x1B0
  addi      r0, r5, 0x2FC
  stw       r4, 0x178(r30)
  lwz       r4, 0x17C(r30)
  stw       r0, 0x0(r4)
  lwz       r4, 0x17C(r30)
  sub       r0, r3, r4
  stw       r0, 0xC(r4)
  beq-      .loc_0x70
  lis       r4, 0x804C
  addi      r3, r30, 0x2C8
  addi      r0, r4, 0x5EE8
  li        r4, 0
  stw       r0, 0x2C8(r30)
  bl        0x1A2698

.loc_0x70:
  cmplwi    r30, 0
  beq-      .loc_0xB4
  lis       r3, 0x804B
  addi      r0, r30, 0x2BC
  subi      r4, r3, 0x5CDC
  addi      r3, r30, 0x290
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x1B0
  addi      r6, r4, 0x2F8
  li        r4, -0x1
  stw       r5, 0x178(r30)
  lwz       r5, 0x17C(r30)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r30)
  sub       r0, r0, r5
  stw       r0, 0xC(r5)
  bl        0x1A2654

.loc_0xB4:
  extsh.    r0, r31
  ble-      .loc_0xC4
  mr        r3, r30
  bl        -0x24AE90

.loc_0xC4:
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
 * Address:	8026EF64
 * Size:	000010
 */
void getEnemy__Q34Game8ElecHiba3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x314
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026EF74
 * Size:	0000E4
 */
void birth__Q34Game8ElecHiba3MgrFRQ24Game13EnemyBirthArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f0, -0x32A0(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  mr        r28, r4
  stfs      f0, 0x8(r1)
  bl        -0x13FBD8
  mr.       r30, r3
  beq-      .loc_0xC0
  lfs       f0, 0x0(r28)
  addi      r4, r1, 0x8
  lfs       f1, -0x328C(r2)
  stfs      f0, 0x2E4(r30)
  lfs       f0, 0x4(r28)
  stfs      f0, 0x2E8(r30)
  lfs       f0, 0x8(r28)
  stfs      f0, 0x2EC(r30)
  bl        0x988
  mr        r3, r30
  addi      r31, r30, 0x2C8
  li        r4, 0x1
  bl        0x1184
  mr        r3, r29
  mr        r4, r28
  bl        -0x13FC20
  mr.       r0, r3
  beq-      .loc_0xC0
  lfs       f0, 0x0(r28)
  mr        r29, r0
  lfs       f1, -0x3284(r2)
  addi      r4, r1, 0x8
  stfs      f0, 0x2E4(r29)
  lfs       f0, 0x4(r28)
  stfs      f0, 0x2E8(r29)
  lfs       f0, 0x8(r28)
  stfs      f0, 0x2EC(r29)
  bl        0x93C
  mr        r3, r29
  li        r4, 0
  bl        0x113C
  mr        r3, r31
  addi      r4, r29, 0x2C8
  bl        0x1A23D8

.loc_0xC0:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	8026F058
 * Size:	0000C8
 */
void __dt__Q34Game8ElecHiba3MgrFv(void)
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
  beq-      .loc_0xAC
  lis       r3, 0x804C
  addi      r3, r3, 0x5E08
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804C
  addi      r3, r3, 0x53D4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  subi      r3, r3, 0x760
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  addic.    r0, r30, 0x4
  subi      r3, r3, 0x5304
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r4, 0x804B
  addi      r3, r30, 0x4
  subi      r0, r4, 0x5324
  li        r4, 0
  stw       r0, 0x4(r30)
  bl        0x1A2498

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x24B04C

.loc_0xAC:
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
 * Address:	8026F120
 * Size:	000008
 */
void getEnemyTypeID__Q34Game8ElecHiba3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x16
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F128
 * Size:	000060
 */
void __dt__Q34Game8ElecHiba8TeamListFv(void)
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
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x5EE8
  stw       r0, 0x0(r30)
  bl        0x1A2430
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x24B0B4

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
 * Address:	8026F188
 * Size:	000050
 */
void read__Q34Game8ElecHiba5ParmsFR6Stream(void)
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
  bl        0x1A4650
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x1A4644
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x1A4638
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
 * Address:	8026F1D8
 * Size:	000070
 */
void __dt__Q34Game8ElecHiba9GeneratorFv(void)
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
  lis       r4, 0x804C
  addi      r0, r4, 0x5F04
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x2450
  stw       r0, 0x0(r30)
  bl        0x1A2370

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x24B174

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
 * Address:	8026F248
 * Size:	000008
 */
void getInitialParam__Q34Game8ElecHiba9GeneratorFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x24
  blr
*/
}

/*
 * --INFO--
 * Address:	8026F250
 * Size:	000008
 */
void @4@__dt__Q34Game8ElecHiba3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x1FC
*/
}