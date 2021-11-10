/*
 * --INFO--
 * Address:	800EF4A4
 * Size:	000018
 */
// clang-format off
asm void __OSModuleInit(void)
{
	nofralloc
	  lis       r4, 0x8000
	  li        r0, 0
	  stw       r0, 0x30CC(r4)
	  stw       r0, 0x30C8(r4)
	  stw       r0, 0x30D0(r4)
	  blr
}
// clang-format on
