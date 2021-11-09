#ifndef _GAME_BASEITEM_H
#define _GAME_BASEITEM_H

#include "Game/GenericObjectMgr.h"
#include "types.h"
#include "stream.h"
#include "Game/genItem.h"
#include "Vector3.h"

struct CollPartFactory;
struct JKRMemArchive;
struct J3DModelData;
namespace SysShape {
struct AnimMgr;
}
namespace LoadResource {
struct Node;
}

namespace Game {
struct BaseItem {
	u8 _00[0x1D8]; // _00
};

struct BaseItemMgr : GenericObjectMgr {
	virtual void initDependency() = 0;                                   // _30
	virtual void killAll();                                              // _34
	virtual void setup(BaseItem*);                                       // _38
	virtual void setupSoundViewerAndBas();                               // _3C
	virtual void onLoadResources();                                      // _40
	virtual void loadEverytime();                                        // _44
	virtual void updateUseList(GenItemParm*, int);                       // _48
	virtual void onUpdateUseList(GenItemParm*, int);                     // _4C
	virtual void generatorGetID() = 0;                                   // _50
	virtual void generatorBirth(Vector3f&, Vector3f&, GenItemParm*) = 0; // _54
	virtual void generatorWrite(Stream&, GenItemParm*) = 0;              // _58
	virtual void generatorRead(Stream&, GenItemParm*, ulong) = 0;        // _5C
	virtual u32 generatorLocalVersion() = 0;                             // _60
	virtual J3DModelData* generatorGetShape(GenItemParm*) = 0;           // _64
	virtual GenItemParm* generatorNewItemParm() = 0;                     // _68

	u32 _04;                            // _04
	char* m_name;                       // _08
	LoadResource::Node* m_node;         // _0C
	u32 _10;                            // _10
	u32 _14;                            // _14
	int m_modelDataMax;                 // _18
	J3DModelData** m_modelData;         // _1C /* ptr to array of ptrs */
	SysShape::AnimMgr* m_animMgr;       // _20
	CollPartFactory* m_collPartFactory; // _24
	char* m_objectPathComponent;        // _28
	JKRMemArchive* m_archive;           // _2C
};
} // namespace Game

#endif
