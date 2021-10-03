

/*
 * --INFO--
 * Address:	8043DB18
 * Size:	000074
 */
void P2JME::TReference::do_word( const(unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, -0x6417(r13)
  extsb.    r0, r0
  bne-      .loc_0x28
  li        r3, 0x22
  li        r0, 0x1
  stb       r3, -0x6418(r13)
  stb       r0, -0x6417(r13)

.loc_0x28:
  lbz       r3, -0x6418(r13)
  cmplwi    r4, 0
  addi      r0, r3, 0x1
  stb       r0, -0x6418(r13)
  bne-      .loc_0x44
  addi      r3, r2, 0x2588
  b         .loc_0x64

.loc_0x44:
  lis       r3, 0x804F
  rlwinm    r5,r0,0,24,31
  addi      r3, r3, 0x7C70
  addi      r4, r2, 0x2590
  crclr     6, 0x6
  bl        -0x376738
  lis       r3, 0x804F
  addi      r3, r3, 0x7C70

.loc_0x64:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DB8C
 * Size:	000060
 */
void P2JME::TReference::__dt(void)
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
  beq-      .loc_0x44
  lis       r5, 0x804F
  li        r4, 0
  subi      r0, r5, 0x3420
  stw       r0, 0x0(r30)
  bl        -0x436EB0
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x419B18

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
