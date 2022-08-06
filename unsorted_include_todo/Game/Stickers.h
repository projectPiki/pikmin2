#ifndef _GAME_STICKERS_H
#define _GAME_STICKERS_H

/*
    __vt__Q24Game8Stickers:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8StickersFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__27Container<Q24Game8Creature>FPv"
    .4byte getNext__Q24Game8StickersFPv
    .4byte getStart__Q24Game8StickersFv
    .4byte getEnd__Q24Game8StickersFv
    .4byte get__Q24Game8StickersFPv
    .4byte "getAt__27Container<Q24Game8Creature>Fi"
    .4byte "getTo__27Container<Q24Game8Creature>Fv"
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C
};

struct Container<Game::Creature> {
	virtual ~Container<Creature>(); // _08
	virtual void _0C() = 0;         // _0C
	virtual void getObject(void*);  // _10 (weak)
	virtual void getNext(void*);    // _14
	virtual void getStart();        // _18
	virtual void getEnd();          // _1C
	virtual void get(void*);        // _20
	virtual void getAt(int);        // _24 (weak)
	virtual void getTo();           // _28 (weak)
};

namespace Game {
struct Stickers : public Container<Game::Creature> {
	Stickers(Game::Creature*);
	
	virtual ~Stickers();         // _08
	virtual void getNext(void*); // _14
	virtual void getStart();     // _18
	virtual void getEnd();       // _1C
	virtual void get(void*);     // _20

	void initialise();

};
} // namespace Game

#endif
