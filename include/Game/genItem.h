#ifndef _GAME_GENITEM_H
#define _GAME_GENITEM_H

#include "Game/gameGenerator.h"

struct J3DModelData;

namespace Game {
struct BaseItemMgr;
struct GenItemParm {
	virtual void getShapeID(); // _00

	// _00 VTBL
};

/**
 * @size{0x40}
 */
struct GenItem : public GenObject {
	virtual void doWrite(Stream&);                         // _00
	virtual void ramSaveParameters(Stream&);               // _04
	virtual void ramLoadParameters(Stream&);               // _08
	virtual void doEvent(u32);                             // _0C
	virtual void doRead(Stream&);                          // _10
	virtual J3DModelData* getShape();                      // _20
	virtual void updateUseList(Generator*, int);           // _24
	virtual Creature* generate(Generator*);                // _28
	virtual void birth(GenArg*);                           // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3f&); // _30

	void initialise();

	int m_mgrIndex;         // _24
	Vector3f m_rotation;    // _28
	BaseItemMgr* m_itemMgr; // _34
	GenItemParm* m_parm;    // _38
};
} // namespace Game

#endif
