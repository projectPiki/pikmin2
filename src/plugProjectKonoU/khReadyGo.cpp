

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
 * Address:	........
 * Size:	000094
 */
void kh::Screen::ObjReadyGo::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80401268
 * Size:	0000A4
 */
void kh::Screen::ObjReadyGo::doUpdateFadein(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x52D2C
  lis       r4, 0x595F
  lis       r5, 0x5245
  addi      r6, r4, 0x474F
  li        r4, 0x4B48
  addi      r5, r5, 0x4144
  bl        -0xF1F78
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x7984
  li        r4, 0x3D
  subi      r5, r5, 0x7974
  crclr     6, 0x6
  bl        -0x3D6C78

.loc_0x54:
  mr        r3, r31
  bl        0x52CE8
  lwz       r0, 0x10(r3)
  cmpwi     r0, 0
  bne-      .loc_0x7C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1826
  li        r5, 0
  bl        -0xC8CAC
  b         .loc_0x8C

.loc_0x7C:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1827
  li        r5, 0
  bl        -0xC8CC0

.loc_0x8C:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040130C
 * Size:	0001D4
 */
void kh::Screen::ObjReadyGo::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x44(r1)
  stmw      r26, 0x28(r1)
  subi      r29, r5, 0x7990
  mr        r31, r4
  mr        r30, r3
  lwz       r8, 0xA4(r29)
  lwz       r7, 0xA8(r29)
  lwz       r6, 0xAC(r29)
  lwz       r5, 0xB0(r29)
  lwz       r4, 0xB4(r29)
  lwz       r0, 0xB8(r29)
  stw       r8, 0x8(r1)
  stw       r7, 0xC(r1)
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r4, 0x18(r1)
  stw       r0, 0x1C(r1)
  bl        0x52C4C
  lis       r4, 0x595F
  lis       r5, 0x5245
  addi      r6, r4, 0x474F
  li        r4, 0x4B48
  addi      r5, r5, 0x4144
  bl        -0xF2058
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88
  addi      r3, r29, 0xC
  addi      r5, r29, 0x1C
  li        r4, 0x59
  crclr     6, 0x6
  bl        -0x3D6D50

.loc_0x88:
  mr        r3, r30
  bl        0x52C10
  mr        r29, r3
  lbz       r0, 0xC(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  li        r0, 0x2
  lis       r3, 0x8051
  stw       r0, 0x6C(r30)
  addi      r3, r3, 0x4110
  lfs       f0, 0x4(r3)
  stfs      f0, 0x60(r30)
  lfs       f0, 0x8(r3)
  stfs      f0, 0x64(r30)

.loc_0xC0:
  mr        r28, r30
  addi      r27, r1, 0x8
  li        r26, 0
  b         .loc_0x164

.loc_0xD0:
  li        r3, 0x148
  bl        -0x3DD53C
  mr.       r0, r3
  beq-      .loc_0xE8
  bl        0x339C0
  mr        r0, r3

.loc_0xE8:
  stw       r0, 0x38(r28)
  mr        r6, r31
  lwz       r4, 0x0(r27)
  lis       r5, 0x4
  lwz       r3, 0x38(r28)
  bl        -0x3C1DE4
  lwz       r3, 0x4(r27)
  mr        r4, r31
  bl        -0x3DE3FC
  bl        -0x3B9AFC
  stw       r3, 0x40(r28)
  mr        r4, r31
  lwz       r3, 0x8(r27)
  bl        -0x3DE410
  bl        -0x3B9B10
  stw       r3, 0x48(r28)
  lwz       r3, 0x38(r28)
  lwz       r4, 0x40(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r28)
  lwz       r4, 0x48(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x4
  addi      r27, r27, 0xC
  addi      r26, r26, 0x1

.loc_0x164:
  lwz       r0, 0x6C(r30)
  cmpw      r26, r0
  blt+      .loc_0xD0
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0xA0
  bl        0x50DE4
  lwz       r0, 0x10(r29)
  cmpwi     r0, 0
  bne-      .loc_0x1B4
  lis       r3, 0xC001
  addi      r3, r3, 0x1022
  bl        0x6A2B8
  b         .loc_0x1C0

.loc_0x1B4:
  lis       r3, 0xC001
  addi      r3, r3, 0x1023
  bl        0x6A2A8

.loc_0x1C0:
  lmw       r26, 0x28(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	804014E0
 * Size:	000020
 */
void kh::Screen::ObjReadyGo::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x27C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80401500
 * Size:	0000DC
 */
void kh::Screen::ObjReadyGo::doDraw( (Graphics &))
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
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  addi      r3, r28, 0xBC
  lwz       r12, 0xBC(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f31, 0x1CF8(r2)
  mr        r30, r27
  li        r29, 0
  lis       r31, 0x524F
  b         .loc_0xAC

.loc_0x50:
  lwz       r3, 0x38(r30)
  addi      r6, r31, 0x4F54
  lfs       f30, 0x60(r30)
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stfs      f31, 0xD4(r3)
  stfs      f30, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r30)
  mr        r4, r28
  addi      r5, r28, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0xAC:
  lwz       r0, 0x6C(r27)
  cmpw      r29, r0
  blt+      .loc_0x50
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	804015DC
 * Size:	00018C
 */
void kh::Screen::ObjReadyGo::doUpdateFadeout(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  bl        0x529B8
  lis       r4, 0x595F
  lis       r5, 0x5245
  addi      r6, r4, 0x474F
  li        r4, 0x4B48
  addi      r5, r5, 0x4144
  bl        -0xF22EC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x7984
  li        r4, 0x9F
  subi      r5, r5, 0x7974
  crclr     6, 0x6
  bl        -0x3D6FEC

.loc_0x54:
  mr        r3, r31
  bl        0x52974
  lbz       r0, 0xD(r3)
  cmplwi    r0, 0
  beq-      .loc_0x110
  lis       r4, 0x804B
  li        r9, 0
  addi      r0, r4, 0x1148
  lis       r4, 0x804F
  stw       r0, 0x18(r1)
  subi      r0, r4, 0x57B0
  lis       r4, 0x804E
  lis       r5, 0x804E
  stw       r9, 0x1C(r1)
  subi      r7, r4, 0x7B98
  li        r4, 0x1
  subi      r6, r5, 0x7BA8
  stw       r0, 0x18(r1)
  addi      r0, r1, 0x18
  li        r5, 0x4E22
  stb       r9, 0x20(r1)
  lbz       r8, 0xC(r3)
  mr        r3, r31
  stw       r7, 0x8(r1)
  stb       r4, 0x11(r1)
  stb       r8, 0x20(r1)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stb       r9, 0x10(r1)
  stw       r0, 0x14(r1)
  stb       r9, 0x11(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x8
  bl        0x50870
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x14C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  bl        0x5087C
  b         .loc_0x14C

.loc_0x110:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  bl        0x508C0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x14C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  bl        0x5083C

.loc_0x14C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  li        r5, 0
  li        r6, 0
  li        r7, 0
  bl        0x50B38
  lwz       r0, 0x34(r1)
  li        r3, 0x1
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80401768
 * Size:	000384
 */
void kh::Screen::ObjReadyGo::updateAnimation(void)
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
  stmw      r25, 0x64(r1)
  mr        r25, r3
  li        r27, 0
  bl        0x52808
  lis       r4, 0x595F
  lis       r5, 0x5245
  addi      r6, r4, 0x474F
  li        r4, 0x4B48
  addi      r5, r5, 0x4144
  bl        -0xF249C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x7984
  li        r4, 0xC3
  subi      r5, r5, 0x7974
  crclr     6, 0x6
  bl        -0x3D719C

.loc_0x78:
  mr        r3, r25
  bl        0x527C4
  lis       r4, 0x8051
  lfd       f29, 0x1D08(r2)
  lfs       f30, 0x1CFC(r2)
  mr        r29, r3
  lfs       f31, 0x1D00(r2)
  mr        r28, r25
  addi      r30, r4, 0x4110
  li        r26, 0
  lis       r31, 0x4330
  b         .loc_0x2FC

.loc_0xA8:
  lfs       f0, 0x50(r28)
  lwz       r3, 0x40(r28)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x58(r28)
  lwz       r3, 0x48(r28)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r28)
  bl        -0x3C0D00
  lfs       f1, 0x50(r28)
  lfs       f0, 0x0(r30)
  stw       r31, 0x58(r1)
  fadds     f0, f1, f0
  stfs      f0, 0x50(r28)
  lfs       f1, 0x58(r28)
  lfs       f0, 0x0(r30)
  fadds     f0, f1, f0
  stfs      f0, 0x58(r28)
  lwz       r3, 0x40(r28)
  lfs       f2, 0x50(r28)
  lha       r3, 0x6(r3)
  subi      r0, r3, 0x2
  xoris     r0, r0, 0x8000
  stw       r0, 0x5C(r1)
  lfd       f0, 0x58(r1)
  fsubs     f0, f0, f29
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  beq-      .loc_0x14C
  lwz       r3, 0x48(r28)
  lis       r0, 0x4330
  stw       r0, 0x58(r1)
  lha       r3, 0x6(r3)
  lfs       f1, 0x58(r28)
  subi      r0, r3, 0x2
  xoris     r0, r0, 0x8000
  stw       r0, 0x5C(r1)
  lfd       f0, 0x58(r1)
  fsubs     f0, f0, f29
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x150

.loc_0x14C:
  li        r27, 0x1

.loc_0x150:
  fcmpo     cr0, f2, f30
  ble-      .loc_0x2D8
  addi      r4, r26, 0x68
  lbzx      r0, r25, r4
  cmplwi    r0, 0
  bne-      .loc_0x2D8
  li        r0, 0x1
  lis       r3, 0x4E41
  stbx      r0, r25, r4
  addi      r6, r3, 0x4C4C
  li        r5, 0
  lwz       r3, 0x38(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0xA100
  lwz       r3, 0x38(r28)
  lis       r4, 0x4E41
  lfs       f0, 0x10(r30)
  addi      r6, r4, 0x4C4C
  lwz       r12, 0x0(r3)
  li        r5, 0
  fadds     f28, f0, f1
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x9FE8
  lfs       f0, 0xC(r30)
  lis       r3, 0x804C
  stfs      f28, 0x14(r1)
  addi      r0, r3, 0x1514
  fadds     f0, f0, f1
  lwz       r3, 0x14(r1)
  stw       r0, 0x20(r1)
  stfs      f0, 0x10(r1)
  lwz       r0, 0x10(r1)
  stw       r3, 0xC(r1)
  stw       r0, 0x8(r1)
  lfs       f0, 0xC(r1)
  lfs       f1, 0x8(r1)
  stfs      f0, 0x1C(r1)
  stfs      f1, 0x18(r1)
  lwz       r0, 0x10(r29)
  cmpwi     r0, 0
  bne-      .loc_0x278
  lis       r3, 0x804C
  li        r8, 0
  addi      r0, r3, 0x14F0
  lis       r3, 0x804C
  stw       r0, 0x38(r1)
  addi      r0, r3, 0x14D8
  lis       r4, 0x804E
  lis       r3, 0x804F
  stw       r0, 0x38(r1)
  addi      r0, r4, 0x7458
  li        r7, 0xD
  li        r6, 0xE
  stw       r0, 0x38(r1)
  subi      r0, r3, 0x53F4
  li        r5, 0xF
  addi      r3, r1, 0x38
  stb       r8, 0x3C(r1)
  addi      r4, r1, 0x18
  stb       r8, 0x3D(r1)
  sth       r7, 0x40(r1)
  sth       r6, 0x42(r1)
  sth       r5, 0x44(r1)
  stw       r8, 0x48(r1)
  stw       r8, 0x4C(r1)
  stw       r8, 0x50(r1)
  stw       r0, 0x38(r1)
  bl        -0x48060
  b         .loc_0x2D8

.loc_0x278:
  lis       r3, 0x804C
  li        r7, 0
  addi      r0, r3, 0x14F0
  lis       r3, 0x804C
  stw       r0, 0x24(r1)
  addi      r0, r3, 0x14D8
  lis       r4, 0x804E
  lis       r3, 0x804F
  stw       r0, 0x24(r1)
  addi      r0, r4, 0x7470
  li        r6, 0x10
  li        r5, 0x11
  stw       r0, 0x24(r1)
  subi      r0, r3, 0x540C
  addi      r3, r1, 0x24
  addi      r4, r1, 0x18
  stb       r7, 0x28(r1)
  stb       r7, 0x29(r1)
  sth       r6, 0x2C(r1)
  sth       r5, 0x2E(r1)
  stw       r7, 0x30(r1)
  stw       r7, 0x34(r1)
  stw       r0, 0x24(r1)
  bl        -0x48174

.loc_0x2D8:
  lfs       f0, 0x50(r28)
  fcmpo     cr0, f0, f31
  cror      2, 0x1, 0x2
  bne-      .loc_0x2F4
  li        r0, 0x1
  stb       r0, 0x6A(r25)
  stw       r0, 0x8(r29)

.loc_0x2F4:
  addi      r28, r28, 0x4
  addi      r26, r26, 0x1

.loc_0x2FC:
  lwz       r0, 0x6C(r25)
  cmpw      r26, r0
  blt+      .loc_0xA8
  lbz       r0, 0x6A(r25)
  cmplwi    r0, 0
  beq-      .loc_0x34C
  lbz       r0, 0x6B(r25)
  cmplwi    r0, 0
  bne-      .loc_0x34C
  lbz       r0, 0xD(r29)
  cmplwi    r0, 0
  bne-      .loc_0x34C
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0x6B(r25)

.loc_0x34C:
  mr        r3, r27
  psq_l     f31,0xB8(r1),0,0
  lfd       f31, 0xB0(r1)
  psq_l     f30,0xA8(r1),0,0
  lfd       f30, 0xA0(r1)
  psq_l     f29,0x98(r1),0,0
  lfd       f29, 0x90(r1)
  psq_l     f28,0x88(r1),0,0
  lfd       f28, 0x80(r1)
  lmw       r25, 0x64(r1)
  lwz       r0, 0xC4(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	80401AEC
 * Size:	000040
 */
void kh::Screen::SceneReadyGo::doConfirmSetScene( (Screen::SetSceneArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  subfic    r4, r3, 0x271A
  subi      r0, r3, 0x271A
  or        r0, r4, r0
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80401B2C
 * Size:	00000C
 */
void kh::Screen::SceneReadyGo::getResName( const
{
/*
.loc_0x0:
  lis       r3, 0x804A
  subi      r3, r3, 0x78D4
  blr
*/
}

/*
 * --INFO--
 * Address:	80401B38
 * Size:	000008
 */
void kh::Screen::SceneReadyGo::isUseBackupSceneInfo(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80401B40
 * Size:	000008
 */
void kh::Screen::SceneReadyGo::getSceneType(void)
{
/*
.loc_0x0:
  li        r3, 0x4E21
  blr
*/
}

/*
 * --INFO--
 * Address:	80401B48
 * Size:	000008
 */
void kh::Screen::SceneReadyGo::getOwnerID(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	80401B50
 * Size:	000014
 */
void kh::Screen::SceneReadyGo::getMemberID(void)
{
/*
.loc_0x0:
  lis       r4, 0x595F
  lis       r3, 0x5245
  addi      r4, r4, 0x474F
  addi      r3, r3, 0x4144
  blr
*/
}

/*
 * --INFO--
 * Address:	80401B64
 * Size:	0000C4
 */
void kh::Screen::SceneReadyGo::doCreateObj( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x70
  bl        -0x3DDCE4
  mr.       r31, r3
  beq-      .loc_0x98
  bl        0x51F54
  lis       r4, 0x804F
  li        r3, 0
  subi      r4, r4, 0x53DC
  lfs       f0, 0x1CF8(r2)
  stw       r4, 0x0(r31)
  addi      r4, r4, 0x10
  li        r0, 0x1
  stw       r4, 0x18(r31)
  stw       r3, 0x38(r31)
  stw       r3, 0x40(r31)
  stw       r3, 0x48(r31)
  stfs      f0, 0x58(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x60(r31)
  stb       r3, 0x68(r31)
  stw       r3, 0x3C(r31)
  stw       r3, 0x44(r31)
  stw       r3, 0x4C(r31)
  stfs      f0, 0x5C(r31)
  stfs      f0, 0x54(r31)
  stfs      f0, 0x64(r31)
  stb       r3, 0x69(r31)
  stw       r0, 0x6C(r31)
  stb       r3, 0x6A(r31)
  stb       r3, 0x6B(r31)

.loc_0x98:
  mr        r3, r29
  mr        r4, r31
  mr        r5, r30
  bl        0x5016C
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
 * Address:	80401C28
 * Size:	0000AC
 */
void kh::Screen::ObjReadyGo::__dt(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x53DC
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
  bl        0xF944
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3E4C64
  mr        r3, r30
  li        r4, 0
  bl        0xF8E4

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3DDC00

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
 * Address:	80401CD4
 * Size:	00005C
 */
void __sinit_khReadyGo_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  li        r0, -0x1
  addi      r5, r3, 0x48B0
  lis       r4, 0x804F
  lfs       f5, 0x0(r5)
  lis       r3, 0x8051
  lfs       f4, 0x1D10(r2)
  addi      r3, r3, 0x4110
  stfsu     f5, -0x5468(r4)
  lfs       f3, 0x1D14(r2)
  lfs       f2, 0x1D18(r2)
  lfs       f1, 0x1D1C(r2)
  lfs       f0, 0x1D20(r2)
  stw       r0, -0x6558(r13)
  stfs      f5, -0x6554(r13)
  stfs      f5, 0x4(r4)
  stfs      f5, 0x8(r4)
  stfs      f4, 0x4(r3)
  stfs      f3, 0x8(r3)
  stfs      f2, 0x0(r3)
  stfs      f1, 0xC(r3)
  stfs      f0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80401D30
 * Size:	000008
 */
void @24@kh::Screen::ObjReadyGo::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x10C
*/
}
