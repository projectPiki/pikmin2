#ifndef _GAME_ITEMMGR_H
#define _GAME_ITEMMGR_H

#include "Container.h"
#include "Game/genItem.h"
#include "GenericObjectMgr.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "ObjectMgr.h"
#include "stream.h"
#include "types.h"
#include "Vector3.h"

struct CollPartFactory;
struct PlatAttacher;
struct Platform;
namespace SysShape {
struct AnimMgr;
}
namespace LoadResource {
struct Node;
}

namespace Game {
struct BaseItem;

struct _BaseItemMgrParent2 {
};

struct BaseItemMgr : public GenericObjectMgr, virtual public _BaseItemMgrParent2 {
	BaseItemMgr();

	virtual void doAnimation();                                          // _00
	virtual void doEntry();                                              // _04
	virtual void doSetView(int);                                         // _08
	virtual void doViewCalc();                                           // _0C
	virtual void doSimulation(float);                                    // _10
	virtual void doDirectDraw(Graphics&);                                // _14
	virtual void loadResources();                                        // _1C
	virtual void initDependency() = 0;                                   // _30
	virtual void killAll();                                              // _34
	virtual void setup(BaseItem*);                                       // _38
	virtual void setupSoundViewerAndBas();                               // _3C
	virtual void onLoadResources();                                      // _40
	virtual void loadEverytime();                                        // _44
	virtual void updateUseList(GenItemParm*, int);                       // _48
	virtual void onUpdateUseList(GenItemParm*, int);                     // _4C
	virtual u32 generatorGetID()                                    = 0; // _50
	virtual void generatorBirth(Vector3f&, Vector3f&, GenItemParm*) = 0; // _54
	virtual void generatorWrite(Stream&, GenItemParm*);                  // _58
	virtual void generatorRead(Stream&, GenItemParm*, u32);              // _5C
	virtual u32 generatorLocalVersion();                                 // _60
	virtual J3DModelData* generatorGetShape(GenItemParm*);               // _64
	virtual GenItemParm* generatorNewItemParm();                         // _68

	J3DModelData* getModelData(int);
	void setModelSize(int);

	void loadAnimMgr(JKRFileLoader*, char*);
	void loadArchive(char*);
	void loadBmd(char*, int, unsigned long);
	void loadCollision(JKRFileLoader*, char*);
	PlatAttacher* loadPlatAttacher(JKRFileLoader*, char*);
	Platform* loadPlatform(JKRFileLoader*, char*);

	JKRArchive* openTextArc(char*);
	void closeTextArc(JKRArchive*);

	// end address _04
	char* m_name;                       // _08
	LoadResource::Node* m_resourceNode; // _0C
	u32 _10;                            // _10
	u32 _14;                            // _14
	int m_modelDataMax;                 // _18
	J3DModelData** m_modelData;         // _1C /* ptr to array of ptrs */
	SysShape::AnimMgr* m_animMgr;       // _20
	CollPartFactory* m_collPartFactory; // _24
	char* m_objectPathComponent;        // _28
	JKRMemArchive* m_archive;           // _2C
};

struct TNodeItemMgr : public BaseItemMgr, public Container<BaseItem> {
	TNodeItemMgr();

	// vtable 1
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	virtual void initDependency();        // _30
	virtual void killAll();               // _34

	// vtable 2
	virtual BaseItem* doNew() = 0; // _24
	virtual void kill(BaseItem*);  // _28
	virtual BaseItem* get(void*);  // _2C
	virtual void* getNext(void*);  // _30
	virtual void* getStart();      // _34
	virtual void* getEnd();        // _38
	virtual ~TNodeItemMgr();       // _3C

	BaseItem* birth();
	void entry(BaseItem*);

	NodeObjectMgr<BaseItem> m_nodeObjectMgr; // _4C
};

struct ItemMgr : public NodeObjectMgr<GenericObjectMgr> {
	ItemMgr();

	// vtable 1
	~ItemMgr(); // _00
	// vtable 2
	virtual void doAnimation();           // _00, _30
	virtual void doEntry();               // _04, _34
	virtual void doSetView(int);          // _08, _38
	virtual void doViewCalc();            // _0C, _3C
	virtual void doSimulation(float);     // _10, _40
	virtual void doDirectDraw(Graphics&); // _14, _44
	virtual void loadResources();         // _1C, _4C
	virtual void doSimpleDraw(Viewport*); // _18, _50

	void addMgr(BaseItemMgr*);
	void initDependency();
	void setupSoundViewerAndBas();
	void clearGlobalPointers();

	int getIndexByMgr(BaseItemMgr*);
	BaseItemMgr* getMgrByIndex(int);
	BaseItemMgr* getMgrByID(ID32&);
};
} // namespace Game

#endif
