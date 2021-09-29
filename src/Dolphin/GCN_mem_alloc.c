

/*
 * --INFO--
 * Address:	800C23A8
 * Size:	0000B8
 */
void __sys_free(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r0, -0x7CA8(r13)
  cmpwi     r0, -0x1
  bne-      .loc_0x90
  lis       r3, 0x8048
  subi      r3, r3, 0x60C8
  crclr     6, 0x6
  bl        0x2B310
  lis       r3, 0x8048
  subi      r3, r3, 0x6090
  crclr     6, 0x6
  bl        0x2B300
  bl        0x2A03C
  mr        r31, r3
  bl        0x2A02C
  mr        r30, r3
  mr        r3, r31
  li        r5, 0x1
  mr        r4, r30
  bl        0x29F3C
  mr        r31, r3
  bl        0x2A028
  addi      r0, r31, 0x1F
  rlwinm    r30,r30,0,0,26
  rlwinm    r3,r0,0,0,26
  mr        r4, r30
  bl        0x29F90
  bl        0x29F0C
  mr        r3, r30
  bl        0x2A008

.loc_0x90:
  lwz       r3, -0x7CA8(r13)
  mr        r4, r29
  bl        0x29E7C
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
 * Address:	........
 * Size:	0000B8
 */
void __sys_alloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void InitDefaultHeap(void)
{
	// UNUSED FUNCTION
}