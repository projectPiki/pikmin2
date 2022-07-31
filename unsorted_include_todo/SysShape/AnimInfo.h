#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

/*
    __vt__Q28SysShape8AnimInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28SysShape8AnimInfoFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace SysShape {
struct AnimInfo : public CNode {
	virtual ~AnimInfo(); // _08 (weak)

	void getLowestAnimKey(float);
	void getLastLoopStart(SysShape::KeyEvent*);
	void getAnimKeyByType(unsigned long);
	void read(Stream&);
	void readEditor(Stream&);
	void attach(J3DModelData*, void*);
};
} // namespace SysShape

#endif
