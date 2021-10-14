#ifndef _ROOTMENUSECTION_H
#define _ROOTMENUSECTION_H

#include "Section.h"

struct MenuSection : public Section {
	MenuSection(struct JFWDisplay*, struct JKRHeap*, bool);
	virtual ~MenuSection() { }

	virtual void run();
	virtual void getCurrentSection();
};

struct RootMenuSection : public MenuSection {
	RootMenuSection(struct JKRHeap*);
	virtual ~RootMenuSection();

	void drawInit(struct Graphics&);

	virtual bool doUpdate();
	virtual void doDraw(Graphics&);

	virtual void setChildSection(JKRHeap*);
};

#endif