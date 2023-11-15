#ifndef _GAME_ITEMMGR_H
#define _GAME_ITEMMGR_H

#include "Container.h"
#include "Game/gameGenerator.h"
#include "GenericObjectMgr.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "PSM/ObjMgr.h"
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
	void loadBmd(char*, int, u32);
	void loadCollision(JKRFileLoader*, char*);
	PlatAttacher* loadPlatAttacher(JKRFileLoader*, char*);
	Platform* loadPlatform(JKRFileLoader*, char*);

	JKRArchive* openTextArc(char*);
	void closeTextArc(JKRArchive*);

	// _00 = VTBL
	// _04 = ptr to _BaseItemMgrParent2
	char* mItemName;                   // _08
	LoadResource::Node* mResourceNode; // _0C
	u32 _10;                           // _10
	u32 _14;                           // _14
	int mModelDataMax;                 // _18
	J3DModelData** mModelData;         // _1C /* ptr to array of ptrs */
	SysShape::AnimMgr* mAnimMgr;       // _20
	CollPartFactory* mCollPartFactory; // _24
	char* mObjectPathComponent;        // _28
	JKRMemArchive* mArchive;           // _2C
	                                   // _30 = _BaseItemMgrParent2
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
	virtual ~NodeItemMgr() { }    // _B4 (weak)

	T* birth(); // weak

	// _00     = VTBL (BaseItemMgr)
	// _00-_30 = BaseItemMgr
	// _30     = VTBL (Container)
	// _30-_4C = Container
	NodeObjectMgr<T> mNodeObjectMgr; // _4C
};

struct TNodeItemMgr : public BaseItemMgr, public Container<BaseItem> {
	TNodeItemMgr();

	// vtable 1
	virtual void doAnimation();                 // _08 (weak)
	virtual void doEntry();                     // _0C (weak)
	virtual void doSetView(int viewportNumber); // _10 (weak)
	virtual void doViewCalc();                  // _14 (weak)
	virtual void doSimulation(f32 rate);        // _18 (weak)
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
	virtual ~TNodeItemMgr() { }    // _B8 (weak)

	BaseItem* birth();
	void entry(BaseItem*);

	// _00     = VTBL (BaseItemMgr)
	// _00-_30 = BaseItemMgr
	// _30     = VTBL (Container)
	// _30-_4C = Container
	NodeObjectMgr<BaseItem> mNodeObjectMgr; // _4C
};

struct ItemMgr : public NodeObjectMgr<GenericObjectMgr> {
	ItemMgr();

	// vtable 1
	virtual ~ItemMgr(); // _08
	// vtable 2
	virtual void doAnimation();                 // _64 (weak)
	virtual void doEntry();                     // _68 (weak)
	virtual void doSetView(int viewportNumber); // _6C (weak)
	virtual void doViewCalc();                  // _70 (weak)
	virtual void doSimulation(f32 rate);        // _74 (weak)
	virtual void doDirectDraw(Graphics&);       // _78 (weak)
	virtual void loadResources();               // _80 (weak)
	virtual void doSimpleDraw(Viewport*);       // _84 (weak)

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
	inline FixedSizeItemMgr()
	    : BaseItemMgr(1)
	    , Container<T>()
	    , mMonoObjectMgr()
	{
	}

	virtual void doAnimation() { mMonoObjectMgr.doAnimation(); }                             // _08 (weak)
	virtual void doEntry() { mMonoObjectMgr.doEntry(); }                                     // _0C (weak)
	virtual void doSetView(int viewportNumber) { mMonoObjectMgr.doSetView(viewportNumber); } // _10 (weak)
	virtual void doViewCalc() { mMonoObjectMgr.doViewCalc(); }                               // _14 (weak)
	virtual void doSimulation(f32 rate) { mMonoObjectMgr.doSimulation(rate); }               // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx) { mMonoObjectMgr.doDirectDraw(gfx); }           // _1C (weak)
	virtual void initDependency()                                                            // _38 (weak)
	{
		Iterator<T> iter(&mMonoObjectMgr);
		CI_LOOP(iter) { (*iter)->initDependency(); }
	}
	virtual void killAll() // _3C (weak)
	{
		for (int i = 0; i < mMonoObjectMgr.mMax; i++) {
			T* item = mMonoObjectMgr.getAt(i);
			CreatureKillArg killArg(1);
			if (item->isAlive()) {
				item->kill(&killArg);
			}

			if (item->getPSCreature()) {
				if (PSM::ObjMgr* inst = PSSystem::SingletonBase<PSM::ObjMgr>::sInstance) {
					PSM::Creature* soundObj = item->getPSCreature();
					inst->remove(soundObj);
				}
			}
		}
	}
	virtual u32 generatorGetID()                                  = 0;       // _58
	virtual T* generatorBirth(Vector3f&, Vector3f&, GenItemParm*) = 0;       // _5C
	virtual void onCreateModel(SysShape::Model*) { }                         // _A0
	virtual T* birth() { return mMonoObjectMgr.birth(); }                    // _A4
	virtual void kill(T* item) { mMonoObjectMgr.kill(item); }                // _A8 (weak)
	virtual T* get(void* idx) { return mMonoObjectMgr.get(idx); }            // _AC (weak, thunk at _94)
	virtual void* getNext(void* idx) { return mMonoObjectMgr.getNext(idx); } // _B0 (weak, thunk at _88)
	virtual void* getStart() { return mMonoObjectMgr.getStart(); }           // _B4 (weak, thunk at _8C)
	virtual void* getEnd() { return mMonoObjectMgr.getEnd(); }               // _B8 (weak, thunk at _90)
	// virtual ~FixedSizeItemMgr<T>() { }                                 // _BC (weak, thunk at _7C)

	SysShape::Model* createModel(T*);
	void createModelCallback(SysShape::Model*);
	void createMgr(int, u32);
	void onAlloc();

	// _00     = VTBL (BaseItemMgr)
	// _00-_30 = BaseItemMgr
	// _30     = VTBL (Container)
	// _30-_4C = Container
	MonoObjectMgr<T> mMonoObjectMgr; // _4C
	SysShape::ModelMgr* mModelMgr;   // _7C
};

template <typename T>
SysShape::Model* FixedSizeItemMgr<T>::createModel(T* item)
{
	mModelMgr->createModel(item->_188, item->_184);
}

template <typename T>
void FixedSizeItemMgr<T>::createModelCallback(SysShape::Model* model)
{
	onCreateModel(model);
}

template <typename T>
void FixedSizeItemMgr<T>::createMgr(int count, u32 p2)
{
	mMonoObjectMgr.alloc(count);
	onAlloc();
	mModelMgr = new SysShape::ModelMgr(mModelDataMax, mModelData, count, p2, 2,
	                                   new Delegate1<FixedSizeItemMgr<T>, SysShape::Model*>(this, createModelCallback));
}

template <typename T>
void FixedSizeItemMgr<T>::onAlloc()
{
	for (int i = 0; i < mMonoObjectMgr.mMax; i++) {
		mMonoObjectMgr.getAt(i)->_184 = i;
	}
}

extern ItemMgr* itemMgr;

} // namespace Game

#endif
