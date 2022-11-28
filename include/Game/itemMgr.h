#ifndef _GAME_ITEMMGR_H
#define _GAME_ITEMMGR_H

#include "Container.h"
#include "Game/gameGenerator.h"
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
struct WayPoint;

struct _BaseItemMgrParent2 {
};

struct BaseItemMgr : public GenericObjectMgr, virtual public _BaseItemMgrParent2 {
	BaseItemMgr(int);

	virtual void doAnimation() { }                                            // _08 (weak)
	virtual void doEntry() { }                                                // _0C (weak)
	virtual void doSetView(int viewportNumber) { }                            // _10 (weak)
	virtual void doViewCalc() { }                                             // _14 (weak)
	virtual void doSimulation(f32 rate) { }                                   // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                              // _1C (weak)
	virtual void loadResources();                                             // _24
	virtual void initDependency() = 0;                                        // _38
	virtual void killAll() { }                                                // _3C (weak)
	virtual void setup(BaseItem*) { }                                         // _40 (weak)
	virtual void setupSoundViewerAndBas();                                    // _44
	virtual void onLoadResources() { }                                        // _48 (weak)
	virtual bool loadEverytime() { return true; }                             // _4C (weak)
	virtual void updateUseList(GenItemParm*, int);                            // _50
	virtual void onUpdateUseList(GenItemParm*, int) { }                       // _54 (weak)
	virtual u32 generatorGetID()                                         = 0; // _58
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*) = 0; // _5C
	virtual void generatorWrite(Stream&, GenItemParm*) { }                    // _60 (weak)
	virtual void generatorRead(Stream&, GenItemParm*, u32) { }                // _64 (weak)
	virtual u32 generatorLocalVersion() { return '0000'; }                    // _68 (weak)
	virtual J3DModelData* generatorGetShape(GenItemParm*);                    // _6C
	virtual GenItemParm* generatorNewItemParm();                              // _70

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

// surprisingly this is not related to TNodeItemMgr, for whatever reason.
template <typename T>
struct NodeItemMgr : public BaseItemMgr, public Container<T> {
	NodeItemMgr(); // weak

	// vtable 1
	virtual void doAnimation();                 // _08 (weak)
	virtual void doEntry();                     // _0C (weak)
	virtual void doSetView(int viewportNumber); // _10 (weak)
	virtual void doViewCalc();                  // _14 (weak)
	virtual void doSimulation(f32);             // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _1C (weak)
	virtual void initDependency();              // _38
	virtual void killAll();                     // _3C

	// vtable 2
	virtual void kill(T*);        // _A0 (weak)
	virtual T* get(void*);        // _A4 (weak)
	virtual void* getNext(void*); // _A8 (weak)
	virtual void* getStart();     // _AC (weak)
	virtual void* getEnd();       // _B0 (weak)
	virtual ~NodeItemMgr();       // _B4 (weak)

	T* birth(); // weak

	NodeObjectMgr<T> m_nodeObjectMgr; // _4C
};

struct TNodeItemMgr : public BaseItemMgr, public Container<BaseItem> {
	TNodeItemMgr();

	// vtable 1
	virtual void doAnimation();                 // _08 (weak)
	virtual void doEntry();                     // _0C (weak)
	virtual void doSetView(int viewportNumber); // _10 (weak)
	virtual void doViewCalc();                  // _14 (weak)
	virtual void doSimulation(float rate);      // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx);   // _1C (weak)
	virtual void initDependency();              // _38
	virtual void killAll();                     // _3C

	// vtable 2
	virtual BaseItem* doNew() = 0; // _A0
	virtual void kill(BaseItem*);  // _A4 (weak)
	virtual BaseItem* get(void*);  // _A8 (weak)
	virtual void* getNext(void*);  // _BC (weak)
	virtual void* getStart();      // _B0 (weak)
	virtual void* getEnd();        // _B4 (weak)
	virtual ~TNodeItemMgr();       // _B8 (weak)

	BaseItem* birth();
	void entry(BaseItem*);

	NodeObjectMgr<BaseItem> m_nodeObjectMgr; // _4C
};

struct ItemMgr : public NodeObjectMgr<GenericObjectMgr> {
	ItemMgr();

	// vtable 1
	virtual ~ItemMgr(); // _08
	// vtable 2
	virtual void doAnimation();            // _64 (weak)
	virtual void doEntry();                // _68 (weak)
	virtual void doSetView(int);           // _6C (weak)
	virtual void doViewCalc();             // _70 (weak)
	virtual void doSimulation(float rate); // _74 (weak)
	virtual void doDirectDraw(Graphics&);  // _78 (weak)
	virtual void loadResources();          // _80 (weak)
	virtual void doSimpleDraw(Viewport*);  // _84 (weak)

	void addMgr(BaseItemMgr*);
	void initDependency();
	void setupSoundViewerAndBas();
	void clearGlobalPointers();

	int getIndexByMgr(BaseItemMgr*);
	BaseItemMgr* getMgrByIndex(int);
	BaseItemMgr* getMgrByID(ID32&);

	void createManagers(u32);
	void killAllExceptOnyonMgr();

	// _00     = VTBL 1
	// _00-_1C = Container
	// _1C     = VTBL 2
	// _1C-3C  = NodeObjectMgr
};

template <typename T>
struct FixedSizeItemMgr : public BaseItemMgr, public Container<T> {
	virtual void doAnimation();                                               // _08 (weak)
	virtual void doEntry();                                                   // _0C (weak)
	virtual void doSetView(int viewportNumber);                               // _10 (weak)
	virtual void doViewCalc();                                                // _14 (weak)
	virtual void doSimulation(f32 rate);                                      // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx);                                 // _1C (weak)
	virtual void initDependency();                                            // _38 (weak)
	virtual void killAll();                                                   // _3C (weak)
	virtual u32 generatorGetID()                                         = 0; // _58
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*) = 0; // _5C
	virtual void onCreateModel(SysShape::Model*);                             // _A0
	virtual BaseItem* birth();                                                // _A4
	virtual void kill(T*);                                                    // _A8 (weak)
	virtual BaseItem* get(void*);                                             // _AC (weak, thunk at _94)
	virtual void* getNext(void*);                                             // _B0 (weak, thunk at _88)
	virtual void* getStart();                                                 // _B4 (weak, thunk at _8C)
	virtual void* getEnd();                                                   // _B8 (weak, thunk at _90)
	virtual ~FixedSizeItemMgr<T>();                                           // _BC (weak, thunk at _7C)

	void createModel(T*);
	void createModelCallback(SysShape::Model*);
	void createMgr(int, u32);
	void onAlloc();

	MonoObjectMgr<T> m_monoObjectMgr; // _4C
};

extern ItemMgr* itemMgr;

} // namespace Game

#endif
