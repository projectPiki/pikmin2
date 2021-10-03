

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
 * Address:	80192C84
 * Size:	0000E4
 */
void Game::InteractFueFuki::actPiki( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0xCC

.loc_0x40:
  lwz       r3, 0x294(r31)
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0xB
  beq-      .loc_0x6C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x74

.loc_0x6C:
  li        r3, 0
  b         .loc_0xCC

.loc_0x74:
  lwz       r3, 0x290(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  lwz       r6, 0x4(r30)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x524
  addi      r5, r1, 0x8
  li        r4, 0xB
  stw       r0, 0x8(r1)
  stw       r6, 0xC(r1)
  lwz       r3, 0x294(r31)
  bl        0x4254
  li        r3, 0x1
  b         .loc_0xCC

.loc_0xC8:
  li        r3, 0

.loc_0xCC:
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
 * Address:	80192D68
 * Size:	000BD0
 */
void Game::InteractFue::actPiki( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x1C0(r1)
  mflr      r0
  stw       r0, 0x1C4(r1)
  stfd      f31, 0x1B0(r1)
  psq_st    f31,0x1B8(r1),0,0
  stfd      f30, 0x1A0(r1)
  psq_st    f30,0x1A8(r1),0,0
  stfd      f29, 0x190(r1)
  psq_st    f29,0x198(r1),0,0
  stfd      f28, 0x180(r1)
  psq_st    f28,0x188(r1),0,0
  stfd      f27, 0x170(r1)
  psq_st    f27,0x178(r1),0,0
  stfd      f26, 0x160(r1)
  psq_st    f26,0x168(r1),0,0
  stfd      f25, 0x150(r1)
  psq_st    f25,0x158(r1),0,0
  stfd      f24, 0x140(r1)
  psq_st    f24,0x148(r1),0,0
  stmw      r25, 0x124(r1)
  lwz       r6, -0x6C18(r13)
  lis       r5, 0x8048
  mr        r25, r3
  mr        r31, r4
  lwz       r0, 0x44(r6)
  subi      r30, r5, 0x1170
  cmpwi     r0, 0
  bne-      .loc_0x114
  lwz       r3, 0x40(r6)
  lwz       r0, 0x218(r3)
  cmplwi    r0, 0
  bne-      .loc_0x114
  lwz       r3, -0x6B70(r13)
  li        r4, 0x27
  bl        0x545F0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x114
  lwz       r3, 0x4(r25)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x114
  lwz       r26, 0x4(r25)
  lhz       r0, 0x2DC(r26)
  cmplwi    r0, 0
  bne-      .loc_0xE4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1FC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xE4
  li        r3, 0
  b         .loc_0xB7C

.loc_0xE4:
  lhz       r0, 0x2DC(r26)
  cmplwi    r0, 0x1
  bne-      .loc_0x114
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1FC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x114
  li        r3, 0
  b         .loc_0xB7C

.loc_0x114:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x85C
  lbz       r4, 0x2B8(r31)
  cmpwi     r4, 0x3
  bne-      .loc_0x3E8
  mr        r3, r31
  bl        -0x49F74
  cmpwi     r3, 0x1B
  beq-      .loc_0x85C
  mr        r4, r31
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6B60(r13)
  lfs       f26, 0x38(r1)
  cmplwi    r3, 0
  lfs       f25, 0x3C(r1)
  lfs       f24, 0x40(r1)
  lfs       f28, -0x54B0(r2)
  beq-      .loc_0x184
  addi      r3, r3, 0x30

.loc_0x184:
  li        r0, 0
  lis       r4, 0x804B
  addi      r4, r4, 0x560
  stw       r0, 0x78(r1)
  cmplwi    r0, 0
  stw       r4, 0x6C(r1)
  stw       r0, 0x70(r1)
  stw       r3, 0x74(r1)
  bne-      .loc_0x1C0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x70(r1)
  b         .loc_0x248

.loc_0x1C0:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x70(r1)
  b         .loc_0x22C

.loc_0x1D8:
  lwz       r3, 0x74(r1)
  lwz       r4, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x78(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x248
  lwz       r3, 0x74(r1)
  lwz       r4, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x70(r1)

.loc_0x22C:
  lwz       r12, 0x6C(r1)
  addi      r3, r1, 0x6C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x1D8

.loc_0x248:
  lfs       f27, -0x54AC(r2)
  b         .loc_0x394

.loc_0x250:
  lwz       r3, 0x74(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0x2C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x30(r1)
  lfs       f5, 0x2C(r1)
  fsubs     f1, f3, f25
  lfs       f4, 0x34(r1)
  fsubs     f2, f5, f26
  fsubs     f0, f4, f24
  fmuls     f1, f1, f1
  fmuls     f6, f0, f0
  fmadds    f0, f2, f2, f1
  fadds     f0, f6, f0
  fcmpo     cr0, f0, f27
  ble-      .loc_0x2BC
  ble-      .loc_0x2C0
  fsqrte    f1, f0
  fmuls     f0, f1, f0
  b         .loc_0x2C0

.loc_0x2BC:
  fmr       f0, f27

.loc_0x2C0:
  fcmpo     cr0, f0, f28
  bge-      .loc_0x2D8
  fmr       f28, f0
  fmr       f31, f5
  fmr       f30, f3
  fmr       f29, f4

.loc_0x2D8:
  lwz       r0, 0x78(r1)
  cmplwi    r0, 0
  bne-      .loc_0x304
  lwz       r3, 0x74(r1)
  lwz       r4, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x70(r1)
  b         .loc_0x394

.loc_0x304:
  lwz       r3, 0x74(r1)
  lwz       r4, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x70(r1)
  b         .loc_0x378

.loc_0x324:
  lwz       r3, 0x74(r1)
  lwz       r4, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x78(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x394
  lwz       r3, 0x74(r1)
  lwz       r4, 0x70(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x70(r1)

.loc_0x378:
  lwz       r12, 0x6C(r1)
  addi      r3, r1, 0x6C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x324

.loc_0x394:
  lwz       r3, 0x74(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x70(r1)
  cmplw     r4, r3
  bne+      .loc_0x250
  stfs      f31, 0x60(r1)
  mr        r4, r31
  addi      r6, r1, 0x60
  li        r5, 0x1B
  stfs      f30, 0x64(r1)
  stfs      f29, 0x68(r1)
  lwz       r3, 0x28C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  b         .loc_0xB7C

.loc_0x3E8:
  lwz       r3, -0x64AC(r13)
  lwz       r0, 0x18(r3)
  cmpwi     r0, 0
  bne-      .loc_0x77C
  subi      r0, r4, 0x1
  cmplwi    r0, 0x1
  ble-      .loc_0x40C
  cmpwi     r4, 0
  bne-      .loc_0x77C

.loc_0x40C:
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1F8(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lbz       r4, 0x2B8(r31)
  addi      r3, r3, 0x262C
  bl        0x3E084
  lwz       r3, -0x6B70(r13)
  li        r4, 0x23
  bl        0x5423C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x494
  lbz       r0, 0x2B8(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x494
  lwz       r3, -0x6C18(r13)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xAC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0x4
  beq-      .loc_0x494
  lwz       r3, -0x6C18(r13)
  li        r4, 0x4
  lfs       f1, -0x54A8(r2)
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x494:
  lwz       r3, -0x6B70(r13)
  lbz       r4, 0x2B8(r31)
  bl        0x53ED4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x85C
  lwz       r9, 0x5C(r30)
  addi      r5, r1, 0x54
  lwz       r8, 0x60(r30)
  li        r0, 0
  lbz       r6, 0x2B8(r31)
  mr        r4, r31
  lwz       r7, 0x64(r30)
  addi      r3, r1, 0x20
  lfs       f0, -0x54AC(r2)
  rlwinm    r6,r6,2,0,29
  stw       r9, 0x54(r1)
  stw       r8, 0x58(r1)
  stw       r7, 0x5C(r1)
  lwzx      r5, r5, r6
  stw       r0, 0xE8(r1)
  stw       r5, 0xE4(r1)
  stw       r0, 0xF0(r1)
  stfs      f0, 0xFC(r1)
  stfs      f0, 0x100(r1)
  stfs      f0, 0x104(r1)
  stfs      f0, 0x108(r1)
  stw       r0, 0x10C(r1)
  stw       r0, 0xF4(r1)
  stw       r0, 0xEC(r1)
  stw       r0, 0x110(r1)
  stw       r0, 0xF8(r1)
  stw       r0, 0x114(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x20(r1)
  mr        r3, r31
  lfs       f1, 0x24(r1)
  lfs       f0, 0x28(r1)
  stfs      f2, 0xFC(r1)
  stfs      f1, 0x100(r1)
  stfs      f0, 0x104(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x108(r1)
  lbz       r0, 0x2B8(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x734
  li        r0, 0
  lwz       r3, -0x6D0C(r13)
  lis       r4, 0x804B
  stw       r0, 0x50(r1)
  subi      r4, r4, 0x4364
  cmplwi    r0, 0
  stw       r4, 0x44(r1)
  stw       r0, 0x48(r1)
  stw       r3, 0x4C(r1)
  bne-      .loc_0x5A0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x48(r1)
  b         .loc_0x714

.loc_0x5A0:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x48(r1)
  b         .loc_0x60C

.loc_0x5B8:
  lwz       r3, 0x4C(r1)
  lwz       r4, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x714
  lwz       r3, 0x4C(r1)
  lwz       r4, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x48(r1)

.loc_0x60C:
  lwz       r12, 0x44(r1)
  addi      r3, r1, 0x44
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x5B8
  b         .loc_0x714

.loc_0x62C:
  lwz       r3, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lbz       r4, 0x2B8(r3)
  lbz       r0, 0x2B8(r31)
  cmpw      r4, r0
  bne-      .loc_0x658
  li        r4, 0
  bl        -0x5796C

.loc_0x658:
  lwz       r0, 0x50(r1)
  cmplwi    r0, 0
  bne-      .loc_0x684
  lwz       r3, 0x4C(r1)
  lwz       r4, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x48(r1)
  b         .loc_0x714

.loc_0x684:
  lwz       r3, 0x4C(r1)
  lwz       r4, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x48(r1)
  b         .loc_0x6F8

.loc_0x6A4:
  lwz       r3, 0x4C(r1)
  lwz       r4, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x50(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x714
  lwz       r3, 0x4C(r1)
  lwz       r4, 0x48(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x48(r1)

.loc_0x6F8:
  lwz       r12, 0x44(r1)
  addi      r3, r1, 0x44
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x6A4

.loc_0x714:
  lwz       r3, 0x4C(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x48(r1)
  cmplw     r4, r3
  bne+      .loc_0x62C

.loc_0x734:
  lwz       r3, -0x64AC(r13)
  stw       r31, 0x194(r3)
  lbz       r0, 0x2B8(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x760
  lwz       r3, -0x64AC(r13)
  addi      r4, r1, 0xE4
  bl        0x299518
  lwz       r3, -0x6B70(r13)
  lbz       r4, 0x2B8(r31)
  bl        0x53D38

.loc_0x760:
  lwz       r3, -0x6B70(r13)
  lbz       r4, 0x2B8(r31)
  bl        0x53CAC
  lwz       r3, -0x6B70(r13)
  lbz       r4, 0x2B8(r31)
  bl        0x53DA0
  b         .loc_0x85C

.loc_0x77C:
  cmpwi     r4, 0x5
  bne-      .loc_0x854
  lwz       r3, -0x6C18(r13)
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x85C
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2C
  bl        0x53EDC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x85C
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2C
  bl        0x53E8C
  lfs       f0, -0x54AC(r2)
  li        r0, 0
  addi      r5, r30, 0x68
  stw       r0, 0xB4(r1)
  mr        r4, r31
  addi      r3, r1, 0x14
  stw       r5, 0xB0(r1)
  stw       r0, 0xBC(r1)
  stfs      f0, 0xC8(r1)
  stfs      f0, 0xCC(r1)
  stfs      f0, 0xD0(r1)
  stfs      f0, 0xD4(r1)
  stw       r0, 0xD8(r1)
  stw       r0, 0xC0(r1)
  stw       r0, 0xB8(r1)
  stw       r0, 0xDC(r1)
  stw       r0, 0xC4(r1)
  stw       r0, 0xE0(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  mr        r3, r31
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  stfs      f2, 0xC8(r1)
  stfs      f1, 0xCC(r1)
  stfs      f0, 0xD0(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0xD4(r1)
  addi      r4, r1, 0xB0
  lwz       r3, -0x64AC(r13)
  stw       r31, 0x194(r3)
  lwz       r3, -0x64AC(r13)
  bl        0x29941C
  b         .loc_0x85C

.loc_0x854:
  li        r3, 0
  b         .loc_0xB7C

.loc_0x85C:
  lwz       r3, 0x290(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x884
  li        r3, 0
  b         .loc_0xB7C

.loc_0x884:
  lwz       r3, 0x4(r25)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x8A8
  li        r3, 0
  b         .loc_0xB7C

.loc_0x8A8:
  lwz       r0, 0xBC(r31)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x8BC
  li        r3, 0
  b         .loc_0xB7C

.loc_0x8BC:
  lwz       r4, 0x294(r31)
  mr        r3, r31
  lwz       r27, 0x4(r25)
  lwz       r29, 0x8(r4)
  bl        -0x4A700
  cmpwi     r29, 0xB
  lwz       r28, 0x290(r31)
  bne-      .loc_0x928
  lwz       r0, 0x4(r28)
  cmpwi     r0, 0x15
  beq-      .loc_0x8F0
  li        r3, 0
  b         .loc_0xB7C

.loc_0x8F0:
  lbz       r0, -0x7B93(r13)
  li        r26, 0x1
  cmplwi    r0, 0
  beq-      .loc_0x940
  lwz       r3, 0x17C(r31)
  rlwinm.   r0,r3,0,23,23
  beq-      .loc_0x940
  rlwinm    r0,r3,0,24,22
  lis       r3, 0x8051
  stw       r0, 0x17C(r31)
  addi      r3, r3, 0x25EC
  mr        r4, r31
  bl        0x3DA0C
  b         .loc_0x940

.loc_0x928:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  mr        r26, r3

.loc_0x940:
  lwz       r3, -0x6C18(r13)
  li        r4, 0
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x984
  lbz       r3, 0x2B8(r31)
  cmpwi     r3, 0x1
  bne-      .loc_0x96C
  lhz       r0, 0x2DC(r27)
  cmplwi    r0, 0x1
  beq-      .loc_0x980

.loc_0x96C:
  cmpwi     r3, 0
  bne-      .loc_0x984
  lhz       r0, 0x2DC(r27)
  cmplwi    r0, 0
  bne-      .loc_0x984

.loc_0x980:
  li        r4, 0x1

.loc_0x984:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x9A8
  mr        r3, r28
  mr        r4, r31
  lwz       r12, 0x0(r28)
  lwz       r5, 0x4(r25)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     

.loc_0x9A8:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB78
  rlwinm.   r0,r26,0,24,31
  beq-      .loc_0xB78
  cmpwi     r29, 0
  bne-      .loc_0xA08
  bne-      .loc_0x9E4
  lwz       r0, 0x4(r28)
  cmpwi     r0, 0x13
  beq-      .loc_0xA08

.loc_0x9E4:
  lbz       r0, 0x8(r25)
  cmplwi    r0, 0
  beq-      .loc_0xB78
  lwz       r3, 0x2C4(r31)
  lwz       r0, 0x4(r25)
  cmplw     r3, r0
  beq-      .loc_0xB78
  cmpwi     r29, 0
  bne-      .loc_0xB78

.loc_0xA08:
  lwz       r3, -0x6C18(r13)
  lwz       r4, 0x4(r25)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0xA50
  lbz       r3, 0x2B8(r31)
  cmpwi     r3, 0x1
  bne-      .loc_0xA34
  lhz       r0, 0x2DC(r4)
  cmplwi    r0, 0x1
  beq-      .loc_0xA48

.loc_0xA34:
  cmpwi     r3, 0
  bne-      .loc_0xA50
  lhz       r0, 0x2DC(r4)
  cmplwi    r0, 0
  bne-      .loc_0xA50

.loc_0xA48:
  li        r3, 0
  b         .loc_0xB7C

.loc_0xA50:
  mr        r3, r31
  bl        -0x4B9A8
  cmplwi    r3, 0
  beq-      .loc_0xA80
  mr        r3, r31
  bl        -0x4B9B8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        -0x4B9AC

.loc_0xA80:
  lwz       r0, 0x4(r25)
  mr        r4, r31
  li        r5, 0x2
  li        r6, 0
  stw       r0, 0x2C4(r31)
  lwz       r3, 0x28C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x2B8(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0xB70
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2C
  bl        0x53BBC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB70
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2C
  bl        0x53B6C
  lfs       f0, -0x54AC(r2)
  li        r0, 0
  addi      r5, r30, 0x7C
  stw       r0, 0x80(r1)
  mr        r4, r31
  addi      r3, r1, 0x8
  stw       r5, 0x7C(r1)
  stw       r0, 0x88(r1)
  stfs      f0, 0x94(r1)
  stfs      f0, 0x98(r1)
  stfs      f0, 0x9C(r1)
  stfs      f0, 0xA0(r1)
  stw       r0, 0xA4(r1)
  stw       r0, 0x8C(r1)
  stw       r0, 0x84(r1)
  stw       r0, 0xA8(r1)
  stw       r0, 0x90(r1)
  stw       r0, 0xAC(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  mr        r3, r31
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x94(r1)
  stfs      f1, 0x98(r1)
  stfs      f0, 0x9C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0xA0(r1)
  addi      r4, r1, 0x7C
  lwz       r3, -0x64AC(r13)
  stw       r31, 0x194(r3)
  lwz       r3, -0x64AC(r13)
  bl        0x2990FC

.loc_0xB70:
  li        r3, 0x1
  b         .loc_0xB7C

.loc_0xB78:
  li        r3, 0

.loc_0xB7C:
  psq_l     f31,0x1B8(r1),0,0
  lfd       f31, 0x1B0(r1)
  psq_l     f30,0x1A8(r1),0,0
  lfd       f30, 0x1A0(r1)
  psq_l     f29,0x198(r1),0,0
  lfd       f29, 0x190(r1)
  psq_l     f28,0x188(r1),0,0
  lfd       f28, 0x180(r1)
  psq_l     f27,0x178(r1),0,0
  lfd       f27, 0x170(r1)
  psq_l     f26,0x168(r1),0,0
  lfd       f26, 0x160(r1)
  psq_l     f25,0x158(r1),0,0
  lfd       f25, 0x150(r1)
  psq_l     f24,0x148(r1),0,0
  lfd       f24, 0x140(r1)
  lmw       r25, 0x124(r1)
  lwz       r0, 0x1C4(r1)
  mtlr      r0
  addi      r1, r1, 0x1C0
  blr
*/
}

/*
 * --INFO--
 * Address:	80193938
 * Size:	00015C
 */
void Game::InteractDope::actPiki( (Game::Piki *))
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
  lwz       r0, 0x8(r3)
  lwz       r31, 0x290(r4)
  cmpwi     r0, 0x1
  beq-      .loc_0x8C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x8C
  mr        r3, r30
  bl        -0x499A8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x8C
  lwz       r0, 0x8(r29)
  mr        r4, r30
  addi      r6, r1, 0xC
  li        r5, 0x10
  stw       r0, 0xC(r1)
  lwz       r3, 0x28C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x140

.loc_0x8C:
  lwz       r3, -0x6C18(r13)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x124
  lwz       r0, 0x8(r29)
  cmpwi     r0, 0x1
  bne-      .loc_0x124
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lwz       r3, 0x4(r29)
  lbz       r4, 0x2B8(r30)
  lhz       r0, 0x2DC(r3)
  cmpw      r4, r0
  bne-      .loc_0x13C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x13C
  li        r0, 0x1
  mr        r4, r30
  stb       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x17
  lwz       r3, 0x28C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x140

.loc_0x124:
  mr        r3, r30
  bl        -0x49A80
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  mr        r3, r30
  bl        -0x49C40

.loc_0x13C:
  li        r3, 0

.loc_0x140:
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
 * Address:	80193A94
 * Size:	000100
 */
void Game::InteractWind::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0xE8

.loc_0x40:
  lbz       r0, 0x2B8(r31)
  cmpwi     r0, 0x3
  bne-      .loc_0x54
  li        r3, 0
  b         .loc_0xE8

.loc_0x54:
  lwz       r3, 0x290(r31)
  lwz       r0, 0x4(r3)
  cmpwi     r0, 0x7
  bne-      .loc_0x6C
  li        r3, 0
  b         .loc_0xE8

.loc_0x6C:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x8C
  li        r3, 0
  b         .loc_0xE8

.loc_0x8C:
  lwz       r7, 0x4(r30)
  li        r3, 0
  lfs       f1, 0xC(r30)
  li        r0, 0x2
  lfs       f0, -0x54AC(r2)
  mr        r4, r31
  stfs      f1, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x8
  lfs       f1, 0x10(r30)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x14(r30)
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  stb       r3, 0x18(r1)
  sth       r0, 0x1A(r1)
  stw       r7, 0x1C(r1)
  lwz       r3, 0x28C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0xE8:
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
 * Address:	80193B94
 * Size:	000120
 */
void Game::InteractHanaChirashi::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0x108

.loc_0x40:
  lbz       r0, 0x2B8(r31)
  cmpwi     r0, 0x3
  bne-      .loc_0x88
  lbz       r0, 0x2B9(r31)
  cmpwi     r0, 0x1
  blt-      .loc_0x80
  lwz       r4, 0x258(r31)
  lwz       r3, 0xC(r4)
  lwz       r4, 0x8(r4)
  bl        0x223CF8
  mr        r3, r31
  li        r4, 0x2846
  li        r5, 0x1
  bl        -0x4B33C
  li        r0, 0
  stb       r0, 0x2B9(r31)

.loc_0x80:
  li        r3, 0
  b         .loc_0x108

.loc_0x88:
  lwz       r3, 0x290(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xAC
  li        r3, 0
  b         .loc_0x108

.loc_0xAC:
  lwz       r7, 0x4(r30)
  li        r3, 0
  lfs       f1, 0xC(r30)
  li        r0, 0x6
  lfs       f0, -0x54A4(r2)
  mr        r4, r31
  stfs      f1, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x8
  lfs       f1, 0x10(r30)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x14(r30)
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  stb       r3, 0x18(r1)
  sth       r0, 0x1A(r1)
  stw       r7, 0x1C(r1)
  lwz       r3, 0x28C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0x108:
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
 * Address:	80193CB4
 * Size:	00015C
 */
void Game::InteractBomb::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0x144

.loc_0x40:
  lwz       r3, -0x6C18(r13)
  lbz       r0, 0x3C(r3)
  rlwinm.   r0,r0,0,26,26
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x144

.loc_0x58:
  lwz       r3, 0x290(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C
  li        r3, 0
  b         .loc_0x144

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xBC
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r31
  bl        -0x492AC
  b         .loc_0xC4

.loc_0xBC:
  li        r0, -0x1
  sth       r0, 0x2A4(r31)

.loc_0xC4:
  lwz       r5, 0x4(r30)
  li        r4, 0x1
  lfs       f1, 0xC(r30)
  li        r0, 0x2
  lfs       f0, -0x54AC(r2)
  mr        r3, r31
  stfs      f1, 0x8(r1)
  lfs       f1, 0x10(r30)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x14(r30)
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  stb       r4, 0x18(r1)
  sth       r0, 0x1A(r1)
  stw       r5, 0x1C(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x120
  li        r0, 0
  stb       r0, 0x18(r1)

.loc_0x120:
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  addi      r6, r1, 0x8
  li        r5, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0x144:
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
 * Address:	80193E10
 * Size:	000114
 */
void Game::InteractDenki::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  li        r3, 0
  b         .loc_0xF8

.loc_0x44:
  lwz       r3, 0x4(r29)
  lwz       r31, 0x290(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  bl        -0x493D4
  b         .loc_0x90

.loc_0x88:
  li        r0, -0x1
  sth       r0, 0x2A4(r30)

.loc_0x90:
  lbz       r0, 0x2B8(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0xF4
  cmpwi     r0, 0x5
  beq-      .loc_0xF4
  cmplwi    r31, 0
  beq-      .loc_0xF4
  mr        r3, r31
  li        r4, 0x16
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF4
  lwz       r3, 0x28C(r30)
  mr        r4, r30
  li        r5, 0x16
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0xF8

.loc_0xF4:
  li        r3, 0

.loc_0xF8:
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
 * Address:	80193F24
 * Size:	0000A0
 */
void Game::InteractFallMeck::actPiki( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x38
  li        r3, 0
  b         .loc_0x8C

.loc_0x38:
  lwz       r3, 0x290(r31)
  cmplwi    r3, 0
  beq-      .loc_0x88
  lwz       r12, 0x0(r3)
  li        r4, 0x17
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  li        r5, 0x17
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x8C

.loc_0x88:
  li        r3, 0

.loc_0x8C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80193FC4
 * Size:	000288
 */
void Game::InteractBury::actPiki( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stw       r31, 0x8C(r1)
  mr        r31, r4
  stw       r30, 0x88(r1)
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3C
  li        r3, 0
  b         .loc_0x270

.loc_0x3C:
  lis       r3, 0x8051
  lwzu      r12, 0x260C(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x63
  blt-      .loc_0x60
  li        r3, 0
  b         .loc_0x270

.loc_0x60:
  lwz       r3, 0x248(r31)
  cmplwi    r3, 0
  bne-      .loc_0xF4
  lfs       f1, -0x54AC(r2)
  li        r5, 0
  lfs       f3, -0x54B0(r2)
  li        r0, 0x1
  lfs       f2, -0x54A0(r2)
  mr        r4, r31
  lfs       f0, -0x54A4(r2)
  addi      r3, r1, 0x1C
  stw       r5, 0x68(r1)
  stfs      f3, 0x6C(r1)
  stfs      f2, 0x70(r1)
  stw       r5, 0x64(r1)
  stfs      f1, 0x74(r1)
  stfs      f0, 0x78(r1)
  stfs      f1, 0x7C(r1)
  stb       r0, 0x60(r1)
  stb       r5, 0x61(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x1C(r1)
  addi      r4, r1, 0x54
  lfs       f1, 0x20(r1)
  lfs       f0, 0x24(r1)
  stfs      f2, 0x54(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f1, 0x58(r1)
  stfs      f0, 0x5C(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x68(r1)

.loc_0xF4:
  cmplwi    r3, 0
  beq-      .loc_0x24C
  addi      r3, r3, 0x5C
  bl        0x288388
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x24C
  mr        r3, r31
  bl        -0x4B350
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x24C
  lwz       r3, -0x6B90(r13)
  cmplwi    r3, 0
  beq-      .loc_0x24C
  li        r0, 0x1
  stw       r0, -0x6D08(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r30, r3
  stw       r0, -0x6D08(r13)
  mr        r4, r31
  addi      r3, r1, 0x10
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x10(r1)
  addi      r4, r1, 0x28
  lfs       f1, 0x14(r1)
  lfs       f0, 0x18(r1)
  stfs      f2, 0x28(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f1, 0x2C(r1)
  stfs      f0, 0x30(r1)
  lwz       r12, 0x4(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  cmplwi    r30, 0
  stfs      f1, 0x2C(r1)
  beq-      .loc_0x24C
  addi      r3, r1, 0x28
  bl        0x223644
  lbz       r8, 0x2B8(r31)
  lis       r3, 0x804B
  subi      r0, r3, 0x5D0C
  lis       r4, 0x804B
  lis       r3, 0x8051
  lfsu      f3, 0x41E4(r3)
  stw       r0, 0x34(r1)
  addi      r7, r4, 0x2C7C
  lis       r4, 0x804B
  lfs       f2, 0x4(r3)
  lfs       f1, 0x8(r3)
  li        r5, 0x1
  lfs       f0, -0x549C(r2)
  li        r0, 0x2
  addi      r6, r4, 0x2C70
  stw       r7, 0x34(r1)
  mr        r3, r30
  addi      r4, r1, 0x34
  stw       r6, 0x34(r1)
  stw       r8, 0x38(r1)
  stfs      f3, 0x3C(r1)
  stfs      f2, 0x40(r1)
  stfs      f1, 0x44(r1)
  stb       r5, 0x48(r1)
  stw       r0, 0x4C(r1)
  stfs      f0, 0x50(r1)
  bl        -0x5920C
  mr        r3, r30
  addi      r4, r1, 0x28
  li        r5, 0
  bl        -0x5903C
  lis       r3, 0x804B
  li        r0, 0x1
  subi      r5, r3, 0x5D30
  stw       r0, 0xC(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stw       r5, 0x8(r1)
  bl        -0x59114
  li        r3, 0x1
  b         .loc_0x270

.loc_0x24C:
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  li        r5, 0
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0

.loc_0x270:
  lwz       r0, 0x94(r1)
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8019424C
 * Size:	0000DC
 */
void Game::InteractSuikomi_Test::actPiki( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0xC4

.loc_0x40:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x80
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r31
  bl        -0x49808
  b         .loc_0x88

.loc_0x80:
  li        r0, -0x1
  sth       r0, 0x2A4(r31)

.loc_0x88:
  lwz       r7, 0x18(r30)
  mr        r4, r31
  lwz       r3, 0x14(r30)
  addi      r6, r1, 0x8
  lwz       r0, 0x4(r30)
  li        r5, 0x1A
  stw       r0, 0x8(r1)
  stw       r3, 0xC(r1)
  stw       r7, 0x10(r1)
  lwz       r3, 0x28C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0xC4:
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
 * Address:	80194328
 * Size:	000118
 */
void Game::InteractFire::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  li        r3, 0
  b         .loc_0xFC

.loc_0x44:
  lwz       r3, 0x290(r30)
  lbz       r31, 0x2B8(r30)
  cmplwi    r3, 0
  beq-      .loc_0xF8
  lwz       r12, 0x0(r3)
  li        r4, 0x15
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF8
  cmpwi     r31, 0x1
  beq-      .loc_0xF8
  cmpwi     r31, 0x5
  beq-      .loc_0xF8
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  bl        -0x49924
  b         .loc_0xC8

.loc_0xC0:
  li        r0, -0x1
  sth       r0, 0x2A4(r30)

.loc_0xC8:
  li        r0, 0
  mr        r4, r30
  sth       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x15
  lwz       r3, 0x28C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0xFC

.loc_0xF8:
  li        r3, 0

.loc_0xFC:
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
 * Address:	80194440
 * Size:	000134
 */
void Game::InteractAstonish::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  li        r3, 0
  b         .loc_0x118

.loc_0x44:
  lwz       r31, 0x290(r30)
  cmplwi    r31, 0
  beq-      .loc_0xFC
  mr        r3, r31
  li        r4, 0x15
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xFC
  lbz       r0, 0x2B8(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0xFC
  li        r0, 0x3
  sth       r0, 0x8(r1)
  lwz       r3, 0x4(r29)
  cmplwi    r3, 0
  beq-      .loc_0xCC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  bl        -0x49A48
  b         .loc_0xD4

.loc_0xCC:
  li        r0, -0x1
  sth       r0, 0x2A4(r30)

.loc_0xD4:
  lwz       r3, 0x28C(r30)
  mr        r4, r30
  addi      r6, r1, 0x8
  li        r5, 0x15
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x118

.loc_0xFC:
  mr        r3, r31
  li        r4, 0x15
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  li        r3, 0

.loc_0x118:
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
 * Address:	80194574
 * Size:	000118
 */
void Game::InteractBubble::actPiki( (Game::Piki *))
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
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  li        r3, 0
  b         .loc_0xFC

.loc_0x44:
  lwz       r3, 0x290(r30)
  lbz       r31, 0x2B8(r30)
  cmplwi    r3, 0
  beq-      .loc_0xF8
  lwz       r12, 0x0(r3)
  li        r4, 0x15
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF8
  cmpwi     r31, 0
  beq-      .loc_0xF8
  cmpwi     r31, 0x5
  beq-      .loc_0xF8
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC0
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  bl        -0x49B70
  b         .loc_0xC8

.loc_0xC0:
  li        r0, -0x1
  sth       r0, 0x2A4(r30)

.loc_0xC8:
  li        r0, 0x1
  mr        r4, r30
  sth       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x15
  lwz       r3, 0x28C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0xFC

.loc_0xF8:
  li        r3, 0

.loc_0xFC:
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
 * Address:	8019468C
 * Size:	00013C
 */
void Game::InteractGas::actPiki( (Game::Piki *))
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
  mr        r3, r30
  bl        -0x4B1F8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x38
  li        r3, 0
  b         .loc_0x120

.loc_0x38:
  lwz       r3, 0x290(r30)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  li        r3, 0
  b         .loc_0x120

.loc_0x60:
  lwz       r3, 0x290(r30)
  lbz       r31, 0x2B8(r30)
  cmplwi    r3, 0
  beq-      .loc_0x11C
  lwz       r12, 0x0(r3)
  li        r4, 0x15
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x11C
  cmpwi     r31, 0x4
  beq-      .loc_0x11C
  cmpwi     r31, 0x5
  beq-      .loc_0x11C
  lwz       r3, 0x4(r29)
  cmplwi    r3, 0
  beq-      .loc_0xE4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE4
  lwz       r3, 0x4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r30
  bl        -0x49CAC
  b         .loc_0xEC

.loc_0xE4:
  li        r0, -0x1
  sth       r0, 0x2A4(r30)

.loc_0xEC:
  li        r0, 0x2
  mr        r4, r30
  sth       r0, 0x8(r1)
  addi      r6, r1, 0x8
  li        r5, 0x15
  lwz       r3, 0x28C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x120

.loc_0x11C:
  li        r3, 0

.loc_0x120:
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
 * Address:	801947C8
 * Size:	0000C0
 */
void Game::InteractBattle::actPiki( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x4C9A0
  cmpwi     r3, 0xD
  beq-      .loc_0xA4
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x10E0
  li        r4, 0x431
  subi      r5, r5, 0x10CC
  crclr     6, 0x6
  bl        -0x16A1E8

.loc_0x64:
  lwz       r6, 0x4(r30)
  lis       r3, 0x804B
  addi      r0, r3, 0x530
  lis       r3, 0x804B
  stw       r0, 0x8(r1)
  addi      r3, r3, 0x47DC
  li        r0, 0x1
  addi      r5, r1, 0x8
  stw       r3, 0x8(r1)
  li        r4, 0xD
  stw       r6, 0xC(r1)
  stb       r0, 0x10(r1)
  lwz       r3, 0x294(r31)
  bl        0x2734
  li        r3, 0x1
  b         .loc_0xA8

.loc_0xA4:
  li        r3, 0

.loc_0xA8:
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
 * Address:	80194888
 * Size:	000120
 */
void Game::InteractPress::actPiki( (Game::Piki *))
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
  lwz       r5, -0x6C18(r13)
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  bne-      .loc_0x40
  lbz       r0, 0x48(r5)
  cmplwi    r0, 0
  beq-      .loc_0x40
  li        r3, 0
  b         .loc_0x108

.loc_0x40:
  lwz       r3, 0x290(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  li        r3, 0
  b         .loc_0x108

.loc_0x68:
  lwz       r3, 0x290(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x104
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC4
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r31
  bl        -0x49E88
  b         .loc_0xCC

.loc_0xC4:
  li        r0, -0x1
  sth       r0, 0x2A4(r31)

.loc_0xCC:
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  li        r5, 0x14
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x280B
  li        r5, 0
  bl        -0x4C0B4
  li        r3, 0x1
  b         .loc_0x108

.loc_0x104:
  li        r3, 0

.loc_0x108:
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
 * Address:	801949A8
 * Size:	000260
 */
void Game::InteractFlick::actPiki( (Game::Piki *))
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
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  mr        r31, r4
  mr        r30, r3
  lwz       r3, 0x290(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  li        r3, 0
  b         .loc_0x22C

.loc_0x5C:
  mr        r3, r31
  bl        -0x4BAD4
  cmpwi     r3, 0x9
  bne-      .loc_0x74
  li        r3, 0
  b         .loc_0x22C

.loc_0x74:
  lwz       r29, 0x290(r31)
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA0
  lwz       r0, 0x4(r29)
  cmpwi     r0, 0x15
  bne-      .loc_0xA8

.loc_0xA0:
  li        r3, 0
  b         .loc_0x22C

.loc_0xA8:
  lfs       f1, 0x10(r30)
  lfs       f0, -0x5498(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xCC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     

.loc_0xCC:
  lfs       f0, -0x54AC(r2)
  fmr       f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE0
  fneg      f2, f1

.loc_0xE0:
  lfs       f3, -0x5494(r2)
  lis       r3, 0x8050
  lfs       f0, -0x54AC(r2)
  addi      r4, r3, 0x71A0
  fmuls     f2, f2, f3
  fcmpo     cr0, f1, f0
  fctiwz    f0, f2
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fneg      f31, f0
  bge-      .loc_0x13C
  lfs       f0, -0x5490(r2)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f30, f0
  b         .loc_0x154

.loc_0x13C:
  fmuls     f0, f1, f3
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f30, r4, r0

.loc_0x154:
  bl        -0xCB55C
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f2, -0x5478(r2)
  stw       r0, 0x38(r1)
  lfs       f1, -0x548C(r2)
  lfd       f0, 0x38(r1)
  lfs       f3, 0x8(r30)
  fsubs     f2, f0, f2
  lfs       f0, -0x5488(r2)
  fmuls     f0, f0, f3
  fdivs     f1, f2, f1
  fmadds    f29, f0, f1, f3
  bl        -0xCB594
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x44(r1)
  fneg      f0, f30
  lwz       r7, 0x4(r30)
  fmuls     f1, f31, f29
  stw       r0, 0x40(r1)
  li        r6, 0
  lfd       f3, -0x5478(r2)
  lfd       f2, 0x40(r1)
  fmuls     f4, f0, f29
  lfs       f5, -0x548C(r2)
  li        r0, 0x1
  fsubs     f6, f2, f3
  lfs       f0, -0x5488(r2)
  lfs       f3, -0x5480(r2)
  lfs       f2, -0x5484(r2)
  mr        r3, r31
  fdivs     f5, f6, f5
  stfs      f4, 0x8(r1)
  li        r4, 0x2854
  li        r5, 0
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  fmadds    f0, f3, f5, f2
  stb       r6, 0x18(r1)
  sth       r0, 0x1A(r1)
  stfs      f0, 0xC(r1)
  stw       r7, 0x1C(r1)
  bl        -0x4C2E0
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  addi      r6, r1, 0x8
  li        r5, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0x22C:
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r0, 0x94(r1)
  lwz       r29, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	80194C08
 * Size:	0002EC
 */
void Game::InteractSwallow::actPiki( (Game::Piki *))
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
  stfd      f29, 0x50(r1)
  psq_st    f29,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68
  lwz       r3, -0x6B70(r13)
  li        r4, 0x27
  bl        0x5277C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x168

.loc_0x68:
  mr        r4, r31
  addi      r3, r1, 0x18
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x4(r30)
  addi      r3, r1, 0xC
  lfs       f31, 0x18(r1)
  lwz       r12, 0x0(r4)
  lfs       f30, 0x1C(r1)
  lwz       r12, 0x8(r12)
  lfs       f29, 0x20(r1)
  mtctr     r12
  bctrl     
  lfs       f0, 0x10(r1)
  lfs       f1, 0xC(r1)
  fsubs     f3, f30, f0
  lfs       f2, 0x14(r1)
  fsubs     f1, f31, f1
  lfs       f0, -0x54AC(r2)
  fsubs     f2, f29, f2
  fmuls     f3, f3, f3
  fmuls     f4, f2, f2
  fmadds    f3, f1, f1, f3
  fadds     f3, f4, f3
  fcmpo     cr0, f3, f0
  ble-      .loc_0xE8
  ble-      .loc_0xEC
  fsqrte    f0, f3
  fmuls     f3, f0, f3
  b         .loc_0xEC

.loc_0xE8:
  fmr       f3, f0

.loc_0xEC:
  lfs       f0, -0x54AC(r2)
  fcmpo     cr0, f3, f0
  ble-      .loc_0x108
  lfs       f0, -0x54A4(r2)
  fdivs     f0, f0, f3
  fmuls     f1, f1, f0
  fmuls     f2, f2, f0

.loc_0x108:
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x15FC10
  lwz       r5, 0x4(r30)
  lis       r3, 0x804B
  subi      r4, r3, 0x5D00
  fneg      f0, f1
  lfs       f2, -0x5480(r2)
  lis       r3, 0x804B
  lfs       f1, -0x54AC(r2)
  addi      r0, r3, 0x4E04
  stw       r4, 0x24(r1)
  mr        r3, r31
  addi      r4, r1, 0x24
  stw       r5, 0x28(r1)
  stw       r0, 0x24(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2B8

.loc_0x168:
  lwz       r3, 0x290(r31)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x190
  li        r3, 0
  b         .loc_0x2B8

.loc_0x190:
  lwz       r3, 0xC(r30)
  li        r29, 0
  cmplwi    r3, 0
  beq-      .loc_0x1BC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1BC
  li        r29, 0x1

.loc_0x1BC:
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x1E0
  lis       r3, 0x8048
  lis       r5, 0x8048
  subi      r3, r3, 0x10E0
  li        r4, 0x49C
  subi      r5, r5, 0x10CC
  crclr     6, 0x6
  bl        -0x16A7A4

.loc_0x1E0:
  lwz       r3, 0x290(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2B4
  lwz       r4, 0x4(r30)
  mr        r3, r31
  lwz       r5, 0xC(r30)
  bl        0xA258
  lwz       r0, 0x10(r30)
  li        r29, 0x8
  cmpwi     r0, 0x1
  bne-      .loc_0x230
  mr        r3, r31
  li        r29, 0x3F
  li        r4, 0x282B
  li        r5, 0
  bl        -0x4C568

.loc_0x230:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x270
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r31
  bl        -0x4A3B4
  b         .loc_0x278

.loc_0x270:
  li        r0, -0x1
  sth       r0, 0x2A4(r31)

.loc_0x278:
  stw       r29, 0x8(r1)
  mr        r3, r31
  li        r4, 0x2809
  li        r5, 0
  bl        -0x4C5C4
  lwz       r3, 0x28C(r31)
  mr        r4, r31
  addi      r6, r1, 0x8
  li        r5, 0xB
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x2B8

.loc_0x2B4:
  li        r3, 0

.loc_0x2B8:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r0, 0x84(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	80194EF4
 * Size:	0000CC
 */
void Game::InteractKill::actPiki( (Game::Piki *))
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
  lwz       r3, 0x8(r3)
  cmplwi    r3, 0
  beq-      .loc_0x38
  beq-      .loc_0xA4
  lwz       r0, 0x4(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0xA4

.loc_0x38:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x78
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x258(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  mr        r3, r31
  bl        -0x4A4A8
  b         .loc_0x80

.loc_0x78:
  li        r0, -0x1
  sth       r0, 0x2A4(r31)

.loc_0x80:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C0(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  li        r3, 0
  bl        0x9B784

.loc_0xA4:
  lwz       r4, 0x8(r30)
  mr        r3, r31
  bl        -0x59EB0
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
 * Address:	80194FC0
 * Size:	00000C
 */
void PikiAI::ActBattleArg::getName(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  subi      r3, r3, 0x10C0
  blr
*/
}

/*
 * --INFO--
 * Address:	80194FCC
 * Size:	000028
 */
void __sinit_interactPiki_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6CB8(r13)
  stfsu     f0, 0x47D0(r3)
  stfs      f0, -0x6CB4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
