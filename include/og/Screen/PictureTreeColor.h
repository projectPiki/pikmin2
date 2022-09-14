#ifndef _OG_SCREEN_PICTURETREECOLOR_H
#define _OG_SCREEN_PICTURETREECOLOR_H

#include "types.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUT/TColor.h"

namespace og {
namespace Screen {

/**
 * @size{0x0C}
 */
struct PictureTreeColorInfo {
	PictureTreeColorInfo()
	{
		m_pane = 0;
		m_white.set(0xFF, 0xFF, 0xFF, 0xFF);
		m_black.set(0, 0, 0, 0);
	}

	J2DPane* m_pane;          // _00
	JUtility::TColor m_white; // _04
	JUtility::TColor m_black; // _08
};

struct PictureTreeColorCaptureInfo {
	inline PictureTreeColorCaptureInfo(int count, PictureTreeColorInfo* infoArray)
	{
		m_count          = count;
		m_colorInfoArray = infoArray;
	}

	int m_count;                            // _00
	PictureTreeColorInfo* m_colorInfoArray; // _04 - array of size m_count
};

} // namespace Screen
} // namespace og

#endif
