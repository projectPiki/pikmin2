

/*
 * --INFO--
 * Address:	800C15F0
 * Size:	0000C8
 */
void __va_arg(void)
{
	/*
	.loc_0x0:
	  lbz       r7, 0x0(r3)
	  cmpwi     r4, 0x3
	  mr        r6, r3
	  li        r0, 0x8
	  li        r8, 0x4
	  extsb     r7, r7
	  li        r9, 0x1
	  li        r5, 0
	  li        r10, 0
	  li        r11, 0x4
	  bne-      .loc_0x44
	  lbz       r7, 0x1(r3)
	  addi      r6, r3, 0x1
	  li        r8, 0x8
	  li        r10, 0x20
	  extsb     r7, r7
	  li        r11, 0x8

	.loc_0x44:
	  cmpwi     r4, 0x2
	  bne-      .loc_0x64
	  rlwinm.   r0,r7,0,31,31
	  li        r8, 0x8
	  li        r0, 0x7
	  beq-      .loc_0x60
	  li        r5, 0x1

	.loc_0x60:
	  li        r9, 0x2

	.loc_0x64:
	  cmpw      r7, r0
	  bge-      .loc_0x8C
	  add       r7, r7, r5
	  lwz       r5, 0x8(r3)
	  mullw     r3, r7, r11
	  add       r0, r7, r9
	  stb       r0, 0x0(r6)
	  add       r6, r10, r3
	  add       r6, r5, r6
	  b         .loc_0xB4

	.loc_0x8C:
	  li        r5, 0x8
	  subi      r0, r8, 0x1
	  stb       r5, 0x0(r6)
	  not       r6, r0
	  lwz       r0, 0x4(r3)
	  add       r5, r8, r0
	  subi      r0, r5, 0x1
	  and       r6, r6, r0
	  add       r0, r6, r8
	  stw       r0, 0x4(r3)

	.loc_0xB4:
	  cmpwi     r4, 0
	  bne-      .loc_0xC0
	  lwz       r6, 0x0(r6)

	.loc_0xC0:
	  mr        r3, r6
	  blr
	*/
}
