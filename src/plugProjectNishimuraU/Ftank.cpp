

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
 * Address:	8029E484
 * Size:	0000A4
 */
void __ct__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x3C
  addi      r0, r31, 0x30C
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x30C(r31)
  stw       r0, 0x310(r31)
  stw       r0, 0x314(r31)

.loc_0x3C:
  mr        r3, r31
  li        r4, 0
  bl        -0x2873C
  lis       r3, 0x804D
  addi      r0, r31, 0x30C
  subi      r5, r3, 0x342C
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x328
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x2FC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8029E528
 * Size:	0001A4
 */
void changeMaterial__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  lwz       r3, 0x180(r3)
  lwz       r4, 0x174(r27)
  lwz       r12, 0x0(r3)
  lwz       r29, 0x8(r4)
  lwz       r12, 0xE0(r12)
  lwz       r30, 0x4(r29)
  mtctr     r12
  bctrl     
  mr        r31, r3
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x174(r27)
  lis       r3, 0x8051
  lbz       r0, 0x0(r31)
  subi      r27, r3, 0xDD0
  lwz       r3, 0x8(r4)
  li        r28, 0
  lwz       r3, 0x4(r3)
  lwz       r4, 0x6C(r3)
  lwz       r3, 0x4(r4)
  stb       r0, 0x0(r3)
  lbz       r0, 0x1(r31)
  stb       r0, 0x1(r3)
  lhz       r0, 0x2(r31)
  sth       r0, 0x2(r3)
  lhz       r0, 0x4(r31)
  sth       r0, 0x4(r3)
  lbz       r0, 0x6(r31)
  stb       r0, 0x6(r3)
  lbz       r0, 0x7(r31)
  stb       r0, 0x7(r3)
  lbz       r0, 0x8(r31)
  stb       r0, 0x8(r3)
  lbz       r0, 0x9(r31)
  stb       r0, 0x9(r3)
  lhz       r0, 0xA(r31)
  sth       r0, 0xA(r3)
  lwz       r0, 0xC(r31)
  stw       r0, 0xC(r3)
  lbz       r0, 0x10(r31)
  stb       r0, 0x10(r3)
  lbz       r0, 0x11(r31)
  stb       r0, 0x11(r3)
  lbz       r0, 0x12(r31)
  stb       r0, 0x12(r3)
  lbz       r0, 0x13(r31)
  stb       r0, 0x13(r3)
  lbz       r0, 0x14(r31)
  stb       r0, 0x14(r3)
  lbz       r0, 0x15(r31)
  stb       r0, 0x15(r3)
  lbz       r0, 0x16(r31)
  stb       r0, 0x16(r3)
  lbz       r0, 0x17(r31)
  stb       r0, 0x17(r3)
  lbz       r0, 0x18(r31)
  stb       r0, 0x18(r3)
  lbz       r0, 0x19(r31)
  stb       r0, 0x19(r3)
  lha       r0, 0x1A(r31)
  sth       r0, 0x1A(r3)
  lwz       r0, 0x1C(r31)
  stw       r0, 0x1C(r3)
  lwz       r3, 0x4(r4)
  lwz       r0, 0x1C(r3)
  add       r0, r31, r0
  sub       r0, r0, r3
  stw       r0, 0x1C(r3)
  lwz       r3, 0x4(r4)
  lwz       r0, 0xC(r3)
  add       r0, r31, r0
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  b         .loc_0x180

.loc_0x148:
  lwz       r4, 0xC0(r29)
  rlwinm    r3,r28,6,10,25
  rlwinm    r0,r28,2,14,29
  add       r4, r4, r3
  stw       r4, 0x3C(r27)
  lwz       r3, 0x60(r30)
  lwz       r4, 0x2C(r4)
  lwzx      r3, r3, r0
  lwz       r4, 0x34(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1

.loc_0x180:
  lhz       r0, 0x5C(r30)
  rlwinm    r3,r28,0,16,31
  cmplw     r3, r0
  blt+      .loc_0x148
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8029E6CC
 * Size:	000048
 */
void createEffect__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0xA0
  bl        -0x27A840
  mr.       r0, r3
  beq-      .loc_0x30
  li        r4, 0
  bl        .loc_0x48
  mr        r0, r3

.loc_0x30:
  stw       r0, 0x308(r31)
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
 * Address:	8029E714
 * Size:	0001FC
 */
void __ct__Q23efx11TTankEffectFPA4_f(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x804B
  li        r6, 0x1B1
  stw       r0, 0x34(r1)
  subi      r0, r5, 0x5808
  li        r5, 0x1B0
  li        r7, 0x1B2
  stmw      r24, 0x10(r1)
  mr        r28, r3
  lis       r3, 0x804E
  mr        r31, r4
  addi      r30, r28, 0x4
  stw       r0, 0x0(r28)
  addi      r0, r3, 0x6C68
  mr        r3, r30
  stw       r0, 0x0(r28)
  bl        0x111E54
  lis       r3, 0x804E
  lis       r4, 0x804A
  addi      r0, r3, 0x6CC8
  lis       r3, 0x804E
  stw       r0, 0x0(r30)
  addi      r0, r4, 0x3358
  lis       r6, 0x804B
  addi      r29, r30, 0x4C
  stw       r0, 0x40(r30)
  addi      r0, r3, 0x6CE4
  lis       r4, 0x804A
  lis       r3, 0x804E
  stw       r0, 0x40(r30)
  addi      r5, r3, 0x6A8C
  lfs       f0, -0x2670(r2)
  li        r8, 0
  subi      r7, r6, 0x5808
  subi      r6, r4, 0x1D84
  stfs      f0, 0x44(r30)
  addi      r4, r5, 0x14
  li        r3, 0x1B3
  li        r0, 0xA
  stw       r8, 0x48(r30)
  mr        r24, r29
  stw       r7, 0x4C(r30)
  stw       r6, 0x50(r30)
  stw       r5, 0x4C(r30)
  stw       r4, 0x50(r30)
  stw       r8, 0x54(r30)
  sth       r3, 0x58(r30)
  stw       r8, 0x60(r30)
  stw       r0, 0x64(r30)
  lwz       r26, 0x64(r30)
  mulli     r3, r26, 0xC
  addi      r3, r3, 0x10
  bl        -0x27A83C
  lis       r4, 0x8012
  mr        r7, r26
  subi      r4, r4, 0xCB8
  li        r5, 0
  li        r6, 0xC
  bl        -0x1DCE10
  stw       r3, 0x10(r24)
  lis       r3, 0x804D
  subi      r3, r3, 0x346C
  lis       r5, 0x804B
  stw       r3, 0x0(r29)
  addi      r0, r3, 0x14
  lis       r4, 0x804A
  lis       r3, 0x804E
  stw       r0, 0x4(r29)
  subi      r26, r5, 0x5808
  addi      r30, r3, 0x698C
  lis       r3, 0x804E
  stw       r26, 0x6C(r28)
  subi      r27, r4, 0x1D84
  addi      r11, r3, 0x68A8
  lis       r3, 0x804E
  stw       r27, 0x70(r28)
  addi      r9, r3, 0x6C7C
  lis       r6, 0x804A
  lis       r5, 0x804E
  stw       r30, 0x6C(r28)
  addi      r25, r30, 0x14
  lis       r3, 0x804D
  li        r29, 0
  stw       r25, 0x70(r28)
  subi      r4, r3, 0x34B8
  li        r12, 0x2B2
  addi      r24, r11, 0x14
  stw       r29, 0x74(r28)
  li        r10, 0x1B4
  addi      r8, r9, 0x14
  addi      r7, r6, 0x3358
  sth       r12, 0x78(r28)
  addi      r6, r5, 0x6CE4
  lfs       f0, -0x2670(r2)
  li        r5, 0x1B5
  stb       r29, 0x7A(r28)
  addi      r0, r4, 0x14
  mr        r3, r28
  stw       r11, 0x6C(r28)
  stw       r24, 0x70(r28)
  stw       r31, 0x7C(r28)
  sth       r10, 0x78(r28)
  stw       r9, 0x6C(r28)
  stw       r8, 0x70(r28)
  stw       r7, 0x80(r28)
  stw       r6, 0x80(r28)
  stfs      f0, 0x84(r28)
  stw       r29, 0x88(r28)
  stw       r26, 0x8C(r28)
  stw       r27, 0x90(r28)
  stw       r30, 0x8C(r28)
  stw       r25, 0x90(r28)
  stw       r29, 0x94(r28)
  sth       r12, 0x98(r28)
  stb       r29, 0x9A(r28)
  stw       r11, 0x8C(r28)
  stw       r24, 0x90(r28)
  stw       r31, 0x9C(r28)
  sth       r5, 0x98(r28)
  stw       r4, 0x8C(r28)
  stw       r0, 0x90(r28)
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8029E910
 * Size:	00009C
 */
void __dt__Q23efx15TTankFireYodareFv(void)
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
  subi      r3, r3, 0x34B8
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
  bl        -0x20ECE0

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x27A8D8

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
 * Address:	........
 * Size:	000188
 */
void __dt__Q23efx9TTankFireFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8029E9AC
 * Size:	0000C0
 */
void __dt__Q23efx12TTankFireINDFv(void)
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
  beq-      .loc_0xA4
  lis       r3, 0x804E
  addic.    r0, r30, 0x14
  addi      r3, r3, 0x6C7C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x54
  lis       r4, 0x804E
  addi      r3, r30, 0x14
  addi      r0, r4, 0x6CE4
  li        r4, 0
  stw       r0, 0x14(r30)
  bl        -0x20A9D4

.loc_0x54:
  cmplwi    r30, 0
  beq-      .loc_0x94
  lis       r3, 0x804E
  addi      r3, r3, 0x68A8
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x94
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x698C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x20EDA0

.loc_0x94:
  extsh.    r0, r31
  ble-      .loc_0xA4
  mr        r3, r30
  bl        -0x27A998

.loc_0xA4:
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
 * Size:	0000F8
 */
void __dt__Q23efx12TTankFireABCFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8029EA6C
 * Size:	000084
 */
void __dt__Q23efx12TTankFireHitFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804D
  subi      r3, r3, 0x346C
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x14
  stw       r0, 0x4(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x4
  addi      r5, r4, 0x6A8C
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x14
  stw       r0, 0x4(r30)
  bl        -0x20EE24

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x27AA1C

.loc_0x68:
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
 * Address:	8029EAF0
 * Size:	000054
 */
void setupEffect__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0x2C0(r3)
  bl        0x18AD94
  lwz       r31, 0x308(r30)
  mr        r30, r3
  mr        r4, r30
  addi      r3, r31, 0x4
  bl        0x111B2C
  stw       r30, 0x7C(r31)
  stw       r30, 0x9C(r31)
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
 * Address:	8029EB44
 * Size:	000034
 */
void startEffect__Q34Game5Ftank3ObjFv(void)
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
 * Address:	8029EB78
 * Size:	000054
 */
void startYodare__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x308(r3)
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x8C
  li        r4, 0
  lwz       r12, 0x8C(r31)
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
 * Address:	8029EBCC
 * Size:	000050
 */
void fade__Q23efx9TTankFireFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x4
  lwz       r12, 0x4(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
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
 * Address:	8029EC1C
 * Size:	000048
 */
void fade__Q23efx12TTankFireABCFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x11323C
  lwz       r3, 0x48(r31)
  cmplwi    r3, 0
  beq-      .loc_0x34
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8029EC64
 * Size:	000050
 */
void finishEffect__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x308(r3)
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x8C
  lwz       r12, 0x8C(r31)
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
 * Address:	8029ECB4
 * Size:	000064
 */
void effectDrawOn__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x308(r3)
  lwz       r12, 0x4(r31)
  addi      r3, r31, 0x4
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x8C
  lwz       r12, 0x8C(r31)
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
 * Address:	8029ED18
 * Size:	000040
 */
void endDemoDrawOn__Q23efx12TTankFireABCFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x113248
  addi      r3, r31, 0x4C
  lwz       r12, 0x4C(r31)
  lwz       r12, 0x38(r12)
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
 * Address:	8029ED58
 * Size:	000064
 */
void effectDrawOff__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x308(r3)
  lwz       r12, 0x4(r31)
  addi      r3, r31, 0x4
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x6C
  lwz       r12, 0x6C(r31)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x8C
  lwz       r12, 0x8C(r31)
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
 * Address:	8029EDBC
 * Size:	000040
 */
void startDemoDrawOff__Q23efx12TTankFireABCFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x11314C
  addi      r3, r31, 0x4C
  lwz       r12, 0x4C(r31)
  lwz       r12, 0x34(r12)
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
 * Address:	8029EDFC
 * Size:	000060
 */
void interactCreature__Q34Game5Ftank3ObjFPQ24Game8Creature(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804B
  mr        r8, r4
  stw       r0, 0x24(r1)
  lis       r5, 0x804B
  subi      r6, r6, 0x5D00
  addi      r4, r1, 0x8
  lwz       r7, 0xC0(r3)
  addi      r0, r5, 0x4878
  lfs       f0, 0x604(r7)
  stw       r6, 0x8(r1)
  stw       r3, 0xC(r1)
  mr        r3, r8
  stw       r0, 0x8(r1)
  stfs      f0, 0x10(r1)
  lwz       r12, 0x0(r8)
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
 * Address:	8029EE5C
 * Size:	000010
 */
void stopEffectRadius__Q34Game5Ftank3ObjFf(void)
{
/*
.loc_0x0:
  lwz       r3, 0x308(r3)
  stfs      f1, 0x48(r3)
  stfs      f1, 0x84(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8029EE6C
 * Size:	000044
 */
void createChargeSE__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x583D
  li        r5, 0
  lwz       r12, 0xC(r12)
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
 * Address:	8029EEB0
 * Size:	000044
 */
void createDisChargeSE__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xF4(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  li        r4, 0x503C
  li        r5, 0
  lwz       r12, 0xC(r12)
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
 * Address:	8029EEF4
 * Size:	000008
 */
void getEnemyTypeID__Q34Game5Ftank3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0x18
  blr
*/
}

/*
 * --INFO--
 * Address:	8029EEFC
 * Size:	000008
 */
void @4@__dt__Q23efx12TTankFireHitFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x494
*/
}

/*
 * --INFO--
 * Address:	8029EF04
 * Size:	000008
 */
void @4@__dt__Q23efx15TTankFireYodareFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x5F8
*/
}