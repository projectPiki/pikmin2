

/*
 * --INFO--
 * Address:	8009C310
 * Size:	000088
 */
void JASTrackPort::init()
{
	/*
	.loc_0x0:
	  li        r0, 0x2
	  mr        r4, r3
	  li        r6, 0
	  mtctr     r0

	.loc_0x10:
	  add       r5, r3, r6
	  li        r0, 0
	  stb       r0, 0x0(r5)
	  addi      r6, r6, 0x8
	  stb       r0, 0x10(r5)
	  sth       r0, 0x20(r4)
	  stb       r0, 0x1(r5)
	  stb       r0, 0x11(r5)
	  sth       r0, 0x22(r4)
	  stb       r0, 0x2(r5)
	  stb       r0, 0x12(r5)
	  sth       r0, 0x24(r4)
	  stb       r0, 0x3(r5)
	  stb       r0, 0x13(r5)
	  sth       r0, 0x26(r4)
	  stb       r0, 0x4(r5)
	  stb       r0, 0x14(r5)
	  sth       r0, 0x28(r4)
	  stb       r0, 0x5(r5)
	  stb       r0, 0x15(r5)
	  sth       r0, 0x2A(r4)
	  stb       r0, 0x6(r5)
	  stb       r0, 0x16(r5)
	  sth       r0, 0x2C(r4)
	  stb       r0, 0x7(r5)
	  stb       r0, 0x17(r5)
	  sth       r0, 0x2E(r4)
	  addi      r4, r4, 0x10
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C398
 * Size:	000018
 */
void JASTrackPort::readImport(int)
{
	/*
	.loc_0x0:
	  li        r5, 0
	  rlwinm    r0,r4,1,0,30
	  stbx      r5, r3, r4
	  add       r3, r3, r0
	  lhz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C3B0
 * Size:	00001C
 */
void JASTrackPort::readExport(int)
{
	/*
	.loc_0x0:
	  add       r5, r3, r4
	  li        r6, 0
	  rlwinm    r0,r4,1,0,30
	  stb       r6, 0x10(r5)
	  add       r3, r3, r0
	  lhz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C3CC
 * Size:	000018
 */
void JASTrackPort::writeImport(int, unsigned short)
{
	/*
	.loc_0x0:
	  li        r6, 0x1
	  rlwinm    r0,r4,1,0,30
	  stbx      r6, r3, r4
	  add       r3, r3, r0
	  sth       r5, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8009C3E4
 * Size:	00001C
 */
void JASTrackPort::writeExport(int, unsigned short)
{
	/*
	.loc_0x0:
	  add       r6, r3, r4
	  li        r7, 0x1
	  rlwinm    r0,r4,1,0,30
	  stb       r7, 0x10(r6)
	  add       r3, r3, r0
	  sth       r5, 0x20(r3)
	  blr
	*/
}
