#ifndef _CAPTION_MGR_H
#define _CAPTION_MGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Caption {
struct Mgr : public CNode {
	virtual ~Mgr();               // _00
	virtual void getChildCount(); // _04
	virtual void read(Stream&);   // _08

	// _00 VTBL
};
} // namespace Caption

#endif
