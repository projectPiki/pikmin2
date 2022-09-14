#ifndef _EBI_E2DFULLFONTCOLOR_H
#define _EBI_E2DFULLFONTCOLOR_H

#include "JSystem/JUT/TColor.h"

namespace ebi {
// @size{0x10}
struct E2DFullFontColor {
	E2DFullFontColor();

	JUtility::TColor _00;     // _00
	JUtility::TColor _04;     // _04
	JUtility::TColor m_white; // _08
	JUtility::TColor m_black; // _0C
};
} // namespace ebi

#endif
