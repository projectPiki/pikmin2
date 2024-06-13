#ifndef _EBI_E2DFULLFONTCOLOR_H
#define _EBI_E2DFULLFONTCOLOR_H

#include "JSystem/JUtility/TColor.h"
#include "JSystem/J2D/J2DTextBox.h"

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

	inline void setColors(J2DTextBox* pane)
	{
		mCol1.set(pane->mCharColor);
		mCol2.set(pane->mGradientColor);
		mWhite = pane->getWhite();
		mBlack = pane->getBlack();
	}

	inline void applyColorsToPane(J2DTextBox* pane)
	{
		pane->setCharColor(mCol1);
		pane->setGradColor(mCol2);
		pane->setWhite(mWhite);
		pane->setBlack(mBlack);
	}

	JUtility::TColor mCol1;  // _00
	JUtility::TColor mCol2;  // _04
	JUtility::TColor mWhite; // _08
	JUtility::TColor mBlack; // _0C
};
} // namespace ebi

#endif
