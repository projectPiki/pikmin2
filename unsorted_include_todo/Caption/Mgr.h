#ifndef _CAPTION_MGR_H
#define _CAPTION_MGR_H

/*
    __vt__Q27Caption3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27Caption3MgrFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q27Caption3MgrFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Caption {
struct Mgr : public CNode {
	virtual ~Mgr();             // _08 (inline)
	virtual void read(Stream&); // _10

	Mgr();
	void reset();
	void resetMessageObjs();
	void update(long);
	void draw(Graphics&);
	void getFreeMessage();
};
} // namespace Caption

#endif
