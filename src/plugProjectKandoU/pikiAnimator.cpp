

/*
 * --INFO--
 * Address:	8013364C
 * Size:	000050
 */
void PikiAnimator::PikiAnimator()
{
/*
.loc_0x0:
  lis       r5, 0x804B
  lis       r4, 0x804F
  subi      r5, r5, 0x4678
  li        r0, 0
  stw       r5, 0x0(r3)
  subi      r4, r4, 0x4200
  stw       r4, 0x0(r3)
  stb       r0, 0x18(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x4(r3)
  stb       r0, 0x18(r3)
  stw       r0, 0x10(r3)
  stw       r5, 0x1C(r3)
  stw       r4, 0x1C(r3)
  stb       r0, 0x34(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x20(r3)
  stb       r0, 0x34(r3)
  stw       r0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8013369C
 * Size:	00000C
 */
void PikiAnimator::setAnimMgr(SysShape::AnimMgr *)
{
/*
.loc_0x0:
  stw       r4, 0x10(r3)
  stw       r4, 0x2C(r3)
  blr
*/
}