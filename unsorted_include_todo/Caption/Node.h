#ifndef _CAPTION_NODE_H
#define _CAPTION_NODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Caption {
struct Node : public CNode {
	virtual ~Node();              // _00
	virtual void getChildCount(); // _04
	virtual void read(Stream&);   // _08

	// _00 VTBL
};
} // namespace Caption

#endif
