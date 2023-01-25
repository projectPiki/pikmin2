#ifndef _EBI_E2DFULLFONTCOLOR_H
#define _EBI_E2DFULLFONTCOLOR_H

#include "JSystem/JUT/TColor.h"

namespace ebi {
// @size{0x10}
struct E2DFullFontColor {
	E2DFullFontColor();

	JUtility::TColor mCol1;  // _00
	JUtility::TColor mCol2;  // _04
	JUtility::TColor mWhite; // _08
	JUtility::TColor mBlack; // _0C
};
} // namespace ebi

#endif
