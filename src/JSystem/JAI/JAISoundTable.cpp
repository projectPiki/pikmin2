

/*
 * --INFO--
 * Address:	800B744C
 * Size:	0000CC
 */
void JAInter::SoundTable::init((unsigned char*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  stw       r4, -0x73D0(r13)
	  lwz       r4, -0x7494(r13)
	  stw       r3, -0x73C8(r13)
	  lbz       r0, 0x3(r3)
	  li        r3, 0x24
	  stb       r0, -0x73D8(r13)
	  bl        -0x9342C
	  stw       r3, -0x73D4(r13)
	  li        r3, 0x48
	  lwz       r4, -0x7494(r13)
	  li        r5, 0x4
	  bl        -0x93440
	  stw       r3, -0x73CC(r13)
	  li        r9, 0
	  b         .loc_0xB0

	.loc_0x4C:
	  lwz       r0, -0x73C8(r13)
	  rlwinm    r5,r9,2,22,29
	  rlwinm    r8,r9,0,24,31
	  lwz       r3, -0x73D4(r13)
	  add       r4, r5, r0
	  rlwinm    r7,r9,1,23,30
	  lhz       r0, 0x6(r4)
	  cmplwi    r8, 0x10
	  sthx      r0, r3, r7
	  lwz       r6, -0x73C8(r13)
	  lwz       r3, -0x73CC(r13)
	  add       r4, r5, r6
	  lhz       r0, 0x8(r4)
	  rlwinm    r0,r0,4,0,27
	  add       r4, r6, r0
	  addi      r0, r4, 0x50
	  stwx      r0, r3, r5
	  bge-      .loc_0xAC
	  lwz       r3, -0x73D4(r13)
	  lhzx      r0, r3, r7
	  cmplwi    r0, 0
	  beq-      .loc_0xAC
	  addi      r0, r8, 0x1
	  stb       r0, -0x73D7(r13)

	.loc_0xAC:
	  addi      r9, r9, 0x1

	.loc_0xB0:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x12
	  blt+      .loc_0x4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B7518
 * Size:	0000C4
 */
void JAInter::SoundTable::getInfoPointer((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  rlwinm    r4,r3,0,0,1
	  stw       r0, 0x24(r1)
	  lis       r0, 0xC000
	  cmpw      r4, r0
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x68
	  bge-      .loc_0x48
	  lis       r3, 0x8000
	  addi      r0, r3, 0x1
	  cmpw      r4, r0
	  bge-      .loc_0x6C
	  b         .loc_0x60

	.loc_0x48:
	  cmpwi     r4, 0
	  beq-      .loc_0x54
	  b         .loc_0x6C

	.loc_0x54:
	  rlwinm    r30,r29,20,24,31
	  bl        -0x9B00
	  b         .loc_0x6C

	.loc_0x60:
	  li        r30, 0x10
	  b         .loc_0x6C

	.loc_0x68:
	  li        r30, 0x11

	.loc_0x6C:
	  lwz       r0, -0x73C8(r13)
	  rlwinm    r5,r29,0,22,31
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r3, -0x73D4(r13)
	  rlwinm    r0,r30,1,0,30
	  lhzx      r0, r3, r0
	  cmplw     r5, r0
	  bge-      .loc_0xA4
	  lwz       r4, -0x73CC(r13)
	  rlwinm    r3,r30,2,0,29
	  rlwinm    r0,r5,4,0,27
	  lwzx      r3, r4, r3
	  add       r31, r3, r0

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	800B75DC
 * Size:	000058
 */
void JAInter::SoundTable::getInfoFormat((unsigned long))
{
	/*
	.loc_0x0:
	  rlwinm    r5,r3,0,0,1
	  lis       r0, 0xC000
	  cmpw      r5, r0
	  li        r3, 0
	  beq-      .loc_0x4C
	  bge-      .loc_0x2C
	  lis       r4, 0x8000
	  addi      r0, r4, 0x1
	  cmpw      r5, r0
	  bgelr-
	  b         .loc_0x40

	.loc_0x2C:
	  cmpwi     r5, 0
	  bnelr-
	  lwz       r3, -0x73C8(r13)
	  lbz       r3, 0x0(r3)
	  blr

	.loc_0x40:
	  lwz       r3, -0x73C8(r13)
	  lbz       r3, 0x1(r3)
	  blr

	.loc_0x4C:
	  lwz       r3, -0x73C8(r13)
	  lbz       r3, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAInter::SoundTable::setInfoTrack((unsigned long, unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B7634
 * Size:	000008
 */
void JAInter::SoundTable::getCategotyMax(void)
{
	/*
	.loc_0x0:
	  lbz       r3, -0x73D7(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B763C
 * Size:	000010
 */
void JAInter::SoundTable::getSoundMax((unsigned char))
{
	/*
	.loc_0x0:
	  lwz       r4, -0x73D4(r13)
	  rlwinm    r0,r3,1,23,30
	  lhzx      r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAInter::SoundTable::getSoundTablePointer(void)
{
	// UNUSED FUNCTION
}
