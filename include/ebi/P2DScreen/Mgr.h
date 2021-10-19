#ifndef _EBI_P2DSCREEN_MGR_H
#define _EBI_P2DSCREEN_MGR_H

#include "JSystem/J2DScreen.h"
#include "CNode.h"

namespace P2DScreen {

struct Mgr : public J2DScreen {
	virtual ~Mgr();

	char _00[0x118]; // _00
	CNode _118;      // _118
};

} // namespace P2DScreen

#endif
