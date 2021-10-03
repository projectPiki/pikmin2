

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void Resource::Mgr2D::__ct( (JKRHeap *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Resource::Mgr::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80433F70
 * Size:	0000B0
 */
void Resource::Mgr2D::init( (JKRHeap *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x44
  stw       r30, 0x8(r1)
  bl        -0x4100E8
  mr.       r0, r3
  beq-      .loc_0x98
  lis       r5, 0xD
  mr        r30, r0
  mr        r4, r31
  addi      r5, r5, 0x4800
  bl        -0x8D8
  lis       r3, 0x804F
  cmplwi    r31, 0
  subi      r0, r3, 0x3B98
  stw       r0, 0x0(r30)
  bne-      .loc_0x6C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5980
  li        r4, 0x22
  subi      r5, r5, 0x596C
  crclr     6, 0x6
  bl        -0x409998

.loc_0x6C:
  lwz       r0, -0x6450(r13)
  cmplwi    r0, 0
  beq-      .loc_0x94
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5980
  li        r4, 0x24
  subi      r5, r5, 0x596C
  crclr     6, 0x6
  bl        -0x4099C0

.loc_0x94:
  stw       r30, -0x6450(r13)

.loc_0x98:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
