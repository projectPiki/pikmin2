static void (*FatalFunc)();

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
/* void ShowMessage(void)
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
/* void DVDSetAutoFatalMessaging(void)
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: 0x800DF8E4
 * @note Size: 0x30
 */
void __DVDPrintFatalMessage(void)
{
	if (FatalFunc != 0) {
		(*FatalFunc)();
	}
	return;
}
