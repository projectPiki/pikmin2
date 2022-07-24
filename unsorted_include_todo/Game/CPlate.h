#ifndef _GAME_CPLATE_H
#define _GAME_CPLATE_H

/*
    __vt__Q24Game6CPlate:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game6CPlateFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__27Container<Q24Game8Creature>FPv"
    .4byte getNext__Q24Game6CPlateFPv
    .4byte getStart__Q24Game6CPlateFv
    .4byte getEnd__Q24Game6CPlateFv
    .4byte get__Q24Game6CPlateFPv
    .4byte "getAt__27Container<Q24Game8Creature>Fi"
    .4byte "getTo__27Container<Q24Game8Creature>Fv"
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Container < Game
{
	struct Creature >
	{
		virtual void _08() = 0;        // _08
		virtual void _0C() = 0;        // _0C
		virtual void getObject(void*); // _10
		virtual void _14() = 0;        // _14
		virtual void _18() = 0;        // _18
		virtual void _1C() = 0;        // _1C
		virtual void _20() = 0;        // _20
		virtual void getAt(int);       // _24
		virtual void getTo();          // _28

		// _00 VTBL
	};
} // namespace Game

namespace Game {
struct CPlate : public CNode, public Creature > {
	virtual ~CPlate();           // _08
	virtual void getNext(void*); // _14
	virtual void getStart();     // _18
	virtual void getEnd();       // _1C
	virtual void get(void*);     // _20

	// _00 VTBL
};
} // namespace Game

#endif
