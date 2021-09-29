

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
 * Address:	802D3F84
 * Size:	000140
 */
void __ct__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  beq-      .loc_0x40
  addi      r0, r31, 0x310
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x310(r31)
  stw       r0, 0x314(r31)
  stw       r0, 0x318(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x1D2C2C
  lis       r3, 0x804D
  addi      r0, r31, 0x310
  addi      r5, r3, 0x2C60
  addi      r3, r31, 0x2E4
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x2FC
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x19BABC
  li        r3, 0x2C
  bl        -0x2B0168
  mr.       r30, r3
  beq-      .loc_0xD4
  bl        -0x1AC6A4
  lis       r3, 0x804D
  lis       r4, 0x804B
  addi      r0, r3, 0x29C0
  lis       r3, 0x804F
  stw       r0, 0x0(r30)
  subi      r4, r4, 0x4678
  subi      r3, r3, 0x4200
  li        r0, 0
  stw       r4, 0x10(r30)
  stw       r3, 0x10(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x1C(r30)
  stw       r0, 0x14(r30)
  stb       r0, 0x28(r30)
  stw       r0, 0x20(r30)

.loc_0xD4:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x2B01BC
  mr.       r4, r3
  beq-      .loc_0x108
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x299C
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x108:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x26E4
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
 * Address:	802D40C4
 * Size:	000004
 */
void setInitialSetting__Q34Game9OniKurage3ObjFPQ24Game21EnemyInitialParamBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D40C8
 * Size:	0000B0
 */
void onInit__Q34Game9OniKurage3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1D2684
  lwz       r3, 0x1E0(r31)
  li        r4, -0x1
  lfs       f1, -0x19C0(r2)
  li        r0, 0
  rlwinm    r3,r3,0,25,23
  lfs       f0, -0x19BC(r2)
  stw       r3, 0x1E0(r31)
  mr        r3, r31
  lwz       r5, 0x1E0(r31)
  ori       r5, r5, 0x4
  stw       r5, 0x1E0(r31)
  lwz       r5, 0x1E0(r31)
  rlwinm    r5,r5,0,24,22
  stw       r5, 0x1E0(r31)
  stw       r4, 0x2C0(r31)
  stfs      f1, 0x2C4(r31)
  stfs      f1, 0x2CC(r31)
  stfs      f0, 0x2C8(r31)
  stw       r0, 0x2E0(r31)
  stb       r0, 0x2DC(r31)
  stw       r0, 0x2F0(r31)
  stw       r0, 0x2EC(r31)
  bl        0x2990
  mr        r3, r31
  bl        0x2A14
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4178
 * Size:	000054
 */
void onKill__Q34Game9OniKurage3ObjFPQ24Game15CreatureKillArg(void)
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
  bl        0x2A48
  mr        r3, r30
  bl        0x2AE0
  mr        r3, r30
  bl        0x2BA4
  mr        r3, r30
  mr        r4, r31
  bl        -0x1D22C8
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
 * Address:	802D41CC
 * Size:	000108
 */
void doUpdate__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x2E4
  bl        -0x19BBD0
  mr        r3, r31
  bl        0xE34
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0xF4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x510B
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xAC:
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0xF4
  lfs       f1, -0x19C0(r2)
  lfs       f0, 0x210(r31)
  fcmpu     cr0, f1, f0
  bne-      .loc_0xF4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x590C
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xF4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D42D4
 * Size:	000034
 */
void doUpdateCommon__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1D13D4
  mr        r3, r31
  bl        0x2368
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4308
 * Size:	000004
 */
void doDirectDraw__Q34Game9OniKurage3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D430C
 * Size:	000020
 */
void doDebugDraw__Q34Game9OniKurage3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1CE4AC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D432C
 * Size:	00004C
 */
void setFSM__Q34Game9OniKurage3ObjFPQ34Game9OniKurage3FSM(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0x2BC(r3)
  mr        r4, r31
  lwz       r3, 0x2BC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x2B4(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4378
 * Size:	00010C
 */
void getShadowParam__Q34Game9OniKurage3ObjFRQ24Game11ShadowParam(void)
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
  mr        r30, r3
  mr        r31, r4
  lwz       r3, 0x174(r3)
  subi      r4, r2, 0x19B8
  bl        0x16AC40
  bl        0x1554F8
  lfs       f2, 0x2C(r3)
  mr        r4, r31
  lfs       f1, 0x1C(r3)
  lfs       f0, 0xC(r3)
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)
  lwz       r3, -0x6CF8(r13)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  fmr       f31, f1
  lwz       r12, 0x0(r30)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x94
  lfs       f0, -0x19B0(r2)
  fadds     f0, f0, f31
  stfs      f0, 0x4(r31)
  b         .loc_0xA0

.loc_0x94:
  lfs       f0, -0x19AC(r2)
  fadds     f0, f0, f31
  stfs      f0, 0x4(r31)

.loc_0xA0:
  lfs       f1, -0x19C0(r2)
  mr        r3, r30
  lfs       f0, -0x19A8(r2)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xDC
  lfs       f0, -0x19A4(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0xE4

.loc_0xDC:
  lfs       f0, -0x19A0(r2)
  stfs      f0, 0x18(r31)

.loc_0xE4:
  lfs       f0, -0x19B0(r2)
  stfs      f0, 0x1C(r31)
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
 * Address:	802D4484
 * Size:	000038
 */
void damageCallBack__Q34Game9OniKurage3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x24
  lfs       f2, -0x19A8(r2)
  bl        -0x1CE470
  li        r3, 0x1
  b         .loc_0x28

.loc_0x24:
  li        r3, 0

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D44BC
 * Size:	000044
 */
void doStartStoneState__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1D15DC
  mr        r3, r31
  bl        0x2704
  mr        r3, r31
  bl        0x279C
  mr        r3, r31
  bl        0x2860
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4500
 * Size:	0000B8
 */
void doFinishStoneState__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1D160C
  mr        r3, r31
  bl        0x2638
  mr        r3, r31
  bl        -0x1CD130
  cmpwi     r3, 0x1
  blt-      .loc_0x38
  cmpwi     r3, 0x6
  ble-      .loc_0x48

.loc_0x38:
  cmpwi     r3, 0x9
  blt-      .loc_0xA4
  cmpwi     r3, 0xA
  bgt-      .loc_0xA4

.loc_0x48:
  lwz       r0, 0x2EC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x60
  lwz       r0, 0x2F0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x84

.loc_0x60:
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0xB
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xA4

.loc_0x84:
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x9
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0xA4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D45B8
 * Size:	000034
 */
void doStartWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CCC34
  mr        r3, r31
  bl        0x2974
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D45EC
 * Size:	000034
 */
void doFinishWaitingBirthTypeDrop__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1CCC38
  mr        r3, r31
  bl        0x288C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4620
 * Size:	000020
 */
void doStartMovie__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x291C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4640
 * Size:	000020
 */
void doEndMovie__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2848
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4660
 * Size:	0000C8
 */
void initMouthSlots__Q34Game9OniKurage3ObjFv(void)
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
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r4, 0x2
  addi      r3, r28, 0x2E4
  bl        -0x19C138
  lwz       r5, 0x174(r28)
  addi      r3, r28, 0x2E4
  li        r4, 0
  subi      r6, r2, 0x199C
  bl        -0x19C014
  lwz       r5, 0x174(r28)
  addi      r3, r28, 0x2E4
  li        r4, 0x1
  subi      r6, r2, 0x199C
  bl        -0x19C028
  lfs       f31, -0x19A8(r2)
  li        r29, 0
  subi      r30, r2, 0x19D0
  li        r31, 0x1
  b         .loc_0x94

.loc_0x70:
  mr        r4, r29
  addi      r3, r28, 0x2E4
  bl        -0x19BF60
  stb       r31, 0x6C(r3)
  addi      r29, r29, 0x1
  lfs       f0, 0x0(r30)
  addi      r30, r30, 0x4
  stfs      f31, 0x1C(r3)
  stfs      f0, 0x20(r3)

.loc_0x94:
  lwz       r0, 0x2E4(r28)
  cmpw      r29, r0
  blt+      .loc_0x70
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4728
 * Size:	000098
 */
void setHeightVelocity__Q34Game9OniKurage3ObjFff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stfd      f30, 0x10(r1)
  psq_st    f30,0x18(r1),0,0
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, -0x6CF8(r13)
  fmr       f30, f1
  addi      r4, r31, 0x18C
  lwz       r12, 0x4(r3)
  fmr       f31, f2
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x190(r31)
  lfs       f2, 0x81C(r3)
  lfs       f3, 0x844(r3)
  fadds     f2, f30, f2
  fadds     f3, f31, f3
  fadds     f2, f1, f2
  fsubs     f0, f2, f0
  fmuls     f0, f3, f0
  stfs      f0, 0x1CC(r31)
  lfs       f0, 0x190(r31)
  fsubs     f1, f0, f1
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  psq_l     f30,0x18(r1),0,0
  lfd       f30, 0x10(r1)
  lwz       r0, 0x34(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802D47C0
 * Size:	0001D8
 */
void setRandTarget__Q34Game9OniKurage3ObjFv(void)
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
  stfd      f27, 0x50(r1)
  psq_st    f27,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lwz       r3, 0xC0(r3)
  lfs       f1, 0x35C(r3)
  lfs       f0, 0x384(r3)
  fsubs     f27, f1, f0
  bl        -0x20B26C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x1C(r1)
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  addi      r3, r1, 0x8
  stw       r0, 0x18(r1)
  lfd       f1, -0x1980(r2)
  lfd       f0, 0x18(r1)
  lwz       r12, 0x0(r31)
  fsubs     f2, f0, f1
  lfs       f1, -0x1994(r2)
  lfs       f0, 0x384(r5)
  lwz       r12, 0x8(r12)
  fmuls     f2, f27, f2
  fdivs     f1, f2, f1
  fadds     f28, f0, f1
  mtctr     r12
  bctrl     
  lfs       f31, 0x198(r31)
  lis       r3, 0x8051
  lfs       f1, 0x8(r1)
  subi      r3, r3, 0x2E20
  lfs       f29, 0x1A0(r31)
  lfs       f0, 0x10(r1)
  fsubs     f1, f1, f31
  lfs       f30, 0x19C(r31)
  fsubs     f2, f0, f29
  bl        -0x29F778
  fmr       f27, f1
  bl        -0x20B2E8
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x24(r1)
  lfd       f2, -0x1980(r2)
  stw       r0, 0x20(r1)
  lfs       f3, -0x1990(r2)
  lfd       f0, 0x20(r1)
  lfs       f1, -0x1994(r2)
  fsubs     f4, f0, f2
  lfs       f2, -0x198C(r2)
  lfs       f0, -0x19C0(r2)
  fmuls     f3, f3, f4
  fdivs     f1, f3, f1
  fadds     f1, f27, f1
  fadds     f3, f2, f1
  fmr       f1, f3
  fcmpo     cr0, f3, f0
  bge-      .loc_0x118
  fneg      f1, f3

.loc_0x118:
  lfs       f2, -0x1988(r2)
  lis       r3, 0x8050
  lfs       f0, -0x19C0(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f1, f2
  fcmpo     cr0, f3, f0
  fctiwz    f0, f1
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmadds    f1, f28, f0, f29
  bge-      .loc_0x174
  lfs       f0, -0x1984(r2)
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x18C

.loc_0x174:
  fmuls     f0, f3, f2
  fctiwz    f0, f0
  stfd      f0, 0x38(r1)
  lwz       r0, 0x3C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x18C:
  fmadds    f0, f28, f0, f31
  stfs      f0, 0x2D0(r31)
  stfs      f30, 0x2D4(r31)
  stfs      f1, 0x2D8(r31)
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  psq_l     f27,0x58(r1),0,0
  lfd       f27, 0x50(r1)
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4998
 * Size:	0000A4
 */
void getMovePitchOffset__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lfs       f3, -0x1990(r2)
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x2C8(r3)
  lfs       f2, 0x54(r4)
  lfs       f0, -0x1978(r2)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0x2C8(r3)
  lfs       f1, 0x2C8(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x34
  fsubs     f0, f1, f0
  stfs      f0, 0x2C8(r3)

.loc_0x34:
  lfs       f2, 0x2C8(r3)
  lfs       f0, -0x19C0(r2)
  lfs       f1, -0x1974(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x74
  lfs       f0, -0x1984(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0
  fneg      f0, f0
  b         .loc_0x98

.loc_0x74:
  lfs       f0, -0x1988(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r3, r0

.loc_0x98:
  fmuls     f1, f1, f0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4A3C
 * Size:	0001A8
 */
void getAttackPitchOffset__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r4, 0x8049
  lis       r5, 0x8049
  stw       r0, 0x64(r1)
  subi      r10, r4, 0x3F24
  stmw      r27, 0x4C(r1)
  lwzu      r27, -0x3F40(r5)
  lwz       r9, 0x0(r10)
  lwz       r28, 0x4(r5)
  lwz       r29, 0x8(r5)
  lwz       r30, 0xC(r5)
  lwz       r31, 0x10(r5)
  lwz       r12, 0x14(r5)
  lwz       r11, 0x18(r5)
  lwz       r8, 0x4(r10)
  lwz       r7, 0x8(r10)
  lwz       r6, 0xC(r10)
  lwz       r5, 0x10(r10)
  lwz       r4, 0x14(r10)
  lwz       r0, 0x18(r10)
  stw       r27, 0x24(r1)
  stw       r28, 0x28(r1)
  stw       r29, 0x2C(r1)
  stw       r30, 0x30(r1)
  stw       r31, 0x34(r1)
  stw       r12, 0x38(r1)
  stw       r11, 0x3C(r1)
  stw       r9, 0x8(r1)
  stw       r8, 0xC(r1)
  stw       r7, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r5, 0x18(r1)
  stw       r4, 0x1C(r1)
  stw       r0, 0x20(r1)
  bl        -0x1CF85C
  addi      r5, r1, 0x24
  addi      r6, r1, 0x8
  li        r0, 0x2
  lfs       f0, -0x19C0(r2)
  mr        r4, r5
  mr        r3, r6
  lfs       f3, -0x19A8(r2)
  li        r7, 0
  mtctr     r0

.loc_0xB4:
  lfs       f2, 0x0(r5)
  addi      r0, r7, 0x1
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0xF8
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0xF8
  fsubs     f5, f1, f2
  lfs       f0, 0x0(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0xF8:
  lfs       f2, 0x4(r5)
  addi      r0, r7, 0x2
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x13C
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0x13C
  fsubs     f5, f1, f2
  lfs       f0, 0x4(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0x13C:
  lfs       f2, 0x8(r5)
  addi      r0, r7, 0x3
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x180
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0x180
  fsubs     f5, f1, f2
  lfs       f0, 0x8(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0x180:
  addi      r5, r5, 0xC
  addi      r6, r6, 0xC
  addi      r7, r7, 0x3
  bdnz+     .loc_0xB4
  lmw       r27, 0x4C(r1)
  fmr       f1, f0
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4BE4
 * Size:	0001A8
 */
void getFlickPitchOffset__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r4, 0x8049
  lis       r5, 0x8049
  stw       r0, 0x64(r1)
  subi      r10, r4, 0x3EEC
  stmw      r27, 0x4C(r1)
  lwzu      r27, -0x3F08(r5)
  lwz       r9, 0x0(r10)
  lwz       r28, 0x4(r5)
  lwz       r29, 0x8(r5)
  lwz       r30, 0xC(r5)
  lwz       r31, 0x10(r5)
  lwz       r12, 0x14(r5)
  lwz       r11, 0x18(r5)
  lwz       r8, 0x4(r10)
  lwz       r7, 0x8(r10)
  lwz       r6, 0xC(r10)
  lwz       r5, 0x10(r10)
  lwz       r4, 0x14(r10)
  lwz       r0, 0x18(r10)
  stw       r27, 0x24(r1)
  stw       r28, 0x28(r1)
  stw       r29, 0x2C(r1)
  stw       r30, 0x30(r1)
  stw       r31, 0x34(r1)
  stw       r12, 0x38(r1)
  stw       r11, 0x3C(r1)
  stw       r9, 0x8(r1)
  stw       r8, 0xC(r1)
  stw       r7, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r5, 0x18(r1)
  stw       r4, 0x1C(r1)
  stw       r0, 0x20(r1)
  bl        -0x1CFA04
  addi      r5, r1, 0x24
  addi      r6, r1, 0x8
  li        r0, 0x2
  lfs       f0, -0x19C0(r2)
  mr        r4, r5
  mr        r3, r6
  lfs       f3, -0x19A8(r2)
  li        r7, 0
  mtctr     r0

.loc_0xB4:
  lfs       f2, 0x0(r5)
  addi      r0, r7, 0x1
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0xF8
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0xF8
  fsubs     f5, f1, f2
  lfs       f0, 0x0(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0xF8:
  lfs       f2, 0x4(r5)
  addi      r0, r7, 0x2
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x13C
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0x13C
  fsubs     f5, f1, f2
  lfs       f0, 0x4(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0x13C:
  lfs       f2, 0x8(r5)
  addi      r0, r7, 0x3
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x180
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0x180
  fsubs     f5, f1, f2
  lfs       f0, 0x8(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0x180:
  addi      r5, r5, 0xC
  addi      r6, r6, 0xC
  addi      r7, r7, 0x3
  bdnz+     .loc_0xB4
  lmw       r27, 0x4C(r1)
  fmr       f1, f0
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4D8C
 * Size:	000144
 */
void getTakeOffPitchOffset__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x8049
  lis       r5, 0x8049
  stw       r0, 0x44(r1)
  subi      r8, r4, 0x3EBC
  stw       r31, 0x3C(r1)
  lwzu      r31, -0x3ED0(r5)
  lwz       r7, 0x0(r8)
  lwz       r12, 0x4(r5)
  lwz       r11, 0x8(r5)
  lwz       r10, 0xC(r5)
  lwz       r9, 0x10(r5)
  lwz       r6, 0x4(r8)
  lwz       r5, 0x8(r8)
  lwz       r4, 0xC(r8)
  lwz       r0, 0x10(r8)
  stw       r31, 0x1C(r1)
  stw       r12, 0x20(r1)
  stw       r11, 0x24(r1)
  stw       r10, 0x28(r1)
  stw       r9, 0x2C(r1)
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r4, 0x14(r1)
  stw       r0, 0x18(r1)
  bl        -0x1CFB8C
  addi      r5, r1, 0x1C
  addi      r6, r1, 0x8
  li        r0, 0x2
  lfs       f0, -0x19C0(r2)
  mr        r4, r5
  mr        r3, r6
  lfs       f3, -0x19A8(r2)
  li        r7, 0
  mtctr     r0

.loc_0x94:
  lfs       f2, 0x0(r5)
  addi      r0, r7, 0x1
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0xD8
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0xD8
  fsubs     f5, f1, f2
  lfs       f0, 0x0(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0xD8:
  lfs       f2, 0x4(r5)
  addi      r0, r7, 0x2
  fcmpo     cr0, f1, f2
  cror      2, 0x1, 0x2
  bne-      .loc_0x11C
  rlwinm    r0,r0,2,0,29
  lfsx      f4, r4, r0
  fcmpo     cr0, f1, f4
  bge-      .loc_0x11C
  fsubs     f5, f1, f2
  lfs       f0, 0x4(r6)
  fsubs     f2, f4, f2
  lfsx      f4, r3, r0
  fdivs     f5, f5, f2
  fsubs     f2, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f5, f4, f0

.loc_0x11C:
  addi      r5, r5, 0x8
  addi      r6, r6, 0x8
  addi      r7, r7, 0x2
  bdnz+     .loc_0x94
  lwz       r0, 0x44(r1)
  fmr       f1, f0
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802D4ED0
 * Size:	000168
 */
void getFallPitchOffset__Q34Game9OniKurage3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  lis       r4, 0x8049
  lis       r3, 0x8049
  lfs       f0, -0x1970(r2)
  stmw      r21, 0x54(r1)
  subi      r6, r4, 0x3EA8
  subi      r5, r3, 0x3E88
  addi      r23, r1, 0x28
  addi      r22, r1, 0x8
  fmuls     f6, f0, f1
  li        r0, 0x2
  mr        r4, r23
  mr        r3, r22
  li        r21, 0
  lfs       f1, -0x19C0(r2)
  lfs       f2, -0x19A8(r2)
  lwz       r24, 0x0(r6)
  lwz       r25, 0x4(r6)
  lwz       r26, 0x8(r6)
  lwz       r27, 0xC(r6)
  lwz       r28, 0x10(r6)
  lwz       r29, 0x14(r6)
  lwz       r30, 0x18(r6)
  lwz       r31, 0x1C(r6)
  lwz       r12, 0x0(r5)
  lwz       r11, 0x4(r5)
  lwz       r10, 0x8(r5)
  lwz       r9, 0xC(r5)
  lwz       r8, 0x10(r5)
  lwz       r7, 0x14(r5)
  lwz       r6, 0x18(r5)
  lwz       r5, 0x1C(r5)
  stw       r24, 0x28(r1)
  stw       r25, 0x2C(r1)
  stw       r26, 0x30(r1)
  stw       r27, 0x34(r1)
  stw       r28, 0x38(r1)
  stw       r29, 0x3C(r1)
  stw       r30, 0x40(r1)
  stw       r31, 0x44(r1)
  stw       r12, 0x8(r1)
  stw       r11, 0xC(r1)
  stw       r10, 0x10(r1)
  stw       r9, 0x14(r1)
  stw       r8, 0x18(r1)
  stw       r7, 0x1C(r1)
  stw       r6, 0x20(r1)
  stw       r5, 0x24(r1)
  mtctr     r0

.loc_0xC4:
  lfs       f3, 0x0(r23)
  addi      r0, r21, 0x1
  fcmpo     cr0, f6, f3
  cror      2, 0x1, 0x2
  bne-      .loc_0x108
  rlwinm    r0,r0,2,0,29
  lfsx      f5, r4, r0
  fcmpo     cr0, f6, f5
  bge-      .loc_0x108
  fsubs     f4, f6, f3
  lfs       f0, 0x0(r22)
  fsubs     f1, f5, f3
  lfsx      f3, r3, r0
  fdivs     f4, f4, f1
  fsubs     f1, f2, f4
  fmuls     f0, f1, f0
  fmadds    f1, f4, f3, f0

.loc_0x108:
  lfs       f3, 0x4(r23)
  addi      r0, r21, 0x2
  fcmpo     cr0, f6, f3
  cror      2, 0x1, 0x2
  bne-      .loc_0x14C
  rlwinm    r0,r0,2,0,29
  lfsx      f5, r4, r0
  fcmpo     cr0, f6, f5
  bge-      .loc_0x14C
  fsubs     f4, f6, f3
  lfs       f0, 0x4(r22)
  fsubs     f1, f5, f3
  lfsx      f3, r3, r0
  fdivs     f4, f4, f1
  fsubs     f1, f2, f4
  fmuls     f0, f1, f0
  fmadds    f1, f4, f3, f0

.loc_0x14C:
  addi      r23, r23, 0x8
  addi      r22, r22, 0x8
  addi      r21, r21, 0x2
  bdnz+     .loc_0xC4
  lmw       r21, 0x54(r1)
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	802D5038
 * Size:	000030
 */
void updateFallTimer__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x1F4(r3)
  cmpwi     r0, 0
  beq-      .loc_0x24
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x2CC(r3)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x2CC(r3)
  blr       

.loc_0x24:
  lfs       f0, -0x19C0(r2)
  stfs      f0, 0x2CC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D5068
 * Size:	0000A4
 */
void getFlyingNextState__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x19C0(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f1, 0x200(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x30
  li        r3, 0
  b         .loc_0x90

.loc_0x30:
  li        r4, 0x3
  bl        -0x1BFEE8
  cmpwi     r3, 0
  ble-      .loc_0x48
  li        r3, 0x5
  b         .loc_0x90

.loc_0x48:
  lwz       r4, 0xC0(r31)
  lfs       f1, 0x2CC(r31)
  lfs       f0, 0x8E4(r4)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0x6C
  lwz       r3, 0x1F4(r31)
  lwz       r0, 0x90C(r4)
  cmpw      r3, r0
  blt-      .loc_0x8C

.loc_0x6C:
  lwz       r3, 0x1F4(r31)
  lwz       r0, 0x90C(r4)
  cmpw      r3, r0
  bge-      .loc_0x84
  li        r3, 0xA
  b         .loc_0x90

.loc_0x84:
  li        r3, 0x5
  b         .loc_0x90

.loc_0x8C:
  li        r3, -0x1

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
 * Address:	802D510C
 * Size:	000340
 */
void getSearchedTarget__Q34Game9OniKurage3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  stw       r0, 0x144(r1)
  stfd      f31, 0x130(r1)
  psq_st    f31,0x138(r1),0,0
  stfd      f30, 0x120(r1)
  psq_st    f30,0x128(r1),0,0
  stfd      f29, 0x110(r1)
  psq_st    f29,0x118(r1),0,0
  stfd      f28, 0x100(r1)
  psq_st    f28,0x108(r1),0,0
  stfd      f27, 0xF0(r1)
  psq_st    f27,0xF8(r1),0,0
  stfd      f26, 0xE0(r1)
  psq_st    f26,0xE8(r1),0,0
  stfd      f25, 0xD0(r1)
  psq_st    f25,0xD8(r1),0,0
  stw       r31, 0xCC(r1)
  stw       r30, 0xC8(r1)
  stw       r29, 0xC4(r1)
  stw       r28, 0xC0(r1)
  mr        r28, r3
  li        r31, 0
  lfs       f2, 0x194(r3)
  lfs       f0, 0x1A0(r3)
  lwz       r5, 0xC0(r3)
  fsubs     f3, f2, f0
  lfs       f5, 0x18C(r3)
  lfs       f2, 0x198(r3)
  lfs       f0, 0x35C(r5)
  fsubs     f4, f5, f2
  fmuls     f2, f3, f3
  fmuls     f0, f0, f0
  fmadds    f2, f4, f4, f2
  fcmpo     cr0, f2, f0
  bge-      .loc_0x2E4
  lfs       f30, 0x190(r28)
  addi      r3, r1, 0x54
  lfs       f6, 0x3D4(r5)
  addi      r4, r1, 0x44
  lfs       f0, 0x564(r5)
  fsubs     f4, f30, f1
  lfs       f1, 0x424(r5)
  fmuls     f27, f6, f6
  lfs       f2, -0x196C(r2)
  fmuls     f26, f0, f0
  stfs      f5, 0x44(r1)
  fmuls     f1, f2, f1
  lfs       f3, -0x19A0(r2)
  lfs       f0, 0x190(r28)
  lfs       f2, -0x1990(r2)
  fsubs     f29, f4, f3
  stfs      f0, 0x48(r1)
  fmuls     f28, f2, f1
  lfs       f0, 0x194(r28)
  stfs      f0, 0x4C(r1)
  stfs      f6, 0x50(r1)
  bl        -0xA6E50
  li        r0, 0x1
  addi      r3, r1, 0x74
  stb       r0, 0x70(r1)
  addi      r4, r1, 0x54
  bl        -0xA6E24
  addi      r3, r1, 0x74
  bl        -0xA6DB0
  b         .loc_0x2D4

.loc_0x108:
  addi      r3, r1, 0x74
  bl        -0xA6CD4
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2CC
  lwz       r0, 0xF4(r30)
  cmplw     r0, r28
  beq-      .loc_0x2CC
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  mr        r29, r3
  bne-      .loc_0x194
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x194
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x194
  li        r29, 0x1

.loc_0x194:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x2CC
  mr        r4, r30
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x3C(r1)
  lfs       f2, 0x38(r1)
  fcmpo     cr0, f0, f29
  lfs       f3, 0x40(r1)
  ble-      .loc_0x2CC
  fcmpo     cr0, f0, f30
  bge-      .loc_0x2CC
  lfs       f0, 0x194(r28)
  lfs       f1, 0x18C(r28)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f31, f1, f1, f0
  fcmpo     cr0, f31, f26
  bge-      .loc_0x1F8
  mr        r3, r30
  b         .loc_0x2E8

.loc_0x1F8:
  fcmpo     cr0, f31, f27
  bge-      .loc_0x2CC
  mr        r4, r30
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r28
  lfs       f2, 0x20(r1)
  lwz       r12, 0x0(r28)
  addi      r3, r1, 0x2C
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x2C(r1)
  lis       r3, 0x8051
  lfs       f3, 0x34(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x8(r1)
  lfs       f0, 0x10(r1)
  lfs       f4, 0x30(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x14(r1)
  stfs      f4, 0x18(r1)
  stfs      f3, 0x1C(r1)
  bl        -0x2A027C
  bl        0x13C848
  lwz       r12, 0x0(r28)
  fmr       f25, f1
  mr        r3, r28
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f25
  bl        0x13C850
  lfs       f0, -0x19C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2B4
  b         .loc_0x2B8

.loc_0x2B4:
  fneg      f1, f1

.loc_0x2B8:
  fcmpo     cr0, f1, f28
  cror      2, 0, 0x2
  bne-      .loc_0x2CC
  mr        r31, r30
  fmr       f27, f31

.loc_0x2CC:
  addi      r3, r1, 0x74
  bl        -0xA6EDC

.loc_0x2D4:
  addi      r3, r1, 0x74
  bl        -0xA6EB0
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x108

.loc_0x2E4:
  mr        r3, r31

.loc_0x2E8:
  psq_l     f31,0x138(r1),0,0
  lfd       f31, 0x130(r1)
  psq_l     f30,0x128(r1),0,0
  lfd       f30, 0x120(r1)
  psq_l     f29,0x118(r1),0,0
  lfd       f29, 0x110(r1)
  psq_l     f28,0x108(r1),0,0
  lfd       f28, 0x100(r1)
  psq_l     f27,0xF8(r1),0,0
  lfd       f27, 0xF0(r1)
  psq_l     f26,0xE8(r1),0,0
  lfd       f26, 0xE0(r1)
  psq_l     f25,0xD8(r1),0,0
  lfd       f25, 0xD0(r1)
  lwz       r31, 0xCC(r1)
  lwz       r30, 0xC8(r1)
  lwz       r29, 0xC4(r1)
  lwz       r0, 0x144(r1)
  lwz       r28, 0xC0(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	802D544C
 * Size:	000238
 */
void isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature(void)
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
  stw       r31, 0xAC(r1)
  stw       r30, 0xA8(r1)
  stw       r29, 0xA4(r1)
  mr        r29, r3
  lfs       f0, -0x19A0(r2)
  lfs       f31, 0x190(r3)
  cmplwi    r4, 0
  lwz       r3, 0xC0(r3)
  fsubs     f1, f31, f1
  lfs       f2, 0x564(r3)
  fsubs     f29, f1, f0
  fmuls     f30, f2, f2
  beq-      .loc_0xB0
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x14
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x18(r1)
  lfs       f2, 0x14(r1)
  fcmpo     cr0, f0, f29
  lfs       f3, 0x1C(r1)
  ble-      .loc_0x200
  fcmpo     cr0, f0, f31
  bge-      .loc_0x200
  lfs       f0, 0x194(r29)
  lfs       f1, 0x18C(r29)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f30
  bge-      .loc_0x200
  li        r3, 0x1
  b         .loc_0x204

.loc_0xB0:
  lfs       f0, 0x18C(r29)
  addi      r3, r1, 0x30
  addi      r4, r1, 0x20
  stfs      f0, 0x20(r1)
  lfs       f0, 0x190(r29)
  stfs      f0, 0x24(r1)
  lfs       f0, 0x194(r29)
  stfs      f0, 0x28(r1)
  stfs      f2, 0x2C(r1)
  bl        -0xA7180
  li        r0, 0x1
  addi      r3, r1, 0x50
  stb       r0, 0x4C(r1)
  addi      r4, r1, 0x30
  bl        -0xA7154
  addi      r3, r1, 0x50
  bl        -0xA70E0
  b         .loc_0x1F0

.loc_0xF8:
  addi      r3, r1, 0x50
  bl        -0xA7004
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1E8
  lwz       r0, 0xF4(r31)
  cmplw     r0, r29
  beq-      .loc_0x1E8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  mr        r30, r3
  bne-      .loc_0x184
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  li        r30, 0x1

.loc_0x184:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x1E8
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0xC(r1)
  lfs       f2, 0x8(r1)
  fcmpo     cr0, f0, f29
  lfs       f3, 0x10(r1)
  ble-      .loc_0x1E8
  fcmpo     cr0, f0, f31
  bge-      .loc_0x1E8
  lfs       f0, 0x194(r29)
  lfs       f1, 0x18C(r29)
  fsubs     f0, f0, f3
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f30
  bge-      .loc_0x1E8
  li        r3, 0x1
  b         .loc_0x204

.loc_0x1E8:
  addi      r3, r1, 0x50
  bl        -0xA7138

.loc_0x1F0:
  addi      r3, r1, 0x50
  bl        -0xA710C
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xF8

.loc_0x200:
  li        r3, 0

.loc_0x204:
  psq_l     f31,0xD8(r1),0,0
  lfd       f31, 0xD0(r1)
  psq_l     f30,0xC8(r1),0,0
  lfd       f30, 0xC0(r1)
  psq_l     f29,0xB8(r1),0,0
  lfd       f29, 0xB0(r1)
  lwz       r31, 0xAC(r1)
  lwz       r30, 0xA8(r1)
  lwz       r0, 0xE4(r1)
  lwz       r29, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D5684
 * Size:	000434
 */
void suckPikmin__Q34Game9OniKurage3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0xC0(r1)
  mflr      r0
  stw       r0, 0xC4(r1)
  stfd      f31, 0xB0(r1)
  psq_st    f31,0xB8(r1),0,0
  stfd      f30, 0xA0(r1)
  psq_st    f30,0xA8(r1),0,0
  stfd      f29, 0x90(r1)
  psq_st    f29,0x98(r1),0,0
  stfd      f28, 0x80(r1)
  psq_st    f28,0x88(r1),0,0
  stfd      f27, 0x70(r1)
  psq_st    f27,0x78(r1),0,0
  stfd      f26, 0x60(r1)
  psq_st    f26,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  stw       r28, 0x50(r1)
  mr        r30, r3
  lis       r3, 0x7375
  lfs       f28, 0x190(r30)
  addi      r4, r3, 0x636B
  lwz       r3, 0xC0(r30)
  fsubs     f2, f28, f1
  lfs       f1, -0x19A0(r2)
  lfs       f0, 0x5B4(r3)
  lwz       r3, 0x114(r30)
  fsubs     f27, f2, f1
  fmuls     f26, f0, f0
  bl        -0x19F8B8
  mr        r31, r3
  lis       r3, 0x804B
  li        r0, 0
  lfs       f31, 0x4C(r31)
  lfs       f30, 0x50(r31)
  cmplwi    r0, 0
  lfs       f29, 0x54(r31)
  subi      r4, r3, 0x4364
  lwz       r3, -0x6D0C(r13)
  stw       r4, 0x14(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x18(r1)
  stw       r3, 0x1C(r1)
  bne-      .loc_0xCC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x3A8

.loc_0xCC:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x138

.loc_0xE4:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3A8
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x138:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xE4
  b         .loc_0x3A8

.loc_0x158:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r29, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2EC
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2EC
  lwz       r0, 0xF4(r29)
  cmplw     r0, r30
  beq-      .loc_0x2EC
  lwz       r28, 0xC0(r30)
  lwz       r3, 0x2E0(r30)
  lwz       r0, 0x934(r28)
  cmpw      r3, r0
  bge-      .loc_0x2EC
  bl        -0x20C2A8
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x44(r1)
  lfd       f3, -0x1980(r2)
  stw       r0, 0x40(r1)
  lfs       f2, -0x19A8(r2)
  lfd       f0, 0x40(r1)
  lfs       f1, -0x1994(r2)
  fsubs     f3, f0, f3
  lfs       f0, 0x8BC(r28)
  fmuls     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2EC
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0xC(r1)
  lfs       f2, 0x8(r1)
  fcmpo     cr0, f3, f27
  lfs       f4, 0x10(r1)
  ble-      .loc_0x2EC
  fcmpo     cr0, f3, f28
  bge-      .loc_0x2EC
  lfs       f0, 0x194(r30)
  lfs       f1, 0x18C(r30)
  fsubs     f0, f0, f4
  fsubs     f1, f1, f2
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f26
  bge-      .loc_0x2EC
  lis       r3, 0x804B
  fsubs     f2, f31, f2
  subi      r4, r3, 0x5D00
  fsubs     f1, f30, f3
  fsubs     f0, f29, f4
  lis       r3, 0x804B
  li        r0, 0
  stw       r4, 0x24(r1)
  addi      r5, r3, 0x489C
  mr        r3, r29
  stw       r30, 0x28(r1)
  addi      r4, r1, 0x24
  stw       r5, 0x24(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r31, 0x3C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2EC
  lwz       r4, 0x2E0(r30)
  mr        r3, r30
  addi      r0, r4, 0x1
  stw       r0, 0x2E0(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x282A
  li        r5, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x2EC:
  lwz       r0, 0x20(r1)
  cmplwi    r0, 0
  bne-      .loc_0x318
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x3A8

.loc_0x318:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x38C

.loc_0x338:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3A8
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x38C:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x338

.loc_0x3A8:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x18(r1)
  cmplw     r4, r3
  bne+      .loc_0x158
  lwz       r3, 0xC0(r30)
  lwz       r5, 0x2E0(r30)
  lwz       r0, 0x934(r3)
  srawi     r4, r5, 0x1F
  rlwinm    r3,r0,1,31,31
  subc      r0, r5, r0
  adde      r3, r4, r3
  psq_l     f31,0xB8(r1),0,0
  lfd       f31, 0xB0(r1)
  psq_l     f30,0xA8(r1),0,0
  lfd       f30, 0xA0(r1)
  psq_l     f29,0x98(r1),0,0
  lfd       f29, 0x90(r1)
  psq_l     f28,0x88(r1),0,0
  lfd       f28, 0x80(r1)
  psq_l     f27,0x78(r1),0,0
  lfd       f27, 0x70(r1)
  psq_l     f26,0x68(r1),0,0
  lfd       f26, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  lwz       r0, 0xC4(r1)
  lwz       r28, 0x50(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D5AB8
 * Size:	000570
 */
void suckNavi__Q34Game9OniKurage3ObjFf(void)
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
  stfd      f26, 0x80(r1)
  psq_st    f26,0x88(r1),0,0
  stfd      f25, 0x70(r1)
  psq_st    f25,0x78(r1),0,0
  stfd      f24, 0x60(r1)
  psq_st    f24,0x68(r1),0,0
  stfd      f23, 0x50(r1)
  psq_st    f23,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  stw       r28, 0x40(r1)
  mr        r30, r3
  lis       r3, 0x7375
  lfs       f31, 0x190(r30)
  addi      r4, r3, 0x636B
  lwz       r3, 0xC0(r30)
  fsubs     f2, f31, f1
  lfs       f1, -0x19A0(r2)
  lfs       f0, 0x5B4(r3)
  lwz       r3, 0x114(r30)
  fsubs     f30, f2, f1
  fmuls     f29, f0, f0
  bl        -0x19FD04
  lis       r4, 0x804B
  li        r0, 0
  lfs       f28, 0x4C(r3)
  cmplwi    r0, 0
  lfs       f27, 0x50(r3)
  subi      r4, r4, 0x434C
  lfs       f26, 0x54(r3)
  lwz       r3, -0x6D20(r13)
  stw       r4, 0x14(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x18(r1)
  stw       r3, 0x1C(r1)
  bne-      .loc_0xE0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x4C4

.loc_0xE0:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x14C

.loc_0xF8:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4C4
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x14C:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xF8
  b         .loc_0x4C4

.loc_0x16C:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x408
  lwz       r0, 0xF4(r31)
  cmplw     r0, r30
  beq-      .loc_0x408
  mr        r4, r31
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f24, 0xC(r1)
  lfs       f25, 0x8(r1)
  fcmpo     cr0, f24, f30
  lfs       f23, 0x10(r1)
  ble-      .loc_0x408
  fcmpo     cr0, f24, f31
  bge-      .loc_0x408
  lfs       f0, 0x194(r30)
  lfs       f1, 0x18C(r30)
  fsubs     f0, f0, f23
  fsubs     f1, f1, f25
  fmuls     f0, f0, f0
  fmadds    f0, f1, f1, f0
  fcmpo     cr0, f0, f29
  bge-      .loc_0x408
  li        r28, 0
  b         .loc_0x3FC

.loc_0x204:
  mr        r4, r28
  addi      r3, r30, 0x2E4
  bl        -0x19D54C
  mr        r29, r3
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3F8
  lwz       r3, 0x174(r30)
  subi      r4, r2, 0x199C
  bl        0x169304
  bl        0x153BBC
  lfs       f1, 0x10(r3)
  lfs       f2, 0x20(r3)
  fmuls     f4, f1, f1
  lfs       f0, 0x0(r3)
  fmuls     f7, f2, f2
  lfs       f9, -0x19C0(r2)
  lfs       f3, 0x4(r3)
  fmadds    f6, f0, f0, f4
  lfs       f4, 0x14(r3)
  lfs       f5, 0x24(r3)
  fadds     f10, f7, f6
  lfs       f6, 0x8(r3)
  lfs       f7, 0x18(r3)
  lfs       f8, 0x28(r3)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x280
  ble-      .loc_0x284
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x284

.loc_0x280:
  fmr       f10, f9

.loc_0x284:
  lfs       f9, -0x19C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x2A4
  lfs       f9, -0x19A8(r2)
  fdivs     f9, f9, f10
  fmuls     f0, f0, f9
  fmuls     f1, f1, f9
  fmuls     f2, f2, f9

.loc_0x2A4:
  fmuls     f10, f4, f4
  lfs       f9, -0x19C0(r2)
  fmuls     f11, f5, f5
  fmadds    f10, f3, f3, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x2D0
  ble-      .loc_0x2D4
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x2D4

.loc_0x2D0:
  fmr       f10, f9

.loc_0x2D4:
  lfs       f9, -0x19C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x2F4
  lfs       f9, -0x19A8(r2)
  fdivs     f9, f9, f10
  fmuls     f3, f3, f9
  fmuls     f4, f4, f9
  fmuls     f5, f5, f9

.loc_0x2F4:
  fmuls     f10, f7, f7
  lfs       f9, -0x19C0(r2)
  fmuls     f11, f8, f8
  fmadds    f10, f6, f6, f10
  fadds     f10, f11, f10
  fcmpo     cr0, f10, f9
  ble-      .loc_0x320
  ble-      .loc_0x324
  fsqrte    f9, f10
  fmuls     f10, f9, f10
  b         .loc_0x324

.loc_0x320:
  fmr       f10, f9

.loc_0x324:
  lfs       f9, -0x19C0(r2)
  fcmpo     cr0, f10, f9
  ble-      .loc_0x344
  lfs       f9, -0x19A8(r2)
  fdivs     f9, f9, f10
  fmuls     f6, f6, f9
  fmuls     f7, f7, f9
  fmuls     f8, f8, f9

.loc_0x344:
  fsubs     f11, f24, f27
  lis       r6, 0x804B
  lis       r5, 0x804B
  lis       r4, 0x804B
  lis       r3, 0x804C
  fsubs     f10, f25, f28
  fmuls     f1, f1, f11
  subi      r8, r6, 0x5D00
  fmuls     f4, f4, f11
  addi      r7, r5, 0x4DE0
  fsubs     f12, f23, f26
  addi      r6, r4, 0x4DBC
  fmadds    f9, f0, f10, f1
  lfs       f0, -0x19A8(r2)
  fmuls     f1, f7, f11
  subi      r0, r3, 0x79BC
  fmadds    f3, f3, f10, f4
  li        r5, 0
  fmadds    f4, f2, f12, f9
  mr        r3, r31
  fmadds    f1, f6, f10, f1
  addi      r4, r1, 0x24
  fmadds    f2, f5, f12, f3
  stfs      f4, 0x20(r29)
  fmadds    f1, f8, f12, f1
  stfs      f2, 0x24(r29)
  stfs      f1, 0x28(r29)
  stw       r8, 0x24(r1)
  stw       r7, 0x24(r1)
  stw       r6, 0x24(r1)
  stw       r30, 0x28(r1)
  stfs      f0, 0x2C(r1)
  stw       r29, 0x30(r1)
  stw       r5, 0x34(r1)
  stw       r0, 0x24(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x408
  rlwinm    r3,r28,2,0,29
  addi      r0, r3, 0x2EC
  stwx      r31, r30, r0
  b         .loc_0x408

.loc_0x3F8:
  addi      r28, r28, 0x1

.loc_0x3FC:
  lwz       r0, 0x2E4(r30)
  cmpw      r28, r0
  blt+      .loc_0x204

.loc_0x408:
  lwz       r0, 0x20(r1)
  cmplwi    r0, 0
  bne-      .loc_0x434
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x4C4

.loc_0x434:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x4A8

.loc_0x454:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x20(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x4C4
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x4A8:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x454

.loc_0x4C4:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x18(r1)
  cmplw     r4, r3
  bne+      .loc_0x16C
  lwz       r0, 0x2EC(r30)
  cmplwi    r0, 0
  bne-      .loc_0x4FC
  lwz       r0, 0x2F0(r30)
  cmplwi    r0, 0
  beq-      .loc_0x504

.loc_0x4FC:
  li        r3, 0x1
  b         .loc_0x508

.loc_0x504:
  li        r3, 0

.loc_0x508:
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
  psq_l     f26,0x88(r1),0,0
  lfd       f26, 0x80(r1)
  psq_l     f25,0x78(r1),0,0
  lfd       f25, 0x70(r1)
  psq_l     f24,0x68(r1),0,0
  lfd       f24, 0x60(r1)
  psq_l     f23,0x58(r1),0,0
  lfd       f23, 0x50(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  lwz       r0, 0xE4(r1)
  lwz       r28, 0x40(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6028
 * Size:	00026C
 */
void updateCollPartOffset__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  subi      r31, r2, 0x19D0
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  li        r29, 0
  stw       r28, 0x20(r1)
  mr        r28, r3
  mr        r30, r28
  b         .loc_0x240

.loc_0x30:
  mr        r4, r29
  addi      r3, r28, 0x2E4
  bl        -0x19D8E8
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  beq-      .loc_0x234
  lfs       f5, 0x20(r3)
  lfs       f4, 0x0(r31)
  lfs       f0, -0x19C0(r2)
  fsubs     f1, f5, f4
  fcmpo     cr0, f1, f0
  ble-      .loc_0x64
  b         .loc_0x68

.loc_0x64:
  fneg      f1, f1

.loc_0x68:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0xC4
  lfs       f2, -0x1974(r2)
  lfs       f1, 0x24(r3)
  lfs       f0, -0x19C0(r2)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x90
  b         .loc_0x94

.loc_0x90:
  fneg      f1, f1

.loc_0x94:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0xC4
  lfs       f1, 0x28(r3)
  lfs       f0, -0x19C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB4
  b         .loc_0xB8

.loc_0xB4:
  fneg      f1, f1

.loc_0xB8:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x234

.loc_0xC4:
  lfs       f0, -0x1964(r2)
  lfs       f3, -0x1968(r2)
  fmuls     f2, f0, f4
  lfs       f1, -0x1960(r2)
  lfs       f0, -0x19C0(r2)
  fmadds    f2, f5, f3, f2
  stfs      f2, 0x20(r3)
  lfs       f3, 0x24(r3)
  fsubs     f2, f3, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0xF4
  b         .loc_0xF8

.loc_0xF4:
  fneg      f2, f2

.loc_0xF8:
  lfs       f1, -0x195C(r2)
  fcmpo     cr0, f2, f1
  bge-      .loc_0x10C
  lfs       f0, -0x1960(r2)
  b         .loc_0x124

.loc_0x10C:
  lfs       f0, -0x1960(r2)
  fcmpo     cr0, f3, f0
  bge-      .loc_0x120
  fadds     f0, f3, f1
  b         .loc_0x124

.loc_0x120:
  fsubs     f0, f3, f1

.loc_0x124:
  stfs      f0, 0x24(r3)
  lfs       f0, -0x1968(r2)
  lfs       f2, 0x28(r3)
  lfs       f1, 0x0(r31)
  fmuls     f2, f2, f0
  lfs       f0, -0x19C0(r2)
  stfs      f2, 0x28(r3)
  lfs       f2, 0x20(r3)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x154
  b         .loc_0x158

.loc_0x154:
  fneg      f1, f1

.loc_0x158:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x234
  lfs       f2, -0x1974(r2)
  lfs       f1, 0x24(r3)
  lfs       f0, -0x19C0(r2)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x180
  b         .loc_0x184

.loc_0x180:
  fneg      f1, f1

.loc_0x184:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x234
  lfs       f1, 0x28(r3)
  lfs       f0, -0x19C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x1A4
  b         .loc_0x1A8

.loc_0x1A4:
  fneg      f1, f1

.loc_0x1A8:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x234
  lwz       r3, 0x2EC(r30)
  cmplwi    r3, 0
  beq-      .loc_0x1DC
  lwz       r3, 0x26C(r3)
  li        r4, 0x815
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     

.loc_0x1DC:
  mr        r4, r28
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r4, 0x2
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x14(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x84008
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0xA
  li        r6, 0x2
  bl        -0x82AD8

.loc_0x234:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x240:
  lwz       r0, 0x2E4(r28)
  cmpw      r29, r0
  blt+      .loc_0x30
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
 * Address:	802D6294
 * Size:	000100
 */
void isFinishNaviSuck__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r2, 0x19D0
  stw       r30, 0x18(r1)
  li        r30, 0x1
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0xD0

.loc_0x30:
  mr        r4, r29
  addi      r3, r28, 0x2E4
  bl        -0x19DB54
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC8
  lfs       f2, 0x20(r3)
  lfs       f1, 0x0(r31)
  lfs       f0, -0x19C0(r2)
  fsubs     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x64
  b         .loc_0x68

.loc_0x64:
  fneg      f1, f1

.loc_0x68:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0xC4
  lfs       f2, -0x1974(r2)
  lfs       f1, 0x24(r3)
  lfs       f0, -0x19C0(r2)
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x90
  b         .loc_0x94

.loc_0x90:
  fneg      f1, f1

.loc_0x94:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0xC4
  lfs       f1, 0x28(r3)
  lfs       f0, -0x19C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB4
  b         .loc_0xB8

.loc_0xB4:
  fneg      f1, f1

.loc_0xB8:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xC8

.loc_0xC4:
  li        r30, 0

.loc_0xC8:
  addi      r31, r31, 0x4
  addi      r29, r29, 0x1

.loc_0xD0:
  lwz       r0, 0x2E4(r28)
  cmpw      r29, r0
  blt+      .loc_0x30
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
 * Address:	802D6394
 * Size:	000028
 */
void isNaviSucked__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x2EC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x18
  lwz       r0, 0x2F0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x20

.loc_0x18:
  li        r3, 0x1
  blr       

.loc_0x20:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	802D63BC
 * Size:	00029C
 */
void flickStickNavi__Q34Game9OniKurage3ObjFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stmw      r26, 0x48(r1)
  mr        r27, r3
  mr        r28, r4
  li        r29, 0
  subi      r31, r2, 0x19C8
  subi      r30, r2, 0x19D0
  b         .loc_0x27C

.loc_0x28:
  mr        r4, r29
  addi      r3, r27, 0x2E4
  bl        -0x19DC74
  lwz       r0, 0x64(r3)
  cmplwi    r0, 0
  beq-      .loc_0x270
  rlwinm.   r0,r28,0,24,31
  lfs       f3, 0x0(r31)
  lfs       f4, -0x1958(r2)
  beq-      .loc_0x58
  lfs       f3, 0x0(r30)
  lfs       f4, -0x1954(r2)

.loc_0x58:
  lfs       f1, 0x20(r3)
  lfs       f0, -0x19C0(r2)
  fsubs     f2, f1, f3
  fcmpo     cr0, f2, f0
  ble-      .loc_0x70
  b         .loc_0x74

.loc_0x70:
  fneg      f2, f2

.loc_0x74:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0x88
  fmr       f0, f3
  b         .loc_0x9C

.loc_0x88:
  fcmpo     cr0, f1, f3
  bge-      .loc_0x98
  fadds     f0, f1, f0
  b         .loc_0x9C

.loc_0x98:
  fsubs     f0, f1, f0

.loc_0x9C:
  stfs      f0, 0x20(r3)
  lfs       f0, -0x19C0(r2)
  lfs       f1, 0x24(r3)
  fsubs     f2, f1, f4
  fcmpo     cr0, f2, f0
  ble-      .loc_0xB8
  b         .loc_0xBC

.loc_0xB8:
  fneg      f2, f2

.loc_0xBC:
  lfs       f0, -0x1950(r2)
  fcmpo     cr0, f2, f0
  bge-      .loc_0xD0
  fmr       f0, f4
  b         .loc_0xE4

.loc_0xD0:
  fcmpo     cr0, f1, f4
  bge-      .loc_0xE0
  fadds     f0, f1, f0
  b         .loc_0xE4

.loc_0xE0:
  fsubs     f0, f1, f0

.loc_0xE4:
  stfs      f0, 0x24(r3)
  lfs       f0, -0x19C0(r2)
  lfs       f1, 0x20(r3)
  fsubs     f1, f1, f3
  fcmpo     cr0, f1, f0
  ble-      .loc_0x100
  b         .loc_0x104

.loc_0x100:
  fneg      f1, f1

.loc_0x104:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x270
  lfs       f1, 0x24(r3)
  lfs       f0, -0x19C0(r2)
  fsubs     f1, f1, f4
  fcmpo     cr0, f1, f0
  ble-      .loc_0x128
  b         .loc_0x12C

.loc_0x128:
  fneg      f1, f1

.loc_0x12C:
  lfs       f0, -0x19A8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x270
  lwz       r26, 0x64(r3)
  cmplwi    r26, 0
  beq-      .loc_0x270
  lis       r3, 0x804B
  lfs       f1, -0x19C0(r2)
  subi      r0, r3, 0x5D00
  lfs       f0, -0x194C(r2)
  lis       r3, 0x804B
  stw       r0, 0x2C(r1)
  addi      r0, r3, 0x4E04
  mr        r3, r26
  stw       r27, 0x30(r1)
  addi      r4, r1, 0x2C
  stw       r0, 0x2C(r1)
  stfs      f1, 0x34(r1)
  stfs      f1, 0x38(r1)
  stfs      f0, 0x3C(r1)
  lwz       r12, 0x0(r26)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  mr        r4, r26
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r26)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x10(r1)
  lfs       f0, 0x194(r27)
  lfs       f1, 0x8(r1)
  fsubs     f4, f2, f0
  lfs       f0, 0x18C(r27)
  lfs       f3, -0x19C0(r2)
  fsubs     f2, f1, f0
  fmuls     f1, f4, f4
  fmadds    f0, f2, f2, f3
  fadds     f1, f1, f0
  fcmpo     cr0, f1, f3
  ble-      .loc_0x1E4
  ble-      .loc_0x1E8
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x1E8

.loc_0x1E4:
  fmr       f1, f3

.loc_0x1E8:
  lfs       f0, -0x19C0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x208
  lfs       f0, -0x19A8(r2)
  fdivs     f0, f0, f1
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0

.loc_0x208:
  lwz       r5, 0xC0(r27)
  lis       r3, 0x804B
  lfs       f0, -0x19A0(r2)
  lis       r4, 0x804B
  lfs       f1, 0x604(r5)
  subi      r0, r3, 0x5D00
  fmuls     f2, f2, f0
  lis       r3, 0x804B
  stw       r0, 0x14(r1)
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0
  addi      r0, r4, 0x4974
  stw       r0, 0x14(r1)
  addi      r0, r3, 0x492C
  mr        r3, r26
  addi      r4, r1, 0x14
  stw       r27, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f2, 0x20(r1)
  stfs      f3, 0x24(r1)
  stfs      f4, 0x28(r1)
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r26)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     

.loc_0x270:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x27C:
  lwz       r0, 0x2E4(r27)
  cmpw      r29, r0
  blt+      .loc_0x28
  lmw       r26, 0x48(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6658
 * Size:	000130
 */
void escapeCheckNavi__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r3
  mr        r31, r29
  b         .loc_0x108

.loc_0x28:
  mr        r4, r30
  addi      r3, r29, 0x2E4
  bl        -0x19DF10
  lwz       r3, 0x64(r3)
  cmplwi    r3, 0
  beq-      .loc_0x54
  lwz       r0, 0x2EC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x100
  stw       r3, 0x2EC(r31)
  b         .loc_0x100

.loc_0x54:
  lwz       r0, 0x2EC(r31)
  cmplwi    r0, 0
  beq-      .loc_0x100
  lwz       r0, 0x1E0(r29)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x78
  lfs       f0, -0x19C0(r2)
  stfs      f0, 0x200(r29)
  b         .loc_0xF8

.loc_0x78:
  mr        r3, r29
  bl        0x6A4
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r5, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r4, 0
  lfs       f0, 0x10(r1)
  li        r6, 0x2
  stfs      f2, 0x14(r1)
  lwz       r3, -0x6960(r13)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x844DC
  lwz       r3, -0x6958(r13)
  addi      r5, r1, 0x14
  li        r4, 0xA
  li        r6, 0x2
  bl        -0x82FAC
  lwz       r3, 0x2EC(r31)
  li        r4, 0x816
  li        r5, 0
  lwz       r3, 0x26C(r3)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     

.loc_0xF8:
  li        r0, 0
  stw       r0, 0x2EC(r31)

.loc_0x100:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x108:
  lwz       r0, 0x2E4(r29)
  cmpw      r30, r0
  blt+      .loc_0x28
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
 * Address:	802D6788
 * Size:	000340
 */
void createEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x14
  stw       r30, 0x8(r1)
  bl        -0x2B2900
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r7, r4, 0x68A8
  lis       r4, 0x804D
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x2C14
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  li        r5, 0xD5
  addi      r0, r4, 0x14
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r9, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x9C:
  stw       r3, 0x2F4(r31)
  li        r3, 0x14
  bl        -0x2B2988
  cmplwi    r3, 0
  beq-      .loc_0x124
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r7, r4, 0x68A8
  lis       r4, 0x804D
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x2C14
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  li        r5, 0xD5
  addi      r0, r4, 0x14
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r9, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x124:
  stw       r3, 0x2F8(r31)
  li        r3, 0x40
  bl        -0x2B2A10
  mr.       r30, r3
  beq-      .loc_0x158
  li        r4, 0
  li        r5, 0xD8
  li        r6, 0xD9
  li        r7, 0xDA
  bl        0xD9CDC
  lis       r3, 0x804D
  addi      r0, r3, 0x2BF8
  stw       r0, 0x0(r30)

.loc_0x158:
  stw       r30, 0x2FC(r31)
  li        r3, 0x14
  bl        -0x2B2A44
  cmplwi    r3, 0
  beq-      .loc_0x1E4
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r8, r4, 0x6940
  lis       r4, 0x804D
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x2BAC
  li        r10, 0
  li        r9, 0x2B2
  stw       r0, 0x4(r3)
  addi      r7, r8, 0x14
  addi      r6, r31, 0x18C
  li        r5, 0xDB
  stw       r10, 0x8(r3)
  addi      r0, r4, 0x14
  sth       r9, 0xC(r3)
  stb       r10, 0xE(r3)
  stw       r8, 0x0(r3)
  stw       r7, 0x4(r3)
  stw       r6, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x1E4:
  stw       r3, 0x300(r31)
  li        r3, 0x24
  bl        -0x2B2AD0
  mr.       r30, r3
  beq-      .loc_0x210
  li        r4, 0xDC
  li        r5, 0xDD
  bl        0xD9688
  lis       r3, 0x804D
  addi      r0, r3, 0x2B90
  stw       r0, 0x0(r30)

.loc_0x210:
  stw       r30, 0x304(r31)
  li        r3, 0x14
  bl        -0x2B2AFC
  cmplwi    r3, 0
  beq-      .loc_0x29C
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r8, r4, 0x6940
  lis       r4, 0x804D
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x2B44
  li        r10, 0
  li        r9, 0x2B2
  stw       r0, 0x4(r3)
  addi      r7, r8, 0x14
  addi      r6, r31, 0x18C
  li        r5, 0xD7
  stw       r10, 0x8(r3)
  addi      r0, r4, 0x14
  sth       r9, 0xC(r3)
  stb       r10, 0xE(r3)
  stw       r8, 0x0(r3)
  stw       r7, 0x4(r3)
  stw       r6, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x29C:
  stw       r3, 0x308(r31)
  li        r3, 0x14
  bl        -0x2B2B88
  cmplwi    r3, 0
  beq-      .loc_0x324
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r7, r4, 0x685C
  lis       r4, 0x804D
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x2AF8
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  li        r5, 0xD4
  addi      r0, r4, 0x14
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r9, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x324:
  stw       r3, 0x30C(r31)
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
 * Address:	802D6AC8
 * Size:	00008C
 */
void setupEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r4, r2, 0x1948
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x168500
  bl        0x152DB8
  lwz       r5, 0x2F4(r31)
  subi      r4, r2, 0x1940
  stw       r3, 0x10(r5)
  lwz       r3, 0x174(r31)
  bl        0x1684E8
  bl        0x152DA0
  lwz       r5, 0x2F8(r31)
  subi      r4, r2, 0x1938
  stw       r3, 0x10(r5)
  lwz       r3, 0x174(r31)
  bl        0x1684D0
  bl        0x152D88
  mr        r4, r3
  lwz       r3, 0x2FC(r31)
  bl        0xD9B28
  lwz       r3, 0x174(r31)
  subi      r4, r2, 0x1930
  bl        0x1684B4
  bl        0x152D6C
  lwz       r4, 0x30C(r31)
  stw       r3, 0x10(r4)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6B54
 * Size:	000088
 */
void startEyeHireBodyEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x2F4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2F8(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2FC(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x300(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6BDC
 * Size:	00007C
 */
void finishEyeBodyEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x2F4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2F8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x300(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6C58
 * Size:	000024
 */
void setHireEffectLife__Q34Game9OniKurage3ObjFs(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x2FC(r3)
  bl        0xDCDE8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6C7C
 * Size:	000050
 */
void finishHireEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x2FC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6CCC
 * Size:	000058
 */
void startSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  subi      r0, r5, 0x5814
  stw       r0, 0x8(r1)
  lfs       f0, 0x0(r4)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x8(r4)
  addi      r4, r1, 0x8
  stfs      f0, 0x14(r1)
  lwz       r3, 0x304(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6D24
 * Size:	000024
 */
void updateSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<float>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x304(r3)
  bl        0xDCCDC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6D48
 * Size:	000030
 */
void finishSuckEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x304(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	802D6D78
 * Size:	000034
 */
void createFlickNaviEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r3, 0x308(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
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
 * Address:	802D6DAC
 * Size:	00009C
 */
void createBodyBombEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  subi      r4, r2, 0x1930
  stw       r0, 0x34(r1)
  lwz       r3, 0x174(r3)
  bl        0x168224
  bl        0x152ADC
  lis       r4, 0x804B
  lfs       f0, 0xC(r3)
  lfs       f1, 0x1C(r3)
  subi      r0, r4, 0x5808
  lfs       f2, 0x2C(r3)
  lis       r3, 0x804E
  addi      r5, r3, 0x6A64
  li        r6, 0
  stw       r0, 0x18(r1)
  lis       r4, 0x804D
  lis       r3, 0x804B
  li        r8, 0xD2
  subi      r0, r3, 0x5814
  li        r7, 0xD3
  stw       r5, 0x18(r1)
  addi      r5, r4, 0x2AE4
  addi      r3, r1, 0x18
  addi      r4, r1, 0x8
  sth       r8, 0x1C(r1)
  sth       r7, 0x1E(r1)
  stw       r6, 0x20(r1)
  stw       r6, 0x24(r1)
  stw       r5, 0x18(r1)
  stw       r0, 0x8(r1)
  stfs      f0, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f2, 0x14(r1)
  bl        0xD81E0
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6E48
 * Size:	000044
 */
void createDownEffect__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2EC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  addi      r4, r31, 0x18C
  bl        -0x1D3324
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6E8C
 * Size:	000008
 */
void getDownSmokeScale__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x1928(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6E94
 * Size:	0000B4
 */
void effectDrawOn__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x2F4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2F8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2FC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x300(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x304(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x308(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6F48
 * Size:	0000B4
 */
void effectDrawOff__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x2F4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2F8(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x2FC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x300(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x304(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x308(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x30C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802D6FFC
 * Size:	00009C
 */
void __dt__Q23efx14TKurageDeadrunFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x2AF8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x685C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x2473CC

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2B2FC4

.loc_0x80:
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
 * Address:	802D7098
 * Size:	00009C
 */
void __dt__Q23efx11TKurageGepuFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x2B44
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x247468

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2B3060

.loc_0x80:
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
 * Address:	802D7134
 * Size:	00009C
 */
void __dt__Q23efx11TKurageKiraFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x2BAC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x6940
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x247504

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2B30FC

.loc_0x80:
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
 * Address:	802D71D0
 * Size:	00009C
 */
void __dt__Q23efx10TKurageEyeFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r3, r3, 0x2C14
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x2475A0

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x2B3198

.loc_0x80:
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
 * Address:	802D726C
 * Size:	000004
 */
void inWaterCallback__Q34Game9OniKurage3ObjFPQ24Game8WaterBox(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D7270
 * Size:	000004
 */
void outWaterCallback__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802D7274
 * Size:	000008
 */
void getMouthSlots__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2E4
  blr
*/
}

/*
 * --INFO--
 * Address:	802D727C
 * Size:	000008
 */
void getEnemyTypeID__Q34Game9OniKurage3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0x48
  blr
*/
}

/*
 * --INFO--
 * Address:	802D7284
 * Size:	000028
 */
void __sinit_OniKurage_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804D
  stw       r0, -0x68B0(r13)
  stfsu     f0, 0x2AD8(r3)
  stfs      f0, -0x68AC(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802D72AC
 * Size:	000008
 */
void @4@__dt__Q23efx10TKurageEyeFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xE0
*/
}

/*
 * --INFO--
 * Address:	802D72B4
 * Size:	000008
 */
void @4@__dt__Q23efx11TKurageKiraFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x184
*/
}

/*
 * --INFO--
 * Address:	802D72BC
 * Size:	000008
 */
void @4@__dt__Q23efx11TKurageGepuFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x228
*/
}

/*
 * --INFO--
 * Address:	802D72C4
 * Size:	000008
 */
void @4@__dt__Q23efx14TKurageDeadrunFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x2CC
*/
}