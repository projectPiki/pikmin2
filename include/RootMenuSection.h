#ifndef _ROOTMENUSECTION_H
#define _ROOTMENUSECTION_H

#include "Section.h"

struct MenuSection : public Section {
	MenuSection(struct JFWDisplay*, struct JKRHeap*, bool);
	virtual ~MenuSection() { }                                        // _08 (weak)
	virtual void run();                                               // _0C
	virtual Section* getCurrentSection() { return m_currentSection; } // _30 (weak)

	u32 runChildSection();

	bool _3C;                  // _3C
	u8 _3D;                    // _3D
	u8 _3E;                    // _3E
	u8 _3F;                    // _3F
	Section* m_currentSection; // _40
};

struct RootMenuSection : public MenuSection {
	RootMenuSection(struct JKRHeap*);
	virtual ~RootMenuSection();					// _08
	virtual void drawInit(struct Graphics&);	// _1C
	virtual bool doUpdate();					// _3C
	virtual void doDraw(Graphics&);				// _40
	virtual void setChildSection(JKRHeap*);     // _48
};

#endif
