#ifndef _PLATFORM_H
#define _PLATFORM_H

#include "types.h"
#include "CNode.h"
#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "mapCode.h"
#include "Matrixf.h"
#include "JSystem/JKernel/JKRFileLoader.h"

struct Platform : CNode {
	Platform();
	virtual ~Platform() { } // _08 (weak)

	Sys::OBBTree* getTriDivider();
	void setMapCodeAll(MapCode::Code&);
	Platform* clone(Matrixf&);
	void load(JKRFileLoader*, char*);

	// Unused/inlined:
	void setTriDivider(Sys::TriDivider*);
	void read(Stream&);
	void load(char*);

	Sys::OBBTree* mTriDivider; // _18
};

// this is stripped, but needed to generate weak dtors in collinfo.cpp
struct AgePlatform : public Platform {
	AgePlatform();

	virtual ~AgePlatform() { }

	// _00     = VTBL
	// _00-_18 = Platform
};

#endif
