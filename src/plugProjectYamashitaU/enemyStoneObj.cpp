

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
 * Address:	80129B30
 * Size:	0000A8
 */
void __ct__Q34Game10EnemyStone3ObjFPQ24Game9EnemyBasePQ34Game10EnemyStone4Info(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0x2E783C
  lis       r3, 0x804B
  lis       r4, 0x8041
  subi      r0, r3, 0x21FC
  li        r6, 0x18
  stw       r0, 0x0(r29)
  lis       r3, 0x8041
  addi      r5, r3, 0x1588
  addi      r4, r4, 0x1390
  stw       r31, 0x18(r29)
  addi      r3, r29, 0x1C
  li        r7, 0x2
  bl        -0x68348
  stw       r30, 0x4C(r29)
  li        r0, 0
  mr        r3, r29
  stb       r0, 0x50(r29)
  stb       r0, 0x50(r29)
  stw       r0, 0x2C(r29)
  stw       r0, 0x28(r29)
  stw       r0, 0x24(r29)
  stw       r0, 0x20(r29)
  stw       r0, 0x44(r29)
  stw       r0, 0x40(r29)
  stw       r0, 0x3C(r29)
  stw       r0, 0x38(r29)
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
 * Address:	80129BD8
 * Size:	000104
 */
void start__Q34Game10EnemyStone3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r0, 0
  stb       r0, 0x50(r3)
  mr        r4, r28
  li        r31, 0
  lwz       r3, -0x6E20(r13)
  addi      r3, r3, 0x58
  bl        -0x1E00
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD0
  lbz       r3, 0x50(r28)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  mr        r31, r28
  ori       r0, r3, 0x20
  lfd       f1, -0x6320(r2)
  stb       r0, 0x50(r28)
  li        r30, 0
  lfs       f2, -0x6324(r2)
  lwz       r3, 0x18(r28)
  lfs       f31, -0x6328(r2)
  lbz       r0, 0x0(r3)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fdivs     f30, f2, f0

.loc_0x94:
  lwz       r3, 0x2C(r31)
  b         .loc_0xB4

.loc_0x9C:
  fmr       f1, f31
  lwz       r29, 0x4(r3)
  lwz       r4, 0x4C(r28)
  bl        -0x4A0
  fsubs     f31, f31, f30
  mr        r3, r29

.loc_0xB4:
  cmplwi    r3, 0
  bne+      .loc_0x9C
  addi      r30, r30, 0x1
  addi      r31, r31, 0x18
  cmpwi     r30, 0x2
  blt+      .loc_0x94
  li        r31, 0x1

.loc_0xD0:
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x44(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void finish__Q34Game10EnemyStone3ObjFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80129CDC
 * Size:	0000E0
 */
void shake__Q34Game10EnemyStone3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lbz       r3, 0x50(r3)
  rlwinm.   r0,r3,0,28,28
  bne-      .loc_0xB0
  ori       r3, r3, 0x8
  lis       r0, 0x4330
  stb       r3, 0x50(r28)
  mr        r31, r28
  lfd       f1, -0x6320(r2)
  li        r30, 0
  lwz       r3, 0x18(r28)
  stw       r0, 0x8(r1)
  lbz       r0, 0x0(r3)
  lfs       f2, -0x6324(r2)
  stw       r0, 0xC(r1)
  lfs       f31, -0x6328(r2)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fdivs     f30, f2, f0

.loc_0x78:
  lwz       r3, 0x2C(r31)
  b         .loc_0x98

.loc_0x80:
  fmr       f1, f31
  lwz       r29, 0x4(r3)
  lwz       r4, 0x4C(r28)
  bl        -0x4F0
  fsubs     f31, f31, f30
  mr        r3, r29

.loc_0x98:
  cmplwi    r3, 0
  bne+      .loc_0x80
  addi      r30, r30, 0x1
  addi      r31, r31, 0x18
  cmpwi     r30, 0x2
  blt+      .loc_0x78

.loc_0xB0:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x44(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void updateDrawInfo__Q34Game10EnemyStone3ObjFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void fitDrawInfo__Q34Game10EnemyStone3ObjFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void disappearDrawInfo__Q34Game10EnemyStone3ObjFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80129DBC
 * Size:	0002A8
 */
void update__Q34Game10EnemyStone3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  mr        r31, r3
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  li        r29, 0
  stw       r28, 0x50(r1)
  mr        r28, r31

.loc_0x28:
  lwz       r3, 0x2C(r28)
  b         .loc_0x40

.loc_0x30:
  lwz       r30, 0x4(r3)
  lwz       r4, 0x4C(r31)
  bl        -0x820
  mr        r3, r30

.loc_0x40:
  cmplwi    r3, 0
  bne+      .loc_0x30
  addi      r29, r29, 0x1
  addi      r28, r28, 0x18
  cmpwi     r29, 0x2
  blt+      .loc_0x28
  lbz       r3, 0x50(r31)
  rlwinm.   r0,r3,0,30,30
  bne-      .loc_0xE0
  lwz       r3, 0x4C(r31)
  li        r4, 0x50B0
  li        r5, 0
  lwz       r3, 0x28C(r3)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x2
  bl        .loc_0x2A8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x288
  lbz       r0, 0x50(r31)
  mr        r28, r31
  li        r30, 0
  ori       r0, r0, 0x2
  stb       r0, 0x50(r31)

.loc_0xAC:
  lwz       r3, 0x2C(r28)
  b         .loc_0xC4

.loc_0xB4:
  lwz       r29, 0x4(r3)
  lwz       r4, 0x4C(r31)
  bl        -0x64C
  mr        r3, r29

.loc_0xC4:
  cmplwi    r3, 0
  bne+      .loc_0xB4
  addi      r30, r30, 0x1
  addi      r28, r28, 0x18
  cmpwi     r30, 0x2
  blt+      .loc_0xAC
  b         .loc_0x288

.loc_0xE0:
  rlwinm.   r0,r3,0,29,29
  bne-      .loc_0x1F8
  mr        r3, r31
  li        r4, 0x4
  bl        .loc_0x2A8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x288
  lbz       r0, 0x50(r31)
  ori       r0, r0, 0x4
  stb       r0, 0x50(r31)
  lwz       r3, -0x6C18(r13)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0
  bne-      .loc_0x288
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x288
  lwz       r3, -0x6B70(r13)
  li        r4, 0xB
  bl        0xBD4F8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x288
  lwz       r0, -0x64AC(r13)
  cmplwi    r0, 0
  beq-      .loc_0x288
  lfs       f0, -0x6328(r2)
  lis       r4, 0x8048
  li        r0, 0
  addi      r3, r1, 0x8
  subi      r4, r4, 0x40E8
  stw       r0, 0x18(r1)
  stw       r4, 0x14(r1)
  stw       r0, 0x20(r1)
  stfs      f0, 0x2C(r1)
  stfs      f0, 0x30(r1)
  stfs      f0, 0x34(r1)
  stfs      f0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x44(r1)
  lwz       r4, 0x4C(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x38(r1)
  addi      r4, r1, 0x14
  lwz       r3, -0x64AC(r13)
  lwz       r0, 0x4C(r31)
  stw       r0, 0x194(r3)
  lwz       r3, -0x64AC(r13)
  bl        0x302A30
  lwz       r3, -0x6B70(r13)
  li        r4, 0xB
  bl        0xBD3F8
  b         .loc_0x288

.loc_0x1F8:
  rlwinm.   r0,r3,0,28,28
  beq-      .loc_0x288
  mr        r3, r31
  li        r4, 0x6
  bl        .loc_0x2A8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x288
  li        r30, 0
  mr        r28, r31

.loc_0x21C:
  lwz       r3, 0x2C(r28)
  b         .loc_0x234

.loc_0x224:
  lwz       r29, 0x4(r3)
  lwz       r4, 0x4C(r31)
  bl        -0x724
  mr        r3, r29

.loc_0x234:
  cmplwi    r3, 0
  bne+      .loc_0x224
  addi      r30, r30, 0x1
  addi      r28, r28, 0x18
  cmpwi     r30, 0x2
  blt+      .loc_0x21C
  lwz       r3, 0x4C(r31)
  li        r4, 0x58B3
  li        r5, 0
  lwz       r3, 0x28C(r3)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x50(r31)
  mr        r4, r31
  ori       r0, r0, 0x10
  stb       r0, 0x50(r31)
  lwz       r3, -0x6E20(r13)
  addi      r3, r3, 0x58
  bl        -0x2128

.loc_0x288:
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  lwz       r28, 0x50(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr       

.loc_0x2A8:
*/
}

/*
 * --INFO--
 * Address:	8012A064
 * Size:	000088
 */
void checkDrawInfoState__Q34Game10EnemyStone3ObjFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r4

.loc_0x28:
  lwz       r3, 0x2C(r31)
  b         .loc_0x4C

.loc_0x30:
  lwz       r29, 0x4(r3)
  bl        -0x9D8
  cmpw      r28, r3
  beq-      .loc_0x48
  li        r3, 0
  b         .loc_0x68

.loc_0x48:
  mr        r3, r29

.loc_0x4C:
  cmplwi    r3, 0
  bne+      .loc_0x30
  addi      r30, r30, 0x1
  addi      r31, r31, 0x18
  cmpwi     r30, 0x2
  blt+      .loc_0x28
  li        r3, 0x1

.loc_0x68:
  lwz       r0, 0x24(r1)
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
 * Address:	8012A0EC
 * Size:	0000B4
 */
void dead__Q34Game10EnemyStone3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  mr        r31, r28

.loc_0x28:
  lwz       r3, 0x2C(r31)
  b         .loc_0x40

.loc_0x30:
  lwz       r29, 0x4(r3)
  lwz       r4, 0x4C(r28)
  bl        -0x814
  mr        r3, r29

.loc_0x40:
  cmplwi    r3, 0
  bne+      .loc_0x30
  addi      r30, r30, 0x1
  addi      r31, r31, 0x18
  cmpwi     r30, 0x2
  blt+      .loc_0x28
  lwz       r3, 0x4C(r28)
  li        r4, 0x58B3
  li        r5, 0
  lwz       r3, 0x28C(r3)
  lwz       r12, 0x28(r3)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x50(r28)
  mr        r4, r28
  ori       r0, r0, 0x10
  stb       r0, 0x50(r28)
  lwz       r3, -0x6E20(r13)
  addi      r3, r3, 0x58
  bl        -0x2264
  lwz       r0, 0x24(r1)
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
 * Address:	8012A1A0
 * Size:	00007C
 */
void __dt__Q34Game10EnemyStone3ObjFv(void)
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
  beq-      .loc_0x60
  lis       r3, 0x804B
  lis       r4, 0x8041
  subi      r0, r3, 0x21FC
  li        r5, 0x18
  stw       r0, 0x0(r30)
  addi      r3, r30, 0x1C
  addi      r4, r4, 0x1588
  li        r6, 0x2
  bl        -0x68A1C
  mr        r3, r30
  li        r4, 0
  bl        0x2E739C
  extsh.    r0, r31
  ble-      .loc_0x60
  mr        r3, r30
  bl        -0x106148

.loc_0x60:
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
 * Address:	8012A21C
 * Size:	000028
 */
void __sinit_enemyStoneObj_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6DC8(r13)
  stfsu     f0, -0x2208(r3)
  stfs      f0, -0x6DC4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}