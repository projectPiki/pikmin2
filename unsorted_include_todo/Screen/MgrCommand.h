#ifndef _SCREEN_MGRCOMMAND_H
#define _SCREEN_MGRCOMMAND_H

/*
    __vt__Q26Screen10MgrCommand:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen10MgrCommandFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Screen {
struct MgrCommand : public CNode {
	virtual ~MgrCommand(); // _08 (inline)
};
} // namespace Screen

#endif
