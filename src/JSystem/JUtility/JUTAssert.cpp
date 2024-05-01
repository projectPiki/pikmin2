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

/**
 * @note Address: 0x80027DC0
 * @note Size: 0x4
 */
void create() { }

/**
 * @note Address: N/A
 * @note Size: 0x3C
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

/**
 * @note Address: 0x80027DC4
 * @note Size: 0xEC
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

/**
 * @note Address: 0x80027EB0
 * @note Size: 0x214
 */
void flushMessage_dbPrint()
{
	JUTFont* font;
	if (flush_subroutine() != 0 && sVisible == true && JUTDbPrint::sDebugPrint != nullptr && JUTDbPrint::sDebugPrint->mFont != nullptr) {
		// Get the font from the debug print
		JUTFont* font = JUTDbPrint::sDebugPrint->mFont;

		// Calculate the color intensity based on the retrace count
		u8 colorIntensity = ((VIGetRetraceCount() & 0x3C) << 2) | 0xF;

		// Set the graphics system and character color for the font
		font->setGX();
		font->setCharColor(JUtility::TColor(255, colorIntensity, colorIntensity, 255));

		// Draw the message file line and message string at specific positions
		font->drawString(30, 36, sMessageFileLine, true);
		font->drawString(30, 54, sMessageString, true);
	}
}

/**
 * @note Address: 0x800280C4
 * @note Size: 0x18
 */
void setMessageCount(int messageCount) { sMessageLife = messageCount <= 0 ? 0 : messageCount; }

} // namespace JUTAssertion
