extern unsigned char bUseSerialIO;

/*
 * --INFO--
 * Address:	800C09F0
 * Size:	000010
 */
unsigned char GetUseSerialIO(void)
{
	return bUseSerialIO;
	/*
	.loc_0x0:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x4818
	  lbz       r3, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0A00
 * Size:	00000C
 */
void SetUseSerialIO(unsigned char sio)
{
	bUseSerialIO = sio;
	return;
	/*
	.loc_0x0:
	  lis       r4, 0x804F
	  stb       r3, 0x4818(r4)
	  blr
	*/
}
