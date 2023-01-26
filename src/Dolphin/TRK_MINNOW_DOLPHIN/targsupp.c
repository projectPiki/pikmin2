// clang-format off
asm void TRKAccessFile(void)
{
	nofralloc
	twi 31, r0, 0
	blr 
}
asm void TRKOpenFile(void)
{
	nofralloc
	twi 31, r0, 0
	blr 
}

asm void TRKCloseFile(void)
{
	nofralloc
	twi 31, r0, 0
	blr 
}
asm void TRKPositionFile(void)
{
	nofralloc
	twi 31, r0, 0
	blr 
}
// clang-format on
