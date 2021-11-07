#ifndef _GAME_CPLATE_H
#define _GAME_CPLATE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Container < Game
{
	struct Creature >
	{
		virtual void _00() = 0;        // _00
		virtual void _04() = 0;        // _04
		virtual void getObject(void*); // _08
		virtual void _0C() = 0;        // _0C
		virtual void _10() = 0;        // _10
		virtual void _14() = 0;        // _14
		virtual void _18() = 0;        // _18
		virtual void getAt(int);       // _1C
		virtual void getTo();          // _20

		// _00 VTBL
	};
} // namespace Game

namespace Game {
struct CPlate : public CNode, public Creature > {
	virtual ~CPlate();             // _00
	virtual void getChildCount();  // _04
	virtual void getObject(void*); // _08
	virtual void getNext(void*);   // _0C
	virtual void getStart();       // _10
	virtual void getEnd();         // _14
	virtual void get(void*);       // _18
	virtual void getAt(int);       // _1C
	virtual void getTo();          // _20

	// _00 VTBL
};
} // namespace Game

#endif
