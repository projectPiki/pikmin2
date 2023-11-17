#ifndef _GAME_BASEPELLETMGR_H
#define _GAME_BASEPELLETMGR_H

#include "types.h"
#include "GenericObjectMgr.h"
#include "Game/PelletList.h"
#include "SysShape/Model.h"
#include "SysShape/ModelMgr.h"
#include "SysShape/AnimMgr.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "CollInfo.h"

namespace Game {
struct PelletConfig;
struct GenPelletParm;

// BasePelletMgr inherits something virtual, but I cannot work out what
// it seems like all these BaseXMgrs are inheriting something virtual....
struct _BasePelletMgrParent2 {
};

struct BasePelletMgr : public GenericObjectMgr, virtual public _BasePelletMgrParent2 {
	BasePelletMgr(PelletList::cKind);

	////////// VTABLE
	virtual void resetMgrAndResources() = 0;                             // _38
	virtual Pellet* birth()             = 0;                             // _3C
	virtual void doAnimation() { }                                       // _08 (weak)
	virtual void doEntry() { }                                           // _0C (weak)
	virtual void doSetView(int viewportNumber) { }                       // _10 (weak)
	virtual void doViewCalc() { }                                        // _14 (weak)
	virtual void doSimulation(f32 rate) { }                              // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                         // _1C (weak)
	virtual void kill(Pellet*)                   = 0;                    // _40
	virtual void setupResources()                = 0;                    // _44
	virtual Pellet* birthFromTeki(PelletConfig*) = 0;                    // _48
	virtual void setComeAlive(int)               = 0;                    // _4C
	virtual void setComeAlive(Pellet*)           = 0;                    // _50
	virtual void onCreateModel(SysShape::Model*) { }                     // _54 (weak)
	virtual char* getMgrName()        = 0;                               // _58
	virtual u8 getMgrID()             = 0;                               // _5C
	virtual void setRevival(Pellet*)  = 0;                               // _60
	virtual void setFromTeki(Pellet*) = 0;                               // _64
	virtual u32 getFlag(Pellet*)      = 0;                               // _68
	virtual SysShape::Model* createShape(int, int);                      // _6C
	virtual Pellet* generatorBirth(Vector3f&, Vector3f&, GenPelletParm*) // _70 (weak)
	{
		return nullptr;
	}
	virtual void generatorWrite(Stream&, GenPelletParm*) { }     // _74 (weak)
	virtual void generatorRead(Stream&, GenPelletParm*, u32) { } // _78 (weak)
	virtual u32 generatorLocalVersion() { return '0000'; }       // _7C (weak)
	virtual J3DModelData* generatorGetShape(GenPelletParm*);     // _80
	virtual GenPelletParm* generatorNewPelletParm();             // _84
	virtual Pellet* getObjectPtr(void*) = 0;                     // _88
	virtual void* getNext(void*)        = 0;                     // _8C
	virtual void* getStart()            = 0;                     // _90
	virtual void* getEnd()              = 0;                     // _94
	////////// VTABLE END

	PelletConfig* getPelletConfig(int);
	void setUse(int);
	void load();
	void load_texArc(char*);
	JKRArchive* openTextArc(char*);
	void closeTextArc(JKRArchive*);
	void useModelMgr(int, u32);
	void createModelCallback(SysShape::Model* model) { onCreateModel(model); }
	void setCollTree(Pellet*, int);

	bool used(int);

	// _00 VTBL
	// _04 = ptr to NotSure/vtable for NotSure?
	PelletConfigList* mConfigList; // _08
	J3DModelData** mModelData;     // _0C
	SysShape::AnimMgr** mAnimMgr;  // _10
	CollPart** mCollParts;         // _14
	CollPartMgr mCollPartMgr;      // _18
	SysShape::ModelMgr* mModelMgr; // _48
	bool* mIsUsedList;             // _4C
	int mEntries;                  // _50
	                               // _54 - virtual NotSure
};

template <typename T>
struct FixedSizePelletMgr : public BasePelletMgr, public Container<T> {

	FixedSizePelletMgr(PelletList::cKind type)
	    : BasePelletMgr(type)
	{
	}

	////////// VTABLE
	virtual void resetMgr() // _28 (weak)
	{
		mMonoObjectMgr.resetMgr();
		mCollPartMgr.resetMgr();
	}

	virtual void resetMgrAndResources();          // _38
	virtual void onCreateModel(SysShape::Model*); // _54
	virtual Pellet* birth();                      // _3C
	virtual void doAnimation();                   // _08
	virtual void doEntry();                       // _0C
	virtual void doSetView(int viewportNumber);   // _10
	virtual void doViewCalc();                    // _14
	virtual void doSimulation(f32 rate);          // _18
	virtual void doDirectDraw(Graphics& gfx);     // _1C
	virtual void kill(Pellet*);                   // _40
	virtual void* getNext(void*);                 // _8C
	virtual void* getStart();                     // _90

	void onAlloc();
	void alloc(int);

	virtual Pellet* birthFromTeki(PelletConfig*); // _48
	virtual T* getObjectPtr(void*);               // _88
	virtual T* get(void* index)                   // _C4
	{
		return mMonoObjectMgr.get(index);
	}
	virtual void* getEnd();                // _94
	virtual void setComeAlive(int slotIdx) // _4C
	{
		mMonoObjectMgr.setFlag(slotIdx, 0);
	}
	virtual void setComeAlive(Pellet*); // _50
	virtual void setRevival(Pellet*);   // _60
	virtual void setFromTeki(Pellet*);  // _64
	virtual u32 getFlag(Pellet*);       // _68
	// virtual ~FixedSizePelletMgr() { }               // _C8
	////////// VTABLE END

	// _00-_54 	= BasePelletMgr
	// _54-_6C	= Container
	// _6C-_70	= ptr to _BasePelletMgrParent2 (maybe??)
	MonoObjectMgr<T> mMonoObjectMgr; // _70
};

template <typename T>
void FixedSizePelletMgr<T>::resetMgrAndResources()
{
	resetMgr();
	for (int i = 0; i < mEntries; i++) {
		mModelData[i]  = nullptr;
		mAnimMgr[i]    = nullptr;
		mCollParts[i]  = nullptr;
		mIsUsedList[i] = false;
	}

	if (mModelMgr) {
		mModelMgr = nullptr;
	}
}

template <typename T>
void FixedSizePelletMgr<T>::onCreateModel(SysShape::Model* model)
{
}

template <typename T>
Pellet* FixedSizePelletMgr<T>::birth()
{
	return mMonoObjectMgr.birth();
}

template <typename T>
void FixedSizePelletMgr<T>::doAnimation()
{
	mMonoObjectMgr.doAnimation();
}

template <typename T>
void FixedSizePelletMgr<T>::doEntry()
{
	mMonoObjectMgr.doEntry();
}

template <typename T>
void FixedSizePelletMgr<T>::doSetView(int vp)
{
	mMonoObjectMgr.doSetView(vp);
}

template <typename T>
void FixedSizePelletMgr<T>::doViewCalc()
{
	mMonoObjectMgr.doViewCalc();
}

template <typename T>
void FixedSizePelletMgr<T>::doSimulation(f32 step)
{
	mMonoObjectMgr.doSimulation(step);
}

template <typename T>
void FixedSizePelletMgr<T>::doDirectDraw(Graphics& gfx)
{
	mMonoObjectMgr.doDirectDraw(gfx);
}

template <typename T>
void FixedSizePelletMgr<T>::kill(Pellet* pellet)
{
	mMonoObjectMgr.kill(static_cast<T*>(pellet));
}

template <typename T>
void* FixedSizePelletMgr<T>::getNext(void* idx)
{
	return mMonoObjectMgr.getNext(idx);
}

template <typename T>
void* FixedSizePelletMgr<T>::getStart()
{
	return mMonoObjectMgr.getStart();
}

template <typename T>
u32 FixedSizePelletMgr<T>::getFlag(Pellet* pellet)
{
	if (pellet) {
		return mMonoObjectMgr.getFlag(pellet->mSlotIndex);
	}

	return -1;
}

template <typename T>
void FixedSizePelletMgr<T>::setFromTeki(Pellet* pellet)
{
	if (pellet) {
		mMonoObjectMgr.setFlag(pellet->mSlotIndex, 0x40 | 0x20 | 0x4 | 0x1);
	}
}

template <typename T>
void FixedSizePelletMgr<T>::setRevival(Pellet* pellet)
{
	if (pellet) {
		mMonoObjectMgr.setFlag(pellet->mSlotIndex, 0x40 | 0x20 | 0x4);
	}
}

template <typename T>
void FixedSizePelletMgr<T>::setComeAlive(Pellet* pellet)
{
	if (pellet) {
		mMonoObjectMgr.setFlag(pellet->mSlotIndex, 0);
	}
}

// template <typename T>
// void FixedSizePelletMgr<T>::setComeAlive(int slotIdx)
// {

// }

template <typename T>
void* FixedSizePelletMgr<T>::getEnd()
{
	return mMonoObjectMgr.getEnd();
}

template <typename T>
T* FixedSizePelletMgr<T>::getObjectPtr(void* index)
{
	return get(index);
}

template <typename T>
Pellet* FixedSizePelletMgr<T>::birthFromTeki(PelletConfig* config)
{
	for (int i = 0; i < mMonoObjectMgr.getMax(); i++) {
		if (mMonoObjectMgr.mOpenIds[i] != (0x64 | 0x1)) {
			continue;
		}

		Pellet* pellet = mMonoObjectMgr.getAt(i);
		if (pellet->mConfig != config) {
			continue;
		}

		return pellet;
	}
	return nullptr;
}

template <typename T>
void FixedSizePelletMgr<T>::alloc(int count)
{
	mMonoObjectMgr.alloc(count);
	onAlloc();
	for (int i = 0; i < mMonoObjectMgr.getMax(); i++) {
		mMonoObjectMgr.getAt(i)->constructor();
	}
}

template <typename T>
void FixedSizePelletMgr<T>::onAlloc()
{
	for (int i = 0; i < mMonoObjectMgr.mMax; i++) {
		mMonoObjectMgr.getAt(i)->mSlotIndex = i;
	}
}

} // namespace Game

#endif
