

/*
 * --INFO--
 * Address:	800BDDB8
 * Size:	000038
 */
void TRK_flush_cache(void)
{
/*
.loc_0x0:
  lis       r5, 0xFFFF
  ori       r5, r5, 0xFFF1
  and       r5, r5, r3
  sub       r3, r3, r5
  add       r4, r4, r3

.loc_0x14:
  dcbst     r0, r5
  dcbf      r0, r5
  sync      
  icbi      r0, r5
  addic     r5, r5, 0x8
  subic.    r4, r4, 0x8
  bge+      .loc_0x14
  isync     
  blr
*/
}