#include "types.h"
#include "Dolphin/db.h"
#include "Dolphin/os.h"

/**
 * @note Address: 0x800DABC4
 * @note Size: 0x28
 */
void DBInit(void)
{
	__DBInterface = (void*)IsDebuggerPresent;
	// WTF?? is this the only way to match?
	*(u32*)ExceptionHookDestination = (u32)__DBExceptionDestination - OS_BASE_CACHED;
	DBVerbose                       = 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void DBIsDebuggerPresent(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800DABEC
 * @note Size: 0x48
 */
static void __DBExceptionDestinationAux(void)
{
	u8 dummy[8];
	OSContext* ctx = (void*)(OS_BASE_CACHED + *(u32*)0xC0); // WTF??
	OSReport("DBExceptionDestination\n");
	OSDumpContext(ctx);
	PPCHalt();
}

/**
 * @note Address: 0x800DAC34
 * @note Size: 0x10
 */
#ifdef __MWERKS__ // clang-format off
ASM static void __DBExceptionDestination(void)
{
	nofralloc
	mfmsr r3
	ori r3, r3, 0x30
	mtmsr r3
	b __DBExceptionDestinationAux
}
#else // clang-format on
static void __DBExceptionDestination(void)
{
	asm("mfmsr %r3\n"
	    "ori %r3, %r3, 0x30\n"
	    "mtmsr %r3\n"
	    "b __DBExceptionDestinationAux\n");
}
#endif

/**
 * @note Address: 0x800DAC44
 * @note Size: 0x1C
 */
int __DBIsExceptionMarked(u8 a) { return __DBInterface->unk4 & (1 << a); }

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void __DBMarkException(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void __DBSetPresent(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800DAC60
 * @note Size: 0x50
 */

void DBPrintf(const char*, ...) { }
