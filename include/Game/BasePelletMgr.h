#ifndef _GAME_BASEPELLETMGR_H
#define _GAME_BASEPELLETMGR_H

#include "types.h"
#include "GenericObjectMgr.h"
#include "Game/PelletList.h"
#include "SysShape/Model.h"
#include "SysShape/ModelMgr.h"
#include "SysShape/AnimMgr.h"
#include "JSystem/JKR/JKRArchive.h"
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
	virtual void doAnimation() { }                                       // _08 (weak)
	virtual void doEntry() { }                                           // _0C (weak)
	virtual void doSetView(int) { }                                      // _10 (weak)
	virtual void doViewCalc() { }                                        // _14 (weak)
	virtual void doSimulation(float rate) { }                            // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                         // _1C (weak)
	virtual void resetMgrAndResources()          = 0;                    // _38
	virtual Pellet* birth()                      = 0;                    // _3C
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
	virtual void getFlag(Pellet*)     = 0;                               // _68
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
	void openTextArc(char*);
	void closeTextArc(JKRArchive*);
	void useModelMgr(int, u32);
	void createModelCallback(SysShape::Model* model) { onCreateModel(model); }
	void setCollTree(Pellet*, int);

	// _00 VTBL
	// _04 = ptr to NotSure/vtable for NotSure?
	PelletConfigList* m_configList; // _08
	J3DModelData** m_modelData;     // _0C
	SysShape::AnimMgr** m_animMgr;  // _10
	CollPart** m_collParts;         // _14
	CollPartMgr m_collPartMgr;      // _18
	SysShape::ModelMgr* m_modelMgr; // _48
	bool* _4C;                      // _4C
	int _50;                        // _50
	                                // _54 - virtual NotSure
};

template <typename T>
struct FixedSizePelletMgr : public BasePelletMgr, public Container<T> {

	////////// VTABLE
	virtual void doAnimation();                 // _08
	virtual void doEntry();                     // _0C
	virtual void doSetView(int viewportNumber); // _10
	virtual void doViewCalc();                  // _14
	virtual void doSimulation(float rate);      // _18
	virtual void doDirectDraw(Graphics& gfx);   // _1C
	virtual void resetMgr()                     // _28 (weak)
	{
		m_monoObjectMgr.resetMgr();
		m_collPartMgr.resetMgr();
	}
	virtual void resetMgrAndResources();            // _38
	virtual Pellet* birth();                        // _3C
	virtual void kill(Pellet*);                     // _40
	virtual void setupResources() = 0;              // _44
	virtual Pellet* birthFromTeki(PelletConfig*);   // _48
	virtual void setComeAlive(int);                 // _4C
	virtual void setComeAlive(Pellet*);             // _50
	virtual void onCreateModel(SysShape::Model*);   // _54
	virtual char* getMgrName() = 0;                 // _58
	virtual u8 getMgrID()      = 0;                 // _5C
	virtual void setRevival(Pellet*);               // _60
	virtual void setFromTeki(Pellet*);              // _64
	virtual void getFlag(Pellet*);                  // _68
	virtual SysShape::Model* createShape(int, int); // _6C
	virtual T* getObjectPtr(void*);                 // _88
	virtual void* getNext(void*);                   // _8C
	virtual void* getStart();                       // _90
	virtual void* getEnd();                         // _94
	virtual T* get(void*);                          // _C4
	virtual ~FixedSizePelletMgr();                  // _C8
	////////// VTABLE END

	void alloc(int);
	void onAlloc();

	// _00-_54 	= BasePelletMgr
	// _54-_6C	= Container
	// _6C-_70	= ptr to _BasePelletMgrParent2 (maybe??)
	MonoObjectMgr<T> m_monoObjectMgr; // _70
};

} // namespace Game

#endif
