

/*
 * --INFO--
 * Address:	8009C858
 * Size:	000060
 */
void JASSeqCtrl::init()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  sth       r0, 0x30(r3)
  stw       r0, 0x14(r3)
  sth       r0, 0x32(r3)
  stw       r0, 0x18(r3)
  sth       r0, 0x34(r3)
  stw       r0, 0x1C(r3)
  sth       r0, 0x36(r3)
  stw       r0, 0x20(r3)
  sth       r0, 0x38(r3)
  stw       r0, 0x24(r3)
  sth       r0, 0x3A(r3)
  stw       r0, 0x28(r3)
  sth       r0, 0x3C(r3)
  stw       r0, 0x2C(r3)
  sth       r0, 0x3E(r3)
  stw       r0, 0x40(r3)
  stw       r0, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C8B8
 * Size:	000014
 */
void JASSeqCtrl::start(void *, unsigned long)
{
/*
.loc_0x0:
  stw       r4, 0x0(r3)
  lwz       r0, 0x0(r3)
  add       r0, r0, r5
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C8CC
 * Size:	00006C
 */
void JASSeqCtrl::loopEnd()
{
/*
.loc_0x0:
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  bne-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  rlwinm    r0,r0,1,0,30
  add       r4, r3, r0
  lhz       r5, 0x2E(r4)
  cmplwi    r5, 0
  beq-      .loc_0x30
  subi      r0, r5, 0x1
  rlwinm    r5,r0,0,16,31

.loc_0x30:
  rlwinm.   r0,r5,0,16,31
  bne-      .loc_0x4C
  lwz       r4, 0xC(r3)
  subi      r0, r4, 0x1
  stw       r0, 0xC(r3)
  li        r3, 0x1
  blr       

.loc_0x4C:
  sth       r5, 0x2E(r4)
  lwz       r0, 0xC(r3)
  rlwinm    r0,r0,2,0,29
  add       r4, r3, r0
  lwz       r0, 0xC(r4)
  stw       r0, 0x4(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C938
 * Size:	000030
 */
void JASSeqCtrl::waitCountDown()
{
/*
.loc_0x0:
  lwz       r4, 0x8(r3)
  cmpwi     r4, 0
  ble-      .loc_0x28
  subi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0
  beq-      .loc_0x28
  li        r3, 0
  blr       

.loc_0x28:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C968
 * Size:	000038
 */
void JASSeqCtrl::callIntr(void *)
{
/*
.loc_0x0:
  lwz       r0, 0x44(r3)
  cmplwi    r0, 0
  beq-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lwz       r5, 0x4(r3)
  li        r0, 0
  stw       r5, 0x44(r3)
  stw       r4, 0x4(r3)
  lwz       r4, 0x8(r3)
  stw       r4, 0x40(r3)
  stw       r0, 0x8(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C9A0
 * Size:	000034
 */
void JASSeqCtrl::retIntr()
{
/*
.loc_0x0:
  lwz       r0, 0x44(r3)
  cmplwi    r0, 0
  bne-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lwz       r4, 0x40(r3)
  li        r0, 0
  stw       r4, 0x8(r3)
  lwz       r4, 0x44(r3)
  stw       r4, 0x4(r3)
  stw       r0, 0x44(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C9D4
 * Size:	000018
 */
void JASSeqCtrl::get16(unsigned long) const
{
/*
.loc_0x0:
  lwz       r3, 0x0(r3)
  addi      r0, r4, 0x1
  lbzx      r4, r3, r4
  lbzx      r3, r3, r0
  rlwimi    r3,r4,8,16,23
  blr
*/
}

/*
 * --INFO--
 * Address:	8009C9EC
 * Size:	000028
 */
void JASSeqCtrl::get24(unsigned long) const
{
/*
.loc_0x0:
  lwz       r5, 0x0(r3)
  addi      r6, r4, 0x1
  lbzx      r4, r5, r4
  lbzx      r3, r5, r6
  addi      r6, r6, 0x1
  rlwimi    r3,r4,8,16,23
  lbzx      r0, r5, r6
  rlwinm    r3,r3,8,0,23
  or        r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8009CA14
 * Size:	000038
 */
void JASSeqCtrl::get32(unsigned long) const
{
/*
.loc_0x0:
  lwz       r6, 0x0(r3)
  addi      r7, r4, 0x1
  lbzx      r5, r6, r4
  lbzx      r3, r6, r7
  addi      r7, r7, 0x1
  lbzx      r4, r6, r7
  rlwimi    r3,r5,8,16,23
  addi      r7, r7, 0x1
  rlwinm    r3,r3,8,0,23
  lbzx      r0, r6, r7
  or        r3, r3, r4
  rlwinm    r3,r3,8,0,23
  or        r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8009CA4C
 * Size:	000028
 */
void JASSeqCtrl::read16()
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  addi      r0, r5, 0x1
  stw       r0, 0x4(r3)
  lwz       r4, 0x4(r3)
  lbz       r5, 0x0(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x4(r3)
  lbz       r3, 0x0(r4)
  rlwimi    r3,r5,8,16,23
  blr
*/
}

/*
 * --INFO--
 * Address:	8009CA74
 * Size:	000044
 */
void JASSeqCtrl::read24()
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x4(r3)
  lwz       r5, 0x4(r3)
  lbz       r6, 0x0(r4)
  addi      r0, r5, 0x1
  stw       r0, 0x4(r3)
  lwz       r4, 0x4(r3)
  lbz       r5, 0x0(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x4(r3)
  mr        r3, r5
  rlwimi    r3,r6,8,16,23
  lbz       r0, 0x0(r4)
  rlwinm    r3,r3,8,0,23
  or        r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JASSeqCtrl::read32()
{
	// UNUSED FUNCTION
}