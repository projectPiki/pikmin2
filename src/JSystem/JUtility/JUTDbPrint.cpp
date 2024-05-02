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
void JUTDbPrint::flush(int left, int top, int right, int bottom)
{
	// Initialize the print list pointers
	JUTDbPrintList* pList    = (JUTDbPrintList*)&mList;
	JUTDbPrintList* currList = mList;

	if (getFont()) {
		if (currList) {
			// Set up the orthographic projection
			J2DOrthoGraph orthograph(left, top, right, bottom, -1.0f, 1.0f);
			orthograph.setPort();

			// Set the font and color
			getFont()->setGX();
			getFont()->setCharColor(mColor);

			while (currList) {
				// If the list is visible, draw the string
				if (mIsVisible) {
					drawString(currList->mPositionX, currList->mPositionY, currList->mStringLength, &currList->mString);
				}

				// If the list item count is zero, free the memory and move to the next item
				if (--currList->mItemCount <= 0) {
					JUTDbPrintList* next = currList->mNext;
					JKRHeap::free(currList, mHeap);
					pList->mNext = next;
					currList     = next;
				} else {
					// Otherwise, move to the next item
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
void JUTDbPrint::drawString(int posX, int posY, int stringLength, const u8* string)
{
	JUTFont* font = getFont();
	font->drawString_size_scale(posX, posY, font->getWidth(), font->getHeight(), reinterpret_cast<const char*>(string), stringLength, true);
}
