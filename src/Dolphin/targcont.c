extern void TRKTargetSetStopped(unsigned int);
extern void UnreserveEXI2Port();
extern void TRKSwapAndGo();
extern void ReserveEXI2Port();

/*
 * --INFO--
 * Address:	800C09BC
 * Size:	000034
 */
unsigned int TRKTargetContinue(void)

{
	TRKTargetSetStopped(0);
	UnreserveEXI2Port();
	TRKSwapAndGo();
	ReserveEXI2Port();
	return 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void OutputGPR(void)
{
	// UNUSED FUNCTION
}