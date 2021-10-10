

/*
 * --INFO--
 * Address:	8012E34C
 * Size:	000034
 */
void Game::EnemyPelletInfo::__ct(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x804B
	  li        r5, 0x3
	  subi      r0, r4, 0x7A8
	  li        r4, 0x1
	  stw       r0, 0x8(r3)
	  li        r0, 0x8
	  lfs       f0, -0x6240(r2)
	  stb       r5, 0x0(r3)
	  stb       r4, 0x1(r3)
	  stb       r4, 0x2(r3)
	  stb       r0, 0x3(r3)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012E380
 * Size:	000120
 */
void Game::EnemyPelletInfo::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x3E58
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r4, 0x414(r4)
	  bl        0x2E6084
	  lbz       r4, 0x0(r29)
	  mr        r3, r30
	  bl        0x2E72B4
	  mr        r3, r30
	  addi      r4, r31, 0
	  addi      r5, r31, 0xC
	  crclr     6, 0x6
	  bl        0x2E5E0C
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2E6058
	  lbz       r4, 0x1(r29)
	  mr        r3, r30
	  bl        0x2E7288
	  mr        r3, r30
	  addi      r4, r31, 0
	  addi      r5, r31, 0x1C
	  crclr     6, 0x6
	  bl        0x2E5DE0
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2E602C
	  lbz       r4, 0x2(r29)
	  mr        r3, r30
	  bl        0x2E725C
	  mr        r3, r30
	  addi      r4, r31, 0
	  addi      r5, r31, 0x28
	  crclr     6, 0x6
	  bl        0x2E5DB4
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2E6000
	  lbz       r4, 0x3(r29)
	  mr        r3, r30
	  bl        0x2E7230
	  mr        r3, r30
	  addi      r4, r31, 0
	  addi      r5, r31, 0x34
	  crclr     6, 0x6
	  bl        0x2E5D88
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2E5FD4
	  lfs       f1, 0x4(r29)
	  mr        r3, r30
	  bl        0x2E73DC
	  mr        r3, r30
	  addi      r4, r31, 0
	  addi      r5, r31, 0x28
	  crclr     6, 0x6
	  bl        0x2E5D5C
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
 * Address:	8012E4A0
 * Size:	000070
 */
void Game::EnemyPelletInfo::read((Stream&))
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
	  mr        r3, r31
	  bl        0x2E5FDC
	  stb       r3, 0x0(r30)
	  mr        r3, r31
	  bl        0x2E5FD0
	  stb       r3, 0x1(r30)
	  mr        r3, r31
	  bl        0x2E5FC4
	  stb       r3, 0x2(r30)
	  mr        r3, r31
	  bl        0x2E5FB8
	  stb       r3, 0x3(r30)
	  mr        r3, r31
	  bl        0x2E68BC
	  stfs      f1, 0x4(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
