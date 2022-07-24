#ifndef _SYS_DRAWBUFFER_H
#define _SYS_DRAWBUFFER_H

/*
    __vt__Q23Sys10DrawBuffer:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys10DrawBufferFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C
};

namespace Sys {
struct DrawBuffer : public CNode {
	virtual ~DrawBuffer(); // _08

	DrawBuffer();
	void create(Sys::DrawBuffer::CreateArg&);
	void draw();
	void frameInit();
};
} // namespace Sys

#endif
