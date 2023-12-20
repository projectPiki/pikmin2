#include "JSystem/JUtility/JUTDbPrint.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "types.h"

JUTDbPrint* JUTDbPrint::sDebugPrint;

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
JUTDbPrint::JUTDbPrint(JUTFont* font, JKRHeap* heap)
    : mColor()
{
	mFont = font;
	mList = nullptr;
	mHeap = (heap) ? heap : JKRHeap::getCurrentHeap();
	mColor.set(255, 255, 255, 255);
	mIsVisible = true;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
JUTDbPrint::~JUTDbPrint() { }

/**
 * @note Address: 0x800294D4
 * @note Size: 0xAC
 */
JUTDbPrint* JUTDbPrint::start(JUTFont* font, JKRHeap* heap)
{
	if (!sDebugPrint) {
		if (!heap) {
			heap = JKRHeap::getCurrentHeap();
		}
		sDebugPrint = new JUTDbPrint(font, heap);
	}
	return sDebugPrint;
}

/**
 * @note Address: 0x80029580
 * @note Size: 0x18
 */
JUTFont* JUTDbPrint::changeFont(JUTFont* newFont)
{
	JUTFont* oldFont = mFont;
	if (newFont) {
		mFont = newFont;
	}
	return oldFont;
}

/**
 * @note Address: 0x80029598
 * @note Size: 0x38
 * flush__10JUTDbPrintFv
 */
void JUTDbPrint::flush() { flush(0, 0, JUTVideo::sManager->getFbWidth(), JUTVideo::sManager->getEfbHeight()); }

/**
 * @note Address: 0x800295D0
 * @note Size: 0x174
 * flush__10JUTDbPrintFiiii
 */
void JUTDbPrint::flush(int p1, int p2, int p3, int p4)
{
	// eyebrow raise emoji
	JUTDbPrintList* pList    = (JUTDbPrintList*)&mList;
	JUTDbPrintList* currList = mList;

	if (getFont()) {
		if (currList) {
			J2DOrthoGraph orthograph(p1, p2, p3, p4, -1.0f, 1.0f);
			orthograph.setPort();
			getFont()->setGX();
			getFont()->setCharColor(mColor);
			while (currList) {
				if (mIsVisible) {
					drawString(currList->_04, currList->_06, currList->_0A, &currList->_0C);
				}
				if (--currList->_08 <= 0) {
					JUTDbPrintList* next = currList->mNext;
					JKRHeap::free(currList, mHeap);
					pList->mNext = next;
					currList     = next;
				} else {
					pList    = currList;
					currList = currList->mNext;
				}
			}
		}
	}
}

/**
 * @note Address: 0x80029744
 * @note Size: 0xE8
 */
void JUTDbPrint::drawString(int p1, int p2, int p3, const u8* p4)
{
	JUTFont* font = getFont();
	font->drawString_size_scale(p1, p2, font->getWidth(), font->getHeight(), reinterpret_cast<const char*>(p4), p3, true);
}
