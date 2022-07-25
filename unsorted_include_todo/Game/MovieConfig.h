#ifndef _GAME_MOVIECONFIG_H
#define _GAME_MOVIECONFIG_H

/*
    __vt__Q24Game11MovieConfig:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11MovieConfigFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct MovieConfig : public CNode {
	virtual ~MovieConfig(); // _08 (weak)
	virtual void _10() = 0; // _10

	void dump();
	void isSkippable();
	void isNeverSkippable();
	void is(char*);
	void read(Stream&);
};
} // namespace Game

#endif
