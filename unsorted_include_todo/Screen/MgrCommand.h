#ifndef _SCREEN_MGRCOMMAND_H
#define _SCREEN_MGRCOMMAND_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Screen {
struct MgrCommand : public CNode {
	virtual ~MgrCommand();        // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace Screen

#endif
