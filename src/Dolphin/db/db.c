#include "types.h"
#include "Dolphin/db.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800DABC4
 * Size:	000028
 */
void DBInit(void)
{
	__DBInterface = (void*)IsDebuggerPresent;
	// WTF?? is this the only way to match?
	*(u32*)ExceptionHookDestination = (u32)__DBExceptionDestination - 0x80000000;
	DBVerbose                       = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void DBIsDebuggerPresent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DABEC
 * Size:	000048
 */
static void __DBExceptionDestinationAux(void)
{
	u8 dummy[8];
	OSContext* ctx = (void*)(0x80000000 + *(u32*)0xC0); // WTF??
	OSReport("DBExceptionDestination\n");
	OSDumpContext(ctx);
	PPCHalt();
}

/*
 * --INFO--
 * Address:	800DAC34
 * Size:	000010
 */
#ifdef __MWERKS__
// clang-format off
static asm void __DBExceptionDestination(void)
{
    nofralloc
    mfmsr r3
    ori r3, r3, 0x30
    mtmsr r3
    b __DBExceptionDestinationAux
}
// clang-format on
#else
static void __DBExceptionDestination(void)
{
	asm("mfmsr %r3\n"
	    "ori %r3, %r3, 0x30\n"
	    "mtmsr %r3\n"
	    "b __DBExceptionDestinationAux\n");
}
#endif

/*
 * --INFO--
 * Address:	800DAC44
 * Size:	00001C
 */
int __DBIsExceptionMarked(u8 a) { return __DBInterface->unk4 & (1 << a); }

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __DBMarkException(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __DBSetPresent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DAC60
 * Size:	000050
 */

void DBPrintf(const char*, ...) { }
