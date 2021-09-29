

/*
 * --INFO--
 * Address:	800F17D4
 * Size:	000020
 */
void SystemCallVector(void)
{
/*
.loc_0x0:
  mfspr     r9, 0x3F0
  ori       r10, r9, 0x8
  mtspr     1008, r10
  isync     
  sync      
  mtspr     1008, r9
  rfi       
  nop
*/
}

/*
 * --INFO--
 * Address:	800F17F4
 * Size:	000064
 */
void __OSInitSystemCall(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x10(r1)
  stw       r31, 0xC(r1)
  lis       r5, 0x8000
  lis       r4, 0x800F
  lis       r3, 0x800F
  addi      r31, r5, 0xC00
  addi      r0, r3, 0x17F0
  addi      r4, r4, 0x17D4
  mr        r3, r31
  sub       r5, r0, r4
  bl        -0xEC688
  mr        r3, r31
  li        r4, 0x100
  bl        -0x50B8
  sync      
  mr        r3, r31
  li        r4, 0x100
  bl        -0x5044
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  addi      r1, r1, 0x10
  mtlr      r0
  blr
*/
}