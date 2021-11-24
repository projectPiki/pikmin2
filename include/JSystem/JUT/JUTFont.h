#ifndef _JSYSTEM_JUT_JUTFONT_H
#define _JSYSTEM_JUT_JUTFONT_H

#include "JSystem/JUtility.h"
struct JUTFont {
	JUTFont();

	// TODO: Finish VTBL.
	virtual ~JUTFont(); // _00
	virtual float getCellWidth() const;
	virtual float getCellHeight() const;

	void initialize_state();
	void setCharColor(JUtility::TColor);
	void setGradColor(JUtility::TColor, JUtility::TColor);
	void drawString_size_scale(float, float, float, float, const char*, ulong,
	                           bool);
	void setGX(JUtility::TColor, JUtility::TColor);

	// TODO: Finish data members
};

#endif
