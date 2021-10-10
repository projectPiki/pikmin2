

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80429DB0
 * Size:	0000C8
 */
void ResetManager::ResetManager(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  li        r4, 0
	  stw       r0, 0x24(r1)
	  lis       r0, 0x4330
	  subi      r5, r5, 0x41F0
	  lfd       f2, 0x21F0(r2)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lis       r3, 0x8000
	  stw       r5, 0x0(r31)
	  stb       r4, 0xC(r31)
	  stb       r4, 0xD(r31)
	  stb       r4, 0xE(r31)
	  stb       r4, 0xF(r31)
	  lwz       r3, 0xF8(r3)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r3,30,2,31
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fmuls     f1, f0, f1
	  bl        -0x367C14
	  stw       r3, -0x7728(r13)
	  li        r5, 0
	  lfs       f0, 0x21E8(r2)
	  mr        r3, r31
	  stw       r4, -0x7724(r13)
	  stb       r5, 0xC(r31)
	  stb       r5, 0xD(r31)
	  stb       r5, 0xE(r31)
	  stb       r5, 0xF(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0xC(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,29,27
	  stw       r0, 0xC(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r0,r0,0,31,29
	  stw       r0, 0xC(r31)
	  stw       r5, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  stw       r5, 0x10(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429E78
 * Size:	0002B4
 */
void ResetManager::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x62E0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x34B0EC
	  cmpwi     r3, -0x1
	  beq-      .loc_0x298
	  lwz       r0, 0xC(r29)
	  li        r30, 0x1
	  rlwinm.   r0,r0,0,3,3
	  bne-      .loc_0x54
	  lwz       r3, -0x6514(r13)
	  bl        -0x6ACC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x54
	  li        r30, 0

	.loc_0x54:
	  lwz       r0, 0x4(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0x1D8
	  mr        r3, r29
	  bl        0x3E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x140
	  mr        r3, r29
	  bl        0x3E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x140
	  lwz       r0, 0xC(r29)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x140
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x140
	  lwz       r0, 0x4(r29)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD8
	  bge-      .loc_0x298
	  cmpwi     r0, 0x1
	  bge-      .loc_0xB0
	  b         .loc_0x298

	.loc_0xB0:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x298
	  li        r0, 0x2
	  stw       r0, 0x4(r29)
	  b         .loc_0x298

	.loc_0xD8:
	  bl        -0x3FC168
	  lwz       r3, -0x6514(r13)
	  bl        -0x6FC8
	  bl        -0x39EF78
	  lwz       r0, 0xC(r29)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x108
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0x1
	  bl        -0x339B98
	  b         .loc_0x298

	.loc_0x108:
	  lis       r3, 0x7661
	  lis       r5, 0x8070
	  addi      r0, r3, 0x6C64
	  stw       r0, 0x0(r5)
	  lis       r3, 0x8070
	  addi      r4, r5, 0x8
	  lwz       r0, -0x6518(r13)
	  stb       r0, 0x4(r5)
	  bl        -0x339D08
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  bl        -0x339BD0
	  b         .loc_0x298

	.loc_0x140:
	  mr        r3, r29
	  bl        0x300
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  addi      r3, r31, 0
	  crclr     6, 0x6
	  bl        -0x33C8E4

	.loc_0x15C:
	  mr        r3, r29
	  bl        0x2F8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x190
	  lwz       r3, 0x10(r29)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0x3
	  stw       r0, 0x10(r29)
	  bne-      .loc_0x184
	  bl        0x24A60

	.loc_0x184:
	  addi      r3, r31, 0x24
	  crclr     6, 0x6
	  bl        -0x33C918

	.loc_0x190:
	  lwz       r0, 0xC(r29)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1A8
	  addi      r3, r31, 0x3C
	  crclr     6, 0x6
	  bl        -0x33C930

	.loc_0x1A8:
	  bl        -0x3395C4
	  cmpwi     r3, 0
	  beq-      .loc_0x1C0
	  addi      r3, r31, 0x50
	  crclr     6, 0x6
	  bl        -0x33C948

	.loc_0x1C0:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x298
	  addi      r3, r31, 0x70
	  crclr     6, 0x6
	  bl        -0x33C95C
	  b         .loc_0x298

	.loc_0x1D8:
	  addic.    r0, r1, 0x8
	  beq-      .loc_0x1E8
	  lwz       r0, -0x771C(r13)
	  stw       r0, 0x8(r1)

	.loc_0x1E8:
	  lbz       r0, -0x771F(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x200
	  lwz       r0, 0xC(r29)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x298

	.loc_0x200:
	  bl        -0x33961C
	  cmpwi     r3, 0
	  bne-      .loc_0x298
	  lwz       r0, 0xC(r29)
	  li        r3, 0x1
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x234
	  lwz       r0, 0x8(r1)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x234
	  cmplwi    r0, 0x1
	  ble-      .loc_0x234
	  li        r3, 0

	.loc_0x234:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x278
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x278
	  lwz       r3, -0x67A8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x254
	  bl        -0xF1B78

	.loc_0x254:
	  li        r3, 0
	  li        r4, 0x78
	  bl        0x25390
	  lwz       r3, 0xC(r29)
	  li        r0, 0x1
	  ori       r3, r3, 0x1
	  stw       r3, 0xC(r29)
	  stw       r0, 0x4(r29)
	  b         .loc_0x298

	.loc_0x278:
	  lwz       r3, 0xC(r29)
	  li        r0, 0
	  rlwinm    r3,r3,0,0,30
	  stw       r3, 0xC(r29)
	  lwz       r3, 0xC(r29)
	  rlwinm    r3,r3,0,29,27
	  stw       r3, 0xC(r29)
	  stb       r0, -0x771F(r13)

	.loc_0x298:
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
 * Address:	8042A12C
 * Size:	000038
 */
void ResetManager::updateStatusEffects()
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6514(r13)
	  li        r0, 0
	  lfs       f2, 0x8(r3)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x21F8(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x8(r3)
	  lfs       f1, 0x8(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x30
	  stfs      f0, 0x8(r3)
	  li        r0, 0x1

	.loc_0x30:
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042A164
 * Size:	000158
 */
void ResetManager::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stw       r31, 0x11C(r1)
	  mr        r31, r3
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x144
	  bl        -0x34B3D4
	  cmpwi     r3, -0x1
	  beq-      .loc_0x144
	  lwz       r5, -0x76E0(r13)
	  lis       r4, 0x4330
	  lfs       f1, 0x21E8(r2)
	  addi      r3, r1, 0x10
	  lwz       r6, 0x4(r5)
	  stw       r4, 0xE8(r1)
	  fmr       f2, f1
	  lhz       r5, 0x4(r6)
	  lhz       r0, 0x6(r6)
	  stw       r5, 0xEC(r1)
	  lfd       f4, 0x21F0(r2)
	  lfd       f0, 0xE8(r1)
	  stw       r0, 0xF4(r1)
	  fsubs     f3, f0, f4
	  lfs       f5, 0x21FC(r2)
	  stw       r4, 0xF0(r1)
	  lfs       f6, 0x2200(r2)
	  lfd       f0, 0xF0(r1)
	  fsubs     f4, f0, f4
	  bl        -0x3F4C04
	  addi      r3, r1, 0x10
	  bl        -0x3F4B28
	  lfs       f2, 0x2204(r2)
	  lfs       f0, 0x8(r31)
	  lfs       f1, 0x21F8(r2)
	  fmuls     f2, f2, f0
	  lfs       f0, 0x21E8(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB4
	  lfs       f0, 0x2208(r2)
	  fadds     f0, f0, f1
	  b         .loc_0xBC

	.loc_0xB4:
	  lfs       f0, 0x2208(r2)
	  fsubs     f0, f1, f0

	.loc_0xBC:
	  fctiwz    f0, f0
	  li        r6, 0
	  lis       r0, 0x4330
	  lfs       f1, 0x21E8(r2)
	  stb       r6, 0x8(r1)
	  addi      r3, r1, 0xC
	  stfd      f0, 0xF8(r1)
	  fmr       f2, f1
	  lwz       r4, -0x76E0(r13)
	  lwz       r5, 0xFC(r1)
	  stb       r6, 0x9(r1)
	  lfd       f4, 0x21F0(r2)
	  stb       r6, 0xA(r1)
	  stb       r5, 0xB(r1)
	  lwz       r5, 0x8(r1)
	  stw       r0, 0x100(r1)
	  stw       r5, 0xC(r1)
	  lwz       r5, 0x4(r4)
	  stw       r0, 0x108(r1)
	  lhz       r4, 0x4(r5)
	  lhz       r0, 0x6(r5)
	  stw       r4, 0x104(r1)
	  stw       r0, 0x10C(r1)
	  lfd       f3, 0x100(r1)
	  lfd       f0, 0x108(r1)
	  fsubs     f3, f3, f4
	  fsubs     f4, f0, f4
	  bl        -0x3F4894
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  stw       r0, 0x10(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0x10(r1)

	.loc_0x144:
	  lwz       r0, 0x124(r1)
	  lwz       r31, 0x11C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042A2BC
 * Size:	000014
 */
void ResetManager::isWritingMemoryCard()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xE4(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042A2D0
 * Size:	000044
 */
void ResetManager::isSoundSystemStopped()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x67A8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  bl        -0x37D2C0
	  rlwinm    r0,r3,0,24,31
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0x34

	.loc_0x30:
	  li        r3, 0x1

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
