#ifndef _PIKICOND_EXCEPTCHAPPYPIKMIN_H
#define _PIKICOND_EXCEPTCHAPPYPIKMIN_H

/*
    __vt__27PikiCond_ExceptChappyPikmin:
    .4byte 0
    .4byte 0
    .4byte satisfy__27PikiCond_ExceptChappyPikminFPQ24Game4Piki
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct PikiCond_ExceptChappyPikmin {
	virtual void satisfy(Game::Piki*); // _08 (inline)
	virtual void _0C() = 0;            // _0C
	virtual void _10() = 0;            // _10
	virtual void _14() = 0;            // _14
	virtual void _18() = 0;            // _18
	virtual void _1C() = 0;            // _1C
	virtual void _20() = 0;            // _20
	virtual void _24() = 0;            // _24
	virtual void _28() = 0;            // _28
	virtual void _2C() = 0;            // _2C
};

#endif
