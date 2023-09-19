#ifndef _EBI_E2DFULLFONTCOLOR_H
#define _EBI_E2DFULLFONTCOLOR_H

#include "JSystem/JUtility/TColor.h"

namespace ebi {
// @size{0x10}
struct E2DFullFontColor {
	E2DFullFontColor()
	    : mCol1(0xFFFFFFFF)
	    , mCol2(0xFFFFFFFF)
	    , mWhite(0xFFFFFFFF)
	    , mBlack(0xFFFFFFFF)
	{
	}

	JUtility::TColor mCol1;  // _00
	JUtility::TColor mCol2;  // _04
	JUtility::TColor mWhite; // _08
	JUtility::TColor mBlack; // _0C
};
} // namespace ebi

#endif
