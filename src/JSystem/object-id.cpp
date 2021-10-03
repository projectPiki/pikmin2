

/*
 * --INFO--
 * Address:	80010188
 * Size:	0000F0
 */
void JStudio::object::TIDData::isEqual( (JStudio::object::TIDData const &, JStudio::object::TIDData const &))
{
/*
.loc_0x0:
  lwz       r5, 0x4(r3)
  lwz       r0, 0x4(r4)
  cmplw     r5, r0
  beq-      .loc_0x18
  li        r3, 0
  blr       

.loc_0x18:
  lwz       r0, 0x0(r3)
  lwz       r3, 0x0(r4)
  mr        r4, r0
  cmplw     r0, r3
  mr        r6, r3
  bne-      .loc_0x38
  li        r3, 0x1
  blr       

.loc_0x38:
  rlwinm    r0,r5,30,2,31
  mtctr     r0
  cmplwi    r5, 0x4
  blt-      .loc_0x70

.loc_0x48:
  lwz       r3, 0x0(r4)
  lwz       r0, 0x0(r6)
  cmplw     r3, r0
  beq-      .loc_0x60
  li        r3, 0
  blr       

.loc_0x60:
  subi      r5, r5, 0x4
  addi      r4, r4, 0x4
  addi      r6, r6, 0x4
  bdnz+     .loc_0x48

.loc_0x70:
  cmpwi     r5, 0x2
  beq-      .loc_0xB0
  bge-      .loc_0x88
  cmpwi     r5, 0x1
  bge-      .loc_0xD0
  b         .loc_0xE8

.loc_0x88:
  cmpwi     r5, 0x4
  bge-      .loc_0xE8
  lbz       r3, 0x0(r4)
  lbz       r0, 0x0(r6)
  cmplw     r3, r0
  beq-      .loc_0xA8
  li        r3, 0
  blr       

.loc_0xA8:
  addi      r4, r4, 0x1
  addi      r6, r6, 0x1

.loc_0xB0:
  lbz       r3, 0x0(r4)
  lbz       r0, 0x0(r6)
  cmplw     r3, r0
  beq-      .loc_0xC8
  li        r3, 0
  blr       

.loc_0xC8:
  addi      r4, r4, 0x1
  addi      r6, r6, 0x1

.loc_0xD0:
  lbz       r3, 0x0(r4)
  lbz       r0, 0x0(r6)
  cmplw     r3, r0
  beq-      .loc_0xE8
  li        r3, 0
  blr       

.loc_0xE8:
  li        r3, 0x1
  blr
*/
}
