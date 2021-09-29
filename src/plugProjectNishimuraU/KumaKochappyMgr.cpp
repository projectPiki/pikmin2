

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
 * Address:	802E6CE4
 * Size:	000050
 */
void __ct__Q34Game12KumaKochappy3MgrFiUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B8064
  lis       r3, 0x804D
  lis       r4, 0x8049
  addi      r5, r3, 0x411C
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x32C0
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
 * Address:	802E6D34
 * Size:	000048
 */
void doAlloc__Q34Game12KumaKochappy3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x830
  bl        -0x2C2EA8
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x1B74C8
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
 * Address:	802E6D7C
 * Size:	000098
 */
void __ct__Q34Game12KumaKochappy5ParmsFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1DD5F4
  lis       r3, 0x804D
  lis       r5, 0x6670
  addi      r0, r3, 0x4110
  lis       r4, 0x8049
  stw       r0, 0xD8(r31)
  addi      r0, r31, 0x82C
  lis       r3, 0x8049
  addi      r5, r5, 0x3031
  stw       r0, 0x7F8(r31)
  subi      r6, r3, 0x329C
  li        r3, 0
  subi      r0, r4, 0x32AC
  stw       r3, 0x7FC(r31)
  addi      r3, r31, 0x804
  addi      r4, r31, 0x7F8
  stw       r0, 0x800(r31)
  bl        0x12C884
  lis       r3, 0x804B
  lfs       f2, -0x14B0(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x14AC(r2)
  stw       r0, 0x804(r31)
  mr        r3, r31
  lfs       f0, -0x14A8(r2)
  stfs      f2, 0x81C(r31)
  stfs      f1, 0x824(r31)
  stfs      f0, 0x828(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802E6E14
 * Size:	000060
 */
void createObj__Q34Game12KumaKochappy3MgrFi(void)
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
  mulli     r3, r31, 0x2F8
  addi      r3, r3, 0x10
  bl        -0x2C2E8C
  lis       r4, 0x802E
  lis       r5, 0x802E
  addi      r4, r4, 0x7050
  mr        r7, r31
  addi      r5, r5, 0x6E74
  li        r6, 0x2F8
  bl        -0x225464
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
 * Address:	802E6E74
 * Size:	0000BC
 */
void __dt__Q34Game12KumaKochappy3ObjFv(void)
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
  addi      r0, r31, 0x2E8
  addi      r4, r3, 0x4218
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
  bl        0x12A688

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x2C2E5C

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
 * Address:	802E6F30
 * Size:	000010
 */
void getEnemy__Q34Game12KumaKochappy3MgrFi(void)
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2F8
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	802E6F40
 * Size:	000050
 */
void read__Q34Game12KumaKochappy5ParmsFR6Stream(void)
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
  bl        0x12C898
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x12C88C
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x12C880
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
 * Address:	802E6F90
 * Size:	0000B0
 */
void __dt__Q34Game12KumaKochappy3MgrFv(void)
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
  addi      r3, r3, 0x411C
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
  bl        0x12A578

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x2C2F6C

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
 * Address:	802E7040
 * Size:	000008
 */
void getEnemyTypeID__Q34Game12KumaKochappy3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4C
  blr
*/
}

/*
 * --INFO--
 * Address:	802E7048
 * Size:	000008
 */
void @4@__dt__Q34Game12KumaKochappy3MgrFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xBC
*/
}