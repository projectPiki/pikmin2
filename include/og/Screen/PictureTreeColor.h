#ifndef _OG_SCREEN_PICTURETREECOLOR_H
#define _OG_SCREEN_PICTURETREECOLOR_H

#include "types.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUtility/TColor.h"

namespace og {
namespace Screen {

/**
 * @size{0x0C}
 */
struct PictureTreeColorInfo {
	PictureTreeColorInfo()
	{
		mPane = 0;
		mWhite.set(0xFF, 0xFF, 0xFF, 0xFF);
		mBlack.set(0, 0, 0, 0);
	}

	J2DPane* mPane;          // _00
	JUtility::TColor mWhite; // _04
	JUtility::TColor mBlack; // _08
};

struct PictureTreeColorCaptureInfo {
	inline PictureTreeColorCaptureInfo(int count, PictureTreeColorInfo* infoArray)
	{
		mCount          = count;
		mColorInfoArray = infoArray;
	}

	int mCount;                            // _00
	PictureTreeColorInfo* mColorInfoArray; // _04 - array of size mCount
};

} // namespace Screen
} // namespace og

#endif
