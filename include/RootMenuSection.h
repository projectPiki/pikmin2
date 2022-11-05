#ifndef _ROOTMENUSECTION_H
#define _ROOTMENUSECTION_H

#include "Section.h"

struct MenuSection : public Section {
	MenuSection(struct JFWDisplay*, struct JKRHeap*, bool);

	virtual ~MenuSection() { }                                        // _08 (weak)
	virtual void run();                                               // _0C
	virtual Section* getCurrentSection() { return m_currentSection; } // _30 (weak)
	virtual ISection* setChildSection(JKRHeap*) = 0;                  // _48

	bool runChildSection();

	// _00		= VTBL
	// _00-_3C	= Section
#if BUILDTARGET == USADEMO1
	// There is an extra unaccounted for space of data 0x1C long
	u8 _39[0x1C]; // _39
#endif
	bool _3C;                  // _3C
	u8 _3D;                    // _3D
	u8 _3E;                    // _3E
	u8 _3F;                    // _3F
	Section* m_currentSection; // _40
};

struct RootMenuSection : public MenuSection {
	RootMenuSection(struct JKRHeap*);

	virtual ~RootMenuSection();                  // _08
	virtual void drawInit(struct Graphics&);     // _1C
	virtual bool doUpdate() { return false; }    // _3C
	virtual void doDraw(Graphics& gfx) { }       // _40
	virtual ISection* setChildSection(JKRHeap*); // _48
};

#endif
