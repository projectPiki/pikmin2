

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
 * Address:	80319CC4
 * Size:	000088
 */
void __ct__Q32og9newScreen14ObjSpecialItemFPCc(void)
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
  bl        0x139E08
  lis       r3, 0x804E
  lfs       f0, -0x9E0(r2)
  subi      r3, r3, 0x72F8
  li        r4, 0
  stw       r3, 0x0(r30)
  addi      r5, r3, 0x10
  li        r0, 0x1
  mr        r3, r30
  stw       r5, 0x18(r30)
  stfs      f0, 0x58(r30)
  stfs      f0, 0x5C(r30)
  stw       r31, 0x14(r30)
  stw       r4, 0x38(r30)
  stw       r4, 0x3C(r30)
  stw       r4, 0x40(r30)
  stfs      f0, 0x44(r30)
  stfs      f0, 0x48(r30)
  stfs      f0, 0x4C(r30)
  stfs      f0, 0x50(r30)
  stb       r0, 0x54(r30)
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
 * Address:	80319D4C
 * Size:	0000AC
 */
void __dt__Q32og9newScreen14ObjSpecialItemFv(void)
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
  beq-      .loc_0x90
  lis       r4, 0x804E
  subi      r4, r4, 0x72F8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xF7820
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x2FCD88
  mr        r3, r30
  li        r4, 0
  bl        0xF77C0

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x2F5D24

.loc_0x90:
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
 * Address:	80319DF8
 * Size:	000194
 */
void doCreate__Q32og9newScreen14ObjSpecialItemFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x1528
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  bl        0x13A184
  lis       r4, 0x4F
  lis       r6, 0x4954
  lis       r5, 0x53
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x454D
  addi      r5, r5, 0x505F
  bl        -0xAB28
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  stw       r28, 0x38(r29)
  b         .loc_0xDC

.loc_0x60:
  lis       r4, 0x4F
  lis       r6, 0x554D
  mr        r3, r28
  li        r5, 0x44
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4D59
  bl        -0xAB54
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  li        r3, 0x10
  bl        -0x2F5FDC
  cmplwi    r3, 0
  beq-      .loc_0xC0
  lis       r5, 0x804B
  lis       r4, 0x804C
  addi      r0, r5, 0x1148
  li        r5, 0
  stw       r0, 0x0(r3)
  addi      r4, r4, 0x1714
  li        r0, 0x1
  stw       r5, 0x4(r3)
  stw       r4, 0x0(r3)
  stw       r5, 0x8(r3)
  stb       r0, 0xC(r3)

.loc_0xC0:
  stw       r3, 0x38(r29)
  b         .loc_0xDC

.loc_0xC8:
  addi      r3, r31, 0
  addi      r5, r31, 0x18
  li        r4, 0x51
  crclr     6, 0x6
  bl        -0x2EF890

.loc_0xDC:
  li        r3, 0x148
  bl        -0x2F6034
  mr.       r0, r3
  beq-      .loc_0xF4
  bl        0x11AEC8
  mr        r0, r3

.loc_0xF4:
  stw       r0, 0x3C(r29)
  mr        r6, r30
  addi      r4, r31, 0x38
  lis       r5, 0x104
  lwz       r3, 0x3C(r29)
  bl        -0x2DA8DC
  lwz       r3, 0x3C(r29)
  bl        -0x16BF4
  lwz       r3, 0x3C(r29)
  lis       r4, 0x6974
  addi      r6, r4, 0x656D
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x144
  li        r0, 0
  stb       r0, 0xB0(r3)

.loc_0x144:
  lwz       r3, 0x3C(r29)
  lis       r5, 0x7365
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x7470
  addi      r5, r4, 0x6F74
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x40(r29)
  li        r0, 0x1
  stb       r0, 0x54(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80319F8C
 * Size:	000040
 */
void doUpdate__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x38(r3)
  cmplwi    r0, 0
  beq-      .loc_0x2C
  lwz       r3, 0x3C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80319FCC
 * Size:	000104
 */
void doDraw__Q32og9newScreen14ObjSpecialItemFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f1, -0x9DC(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  lfs       f0, 0x5C(r3)
  lwz       r3, 0x3C(r3)
  fmuls     f0, f1, f0
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x24(r12)
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C(r30)
  mr        r4, r31
  addi      r5, r31, 0x190
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x40(r30)
  lfs       f3, 0x3C(r3)
  lfs       f2, 0x38(r3)
  lfs       f1, 0x34(r3)
  lfs       f0, 0x30(r3)
  stfs      f0, 0x44(r30)
  stfs      f1, 0x48(r30)
  stfs      f2, 0x4C(r30)
  stfs      f3, 0x50(r30)
  lbz       r0, 0x54(r30)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  lwz       r3, 0x38(r30)
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  lwz       r3, 0x40(r30)
  addi      r4, r30, 0x44
  lfs       f3, 0x3C(r3)
  lfs       f2, 0x38(r3)
  lfs       f1, 0x34(r3)
  lfs       f0, 0x30(r3)
  stfs      f0, 0x44(r30)
  stfs      f1, 0x48(r30)
  stfs      f2, 0x4C(r30)
  stfs      f3, 0x50(r30)
  lwz       r3, 0x38(r30)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0x54(r30)

.loc_0xEC:
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
 * Address:	8031A0D0
 * Size:	00010C
 */
void doStart__Q32og9newScreen14ObjSpecialItemFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x9E0(r2)
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x1528
  stw       r30, 0x8(r1)
  stfs      f0, 0x58(r3)
  stfs      f0, 0x5C(r3)
  lwz       r3, 0x38(r3)
  lbz       r0, 0xC(r3)
  cmplwi    r0, 0
  beq-      .loc_0xF0
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x58
  addi      r3, r31, 0x4C
  addi      r5, r31, 0x58
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x2EFAE4

.loc_0x58:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x78
  addi      r3, r31, 0x4C
  addi      r5, r31, 0x58
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x2EFB04

.loc_0x78:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x98
  addi      r3, r31, 0x64
  addi      r5, r31, 0x58
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x2EFB24

.loc_0x98:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xBC
  addi      r3, r31, 0x64
  addi      r5, r31, 0x70
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x2EFB48

.loc_0xBC:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0xDC
  addi      r3, r31, 0x64
  addi      r5, r31, 0x58
  li        r4, 0x5A
  crclr     6, 0x6
  bl        -0x2EFB68

.loc_0xDC:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xF0:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A1DC
 * Size:	000010
 */
void doEnd__Q32og9newScreen14ObjSpecialItemFPCQ26Screen11EndSceneArg(void)
{
/*
.loc_0x0:
  lfs       f0, -0x9E0(r2)
  stfs      f0, 0x58(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A1EC
 * Size:	000004
 */
void doUpdateFadeinFinish__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A1F0
 * Size:	00000C
 */
void doUpdateFinish__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  lfs       f0, -0x9E0(r2)
  stfs      f0, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A1FC
 * Size:	000004
 */
void doUpdateFadeoutFinish__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A200
 * Size:	000048
 */
void doUpdateFadein__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6514(r13)
  li        r0, 0
  lfs       f2, 0x58(r3)
  lfs       f1, 0x54(r4)
  lfs       f0, -0x9D8(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x58(r3)
  lfs       f1, 0x58(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x30
  stfs      f0, 0x58(r3)
  li        r0, 0x1

.loc_0x30:
  lfs       f1, 0x58(r3)
  lfs       f0, -0x9D8(r2)
  fdivs     f0, f1, f0
  stfs      f0, 0x5C(r3)
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A248
 * Size:	000050
 */
void doUpdateFadeout__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6514(r13)
  li        r0, 0
  lfs       f2, 0x58(r3)
  lfs       f1, 0x54(r4)
  lfs       f0, -0x9D4(r2)
  fadds     f1, f2, f1
  stfs      f1, 0x58(r3)
  lfs       f1, 0x58(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x30
  stfs      f0, 0x58(r3)
  li        r0, 0x1

.loc_0x30:
  lfs       f1, 0x58(r3)
  lfs       f0, -0x9D4(r2)
  lfs       f2, -0x9D0(r2)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  stfs      f0, 0x5C(r3)
  mr        r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8031A298
 * Size:	000008
 */
void @24@__dt__Q32og9newScreen14ObjSpecialItemFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x550
*/
}