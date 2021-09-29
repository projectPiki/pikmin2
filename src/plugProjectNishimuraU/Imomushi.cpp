

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
 * Address:	802BC138
 * Size:	000138
 */
void __ct__Q34Game8Imomushi3ObjFv(void)
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
  bl        -0x1BADE0
  lis       r3, 0x804D
  addi      r0, r31, 0x310
  addi      r5, r3, 0x904
  li        r3, 0x2C
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x2FC
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        -0x298314
  mr.       r30, r3
  beq-      .loc_0xCC
  bl        -0x194850
  lis       r3, 0x804D
  lis       r4, 0x804B
  addi      r0, r3, 0x7E0
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

.loc_0xCC:
  stw       r30, 0x184(r31)
  li        r3, 0x1C
  bl        -0x298368
  mr.       r4, r3
  beq-      .loc_0x100
  lis       r5, 0x804B
  lis       r3, 0x804D
  subi      r0, r5, 0x680
  li        r5, -0x1
  stw       r0, 0x0(r4)
  addi      r0, r3, 0x7BC
  stw       r5, 0x18(r4)
  stw       r0, 0x0(r4)

.loc_0x100:
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x2F8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x1454
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
 * Address:	802BC270
 * Size:	000004
 */
void setInitialSetting__Q34Game8Imomushi3ObjFPQ24Game21EnemyInitialParamBase(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802BC274
 * Size:	0000E8
 */
void onInit__Q34Game8Imomushi3ObjFPQ24Game15CreatureInitArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1BA830
  lwz       r3, 0x1E0(r31)
  li        r4, 0
  li        r0, -0x1
  lfs       f0, -0x1FA0(r2)
  rlwinm    r5,r3,0,21,19
  mr        r3, r31
  stw       r5, 0x1E0(r31)
  lwz       r5, 0x1E0(r31)
  rlwinm    r5,r5,0,26,24
  stw       r5, 0x1E0(r31)
  lwz       r5, 0x1E0(r31)
  rlwinm    r5,r5,0,24,22
  stw       r5, 0x1E0(r31)
  stb       r4, 0x2C0(r31)
  stw       r0, 0x2C4(r31)
  stfs      f0, 0x2C8(r31)
  bl        0xAB4
  mr        r3, r31
  bl        0x150C
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0xA0
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x4
  bne-      .loc_0xA0
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0xB
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xD4

.loc_0xA0:
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x4
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

.loc_0xD4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BC35C
 * Size:	000044
 */
void onKill__Q34Game8Imomushi3ObjFPQ24Game15CreatureKillArg(void)
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
  bl        0x1644
  mr        r3, r30
  mr        r4, r31
  bl        -0x1BA49C
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
 * Address:	802BC3A0
 * Size:	000034
 */
void doUpdate__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r3, 0x2BC(r3)
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
 * Address:	802BC3D4
 * Size:	0004D0
 */
void doAnimationStick__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r3, 0xF8(r3)
  lbz       r0, 0x58(r3)
  cmplwi    r0, 0
  bne-      .loc_0x128
  lfs       f1, 0x190(r31)
  lfs       f0, 0x50(r3)
  lfs       f2, 0x194(r31)
  fsubs     f3, f1, f0
  lfs       f0, 0x54(r3)
  lfs       f1, 0x18C(r31)
  fsubs     f4, f2, f0
  lfs       f0, 0x4C(r3)
  fmuls     f5, f3, f3
  fsubs     f2, f1, f0
  lfs       f0, -0x1FA0(r2)
  fmuls     f6, f4, f4
  fmadds    f1, f2, f2, f5
  fadds     f1, f6, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x74
  ble-      .loc_0x78
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x78

.loc_0x74:
  fmr       f1, f0

.loc_0x78:
  lfs       f0, -0x1FA0(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x98
  lfs       f0, -0x1F9C(r2)
  fdivs     f0, f0, f1
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  fmuls     f4, f4, f0

.loc_0x98:
  lwz       r3, 0xC0(r31)
  lfs       f0, 0x2E4(r31)
  lfs       f1, 0x8BC(r3)
  fmuls     f2, f2, f1
  fmuls     f3, f3, f1
  fmuls     f4, f4, f1
  fadds     f0, f0, f2
  stfs      f0, 0x2E4(r31)
  lfs       f0, 0x2E8(r31)
  fadds     f0, f0, f3
  stfs      f0, 0x2E8(r31)
  lfs       f0, 0x2EC(r31)
  fadds     f0, f0, f4
  stfs      f0, 0x2EC(r31)
  lfs       f7, 0x2E8(r31)
  lfs       f6, 0x2D8(r31)
  lfs       f5, 0x2EC(r31)
  lfs       f1, 0x2DC(r31)
  fmuls     f0, f7, f6
  lfs       f8, 0x2E4(r31)
  lfs       f4, 0x2E0(r31)
  fmuls     f3, f5, f1
  fmsubs    f2, f8, f1, f0
  fmuls     f1, f8, f4
  fmsubs    f0, f7, f4, f3
  fmuls     f3, f2, f7
  fmsubs    f1, f5, f6, f1
  fmuls     f4, f0, f5
  fmsubs    f5, f1, f5, f3
  fmuls     f3, f1, f8
  fmsubs    f4, f2, f8, f4
  stfs      f5, 0x2D8(r31)
  fmsubs    f3, f0, f7, f3
  stfs      f4, 0x2DC(r31)
  stfs      f3, 0x2E0(r31)
  b         .loc_0x1D8

.loc_0x128:
  lfs       f1, 0x2CC(r31)
  lfs       f0, 0x2D8(r31)
  lwz       r3, 0xC0(r31)
  fsubs     f5, f1, f0
  lfs       f0, 0x2D8(r31)
  lfs       f4, 0x8BC(r3)
  lfs       f3, 0x2D0(r31)
  fmuls     f5, f5, f4
  lfs       f1, 0x2DC(r31)
  lfs       f2, 0x2D4(r31)
  fsubs     f3, f3, f1
  lfs       f1, 0x2E0(r31)
  fadds     f0, f0, f5
  fsubs     f1, f2, f1
  fmuls     f3, f3, f4
  stfs      f0, 0x2D8(r31)
  fmuls     f1, f1, f4
  lfs       f0, 0x2DC(r31)
  fadds     f0, f0, f3
  stfs      f0, 0x2DC(r31)
  lfs       f0, 0x2E0(r31)
  fadds     f0, f0, f1
  stfs      f0, 0x2E0(r31)
  lfs       f6, 0x2E0(r31)
  lfs       f3, 0x2E4(r31)
  lfs       f5, 0x2E8(r31)
  lfs       f7, 0x2D8(r31)
  fmuls     f1, f3, f6
  lfs       f2, 0x2EC(r31)
  lfs       f8, 0x2DC(r31)
  fmuls     f0, f5, f7
  fmsubs    f1, f2, f7, f1
  fmuls     f4, f2, f8
  fmsubs    f2, f3, f8, f0
  fmuls     f3, f6, f1
  fmsubs    f0, f5, f6, f4
  fmuls     f4, f7, f2
  fmsubs    f5, f8, f2, f3
  fmuls     f3, f8, f0
  fmsubs    f4, f6, f0, f4
  stfs      f5, 0x2E4(r31)
  fmsubs    f3, f7, f1, f3
  stfs      f4, 0x2E8(r31)
  stfs      f3, 0x2EC(r31)

.loc_0x1D8:
  lfs       f5, 0x2D8(r31)
  lfs       f4, 0x2DC(r31)
  fmuls     f3, f5, f5
  lfs       f6, 0x2E0(r31)
  fmuls     f7, f4, f4
  lfs       f4, -0x1FA0(r2)
  fmuls     f6, f6, f6
  fadds     f3, f3, f7
  fadds     f3, f6, f3
  fcmpo     cr0, f3, f4
  ble-      .loc_0x220
  fmadds    f3, f5, f5, f7
  fadds     f5, f6, f3
  fcmpo     cr0, f5, f4
  ble-      .loc_0x224
  fsqrte    f3, f5
  fmuls     f5, f3, f5
  b         .loc_0x224

.loc_0x220:
  fmr       f5, f4

.loc_0x224:
  lfs       f3, -0x1FA0(r2)
  fcmpo     cr0, f5, f3
  ble-      .loc_0x25C
  lfs       f4, -0x1F9C(r2)
  lfs       f3, 0x2D8(r31)
  fdivs     f4, f4, f5
  fmuls     f3, f3, f4
  stfs      f3, 0x2D8(r31)
  lfs       f3, 0x2DC(r31)
  fmuls     f3, f3, f4
  stfs      f3, 0x2DC(r31)
  lfs       f3, 0x2E0(r31)
  fmuls     f3, f3, f4
  stfs      f3, 0x2E0(r31)

.loc_0x25C:
  fmuls     f4, f1, f1
  lfs       f3, -0x1FA0(r2)
  fmuls     f5, f2, f2
  fmadds    f4, f0, f0, f4
  fadds     f4, f5, f4
  fcmpo     cr0, f4, f3
  ble-      .loc_0x288
  ble-      .loc_0x28C
  fsqrte    f3, f4
  fmuls     f4, f3, f4
  b         .loc_0x28C

.loc_0x288:
  fmr       f4, f3

.loc_0x28C:
  lfs       f3, -0x1FA0(r2)
  fcmpo     cr0, f4, f3
  ble-      .loc_0x2AC
  lfs       f3, -0x1F9C(r2)
  fdivs     f3, f3, f4
  fmuls     f0, f0, f3
  fmuls     f1, f1, f3
  fmuls     f2, f2, f3

.loc_0x2AC:
  lfs       f5, 0x2E4(r31)
  lfs       f4, 0x2E8(r31)
  fmuls     f3, f5, f5
  lfs       f6, 0x2EC(r31)
  fmuls     f7, f4, f4
  lfs       f4, -0x1FA0(r2)
  fmuls     f6, f6, f6
  fadds     f3, f3, f7
  fadds     f3, f6, f3
  fcmpo     cr0, f3, f4
  ble-      .loc_0x2F4
  fmadds    f3, f5, f5, f7
  fadds     f5, f6, f3
  fcmpo     cr0, f5, f4
  ble-      .loc_0x2F8
  fsqrte    f3, f5
  fmuls     f5, f3, f5
  b         .loc_0x2F8

.loc_0x2F4:
  fmr       f5, f4

.loc_0x2F8:
  lfs       f3, -0x1FA0(r2)
  fcmpo     cr0, f5, f3
  ble-      .loc_0x330
  lfs       f4, -0x1F9C(r2)
  lfs       f3, 0x2E4(r31)
  fdivs     f4, f4, f5
  fmuls     f3, f3, f4
  stfs      f3, 0x2E4(r31)
  lfs       f3, 0x2E8(r31)
  fmuls     f3, f3, f4
  stfs      f3, 0x2E8(r31)
  lfs       f3, 0x2EC(r31)
  fmuls     f3, f3, f4
  stfs      f3, 0x2EC(r31)

.loc_0x330:
  stfs      f0, 0x138(r31)
  stfs      f1, 0x148(r31)
  stfs      f2, 0x158(r31)
  lfs       f0, 0x2E4(r31)
  stfs      f0, 0x13C(r31)
  lfs       f0, 0x2E8(r31)
  stfs      f0, 0x14C(r31)
  lfs       f0, 0x2EC(r31)
  stfs      f0, 0x15C(r31)
  lfs       f0, 0x2D8(r31)
  stfs      f0, 0x140(r31)
  lfs       f0, 0x2DC(r31)
  stfs      f0, 0x150(r31)
  lfs       f0, 0x2E0(r31)
  stfs      f0, 0x160(r31)
  lbz       r0, 0x2C1(r31)
  cmplwi    r0, 0
  beq-      .loc_0x46C
  lbz       r0, 0x2C2(r31)
  lfs       f1, 0x18C(r31)
  lfs       f0, 0x190(r31)
  cmplwi    r0, 0
  lfs       f2, 0x194(r31)
  stfs      f1, 0x20(r1)
  stfs      f0, 0x24(r1)
  stfs      f2, 0x28(r1)
  beq-      .loc_0x430
  lfs       f4, 0x300(r31)
  li        r0, 0
  lfs       f5, 0x304(r31)
  fsubs     f6, f1, f4
  lfs       f0, -0x1FA0(r2)
  fsubs     f7, f2, f5
  fcmpo     cr0, f6, f0
  ble-      .loc_0x3C4
  fmr       f2, f6
  b         .loc_0x3C8

.loc_0x3C4:
  fneg      f2, f6

.loc_0x3C8:
  lfs       f0, -0x1FA0(r2)
  fcmpo     cr0, f7, f0
  ble-      .loc_0x3DC
  fmr       f3, f7
  b         .loc_0x3E0

.loc_0x3DC:
  fneg      f3, f7

.loc_0x3E0:
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x894(r3)
  fcmpo     cr0, f2, f1
  ble-      .loc_0x400
  fdivs     f0, f6, f2
  li        r0, 0x1
  fmadds    f0, f0, f1, f4
  stfs      f0, 0x20(r1)

.loc_0x400:
  lfs       f1, 0x894(r3)
  fcmpo     cr0, f3, f1
  ble-      .loc_0x41C
  fdivs     f0, f7, f3
  li        r0, 0x1
  fmadds    f0, f0, f1, f5
  stfs      f0, 0x28(r1)

.loc_0x41C:
  stb       r0, 0x2C1(r31)
  lfs       f1, 0x20(r1)
  lfs       f0, 0x28(r1)
  stfs      f1, 0x300(r31)
  stfs      f0, 0x304(r31)

.loc_0x430:
  lwz       r0, 0x20(r1)
  li        r4, 0x1
  lwz       r3, 0x24(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0x18(r1)
  lfs       f0, 0x14(r1)
  stb       r4, 0x2C2(r31)
  lfs       f1, 0x18(r1)
  stw       r0, 0x1C(r1)
  stfs      f0, 0x144(r31)
  lfs       f0, 0x1C(r1)
  stfs      f1, 0x154(r31)
  stfs      f0, 0x164(r31)
  b         .loc_0x49C

.loc_0x46C:
  lwz       r0, 0x18C(r31)
  lwz       r3, 0x190(r31)
  stw       r0, 0x8(r1)
  lwz       r0, 0x194(r31)
  stw       r3, 0xC(r1)
  lfs       f0, 0x8(r1)
  stw       r0, 0x10(r1)
  lfs       f1, 0xC(r1)
  stfs      f0, 0x144(r31)
  lfs       f0, 0x10(r1)
  stfs      f1, 0x154(r31)
  stfs      f0, 0x164(r31)

.loc_0x49C:
  lis       r3, 0x8051
  lfs       f1, 0x2D8(r31)
  lfs       f2, 0x2E0(r31)
  subi      r3, r3, 0x2E20
  bl        -0x287778
  stfs      f1, 0x1FC(r31)
  lfs       f0, 0x1FC(r31)
  stfs      f0, 0x1A8(r31)
  lwz       r31, 0x3C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	802BC8A4
 * Size:	000004
 */
void doDirectDraw__Q34Game8Imomushi3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802BC8A8
 * Size:	000020
 */
void doDebugDraw__Q34Game8Imomushi3ObjFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x1B6A48
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BC8C8
 * Size:	00004C
 */
void setFSM__Q34Game8Imomushi3ObjFPQ34Game8Imomushi3FSM(void)
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
 * Address:	802BC914
 * Size:	0000D0
 */
void getShadowParam__Q34Game8Imomushi3ObjFRQ24Game11ShadowParam(void)
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
  lis       r3, 0x8049
  subi      r0, r3, 0x53D0
  lwz       r3, 0x174(r30)
  mr        r4, r0
  bl        0x1826A4
  bl        0x16CF5C
  lfs       f4, 0x2C(r3)
  lfs       f3, 0x1C(r3)
  lfs       f0, 0xC(r3)
  mr        r3, r30
  lfs       f2, -0x1F98(r2)
  stfs      f0, 0x0(r31)
  lfs       f1, -0x1FA0(r2)
  stfs      f3, 0x4(r31)
  lfs       f0, -0x1F9C(r2)
  stfs      f4, 0x8(r31)
  lfs       f3, 0x4(r31)
  fsubs     f2, f3, f2
  stfs      f2, 0x4(r31)
  stfs      f1, 0xC(r31)
  stfs      f0, 0x10(r31)
  stfs      f1, 0x14(r31)
  bl        -0x11D414
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x90
  lfs       f0, -0x1F94(r2)
  stfs      f0, 0x18(r31)
  stfs      f0, 0x1C(r31)
  b         .loc_0xB8

.loc_0x90:
  lwz       r0, 0x1E4(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xA8
  lfs       f0, -0x1F90(r2)
  stfs      f0, 0x18(r31)
  b         .loc_0xB0

.loc_0xA8:
  lfs       f0, -0x1F8C(r2)
  stfs      f0, 0x18(r31)

.loc_0xB0:
  lfs       f0, -0x1F88(r2)
  stfs      f0, 0x1C(r31)

.loc_0xB8:
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
 * Address:	802BC9E4
 * Size:	000064
 */
void earthquakeCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creaturef(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr        r31, r4
  stw       r30, 0x10(r1)
  mr        r30, r3
  bl        -0x11D494
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x38
  li        r3, 0
  b         .loc_0x48

.loc_0x38:
  fmr       f1, f31
  mr        r3, r30
  mr        r4, r31
  bl        -0x1B6664

.loc_0x48:
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCA48
 * Size:	000080
 */
void dropCallBack__Q34Game8Imomushi3ObjFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xF4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x68
  lwz       r0, 0x1E0(r31)
  rlwinm.   r0,r0,0,22,22
  bne-      .loc_0x68
  bl        -0x1B5680
  cmpwi     r3, 0x1
  beq-      .loc_0x40
  cmpwi     r3, 0x9
  bne-      .loc_0x68

.loc_0x40:
  lwz       r3, 0x2BC(r31)
  mr        r4, r31
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x6C

.loc_0x68:
  li        r3, 0

.loc_0x6C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCAC8
 * Size:	000034
 */
void doStartStoneState__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B9BE8
  mr        r3, r31
  bl        0xED8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCAFC
 * Size:	00004C
 */
void doFinishStoneState__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B9C08
  mr        r3, r31
  bl        -0x1B5724
  cmpwi     r3, 0x7
  beq-      .loc_0x30
  cmpwi     r3, 0x8
  bne-      .loc_0x38

.loc_0x30:
  mr        r3, r31
  bl        0xE08

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCB48
 * Size:	000034
 */
void doStartEarthquakeState__Q34Game8Imomushi3ObjFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B5290
  mr        r3, r31
  bl        0xE58
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCB7C
 * Size:	00004C
 */
void doFinishEarthquakeState__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B5230
  mr        r3, r31
  bl        -0x1B57A4
  cmpwi     r3, 0x7
  beq-      .loc_0x30
  cmpwi     r3, 0x8
  bne-      .loc_0x38

.loc_0x30:
  mr        r3, r31
  bl        0xD88

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCBC8
 * Size:	000034
 */
void doStartEarthquakeFitState__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B5278
  mr        r3, r31
  bl        0xDD8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCBFC
 * Size:	00004C
 */
void doFinishEarthquakeFitState__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1B52A8
  mr        r3, r31
  bl        -0x1B5824
  cmpwi     r3, 0x7
  beq-      .loc_0x30
  cmpwi     r3, 0x8
  bne-      .loc_0x38

.loc_0x30:
  mr        r3, r31
  bl        0xD08

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCC48
 * Size:	000028
 */
void startCarcassMotion__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x8
  li        r5, 0
  stw       r0, 0x14(r1)
  bl        -0x1B7C58
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCC70
 * Size:	000020
 */
void doStartMovie__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0xDC0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCC90
 * Size:	000020
 */
void doEndMovie__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0xD50
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCCB0
 * Size:	000024
 */
void lifeIncrement__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f0, -0x1FA0(r2)
  stfs      f0, 0x208(r3)
  lwz       r0, 0x1E0(r3)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x1E0(r3)
  lwz       r4, 0xC0(r3)
  lfs       f0, 0x104(r4)
  stfs      f0, 0x200(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCCD4
 * Size:	0000AC
 */
void resetZukanStateTimer__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  bl        -0x1F3750
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  stw       r0, 0x8(r1)
  lfd       f2, -0x1F78(r2)
  lfd       f0, 0x8(r1)
  lfs       f1, -0x1F84(r2)
  fsubs     f2, f0, f2
  lfs       f0, -0x1F80(r2)
  lwz       r12, 0x1AC(r12)
  fmuls     f1, f1, f2
  fdivs     f31, f1, f0
  mtctr     r12
  bctrl     
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  lfd       f3, -0x1F78(r2)
  stw       r0, 0x10(r1)
  lfs       f1, -0x1F84(r2)
  lfd       f2, 0x10(r1)
  lfs       f0, -0x1F98(r2)
  fsubs     f2, f2, f3
  fmadds    f1, f1, f2, f31
  fsubs     f0, f0, f1
  stfs      f0, 0x2C8(r31)
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCD80
 * Size:	000010
 */
void resetStickDiff__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x2C2(r3)
  stb       r0, 0x2C1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCD90
 * Size:	00001C
 */
void setStickDiff__Q34Game8Imomushi3ObjFff(void)
{
/*
.loc_0x0:
  li        r4, 0x1
  li        r0, 0
  stb       r4, 0x2C1(r3)
  stb       r0, 0x2C2(r3)
  stfs      f1, 0x300(r3)
  stfs      f2, 0x304(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802BCDAC
 * Size:	00031C
 */
void getRandFruitsPlant__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0xE0(r1)
  mflr      r0
  stw       r0, 0xE4(r1)
  stfd      f31, 0xD0(r1)
  psq_st    f31,0xD8(r1),0,0
  stw       r31, 0xCC(r1)
  stw       r30, 0xC8(r1)
  stw       r29, 0xC4(r1)
  stw       r28, 0xC0(r1)
  mr        r30, r3
  lwz       r3, -0x6B88(r13)
  lwz       r4, 0xC0(r30)
  li        r31, 0
  cmplwi    r3, 0
  lfs       f0, 0x35C(r4)
  fmuls     f31, f0, f0
  beq-      .loc_0x48
  addi      r3, r3, 0x30

.loc_0x48:
  li        r0, 0
  lis       r4, 0x804B
  addi      r4, r4, 0x560
  stw       r0, 0x20(r1)
  cmplwi    r0, 0
  stw       r4, 0x14(r1)
  stw       r0, 0x18(r1)
  stw       r3, 0x1C(r1)
  bne-      .loc_0x84
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x10C

.loc_0x84:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0xF0

.loc_0x9C:
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
  bne-      .loc_0x10C
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0xF0:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x9C

.loc_0x10C:
  addi      r29, r1, 0x24
  b         .loc_0x26C

.loc_0x114:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r0, r3
  mr        r28, r0
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x224(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0
  mr        r4, r28
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x1A0(r30)
  lfs       f0, 0x10(r1)
  lfs       f2, 0x198(r30)
  fsubs     f1, f1, f0
  lfs       f0, 0x8(r1)
  fsubs     f2, f2, f0
  fmuls     f0, f1, f1
  fmadds    f0, f2, f2, f0
  fcmpo     cr0, f0, f31
  bge-      .loc_0x1B0
  stw       r28, 0x0(r29)
  addi      r29, r29, 0x4
  addi      r31, r31, 0x1

.loc_0x1B0:
  lwz       r0, 0x20(r1)
  cmplwi    r0, 0
  bne-      .loc_0x1DC
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x26C

.loc_0x1DC:
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  b         .loc_0x250

.loc_0x1FC:
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
  bne-      .loc_0x26C
  lwz       r3, 0x1C(r1)
  lwz       r4, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)

.loc_0x250:
  lwz       r12, 0x14(r1)
  addi      r3, r1, 0x14
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1FC

.loc_0x26C:
  lwz       r3, 0x1C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x18(r1)
  cmplw     r4, r3
  bne+      .loc_0x114
  cmpwi     r31, 0
  beq-      .loc_0x2F0
  bl        -0x1F3AA0
  lis       r4, 0x4330
  xoris     r0, r3, 0x8000
  stw       r0, 0xAC(r1)
  xoris     r0, r31, 0x8000
  lfd       f2, -0x1F78(r2)
  addi      r3, r1, 0x24
  stw       r4, 0xA8(r1)
  lfs       f0, -0x1F80(r2)
  lfd       f1, 0xA8(r1)
  stw       r0, 0xB4(r1)
  fsubs     f1, f1, f2
  stw       r4, 0xB0(r1)
  fdivs     f1, f1, f0
  lfd       f0, 0xB0(r1)
  fsubs     f0, f0, f2
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0xB8(r1)
  lwz       r0, 0xBC(r1)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  b         .loc_0x2F4

.loc_0x2F0:
  li        r3, 0

.loc_0x2F4:
  psq_l     f31,0xD8(r1),0,0
  lwz       r0, 0xE4(r1)
  lfd       f31, 0xD0(r1)
  lwz       r31, 0xCC(r1)
  lwz       r30, 0xC8(r1)
  lwz       r29, 0xC4(r1)
  lwz       r28, 0xC0(r1)
  mtlr      r0
  addi      r1, r1, 0xE0
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD0C8
 * Size:	0000C8
 */
void startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart(void)
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
  bl        -0x11DCC0
  cmplwi    r31, 0
  beq-      .loc_0xB0
  lwz       r4, 0x230(r30)
  mr        r3, r30
  mr        r5, r31
  bl        -0x11E208
  mr        r3, r31
  addi      r4, r1, 0x8
  bl        -0x184E90
  addi      r3, r1, 0x8
  addi      r4, r30, 0x2CC
  bl        0x158990
  lfs       f1, 0xC(r1)
  lfs       f0, 0x18(r1)
  lfs       f3, 0x8(r1)
  fsubs     f4, f1, f0
  lfs       f2, 0x14(r1)
  lfs       f1, 0x10(r1)
  lfs       f0, 0x1C(r1)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, -0x1FA0(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0xA0
  ble-      .loc_0xA4
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xA4

.loc_0xA0:
  fmr       f1, f0

.loc_0xA4:
  lfs       f0, -0x1F9C(r2)
  fdivs     f0, f0, f1
  stfs      f0, 0x2FC(r30)

.loc_0xB0:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void startAttackPlant__Q34Game8Imomushi3ObjFP8CollPart(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802BD190
 * Size:	000030
 */
void moveStickTube__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  lwz       r4, 0xC0(r3)
  lfs       f1, 0x2CC(r3)
  lfs       f0, 0x81C(r4)
  lfs       f2, 0x2D0(r3)
  fmuls     f1, f1, f0
  lfs       f3, 0x2D4(r3)
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  stfs      f1, 0x1D4(r3)
  stfs      f2, 0x1D8(r3)
  stfs      f3, 0x1DC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD1C0
 * Size:	0000CC
 */
void moveStickSphere__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0xF4(r3)
  lwz       r30, 0xF8(r3)
  bl        -0x11DDC0
  lwz       r4, 0xC0(r29)
  mr        r3, r29
  lfs       f1, 0x2D8(r29)
  lfs       f0, 0x844(r4)
  lfs       f2, 0x2DC(r29)
  fmuls     f1, f1, f0
  lfs       f3, 0x2E0(r29)
  fmuls     f2, f2, f0
  fmuls     f3, f3, f0
  stfs      f1, 0x1D4(r29)
  stfs      f2, 0x1D8(r29)
  stfs      f3, 0x1DC(r29)
  lwz       r12, 0x0(r29)
  lwz       r4, -0x6514(r13)
  lwz       r12, 0x1FC(r12)
  lfs       f1, 0x54(r4)
  mtctr     r12
  bctrl     
  lfs       f1, 0x18C(r29)
  mr        r3, r29
  lfs       f0, 0x1C8(r29)
  mr        r4, r31
  mr        r5, r30
  fadds     f0, f1, f0
  stfs      f0, 0x18C(r29)
  lfs       f1, 0x190(r29)
  lfs       f0, 0x1CC(r29)
  fadds     f0, f1, f0
  stfs      f0, 0x190(r29)
  lfs       f1, 0x194(r29)
  lfs       f0, 0x1D0(r29)
  fadds     f0, f1, f0
  stfs      f0, 0x194(r29)
  bl        -0x11E378
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD28C
 * Size:	00019C
 */
void eatTsuyukusa__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  mr        r30, r3
  lwz       r3, 0xF4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x184
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x224(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  mr        r3, r31
  addi      r4, r30, 0x18C
  lwz       r12, 0x0(r31)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x12C
  lhz       r0, 0x43E(r3)
  cmplwi    r0, 0
  bne-      .loc_0xDC
  lis       r4, 0x804B
  lis       r3, 0x804D
  subi      r4, r4, 0x5814
  li        r0, 0
  stw       r4, 0x28(r1)
  addi      r3, r3, 0x8F8
  addi      r4, r1, 0x28
  lfs       f0, 0x18C(r30)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0x190(r30)
  stfs      f0, 0x30(r1)
  lfs       f0, 0x194(r30)
  stfs      f0, 0x34(r1)
  stw       r3, 0x28(r1)
  stw       r0, 0x38(r1)
  lwz       r3, 0x308(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x12C

.loc_0xDC:
  lis       r4, 0x804B
  lis       r3, 0x804D
  subi      r4, r4, 0x5814
  li        r0, 0x1
  stw       r4, 0x14(r1)
  addi      r3, r3, 0x8F8
  addi      r4, r1, 0x14
  lfs       f0, 0x18C(r30)
  stfs      f0, 0x18(r1)
  lfs       f0, 0x190(r30)
  stfs      f0, 0x1C(r1)
  lfs       f0, 0x194(r30)
  stfs      f0, 0x20(r1)
  stw       r3, 0x14(r1)
  stw       r0, 0x24(r1)
  lwz       r3, 0x308(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x12C:
  lwz       r3, 0xC0(r30)
  lfs       f1, 0x2C8(r30)
  lfs       f0, 0x86C(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x184
  lis       r4, 0x804B
  lis       r3, 0x804B
  subi      r4, r4, 0x5D00
  li        r0, 0x2
  stw       r4, 0x8(r1)
  addi      r5, r3, 0x229C
  mr        r3, r31
  addi      r4, r1, 0x8
  stw       r30, 0xC(r1)
  stw       r5, 0x8(r1)
  stw       r0, 0x10(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x1FA0(r2)
  stfs      f0, 0x2C8(r30)

.loc_0x184:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD428
 * Size:	000074
 */
void isAttackable__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r3, 0x230(r3)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  mr        r31, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x224(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  li        r3, 0x1
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD49C
 * Size:	00004C
 */
void isStickToFall__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0xF4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x38
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x38
  li        r3, 0x1
  b         .loc_0x3C

.loc_0x38:
  li        r3, 0

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD4E8
 * Size:	000188
 */
void setZukanTargetPosition__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  bl        -0x1F3F6C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lis       r3, 0x8051
  lfd       f2, -0x1F78(r2)
  subi      r3, r3, 0x2E20
  stw       r0, 0x8(r1)
  lfs       f0, -0x1F70(r2)
  lfd       f1, 0x8(r1)
  lfs       f5, -0x1F80(r2)
  fsubs     f2, f1, f2
  lfs       f3, 0x18C(r31)
  lfs       f1, 0x198(r31)
  lfs       f4, -0x1F90(r2)
  fmuls     f6, f0, f2
  lfs       f2, 0x194(r31)
  fsubs     f1, f3, f1
  lfs       f0, 0x1A0(r31)
  fdivs     f3, f6, f5
  fadds     f31, f4, f3
  fsubs     f2, f2, f0
  bl        -0x28845C
  fmr       f30, f1
  bl        -0x1F3FCC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x14(r1)
  lfd       f2, -0x1F78(r2)
  stw       r0, 0x10(r1)
  lfs       f3, -0x1F6C(r2)
  lfd       f0, 0x10(r1)
  lfs       f1, -0x1F80(r2)
  fsubs     f4, f0, f2
  lfs       f2, -0x1F68(r2)
  lfs       f0, -0x1FA0(r2)
  fmuls     f3, f3, f4
  fdivs     f1, f3, f1
  fadds     f1, f30, f1
  fadds     f5, f2, f1
  fmr       f1, f5
  fcmpo     cr0, f5, f0
  bge-      .loc_0xD4
  fneg      f1, f5

.loc_0xD4:
  lfs       f3, -0x1F64(r2)
  lis       r3, 0x8050
  lfs       f0, -0x1FA0(r2)
  addi      r4, r3, 0x71A0
  fmuls     f2, f1, f3
  lfs       f1, 0x1A0(r31)
  fcmpo     cr0, f5, f0
  lfs       f4, 0x19C(r31)
  fctiwz    f0, f2
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmadds    f2, f31, f0, f1
  bge-      .loc_0x138
  lfs       f0, -0x1F60(r2)
  fmuls     f0, f5, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f1, f0
  b         .loc_0x150

.loc_0x138:
  fmuls     f0, f5, f3
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r4, r0

.loc_0x150:
  lfs       f0, 0x198(r31)
  fmadds    f0, f31, f1, f0
  stfs      f0, 0x2F0(r31)
  stfs      f4, 0x2F4(r31)
  stfs      f2, 0x2F8(r31)
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lwz       r0, 0x64(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD670
 * Size:	000034
 */
void isInZukanTargetArea__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x194(r3)
  lfs       f0, 0x2F8(r3)
  lfs       f2, 0x18C(r3)
  fsubs     f3, f1, f0
  lfs       f1, 0x2F0(r3)
  lfs       f0, -0x1F5C(r2)
  fsubs     f2, f2, f1
  fmuls     f1, f3, f3
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD6A4
 * Size:	00013C
 */
void createEffect__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x14
  bl        -0x299818
  cmplwi    r3, 0
  beq-      .loc_0x98
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
  lis       r4, 0x804E
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x6ECC
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  li        r5, 0xB6
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

.loc_0x98:
  stw       r3, 0x308(r31)
  li        r3, 0x14
  bl        -0x2998A0
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
  addi      r8, r4, 0x6940
  lis       r4, 0x804E
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x6E58
  li        r10, 0
  li        r9, 0x2B2
  stw       r0, 0x4(r3)
  addi      r7, r8, 0x14
  addi      r6, r31, 0x18C
  li        r5, 0xB8
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

.loc_0x124:
  stw       r3, 0x30C(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD7E0
 * Size:	000040
 */
void setupEffect__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r4, r2, 0x1F58
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x174(r3)
  bl        0x1817E8
  bl        0x16C0A0
  lwz       r4, 0x308(r31)
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
 * Address:	802BD820
 * Size:	00008C
 */
void createAppearEffect__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x24(r1)
  subi      r4, r4, 0x53C4
  lwz       r3, 0x174(r3)
  bl        0x1817AC
  bl        0x16C064
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x1CE
  li        r5, 0x1CF
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6EA4
  li        r4, 0
  stw       r3, 0x18(r1)
  addi      r3, r1, 0x8
  sth       r7, 0xC(r1)
  sth       r5, 0xE(r1)
  stw       r6, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x8(r1)
  bl        0xF5EF0
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD8AC
 * Size:	00008C
 */
void createDisAppearEffect__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x24(r1)
  subi      r4, r4, 0x53C4
  lwz       r3, 0x174(r3)
  bl        0x181720
  bl        0x16BFD8
  lis       r4, 0x804B
  li        r6, 0
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6A64
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x8(r1)
  addi      r0, r5, 0x6A00
  li        r7, 0x1D1
  li        r5, 0x1D2
  stw       r0, 0x8(r1)
  addi      r0, r4, 0x6EB8
  li        r4, 0
  stw       r3, 0x18(r1)
  addi      r3, r1, 0x8
  sth       r7, 0xC(r1)
  sth       r5, 0xE(r1)
  stw       r6, 0x10(r1)
  stw       r6, 0x14(r1)
  stw       r0, 0x8(r1)
  bl        0xF5DF0
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD938
 * Size:	000084
 */
void startMoveTraceEffect__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x804B
  lis       r4, 0x804B
  stw       r0, 0x34(r1)
  subi      r0, r4, 0x5D24
  subi      r5, r5, 0x5814
  lfs       f0, -0x1F9C(r2)
  lwz       r8, 0x18C(r3)
  addi      r4, r1, 0x14
  lwz       r7, 0x190(r3)
  lwz       r6, 0x194(r3)
  stw       r8, 0x8(r1)
  stw       r7, 0xC(r1)
  lfs       f3, 0x8(r1)
  stw       r6, 0x10(r1)
  lfs       f2, 0xC(r1)
  stw       r5, 0x14(r1)
  lfs       f1, 0x10(r1)
  stfs      f3, 0x18(r1)
  stfs      f2, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stw       r0, 0x14(r1)
  stfs      f0, 0x24(r1)
  lwz       r3, 0x30C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	802BD9BC
 * Size:	000030
 */
void finishMoveTraceEffect__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x30C(r3)
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
 * Address:	802BD9EC
 * Size:	000050
 */
void effectDrawOn__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x308(r3)
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
 * Address:	802BDA3C
 * Size:	000050
 */
void effectDrawOff__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x308(r3)
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
 * Address:	802BDA8C
 * Size:	00000C
 */
void getName__Q23efx9ArgImoEatFv(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  subi      r3, r3, 0x53B8
  blr
*/
}

/*
 * --INFO--
 * Address:	802BDA98
 * Size:	000008
 */
void isUnderground__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  lbz       r3, 0x2C0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	802BDAA0
 * Size:	000008
 */
void getDownSmokeScale__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  lfs       f1, -0x1F50(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	802BDAA8
 * Size:	000008
 */
void getEnemyTypeID__Q34Game8Imomushi3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0x41
  blr
*/
}