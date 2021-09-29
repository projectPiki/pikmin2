

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __ct__Q214EffectAnimator3ObjFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void setup__Q214EffectAnimator3ObjFPQ214EffectAnimator7KeyData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void calcValue__Q214EffectAnimator3ObjFf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __ct__Q214EffectAnimator6ObjMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void update__Q214EffectAnimator6ObjMgrFPQ23efx13TKechappyTestf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80132CB4
 * Size:	000004
 */
void update__Q214EffectAnimator3ObjFPQ23efx13TKechappyTestf(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80132CB8
 * Size:	0002F8
 */
void setup__Q214EffectAnimator6ObjMgrFPQ214EffectAnimator10ObjMgrData(void)
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
  li        r3, 0x20
  bl        -0x10EE34
  cmplwi    r3, 0
  beq-      .loc_0x78
  lis       r4, 0x804F
  lis       r6, 0x8048
  subi      r0, r4, 0x4AD8
  lis       r5, 0x804B
  stw       r0, 0x0(r3)
  li        r7, 0
  lis       r4, 0x804B
  subi      r6, r6, 0x3A90
  stw       r7, 0x10(r3)
  subi      r5, r5, 0x214
  subi      r0, r4, 0x228
  stw       r7, 0xC(r3)
  stw       r7, 0x8(r3)
  stw       r7, 0x4(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x0(r3)
  stw       r7, 0x18(r3)
  stw       r7, 0x1C(r3)
  stw       r0, 0x0(r3)

.loc_0x78:
  lwz       r0, 0x0(r31)
  li        r5, 0
  lfs       f0, -0x6168(r2)
  mr        r4, r3
  stw       r5, 0x1C(r3)
  mr        r3, r0
  b         .loc_0x9C

.loc_0x94:
  addi      r3, r3, 0x8
  addi      r5, r5, 0x1

.loc_0x9C:
  lfs       f1, 0x0(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  beq+      .loc_0x94
  stw       r5, 0x1C(r4)
  li        r3, 0
  stw       r0, 0x18(r4)
  lwz       r6, 0x1C(r4)
  cmpwi     r6, 0
  ble-      .loc_0x100
  cmpwi     r6, 0x8
  subi      r5, r6, 0x8
  ble-      .loc_0xEC
  addi      r0, r5, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0xEC

.loc_0xE4:
  addi      r3, r3, 0x8
  bdnz+     .loc_0xE4

.loc_0xEC:
  sub       r0, r6, r3
  mtctr     r0
  cmpw      r3, r6
  bge-      .loc_0x100

.loc_0xFC:
  bdnz-     .loc_0xFC

.loc_0x100:
  mr        r3, r30
  bl        0x2DE64C
  li        r3, 0x20
  bl        -0x10EF20
  cmplwi    r3, 0
  beq-      .loc_0x164
  lis       r4, 0x804F
  lis       r6, 0x8048
  subi      r0, r4, 0x4AD8
  lis       r5, 0x804B
  stw       r0, 0x0(r3)
  li        r7, 0
  lis       r4, 0x804B
  subi      r6, r6, 0x3A90
  stw       r7, 0x10(r3)
  subi      r5, r5, 0x214
  subi      r0, r4, 0x23C
  stw       r7, 0xC(r3)
  stw       r7, 0x8(r3)
  stw       r7, 0x4(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x0(r3)
  stw       r7, 0x18(r3)
  stw       r7, 0x1C(r3)
  stw       r0, 0x0(r3)

.loc_0x164:
  lwz       r0, 0x4(r31)
  li        r5, 0
  lfs       f0, -0x6168(r2)
  mr        r4, r3
  stw       r5, 0x1C(r3)
  mr        r3, r0
  b         .loc_0x188

.loc_0x180:
  addi      r3, r3, 0x8
  addi      r5, r5, 0x1

.loc_0x188:
  lfs       f1, 0x0(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  beq+      .loc_0x180
  stw       r5, 0x1C(r4)
  li        r3, 0
  stw       r0, 0x18(r4)
  lwz       r6, 0x1C(r4)
  cmpwi     r6, 0
  ble-      .loc_0x1EC
  cmpwi     r6, 0x8
  subi      r5, r6, 0x8
  ble-      .loc_0x1D8
  addi      r0, r5, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0x1D8

.loc_0x1D0:
  addi      r3, r3, 0x8
  bdnz+     .loc_0x1D0

.loc_0x1D8:
  sub       r0, r6, r3
  mtctr     r0
  cmpw      r3, r6
  bge-      .loc_0x1EC

.loc_0x1E8:
  bdnz-     .loc_0x1E8

.loc_0x1EC:
  mr        r3, r30
  bl        0x2DE560
  li        r3, 0x20
  bl        -0x10F00C
  cmplwi    r3, 0
  beq-      .loc_0x250
  lis       r4, 0x804F
  lis       r6, 0x8048
  subi      r0, r4, 0x4AD8
  lis       r5, 0x804B
  stw       r0, 0x0(r3)
  li        r7, 0
  lis       r4, 0x804B
  subi      r6, r6, 0x3A90
  stw       r7, 0x10(r3)
  subi      r5, r5, 0x214
  subi      r0, r4, 0x250
  stw       r7, 0xC(r3)
  stw       r7, 0x8(r3)
  stw       r7, 0x4(r3)
  stw       r6, 0x14(r3)
  stw       r5, 0x0(r3)
  stw       r7, 0x18(r3)
  stw       r7, 0x1C(r3)
  stw       r0, 0x0(r3)

.loc_0x250:
  lwz       r0, 0x8(r31)
  li        r5, 0
  lfs       f0, -0x6168(r2)
  mr        r4, r3
  stw       r5, 0x1C(r3)
  mr        r3, r0
  b         .loc_0x274

.loc_0x26C:
  addi      r3, r3, 0x8
  addi      r5, r5, 0x1

.loc_0x274:
  lfs       f1, 0x0(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  beq+      .loc_0x26C
  stw       r5, 0x1C(r4)
  li        r3, 0
  stw       r0, 0x18(r4)
  lwz       r6, 0x1C(r4)
  cmpwi     r6, 0
  ble-      .loc_0x2D8
  cmpwi     r6, 0x8
  subi      r5, r6, 0x8
  ble-      .loc_0x2C4
  addi      r0, r5, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0x2C4

.loc_0x2BC:
  addi      r3, r3, 0x8
  bdnz+     .loc_0x2BC

.loc_0x2C4:
  sub       r0, r6, r3
  mtctr     r0
  cmpw      r3, r6
  bge-      .loc_0x2D8

.loc_0x2D4:
  bdnz-     .loc_0x2D4

.loc_0x2D8:
  mr        r3, r30
  bl        0x2DE474
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
 * Address:	80132FB0
 * Size:	000060
 */
void __dt__Q214EffectAnimator3ObjFv(void)
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
  subi      r0, r5, 0x214
  stw       r0, 0x0(r30)
  bl        0x2DE5A8
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x10EF3C

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
 * Address:	80133010
 * Size:	00000C
 */
void __ct__Q214EffectAnimator3MgrFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013301C
 * Size:	0000B4
 */
void setup__Q214EffectAnimator3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  li        r3, 0x24
  bl        -0x10F088
  lis       r4, 0x804B
  stw       r3, 0x0(r27)
  subi      r30, r4, 0x274
  li        r28, 0
  li        r29, 0

.loc_0x30:
  lwz       r0, 0x0(r30)
  cmplwi    r0, 0
  beq-      .loc_0x80
  li        r3, 0x18
  bl        -0x10F1B8
  mr.       r31, r3
  beq-      .loc_0x64
  bl        0x2DE328
  li        r0, 0
  stw       r0, 0x10(r31)
  stw       r0, 0xC(r31)
  stw       r0, 0x8(r31)
  stw       r0, 0x4(r31)

.loc_0x64:
  lwz       r3, 0x0(r27)
  stwx      r31, r3, r29
  lwz       r3, 0x0(r27)
  lwz       r4, 0x0(r30)
  lwzx      r3, r3, r29
  bl        -0x3DC
  b         .loc_0x8C

.loc_0x80:
  lwz       r3, 0x0(r27)
  li        r0, 0
  stwx      r0, r3, r29

.loc_0x8C:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0x9
  addi      r30, r30, 0x4
  blt+      .loc_0x30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801330D0
 * Size:	0000E4
 */
void update__Q214EffectAnimator3MgrFPQ23efx13TKechappyTestif(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r31, r5
  fmr       f31, f1
  cmplwi    r31, 0x9
  mr        r29, r3
  mr        r30, r4
  ble-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A84
  li        r4, 0x167
  subi      r5, r5, 0x3A70
  crclr     6, 0x6
  bl        -0x108AE0

.loc_0x54:
  lwz       r3, 0x0(r29)
  rlwinm    r0,r31,2,0,29
  lwzx      r3, r3, r0
  cmplwi    r3, 0
  bne-      .loc_0x90
  lfs       f1, -0x6168(r2)
  mr        r3, r30
  bl        0x280A88
  lfs       f1, -0x6164(r2)
  mr        r3, r30
  bl        0x280A58
  lfs       f1, -0x6160(r2)
  mr        r3, r30
  bl        0x280A28
  b         .loc_0xC0

.loc_0x90:
  lwz       r31, 0x10(r3)
  b         .loc_0xB8

.loc_0x98:
  mr        r3, r31
  fmr       f1, f31
  lwz       r12, 0x0(r31)
  mr        r4, r30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x4(r31)

.loc_0xB8:
  cmplwi    r31, 0
  bne+      .loc_0x98

.loc_0xC0:
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801331B4
 * Size:	000070
 */
void __dt__Q214EffectAnimator9LengthObjFv(void)
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
  lis       r4, 0x804B
  subi      r0, r4, 0x250
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x214
  stw       r0, 0x0(r30)
  bl        0x2DE394

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x10F150

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
 * Address:	80133224
 * Size:	000118
 */
void update__Q214EffectAnimator9LengthObjFPQ23efx13TKechappyTestf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r5, 0
  lwz       r0, 0x1C(r3)
  mr        r31, r4
  fmr       f31, f1
  mr        r4, r5
  li        r30, -0x1
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x70

.loc_0x48:
  lwz       r3, 0x18(r29)
  lfsx      f0, r3, r4
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x64
  mr        r30, r5
  b         .loc_0x70

.loc_0x64:
  addi      r4, r4, 0x8
  addi      r5, r5, 0x1
  bdnz+     .loc_0x48

.loc_0x70:
  cmpwi     r30, -0x1
  bne-      .loc_0x94
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A84
  li        r4, 0x10B
  subi      r5, r5, 0x3A70
  crclr     6, 0x6
  bl        -0x108C74

.loc_0x94:
  cmpwi     r30, 0
  bne-      .loc_0xB0
  lwz       r3, 0x18(r29)
  rlwinm    r0,r30,3,0,28
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  b         .loc_0xEC

.loc_0xB0:
  subi      r0, r30, 0x1
  lwz       r5, 0x18(r29)
  rlwinm    r3,r0,3,0,28
  rlwinm    r0,r30,3,0,28
  add       r4, r5, r3
  add       r3, r5, r0
  lfs       f1, 0x0(r4)
  lfs       f0, 0x0(r3)
  fsubs     f2, f31, f1
  lfs       f3, 0x4(r4)
  fsubs     f1, f0, f1
  lfs       f0, 0x4(r3)
  fsubs     f0, f0, f3
  fdivs     f1, f2, f1
  fmadds    f1, f1, f0, f3

.loc_0xEC:
  mr        r3, r31
  bl        0x28086C
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8013333C
 * Size:	000070
 */
void __dt__Q214EffectAnimator10BristleObjFv(void)
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
  lis       r4, 0x804B
  subi      r0, r4, 0x23C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x214
  stw       r0, 0x0(r30)
  bl        0x2DE20C

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x10F2D8

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
 * Address:	801333AC
 * Size:	000118
 */
void update__Q214EffectAnimator10BristleObjFPQ23efx13TKechappyTestf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r5, 0
  lwz       r0, 0x1C(r3)
  mr        r31, r4
  fmr       f31, f1
  mr        r4, r5
  li        r30, -0x1
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x70

.loc_0x48:
  lwz       r3, 0x18(r29)
  lfsx      f0, r3, r4
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x64
  mr        r30, r5
  b         .loc_0x70

.loc_0x64:
  addi      r4, r4, 0x8
  addi      r5, r5, 0x1
  bdnz+     .loc_0x48

.loc_0x70:
  cmpwi     r30, -0x1
  bne-      .loc_0x94
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A84
  li        r4, 0x10B
  subi      r5, r5, 0x3A70
  crclr     6, 0x6
  bl        -0x108DFC

.loc_0x94:
  cmpwi     r30, 0
  bne-      .loc_0xB0
  lwz       r3, 0x18(r29)
  rlwinm    r0,r30,3,0,28
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  b         .loc_0xEC

.loc_0xB0:
  subi      r0, r30, 0x1
  lwz       r5, 0x18(r29)
  rlwinm    r3,r0,3,0,28
  rlwinm    r0,r30,3,0,28
  add       r4, r5, r3
  add       r3, r5, r0
  lfs       f1, 0x0(r4)
  lfs       f0, 0x0(r3)
  fsubs     f2, f31, f1
  lfs       f3, 0x4(r4)
  fsubs     f1, f0, f1
  lfs       f0, 0x4(r3)
  fsubs     f0, f0, f3
  fdivs     f1, f2, f1
  fmadds    f1, f1, f0, f3

.loc_0xEC:
  mr        r3, r31
  bl        0x280708
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801334C4
 * Size:	000070
 */
void __dt__Q214EffectAnimator12VibrationObjFv(void)
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
  lis       r4, 0x804B
  subi      r0, r4, 0x228
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x214
  stw       r0, 0x0(r30)
  bl        0x2DE084

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x10F460

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
 * Address:	80133534
 * Size:	000118
 */
void update__Q214EffectAnimator12VibrationObjFPQ23efx13TKechappyTestf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r5, 0
  lwz       r0, 0x1C(r3)
  mr        r31, r4
  fmr       f31, f1
  mr        r4, r5
  li        r30, -0x1
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x70

.loc_0x48:
  lwz       r3, 0x18(r29)
  lfsx      f0, r3, r4
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x64
  mr        r30, r5
  b         .loc_0x70

.loc_0x64:
  addi      r4, r4, 0x8
  addi      r5, r5, 0x1
  bdnz+     .loc_0x48

.loc_0x70:
  cmpwi     r30, -0x1
  bne-      .loc_0x94
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x3A84
  li        r4, 0x10B
  subi      r5, r5, 0x3A70
  crclr     6, 0x6
  bl        -0x108F84

.loc_0x94:
  cmpwi     r30, 0
  bne-      .loc_0xB0
  lwz       r3, 0x18(r29)
  rlwinm    r0,r30,3,0,28
  add       r3, r3, r0
  lfs       f1, 0x4(r3)
  b         .loc_0xEC

.loc_0xB0:
  subi      r0, r30, 0x1
  lwz       r5, 0x18(r29)
  rlwinm    r3,r0,3,0,28
  rlwinm    r0,r30,3,0,28
  add       r4, r5, r3
  add       r3, r5, r0
  lfs       f1, 0x0(r4)
  lfs       f0, 0x0(r3)
  fsubs     f2, f31, f1
  lfs       f3, 0x4(r4)
  fsubs     f1, f0, f1
  lfs       f0, 0x4(r3)
  fsubs     f0, f0, f3
  fdivs     f1, f2, f1
  fmadds    f1, f1, f0, f3

.loc_0xEC:
  mr        r3, r31
  bl        0x2805A4
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}