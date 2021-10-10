

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
 * Address:	........
 * Size:	0000E8
 */
void Game::BaseGameSection::newdraw_draw3D((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void Game::BaseGameSection::newdraw_drawPreShadow((Viewport*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000220
 */
void Game::BaseGameSection::newdraw_drawPostShadow((Viewport*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void Game::BaseGameSection::newdraw_drawParticle((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802398D8
 * Size:	0001F4
 */
void Game::BaseGameSection::newdraw_draw3D_all((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x804C
	  lis       r5, 0x804C
	  stw       r0, 0x34(r1)
	  addi      r7, r5, 0x159C
	  addi      r9, r6, 0x15B4
	  lis       r8, 0x804C
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x8
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stw       r29, 0x24(r1)
	  lwz       r6, 0x0(r7)
	  lwz       r5, 0x4(r7)
	  lwz       r0, 0x8(r7)
	  addi      r7, r8, 0x15A8
	  stw       r9, 0x8(r1)
	  stw       r7, 0x8(r1)
	  stw       r30, 0xC(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x18(r1)
	  bl        0x1EBCC4
	  lwz       r3, 0x12C(r30)
	  bl        0x21C20C
	  lwz       r3, 0x130(r30)
	  bl        0x21C204
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x94
	  cmpwi     r0, 0x3
	  bne-      .loc_0x98

	.loc_0x94:
	  li        r3, 0x1

	.loc_0x98:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB0
	  lwz       r4, 0x154(r30)
	  lwz       r3, -0x65E8(r13)
	  lwz       r4, 0x20(r4)
	  bl        0x181E60

	.loc_0xB0:
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x3D34
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x1F115C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  lwz       r12, 0x114(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x3D34
	  lwz       r3, 0x28(r5)
	  bl        0x1F1114
	  lwz       r6, -0x6514(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x3D28
	  li        r5, 0x1
	  lwz       r3, 0x28(r6)
	  bl        0x1F10F8
	  lwz       r3, 0x128(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1EBBCC
	  mr.       r29, r3
	  beq-      .loc_0x178
	  bl        0x1EB810
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x178
	  stw       r29, 0x25C(r31)
	  mr        r3, r30
	  mr        r4, r31
	  mr        r5, r29
	  bl        -0xEA5FC

	.loc_0x178:
	  lwz       r3, 0x128(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x1EBB80
	  mr.       r29, r3
	  beq-      .loc_0x1C4
	  bl        0x1EB7C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1C4
	  stw       r29, 0x25C(r31)
	  mr        r3, r30
	  mr        r4, r31
	  mr        r5, r29
	  bl        -0xEA648

	.loc_0x1C4:
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x3D28
	  lwz       r3, 0x28(r5)
	  bl        0x1F1050
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
 * Address:	80239ACC
 * Size:	000360
 */
void Game::BaseGameSection::newdraw_drawAll((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  addi      r4, r5, 0x3D40
	  li        r5, 0x1
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r6, -0x6514(r13)
	  lwz       r3, 0x28(r6)
	  bl        0x1F0FF8
	  lwz       r5, -0x6514(r13)
	  mr        r3, r29
	  lhz       r4, 0x18(r30)
	  lwz       r31, 0x24(r5)
	  bl        -0xEA2AC
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x1EB9F8
	  bl        0x20551C
	  mr        r3, r29
	  bl        -0xEA1C4
	  mr        r3, r30
	  bl        0x1EB910
	  mr        r3, r30
	  bl        0x1EB664
	  lwz       r5, -0x6514(r13)
	  lis       r3, 0x8048
	  addi      r4, r3, 0x3D40
	  lwz       r3, 0x28(r5)
	  bl        0x1F0FAC
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x1DBF50
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3E40
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x1F0F88
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x6
	  bl        0x21BF30
	  bl        0x21BD00
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x2
	  bl        0x21BF20
	  bl        0x21BCF0
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x9
	  bl        0x21BF10
	  bl        0x21BCE0
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x3
	  bl        0x21BF00
	  bl        0x21BCD0
	  lwz       r3, 0x12C(r29)
	  li        r4, 0
	  bl        0x21BEF0
	  bl        0x21BCC0
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0xEA698
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x130(r29)
	  li        r4, 0x3
	  bl        0x21BEBC
	  bl        0x21BC8C
	  lwz       r3, 0x130(r29)
	  li        r4, 0
	  bl        0x21BEAC
	  bl        0x21BC7C
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r3, 0x2344(r3)
	  bl        0x1F8D90
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x1
	  bl        0x21BE8C
	  bl        0x21BC5C
	  lwz       r3, 0x130(r29)
	  li        r4, 0x1
	  bl        0x21BE7C
	  bl        0x21BC4C
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r3, 0x2344(r3)
	  bl        0x1F8DA0
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3E40
	  lwz       r3, 0x28(r3)
	  bl        0x1F0E90
	  mr        r3, r31
	  subi      r4, r2, 0x3E38
	  bl        0x1EBA98
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3E38
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x1F0E6C
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  bl        -0x1DC08C
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        -0xEA910
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3E38
	  lwz       r3, 0x28(r3)
	  bl        0x1F0E44
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  lhz       r5, 0x18(r30)
	  bl        0x7C48
	  mr        r3, r30
	  bl        0x1EB774
	  mr        r3, r30
	  bl        0x1EB4C8
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3E30
	  li        r5, 0x1
	  lwz       r3, 0x28(r3)
	  bl        0x1F0E0C
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x7
	  bl        0x21BDCC
	  bl        0x21BB9C
	  lwz       r3, 0x130(r29)
	  li        r4, 0x7
	  bl        0x21BDBC
	  bl        0x21BB8C
	  lwz       r0, 0x168(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x278
	  lbz       r0, 0x164(r29)
	  rlwinm.   r0,r0,0,30,31
	  bne-      .loc_0x278
	  lwz       r3, 0x154(r29)
	  li        r6, 0x4
	  lwz       r4, 0x15C(r29)
	  li        r7, 0x1
	  lwz       r5, 0x160(r29)
	  li        r8, 0
	  bl        -0x2066C0

	.loc_0x278:
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r3, 0x2344(r3)
	  bl        0x1F8C54
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x8
	  bl        0x21BD50
	  bl        0x21BB20
	  lwz       r3, 0x130(r29)
	  li        r4, 0x8
	  bl        0x21BD40
	  bl        0x21BB10
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x1EB784
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r3, 0x2344(r3)
	  bl        0x1F8C18
	  lwz       r3, 0x12C(r29)
	  li        r4, 0x4
	  bl        0x21BD14
	  bl        0x21BAE4
	  lwz       r3, 0x130(r29)
	  li        r4, 0x4
	  bl        0x21BD04
	  bl        0x21BAD4
	  lwz       r3, 0x128(r29)
	  mr        r4, r31
	  lwz       r3, 0x2344(r3)
	  bl        0x1F8C28
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x1EB738
	  lwz       r3, 0x130(r29)
	  li        r4, 0x2
	  bl        0x21BCD8
	  bl        0x21BAA8
	  mr        r3, r30
	  li        r4, 0
	  bl        0x1EB71C
	  lwz       r3, -0x6514(r13)
	  subi      r4, r2, 0x3E30
	  lwz       r3, 0x28(r3)
	  bl        0x1F0CF0
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
 * Address:	80239E2C
 * Size:	000030
 */
void Delegate1<Game::BaseGameSection, Viewport*>::invoke(Viewport*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x178320
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80239E5C
 * Size:	000028
 */
void __sinit_baseGameSectionDraw_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x69D0(r13)
	  stfsu     f0, 0x1590(r3)
	  stfs      f0, -0x69CC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
