#ifndef _GAME_P2JST_OBJECTSYSTEM_H
#define _GAME_P2JST_OBJECTSYSTEM_H

#include "Game/P2JST/ObjectBase.h"
#include "Game/Creature.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JGadget/list.h"

namespace Game {
struct MoviePlayer;

namespace P2JST {

struct ObjectSystem : public JStage::TSystem, public ObjectBase {
	ObjectSystem(const char*, MoviePlayer*);

	virtual ~ObjectSystem();                                                           // _08
	virtual char* JSGGetName() const;                                                  // _10
	virtual u32 JSGGetFlag() const;                                                    // _18
	virtual void JSGSetFlag(u32);                                                      // _1C
	virtual void JSGSetData(u32, const void*, u32);                                    // _24
	virtual int JSGFindObject(JStage::TObject**, const char*, JStage::TEObject) const; // _3C
	virtual void reset();                                                              // _6C (weak)
	virtual void update();                                                             // _70 (weak)
	virtual void entry();                                                              // _74
	virtual void start();                                                              // _78 (weak)
	virtual void stop();                                                               // _7C (weak)

	void destroyObjectAll();
	JStage::TObject* findObject(const char*, JStage::TEObject) const;
	Creature* findCreature(const char*) const;

	// _00     = VTABLE (JStage::TSystem)
	// _04     = VTABLE2 (ObjectBase)
	// _04-_20 = ObjectBase
	JGadget::TList_pointer<JStage::TObject*> mObjListPointer; // _20
};

} // namespace P2JST
} // namespace Game

#endif
