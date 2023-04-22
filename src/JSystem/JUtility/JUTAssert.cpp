#include "string.h"
#include "Dolphin/vi.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"
#include "JSystem/JUtility/JUTAssertion.h"

namespace JUTAssertion {

namespace {
static char sMessageFileLine[64];
static char sMessageString[256];
static u32 sMessageLife;
static bool sVisible = true;
} // namespace

/*
 * --INFO--
 * Address:	80027DC0
 * Size:	000004
 */
void create() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
u32 flush_subroutine()
{
	if (sMessageLife == 0) {
		return 0;
	}
	if (sMessageLife != -1) {
		sMessageLife--;
	}
	if (sMessageLife < 5) {
		return 0;
	}
	return sMessageLife;
}

/*
 * --INFO--
 * Address:	80027DC4
 * Size:	0000EC
 */
void flushMessage()
{
	if (flush_subroutine() != 0 && sVisible == true) {
		JUTDirectPrint* mgr            = JUTDirectPrint::getManager();
		JUtility::TColor existingColor = mgr->mCharColor;
		mgr->setCharColor(JUtility::TColor(255, 200, 200, 255));
		mgr->drawString(0x10, 0x10, sMessageFileLine);
		mgr->drawString(0x10, 0x18, sMessageString);
		mgr->setCharColor(existingColor);
	}
}

/*
 * --INFO--
 * Address:	80027EB0
 * Size:	000214
 */
void flushMessage_dbPrint()
{
	JUTFont* font;
	if (flush_subroutine() != 0 && sVisible == true && JUTDbPrint::sDebugPrint != nullptr && JUTDbPrint::sDebugPrint->mFont != nullptr) {
		font = JUTDbPrint::sDebugPrint->mFont;

		u8 tmp = ((VIGetRetraceCount() & 0x3C) << 2) | 0xF;
		font->setGX();
		font->setCharColor(JUtility::TColor(255, tmp, tmp, 255));
		font->drawString(30, 36, sMessageFileLine, true);
		font->drawString(30, 54, sMessageString, true);
	}
}
/*
 * --INFO--
 * Address:	800280C4
 * Size:	000018
 */
void setMessageCount(int p1) { sMessageLife = p1 <= 0 ? 0 : p1; }

} // namespace JUTAssertion
