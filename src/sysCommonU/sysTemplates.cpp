

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
 * Address:	8041C1A8
 * Size:	000010
 */
void BitFlags::BitFlags()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  sth       r0, 0x6(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C1B8
 * Size:	000050
 */
void BitFlags::dump()
{
/*
.loc_0x0:
  lhz       r4, 0x6(r3)
  li        r5, 0
  cmpwi     r4, 0
  blelr-    
  cmpwi     r4, 0x8
  subi      r3, r4, 0x8
  ble-      .loc_0x38
  addi      r0, r3, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0x38

.loc_0x30:
  addi      r5, r5, 0x8
  bdnz+     .loc_0x30

.loc_0x38:
  sub       r0, r4, r5
  mtctr     r0
  cmpw      r5, r4
  bgelr-    

.loc_0x48:
  bdnz-     .loc_0x48
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C208
 * Size:	000064
 */
void BitFlags::read(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x3C

.loc_0x28:
  mr        r3, r30
  bl        -0x7D98
  lwz       r4, 0x0(r29)
  stbx      r3, r4, r31
  addi      r31, r31, 0x1

.loc_0x3C:
  lhz       r0, 0x6(r29)
  cmpw      r31, r0
  blt+      .loc_0x28
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
 * Address:	8041C26C
 * Size:	000064
 */
void BitFlags::write(Stream &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x3C

.loc_0x28:
  lwz       r4, 0x0(r29)
  mr        r3, r30
  lbzx      r4, r4, r31
  bl        -0x6C30
  addi      r31, r31, 0x1

.loc_0x3C:
  lhz       r0, 0x6(r29)
  cmpw      r31, r0
  blt+      .loc_0x28
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
 * Address:	8041C2D0
 * Size:	000054
 */
void BitFlags::create(unsigned short, unsigned char *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  rlwinm    r3,r4,29,19,31
  sth       r4, 0x4(r31)
  addi      r0, r3, 0x1
  sth       r0, 0x6(r31)
  beq-      .loc_0x34
  stw       r5, 0x0(r31)
  b         .loc_0x40

.loc_0x34:
  lhz       r3, 0x6(r31)
  bl        -0x3F835C
  stw       r3, 0x0(r31)

.loc_0x40:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C324
 * Size:	000028
 */
void BitFlags::reset()
{
/*
.loc_0x0:
  li        r6, 0
  li        r5, 0
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x0(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x6(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C34C
 * Size:	000028
 */
void BitFlags::all_zero()
{
/*
.loc_0x0:
  li        r6, 0
  mr        r5, r6
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x0(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x6(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C374
 * Size:	000028
 */
void BitFlags::all_one()
{
/*
.loc_0x0:
  li        r6, 0
  li        r5, 0xFF
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x0(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x6(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C39C
 * Size:	000030
 */
void BitFlags::setFlag(unsigned short)
{
/*
.loc_0x0:
  rlwinm    r5,r4,0,16,31
  rlwinm    r0,r4,0,16,28
  sub       r0, r5, r0
  lwz       r5, 0x0(r3)
  rlwinm    r6,r4,29,19,31
  li        r3, 0x1
  rlwinm    r0,r0,0,16,31
  lbzx      r4, r5, r6
  slw       r0, r3, r0
  or        r0, r4, r0
  stbx      r0, r5, r6
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C3CC
 * Size:	000030
 */
void BitFlags::resetFlag(unsigned short)
{
/*
.loc_0x0:
  rlwinm    r5,r4,0,16,31
  rlwinm    r0,r4,0,16,28
  sub       r0, r5, r0
  lwz       r5, 0x0(r3)
  rlwinm    r6,r4,29,19,31
  li        r3, 0x1
  rlwinm    r0,r0,0,16,31
  lbzx      r4, r5, r6
  slw       r0, r3, r0
  andc      r0, r4, r0
  stbx      r0, r5, r6
  blr
*/
}

/*
 * --INFO--
 * Address:	8041C3FC
 * Size:	000038
 */
void BitFlags::isFlag(unsigned short)
{
/*
.loc_0x0:
  rlwinm    r5,r4,0,16,31
  rlwinm    r0,r4,0,16,28
  sub       r0, r5, r0
  lwz       r3, 0x0(r3)
  rlwinm    r6,r4,29,19,31
  li        r5, 0x1
  rlwinm    r4,r0,0,16,31
  lbzx      r0, r3, r6
  slw       r3, r5, r4
  and       r3, r3, r0
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  blr
*/
}
