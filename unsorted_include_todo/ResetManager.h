#ifndef _RESETMANAGER_H
#define _RESETMANAGER_H

/*
    __vt__12ResetManager:
    .4byte 0
    .4byte 0
    .4byte draw__12ResetManagerFv
    .4byte updateStatusEffects__12ResetManagerFv
*/

struct ResetManager {
	virtual void draw();                // _00
	virtual void updateStatusEffects(); // _04

	// _00 VTBL
};

#endif
