// nonmatching

/*
 * --INFO--
 * Address:	800BDDB8
 * Size:	000038
 */
void TRK_flush_cache(unsigned int param_1, int param_2)
{
	unsigned int uVar1 = param_1 & 0xfffffff1;
	param_2            = param_2 + (param_1 - uVar1);
	do {
		__dcbst(0, uVar1);
		__dcbf(0, uVar1);
		__sync();
		asm {icbi 0, r5 }
		uVar1   = uVar1 + 8;
		param_2 = param_2 + -8;
	} while (-1 < param_2);
	__isync();
	return;
}
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
