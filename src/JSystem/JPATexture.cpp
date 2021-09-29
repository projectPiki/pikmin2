

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void JPATexture::JPATexture(const unsigned char *, JKRHeap *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800986A0
 * Size:	000068
 */
void JPATexture::JPATexture(const unsigned char *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r5, 0x3588
  li        r5, 0
  stw       r3, 0x0(r31)
  addi      r3, r31, 0x4
  lbz       r6, 0x3F(r31)
  rlwinm    r6,r6,0,30,30
  stb       r6, 0x3F(r31)
  stw       r0, 0x2C(r31)
  stw       r0, 0x24(r31)
  stw       r4, 0x44(r31)
  lwz       r4, 0x44(r31)
  addi      r4, r4, 0x20
  bl        -0x65668
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
 * Address:	80098708
 * Size:	000064
 */
void JPATexture::~JPATexture()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x48
  lis       r4, 0x804A
  addi      r3, r30, 0x4
  addi      r0, r4, 0x3588
  li        r4, -0x1
  stw       r0, 0x0(r30)
  bl        -0x6572C
  extsh.    r0, r31
  ble-      .loc_0x48
  mr        r3, r30
  bl        -0x74698

.loc_0x48:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}