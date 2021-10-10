

/*
 * --INFO--
 * Address:	800A29F8
 * Size:	000044
 */
void JASIntrMgr::init()
{
	/*
	.loc_0x0:
	  li        r4, 0x1
	  li        r0, 0
	  stb       r4, 0x0(r3)
	  stb       r0, 0x1(r3)
	  stb       r0, 0x2(r3)
	  stb       r0, 0x3(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A3C
 * Size:	000024
 */
void JASIntrMgr::request(unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  lbz       r5, 0x2(r3)
	  slw       r4, r0, r4
	  and.      r0, r5, r4
	  beqlr-
	  lbz       r0, 0x1(r3)
	  or        r0, r0, r4
	  stb       r0, 0x1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A60
 * Size:	000024
 */
void JASIntrMgr::setIntr(unsigned long, void*)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  lbz       r7, 0x2(r3)
	  slw       r6, r0, r4
	  rlwinm    r0,r4,2,0,29
	  or        r4, r7, r6
	  stb       r4, 0x2(r3)
	  add       r3, r3, r0
	  stw       r5, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A84
 * Size:	000018
 */
void JASIntrMgr::resetInter(unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  lbz       r5, 0x2(r3)
	  slw       r0, r0, r4
	  andc      r0, r5, r0
	  stb       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A9C
 * Size:	00006C
 */
void JASIntrMgr::checkIntr()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lbz       r4, 0x2(r3)
	  li        r6, 0
	  lbz       r0, 0x1(r3)
	  and       r4, r4, r0
	  b         .loc_0x5C

	.loc_0x28:
	  rlwinm.   r0,r4,0,31,31
	  beq-      .loc_0x54
	  li        r0, 0x1
	  lbz       r5, 0x1(r3)
	  slw       r4, r0, r6
	  andc      r4, r5, r4
	  rlwinm    r0,r6,2,0,29
	  stb       r4, 0x1(r3)
	  add       r3, r3, r0
	  lwz       r3, 0xC(r3)
	  blr

	.loc_0x54:
	  rlwinm    r4,r4,31,1,31
	  addi      r6, r6, 0x1

	.loc_0x5C:
	  cmplwi    r4, 0
	  bne+      .loc_0x28
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2B08
 * Size:	000070
 */
void JASIntrMgr::timerProcess()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x4(r3)
	  cmplwi    r4, 0
	  beqlr-
	  subi      r0, r4, 0x1
	  stw       r0, 0x4(r3)
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bnelr-
	  lbz       r0, 0x2(r3)
	  rlwinm.   r0,r0,0,25,25
	  beq-      .loc_0x38
	  lbz       r0, 0x1(r3)
	  ori       r0, r0, 0x40
	  stb       r0, 0x1(r3)

	.loc_0x38:
	  lbz       r4, 0x3(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x64
	  subi      r0, r4, 0x1
	  stb       r0, 0x3(r3)
	  lbz       r0, 0x3(r3)
	  cmplwi    r0, 0
	  beqlr-
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x4(r3)
	  blr

	.loc_0x64:
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}