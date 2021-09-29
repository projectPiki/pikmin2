

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
 * Address:	802698AC
 * Size:	000138
 */
void __ct__Q34Game4Tobi3ObjFv(void)
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
  addi      r0, r31, 0x2E8
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2E8(r31)
  stw       r0, 0x2EC(r31)
  stw       r0, 0x2F0(r31)

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        -0x168554
  lis       r3, 0x804C
  addi      r0, r31, 0x2E8
  addi      r5, r3, 0x4ED8
  addi      r3, r31, 0x2C8
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x2FC
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x1313E4
  li        r3, 0x2C
  bl        -0x245A90
  mr.       r30, r3
  beq-      .loc_0xD4
  bl        -0x141FCC
  lis       r3, 0x804C
  lis       r4, 0x804B
  addi      r0, r3, 0x4DC0
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
  bl        -0x245AE4
  mr.       r4, r3
  beq-      .loc_0x108
  lis       r5, 0x804B
  lis       r3, 0x804C
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x4D9C
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x108:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
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
 * Address:	802699E4
 * Size:	000004
 */
void setInitialSetting__Q34Game4Tobi3ObjFPQ24Game21EnemyInitialParamBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802699E8
 * Size:	000098
 */
void onInit__Q34Game4Tobi3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x167FA4
  lwz       r0, 0x1E0(r31)
  mr        r3, r31
  rlwinm    r0,r0,0,21,19
  stw       r0, 0x1E0(r31)
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,26,24
  stw       r0, 0x1E0(r31)
  bl        0x860
  li        r3, 0
  li        r0, -0x1
  stb       r3, 0x2C1(r31)
  mr        r3, r31
  stw       r0, 0x2C4(r31)
  bl        0x944
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1DC(r12)
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
 * Address:	80269A80
 * Size:	000048
 */
void doUpdate__Q34Game4Tobi3ObjFv(void)
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
  addi      r3, r31, 0x2C8
  bl        -0x131484
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269AC8
 * Size:	000004
 */
void doDirectDraw__Q34Game4Tobi3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80269ACC
 * Size:	000020
 */
void doDebugDraw__Q34Game4Tobi3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x163C6C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269AEC
 * Size:	00004C
 */
void setFSM__Q34Game4Tobi3ObjFPQ34Game4Tobi3FSM(void)
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
 * Address:	80269B38
 * Size:	0000E0
 */
void getShadowParam__Q34Game4Tobi3ObjFRQ24Game11ShadowParam(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  subi      r4, r2, 0x33F8
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x174(r3)
  bl        0x1D5488
  bl        0x1BFD40
  lfs       f3, 0x2C(r3)
  lfs       f2, 0x1C(r3)
  lfs       f0, 0xC(r3)
  mr        r3, r30
  lfs       f1, -0x33F0(r2)
  stfs      f0, 0x0(r31)
  lfs       f0, -0x33EC(r2)
  stfs      f2, 0x4(r31)
  stfs      f3, 0x8(r31)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  bl        -0x1627A0
  cmpwi     r3, 0xA
  bne-      .loc_0x90
  lfs       f2, 0x4(r31)
  lfs       f0, -0x33E8(r2)
  lfs       f1, -0x33E4(r2)
  fsubs     f0, f2, f0
  stfs      f0, 0x4(r31)
  lwz       r3, 0xC0(r30)
  lfs       f0, 0x86C(r3)
  fadds     f0, f1, f0
  stfs      f0, 0x18(r31)
  b         .loc_0xC0

.loc_0x90:
  lfs       f1, 0x4(r31)
  lfs       f0, -0x33E0(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0x4(r31)
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xB8
  lfs       f0, -0x33E4(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0xC0

.loc_0xB8:
  lfs       f0, -0x33DC(r2)
  stfs      f0, 0x18(r31)

.loc_0xC0:
  lfs       f0, -0x33E8(r2)
  stfs      f0, 0x1C(r31)
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
 * Address:	80269C18
 * Size:	0000A4
 */
void pressCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x8C
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x8C
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x8C
  mr        r3, r31
  bl        -0x16286C
  cmpwi     r3, 0x4
  ble-      .loc_0x5C
  cmpwi     r3, 0xA
  blt-      .loc_0x64

.loc_0x5C:
  cmpwi     r3, 0xA
  ble-      .loc_0x8C

.loc_0x64:
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x90

.loc_0x8C:
  li        r3, 0

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
 * Address:	80269CBC
 * Size:	00002C
 */
void hipdropCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x27C(r12)
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
 * Address:	80269CE8
 * Size:	000094
 */
void flyCollisionCallBack__Q34Game4Tobi3ObjFPQ24Game8CreaturefP8CollPart(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x7C
  mr        r3, r4
  lwz       r12, 0x0(r4)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x7C
  mr        r3, r31
  bl        -0x16293C
  cmpwi     r3, 0xA
  bne-      .loc_0x7C
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x80

.loc_0x7C:
  li        r3, 0

.loc_0x80:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269D7C
 * Size:	000038
 */
void doStartStoneState__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x166E9C
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x1E0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269DB4
 * Size:	00005C
 */
void doFinishStoneState__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x166EC0
  mr        r3, r31
  bl        -0x1629DC
  cmpwi     r3, 0xA
  bne-      .loc_0x48
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269E10
 * Size:	000038
 */
void doStartEarthquakeFitState__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1624C0
  lwz       r0, 0x1E0(r31)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x1E0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269E48
 * Size:	00005C
 */
void doFinishEarthquakeFitState__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1624F4
  mr        r3, r31
  bl        -0x162A70
  cmpwi     r3, 0xA
  bne-      .loc_0x48
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269EA4
 * Size:	000028
 */
void startCarcassMotion__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x9
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x164EB4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269ECC
 * Size:	00008C
 */
void initMouthSlots__Q34Game4Tobi3ObjFv(void)
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
  li        r4, 0x1
  addi      r3, r30, 0x2C8
  bl        -0x13199C
  lwz       r5, 0x174(r30)
  addi      r3, r30, 0x2C8
  li        r4, 0
  subi      r6, r2, 0x33D8
  bl        -0x131878
  lfs       f31, -0x33D0(r2)
  li        r31, 0
  b         .loc_0x60

.loc_0x4C:
  mr        r4, r31
  addi      r3, r30, 0x2C8
  bl        -0x1317A8
  stfs      f31, 0x1C(r3)
  addi      r31, r31, 0x1

.loc_0x60:
  lwz       r0, 0x2C8(r30)
  cmpw      r31, r0
  blt+      .loc_0x4C
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
 * Address:	80269F58
 * Size:	00007C
 */
void lifeRecover__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xCC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  lwz       r3, 0xC0(r31)
  lfs       f2, -0x33CC(r2)
  lfs       f1, 0x104(r3)
  lfs       f0, 0x200(r31)
  fmadds    f0, f2, f1, f0
  stfs      f0, 0x200(r31)
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x200(r31)
  lfs       f0, 0x104(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x68
  stfs      f0, 0x200(r31)
  b         .loc_0x68

.loc_0x60:
  mr        r3, r31
  bl        -0x164C2C

.loc_0x68:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80269FD4
 * Size:	000030
 */
void lifeIncrement__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x33F0(r2)
  stfs      f1, 0x208(r3)
  lwz       r0, 0x1E0(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x1E0(r3)
  lfs       f0, 0x200(r3)
  fcmpo     cr0, f0, f1
  cror      2, 0, 0x2
  bnelr-    
  lfs       f0, -0x33EC(r2)
  stfs      f0, 0x200(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A004
 * Size:	000220
 */
void randomFlyingTarget__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  mr        r31, r3
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r31)
  mr        r4, r31
  lfs       f31, 0x2D0(r31)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x2D8(r31)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  mr        r4, r31
  lfs       f1, 0x18(r1)
  addi      r3, r1, 0x8
  lfs       f0, 0x1C(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lfs       f3, -0x33F0(r2)
  lfs       f0, 0x10(r1)
  lfs       f1, 0x8(r1)
  fsubs     f4, f3, f0
  lfs       f0, 0x28(r1)
  lfs       f2, 0x20(r1)
  fsubs     f5, f3, f1
  fsubs     f3, f30, f0
  lfs       f0, -0x33C8(r2)
  fmuls     f1, f4, f4
  fsubs     f4, f31, f2
  fmuls     f2, f3, f3
  fmadds    f1, f5, f5, f1
  fmadds    f2, f4, f4, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1B8
  bl        -0x1A0B1C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x34(r1)
  lwz       r3, 0xC0(r31)
  stw       r0, 0x30(r1)
  lfd       f2, -0x33B0(r2)
  lfd       f0, 0x30(r1)
  lfs       f1, -0x33C4(r2)
  fsubs     f2, f0, f2
  lfs       f0, -0x33C0(r2)
  lfs       f30, 0x35C(r3)
  fmuls     f1, f1, f2
  fdivs     f31, f1, f0
  bl        -0x1A0B54
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  fmr       f3, f31
  lfs       f0, -0x33F0(r2)
  stw       r0, 0x38(r1)
  lfd       f2, -0x33B0(r2)
  fcmpo     cr0, f31, f0
  lfd       f1, 0x38(r1)
  lfs       f0, -0x33C0(r2)
  fsubs     f1, f1, f2
  fmuls     f1, f30, f1
  fdivs     f4, f1, f0
  bge-      .loc_0x130
  fneg      f3, f31

.loc_0x130:
  lfs       f2, -0x33BC(r2)
  lis       r3, 0x8050
  lfs       f0, -0x33F0(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f3, f2
  fcmpo     cr0, f31, f0
  fctiwz    f0, f1
  stfd      f0, 0x40(r1)
  lwz       r0, 0x44(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f3, f4, f0
  bge-      .loc_0x18C
  lfs       f0, -0x33B8(r2)
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x1A4

.loc_0x18C:
  fmuls     f0, f31, f2
  fctiwz    f0, f0
  stfd      f0, 0x50(r1)
  lwz       r0, 0x54(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x1A4:
  fmuls     f31, f4, f0
  lfs       f1, 0x198(r31)
  lfs       f0, 0x1A0(r31)
  fadds     f31, f31, f1
  fadds     f30, f3, f0

.loc_0x1B8:
  lwz       r3, -0x6CF8(r13)
  addi      r4, r1, 0x20
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lfs       f2, -0x33B4(r2)
  lfs       f0, 0x86C(r3)
  fadds     f1, f1, f0
  stfs      f31, 0x2D0(r31)
  stfs      f1, 0x2D4(r31)
  stfs      f30, 0x2D8(r31)
  lfs       f0, 0x24(r1)
  fsubs     f1, f1, f0
  fmuls     f0, f2, f1
  stfs      f0, 0x1D8(r31)
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  lwz       r0, 0x84(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A224
 * Size:	000024
 */
void isFlyingLife__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  lfs       f2, 0x200(r3)
  lfs       f1, 0x104(r4)
  lfs       f0, 0x81C(r4)
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A248
 * Size:	000034
 */
void setInWaterDamage__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x280(r3)
  cmplwi    r0, 0
  beq-      .loc_0x24
  lfs       f1, -0x33E0(r2)
  lfs       f2, -0x33EC(r2)
  bl        -0x16423C

.loc_0x24:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A27C
 * Size:	0000B4
 */
void resetAppearCheck__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r4, -0x6C18(r13)
  cmplwi    r4, 0
  beq-      .loc_0x94
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x4
  bne-      .loc_0x94
  bl        -0x1A0D0C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  stw       r0, 0x8(r1)
  lfd       f2, -0x33B0(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x33C0(r2)
  fsubs     f2, f0, f2
  lfs       f0, -0x33DC(r2)
  lwz       r12, 0x1AC(r12)
  fdivs     f1, f2, f1
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r31, 0x14(r1)
  mtctr     r12
  bctrl     
  mulli     r0, r3, 0x5
  add       r0, r31, r0
  rlwinm    r0,r0,8,16,23
  sth       r0, 0x2C2(r30)
  b         .loc_0x9C

.loc_0x94:
  li        r0, 0
  sth       r0, 0x2C2(r30)

.loc_0x9C:
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
 * Address:	8026A330
 * Size:	000048
 */
void isAppearCheck__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  lhz       r4, 0x2C2(r3)
  cmplwi    r4, 0
  beq-      .loc_0x40
  addi      r0, r4, 0x1
  sth       r0, 0x2C2(r3)
  lhz       r0, 0x2C2(r3)
  rlwinm    r4,r0,0,24,31
  rlwinm    r0,r0,24,24,31
  cmpw      r4, r0
  ble-      .loc_0x38
  li        r0, 0
  sth       r0, 0x2C2(r3)
  li        r3, 0x1
  blr       

.loc_0x38:
  li        r3, 0
  blr       

.loc_0x40:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A378
 * Size:	000020
 */
void resetBridgeSearch__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x2C0(r3)
  lfs       f0, -0x33F0(r2)
  stw       r0, 0x2DC(r3)
  stfs      f0, 0x2E0(r3)
  stfs      f0, 0x2E4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A398
 * Size:	000048
 */
void setBridgeSearch__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x2C0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x34
  li        r0, 0
  stb       r0, 0x2C0(r31)
  bl        .loc_0x48
  mr        r3, r31
  bl        0x2D8

.loc_0x34:
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
 * Address:	8026A3E0
 * Size:	0002C0
 */
void setNearestBridge__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  mr        r31, r3
  li        r0, 0
  stw       r0, 0x2DC(r3)
  lfs       f0, -0x33F0(r2)
  stfs      f0, 0x2E0(r3)
  stfs      f0, 0x2E4(r3)
  lwz       r3, -0x6B48(r13)
  cmplwi    r3, 0
  beq-      .loc_0x250
  lwz       r4, 0xC0(r31)
  lfs       f0, 0x35C(r4)
  fmuls     f31, f0, f0
  beq-      .loc_0x54
  addi      r3, r3, 0x30

.loc_0x54:
  li        r0, 0
  lis       r4, 0x804B
  addi      r4, r4, 0x560
  stw       r0, 0x20(r1)
  cmplwi    r0, 0
  stw       r4, 0x14(r1)
  stw       r0, 0x18(r1)
  stw       r3, 0x1C(r1)
  bne-      .loc_0x90
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x230

.loc_0x90:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0xFC

.loc_0xA8:
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
  bne-      .loc_0x230
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0xFC:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xA8
  b         .loc_0x230

.loc_0x11C:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r0, r3
  addi      r3, r1, 0x8
  mr        r30, r0
  mr        r4, r30
  bl        -0x7B5EC
  lfs       f1, 0x194(r31)
  lfs       f0, 0x10(r1)
  lfs       f2, 0x18C(r31)
  fsubs     f1, f1, f0
  lfs       f0, 0x8(r1)
  fsubs     f2, f2, f0
  fmuls     f0, f1, f1
  fmadds    f0, f2, f2, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0x174
  stw       r30, 0x2DC(r31)
  fmr       f31, f0

.loc_0x174:
  lwz       r0, 0x20(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1A0
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x230

.loc_0x1A0:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x214

.loc_0x1C0:
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
  bne-      .loc_0x230
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x214:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1C0

.loc_0x230:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x18(r1)
  cmplw     r4, r3
  bne+      .loc_0x11C

.loc_0x250:
  lwz       r3, 0x2DC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x2A0
  bl        -0x7B60C
  lfs       f0, -0x33A8(r2)
  fsubs     f31, f1, f0
  bl        -0x1A10A8
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x2C(r1)
  lfd       f3, -0x33B0(r2)
  stw       r0, 0x28(r1)
  lfs       f1, -0x33C0(r2)
  lfd       f2, 0x28(r1)
  lfs       f0, -0x33C8(r2)
  fsubs     f2, f2, f3
  fmuls     f2, f31, f2
  fdivs     f1, f2, f1
  fnmsubs   f0, f0, f31, f1
  stfs      f0, 0x2E0(r31)

.loc_0x2A0:
  psq_l     f31,0x48(r1),0,0
  lwz       r0, 0x54(r1)
  lfd       f31, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A6A0
 * Size:	000004
 */
void setCullingCheck__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A6A4
 * Size:	0001B4
 */
void checkBreakOrMove__Q34Game4Tobi3ObjFv(void)
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
  stfd      f26, 0x40(r1)
  psq_st    f26,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r4, 0x2DC(r3)
  cmplwi    r4, 0
  beq-      .loc_0x16C
  addi      r3, r1, 0x20
  bl        -0x7B6C0
  lfs       f28, 0x20(r1)
  addi      r3, r1, 0x14
  lfs       f29, 0x24(r1)
  lfs       f27, 0x28(r1)
  lwz       r4, 0x2DC(r31)
  bl        -0x7B7DC
  lfs       f2, 0x18(r1)
  lfs       f0, 0x190(r31)
  lfs       f1, 0x14(r1)
  fsubs     f30, f2, f0
  lfs       f0, 0x18C(r31)
  lfs       f2, 0x1C(r1)
  fsubs     f31, f1, f0
  lfs       f0, 0x194(r31)
  fmuls     f1, f29, f30
  fsubs     f29, f2, f0
  lfs       f0, -0x33F0(r2)
  fmadds    f1, f28, f31, f1
  fmadds    f1, f27, f29, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xB4
  li        r3, 0x7
  b         .loc_0x170

.loc_0xB4:
  lwz       r4, 0x2DC(r31)
  addi      r3, r1, 0x8
  bl        -0x7B684
  lfs       f27, 0x8(r1)
  lfs       f28, 0xC(r1)
  lfs       f26, 0x10(r1)
  lwz       r3, 0x2DC(r31)
  bl        -0x7B744
  fmuls     f3, f28, f30
  lfs       f0, -0x33C8(r2)
  lfs       f2, -0x33A8(r2)
  fmuls     f4, f0, f1
  lfs       f0, -0x33F0(r2)
  fmadds    f1, f27, f31, f3
  fadds     f2, f2, f4
  fmadds    f1, f26, f29, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x104
  stfs      f2, 0x2E4(r31)
  b         .loc_0x10C

.loc_0x104:
  fneg      f0, f2
  stfs      f0, 0x2E4(r31)

.loc_0x10C:
  lfs       f0, -0x33F0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x11C
  b         .loc_0x120

.loc_0x11C:
  fneg      f1, f1

.loc_0x120:
  fcmpo     cr0, f1, f4
  ble-      .loc_0x130
  li        r3, 0x6
  b         .loc_0x170

.loc_0x130:
  lwz       r3, -0x6CF8(r13)
  addi      r4, r31, 0x18C
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x33A4(r2)
  lfs       f2, 0x190(r31)
  fadds     f0, f0, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0x164
  li        r3, 0x8
  b         .loc_0x170

.loc_0x164:
  li        r3, 0x6
  b         .loc_0x170

.loc_0x16C:
  li        r3, 0x7

.loc_0x170:
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
  psq_l     f26,0x48(r1),0,0
  lfd       f26, 0x40(r1)
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A858
 * Size:	000028
 */
void isBreakBridge__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x2DC(r3)
  cmplwi    r3, 0
  beq-      .loc_0x20
  lwz       r0, 0x218(r3)
  cmpwi     r0, 0
  beq-      .loc_0x20
  li        r3, 0x1
  blr       

.loc_0x20:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026A880
 * Size:	0002A8
 */
void moveBridgeSide__Q34Game4Tobi3ObjFv(void)
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
  stw       r31, 0x5C(r1)
  mr        r31, r3
  addi      r3, r1, 0x44
  lwz       r4, 0x2DC(r31)
  bl        -0x7B988
  lfs       f29, 0x44(r1)
  addi      r3, r1, 0x38
  lfs       f28, 0x4C(r1)
  lwz       r4, 0x2DC(r31)
  bl        -0x7B7F4
  lfs       f30, 0x38(r1)
  addi      r3, r1, 0x2C
  lfs       f31, 0x40(r1)
  lwz       r4, 0x2DC(r31)
  bl        -0x7B8AC
  lfs       f1, 0x2E4(r31)
  lfs       f4, 0x34(r1)
  fmuls     f31, f31, f1
  lfs       f0, -0x33A0(r2)
  fmuls     f30, f30, f1
  lfs       f3, 0x2C(r1)
  fmuls     f4, f4, f0
  lfs       f1, 0x194(r31)
  fadds     f28, f28, f31
  lfs       f2, 0x18C(r31)
  fmuls     f3, f3, f0
  lfs       f0, -0x339C(r2)
  fadds     f29, f29, f30
  fadds     f28, f28, f4
  fadds     f29, f29, f3
  fsubs     f1, f1, f28
  fsubs     f2, f2, f29
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x138
  mr        r3, r31
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x0(r31)
  lfs       f1, -0x3398(r2)
  lfs       f0, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  fmuls     f30, f1, f0
  mtctr     r12
  bctrl     
  bl        -0x19B144
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x20(r1)
  stfs      f31, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r12
  bctrl     
  bl        -0x19B6E0
  fmuls     f0, f30, f29
  li        r3, 0x1
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  b         .loc_0x274

.loc_0x138:
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f29, f1
  fsubs     f2, f28, f0
  bl        -0x2358EC
  bl        0x1A71D8
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0x1A71E0
  fmuls     f30, f1, f30
  lfs       f0, -0x3390(r2)
  lfs       f1, -0x3394(r2)
  fmuls     f0, f0, f31
  fabs      f2, f30
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x1DC
  lfs       f0, -0x33F0(r2)
  fcmpo     cr0, f30, f0
  ble-      .loc_0x1D8
  fmr       f30, f1
  b         .loc_0x1DC

.loc_0x1D8:
  fneg      f30, f1

.loc_0x1DC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f30, f1
  bl        0x1A715C
  stfs      f1, 0x1FC(r31)
  mr        r3, r31
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r12, 0x0(r31)
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x64(r12)
  lfs       f30, 0x2E4(r4)
  mtctr     r12
  bctrl     
  bl        -0x19B284
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x14(r1)
  stfs      f31, 0x18(r1)
  stfs      f0, 0x1C(r1)
  mtctr     r12
  bctrl     
  bl        -0x19B820
  fmuls     f0, f30, f29
  li        r3, 0
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x274:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  psq_l     f29,0x78(r1),0,0
  lfd       f29, 0x70(r1)
  psq_l     f28,0x68(r1),0,0
  lfd       f28, 0x60(r1)
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026AB28
 * Size:	000288
 */
void moveBridgeCentre__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stfd      f30, 0x70(r1)
  psq_st    f30,0x78(r1),0,0
  stfd      f29, 0x60(r1)
  psq_st    f29,0x68(r1),0,0
  stfd      f28, 0x50(r1)
  psq_st    f28,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  mr        r31, r3
  addi      r3, r1, 0x38
  lwz       r4, 0x2DC(r31)
  bl        -0x7BC30
  lfs       f29, 0x38(r1)
  addi      r3, r1, 0x2C
  lfs       f28, 0x40(r1)
  lwz       r4, 0x2DC(r31)
  bl        -0x7BA9C
  lfs       f1, -0x338C(r2)
  lfs       f0, 0x2E0(r31)
  lfs       f5, 0x34(r1)
  fmuls     f3, f1, f0
  lfs       f4, 0x2C(r1)
  lfs       f1, 0x194(r31)
  lfs       f2, 0x18C(r31)
  fmuls     f5, f5, f3
  lfs       f0, -0x339C(r2)
  fmuls     f4, f4, f3
  fadds     f28, f28, f5
  fadds     f29, f29, f4
  fsubs     f1, f1, f28
  fsubs     f2, f2, f29
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x118
  mr        r3, r31
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x0(r31)
  lfs       f1, -0x3398(r2)
  lfs       f0, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  fmuls     f30, f1, f0
  mtctr     r12
  bctrl     
  bl        -0x19B3CC
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x20(r1)
  stfs      f31, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r12
  bctrl     
  bl        -0x19B968
  fmuls     f0, f30, f29
  li        r3, 0x1
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)
  b         .loc_0x254

.loc_0x118:
  mr        r4, r31
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f31, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f30, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f29, f1
  fsubs     f2, f28, f0
  bl        -0x235B74
  bl        0x1A6F50
  lwz       r12, 0x0(r31)
  fmr       f29, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f29
  bl        0x1A6F58
  fmuls     f30, f1, f30
  lfs       f0, -0x3390(r2)
  lfs       f1, -0x3394(r2)
  fmuls     f0, f0, f31
  fabs      f2, f30
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x1BC
  lfs       f0, -0x33F0(r2)
  fcmpo     cr0, f30, f0
  ble-      .loc_0x1B8
  fmr       f30, f1
  b         .loc_0x1BC

.loc_0x1B8:
  fneg      f30, f1

.loc_0x1BC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f30, f1
  bl        0x1A6ED4
  stfs      f1, 0x1FC(r31)
  mr        r3, r31
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r12, 0x0(r31)
  lwz       r4, 0xC0(r31)
  lwz       r12, 0x64(r12)
  lfs       f30, 0x2E4(r4)
  mtctr     r12
  bctrl     
  bl        -0x19B50C
  mr        r3, r31
  lfs       f2, 0x1D4(r31)
  lwz       r12, 0x0(r31)
  frsp      f29, f1
  lfs       f31, 0x1D8(r31)
  lfs       f0, 0x1DC(r31)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x14(r1)
  stfs      f31, 0x18(r1)
  stfs      f0, 0x1C(r1)
  mtctr     r12
  bctrl     
  bl        -0x19BAA8
  fmuls     f0, f30, f29
  li        r3, 0
  frsp      f1, f1
  stfs      f0, 0x1D4(r31)
  fmuls     f0, f30, f1
  stfs      f31, 0x1D8(r31)
  stfs      f0, 0x1DC(r31)

.loc_0x254:
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  psq_l     f28,0x58(r1),0,0
  lfd       f28, 0x50(r1)
  lwz       r0, 0x94(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8026ADB0
 * Size:	0002F0
 */
void moveBridgeTop__Q34Game4Tobi3ObjFv(void)
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
  stfd      f29, 0x80(r1)
  psq_st    f29,0x88(r1),0,0
  stfd      f28, 0x70(r1)
  psq_st    f28,0x78(r1),0,0
  stfd      f27, 0x60(r1)
  psq_st    f27,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  mr        r30, r3
  addi      r3, r1, 0x44
  lwz       r4, 0x2DC(r30)
  lwz       r5, 0x218(r4)
  subi      r31, r5, 0x1
  mr        r5, r31
  bl        -0x7BFB8
  lfs       f31, 0x44(r1)
  addi      r3, r1, 0x38
  lfs       f30, 0x4C(r1)
  lwz       r4, 0x2DC(r30)
  bl        -0x7BD3C
  lfs       f1, 0x38(r1)
  cmpwi     r31, 0
  lfs       f0, 0x2E0(r30)
  lfs       f2, 0x40(r1)
  fmuls     f1, f1, f0
  fmuls     f2, f2, f0
  fadds     f31, f31, f1
  fadds     f30, f30, f2
  ble-      .loc_0xB8
  lwz       r4, 0x2DC(r30)
  addi      r3, r1, 0x2C
  bl        -0x7BE10
  lfs       f1, 0x2C(r1)
  lfs       f0, -0x33A0(r2)
  lfs       f2, 0x34(r1)
  fmuls     f1, f1, f0
  fmuls     f2, f2, f0
  fadds     f31, f31, f1
  fadds     f30, f30, f2

.loc_0xB8:
  mr        r4, r30
  lwz       r5, 0xC0(r30)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x8
  lfs       f28, 0x334(r5)
  lwz       r12, 0x8(r12)
  lfs       f29, 0x30C(r5)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r1)
  lis       r3, 0x8051
  lfs       f0, 0x10(r1)
  subi      r3, r3, 0x2E20
  fsubs     f1, f31, f1
  fsubs     f2, f30, f0
  bl        -0x235D9C
  bl        0x1A6D28
  lwz       r12, 0x0(r30)
  fmr       f27, f1
  mr        r3, r30
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f27
  bl        0x1A6D30
  fmuls     f29, f1, f29
  lfs       f0, -0x3390(r2)
  lfs       f1, -0x3394(r2)
  fmuls     f0, f0, f28
  fabs      f2, f29
  fmuls     f1, f1, f0
  frsp      f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0x15C
  lfs       f0, -0x33F0(r2)
  fcmpo     cr0, f29, f0
  ble-      .loc_0x158
  fmr       f29, f1
  b         .loc_0x15C

.loc_0x158:
  fneg      f29, f1

.loc_0x15C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fadds     f1, f29, f1
  bl        0x1A6CAC
  stfs      f1, 0x1FC(r30)
  lfs       f0, -0x33E4(r2)
  lfs       f1, 0x1FC(r30)
  stfs      f1, 0x1A8(r30)
  lfs       f1, 0x194(r30)
  lfs       f2, 0x18C(r30)
  fsubs     f1, f1, f30
  fsubs     f2, f2, f31
  fmuls     f1, f1, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1C0
  lfs       f0, -0x33F0(r2)
  li        r3, 0x1
  stfs      f0, 0x1D4(r30)
  stfs      f0, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)
  b         .loc_0x2B0

.loc_0x1C0:
  lfs       f0, -0x339C(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x240
  mr        r3, r30
  lwz       r4, 0xC0(r30)
  lwz       r12, 0x0(r30)
  lfs       f28, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  bl        -0x19B77C
  mr        r3, r30
  lfs       f2, 0x1D4(r30)
  lwz       r12, 0x0(r30)
  frsp      f27, f1
  lfs       f30, 0x1D8(r30)
  lfs       f0, 0x1DC(r30)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x20(r1)
  stfs      f30, 0x24(r1)
  stfs      f0, 0x28(r1)
  mtctr     r12
  bctrl     
  bl        -0x19BD18
  fmuls     f0, f28, f27
  li        r3, 0x1
  frsp      f1, f1
  stfs      f0, 0x1D4(r30)
  fmuls     f0, f28, f1
  stfs      f30, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)
  b         .loc_0x2B0

.loc_0x240:
  mr        r3, r30
  lwz       r4, 0xC0(r30)
  lwz       r12, 0x0(r30)
  lfs       f28, 0x2E4(r4)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  bl        -0x19B7F0
  mr        r3, r30
  lfs       f2, 0x1D4(r30)
  lwz       r12, 0x0(r30)
  frsp      f27, f1
  lfs       f30, 0x1D8(r30)
  lfs       f0, 0x1DC(r30)
  lwz       r12, 0x64(r12)
  stfs      f2, 0x14(r1)
  stfs      f30, 0x18(r1)
  stfs      f0, 0x1C(r1)
  mtctr     r12
  bctrl     
  bl        -0x19BD8C
  fmuls     f0, f28, f27
  li        r3, 0
  frsp      f1, f1
  stfs      f0, 0x1D4(r30)
  fmuls     f0, f28, f1
  stfs      f30, 0x1D8(r30)
  stfs      f0, 0x1DC(r30)

.loc_0x2B0:
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  psq_l     f29,0x88(r1),0,0
  lfd       f29, 0x80(r1)
  psq_l     f28,0x78(r1),0,0
  lfd       f28, 0x70(r1)
  psq_l     f27,0x68(r1),0,0
  lfd       f27, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r0, 0xB4(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B0A0
 * Size:	00005C
 */
void breakTargetBridge__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804B
  lis       r5, 0x804B
  stw       r0, 0x24(r1)
  subi      r6, r4, 0x5D00
  addi      r0, r5, 0x749C
  addi      r4, r1, 0x8
  lwz       r7, 0xC0(r3)
  lfs       f0, 0x8BC(r7)
  stw       r6, 0x8(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x8(r1)
  stfs      f0, 0x10(r1)
  lwz       r3, 0x2DC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
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
 * Address:	8026B0FC
 * Size:	00008C
 */
void createAppearEffect__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  addi      r4, r4, 0x5E80
  lwz       r3, 0x174(r3)
  bl        0x1D3ED0
  bl        0x1BE788
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804C
  stw       r0, 0x8(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x1CE
  li        r5, 0x1CF
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x2934
  li        r4, 0
  stw       r3, 0x18(r1)
  addi      r3, r1, 0x8
  sth       r7, 0xC(r1)
  sth       r5, 0xE(r1)
  stw       r6, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x8(r1)
  bl        0x144224
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B188
 * Size:	00008C
 */
void createDisAppearEffect__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  addi      r4, r4, 0x5E80
  lwz       r3, 0x174(r3)
  bl        0x1D3E44
  bl        0x1BE6FC
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804C
  stw       r0, 0x8(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x1D1
  li        r5, 0x1D2
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x2920
  li        r4, 0
  stw       r3, 0x18(r1)
  addi      r3, r1, 0x8
  sth       r7, 0xC(r1)
  sth       r5, 0xE(r1)
  stw       r6, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x8(r1)
  bl        0x144198
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B214
 * Size:	000090
 */
void createBridgeEffect__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  subi      r4, r2, 0x33D8
  stw       r0, 0x34(r1)
  lwz       r3, 0x174(r3)
  bl        0x1D3DBC
  bl        0x1BE674
  lis       r4, 0x804B
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  subi      r4, r4, 0x5808
  lfs       f0, 0xC(r3)
  lis       r3, 0x804E
  addi      r0, r3, 0x6A78
  lis       r5, 0x804B
  stw       r4, 0x8(r1)
  lis       r3, 0x804C
  subi      r4, r5, 0x5814
  li        r6, 0x1D0
  li        r5, 0
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x290C
  addi      r3, r1, 0x8
  stw       r4, 0x14(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f2, 0x20(r1)
  sth       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r0, 0x8(r1)
  bl        0x143CF4
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B2A4
 * Size:	000090
 */
void createEatEffect__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  subi      r4, r2, 0x33D8
  stw       r0, 0x34(r1)
  lwz       r3, 0x174(r3)
  bl        0x1D3D2C
  bl        0x1BE5E4
  lis       r4, 0x804B
  lfs       f2, 0x2C(r3)
  lfs       f1, 0x1C(r3)
  subi      r4, r4, 0x5808
  lfs       f0, 0xC(r3)
  lis       r3, 0x804E
  addi      r0, r3, 0x6A78
  lis       r5, 0x804B
  stw       r4, 0x8(r1)
  lis       r3, 0x804C
  subi      r4, r5, 0x5814
  li        r6, 0x25E
  li        r5, 0
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x28F8
  addi      r3, r1, 0x8
  stw       r4, 0x14(r1)
  addi      r4, r1, 0x14
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  stfs      f2, 0x20(r1)
  sth       r6, 0xC(r1)
  stw       r5, 0x10(r1)
  stw       r0, 0x8(r1)
  bl        0x143C64
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B334
 * Size:	000008
 */
void isUnderground__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2C1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B33C
 * Size:	000008
 */
void getMouthSlots__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x2C8
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B344
 * Size:	000008
 */
void getDownSmokeScale__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x3388(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8026B34C
 * Size:	000008
 */
void getEnemyTypeID__Q34Game4Tobi3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0xE
  blr
*/
}