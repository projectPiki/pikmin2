#ifndef _RESETMANAGER_H
#define _RESETMANAGER_H

struct ResetManager {
	virtual void draw();                // _00
	virtual void updateStatusEffects(); // _04

	// _00 VTBL
};

#endif
