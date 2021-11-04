

/*
 * --INFO--
 * Address:	802BED6C
 * Size:	000008
 */
void Game::Houdai::ProperAnimator::setAnimMgr(SysShape::AnimMgr*)
{
	/*
	.loc_0x0:
	  fneg      f2, f1
	  lfs       f3, -0x6B04(r2)
	*/
}

/*
 * --INFO--
 * Address:	802BED74
 * Size:	000008
 */
void Game::Houdai::ProperAnimator::getAnimator(int)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802BED7C
 * Size:	00005C
 */
void Game::Houdai::ProperAnimator::~ProperAnimator()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804D
	  addi      r0, r3, 0xD80
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804B
	  subi      r0, r3, 0x23A8
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x29AD08

	.loc_0x44:
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
 * Address:	802BEDD8
 * Size:	000008
 */
void Game::Houdai::ProperAnimator::getAnimator()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x10
	  blr
	*/
}
