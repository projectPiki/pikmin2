#ifndef _PLATFORM_H
#define _PLATFORM_H

#include "types.h"
#include "CNode.h"
#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "mapCode.h"
#include "Matrixf.h"
#include "JSystem/JKR/JKRFileLoader.h"

struct Platform : CNode {
	Platform();
	virtual ~Platform();

	Sys::OBBTree* getTriDivider();
	void setMapCodeAll(MapCode::Code&);
	void clone(Matrixf&);
	void load(JKRFileLoader*, char*);

	Sys::OBBTree* m_triDivider; // _18
};

#endif
