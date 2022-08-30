#ifndef _GAME_BASEPELLETMGR_H
#define _GAME_BASEPELLETMGR_H

#include "types.h"
#include "GenericObjectMgr.h"
#include "Game/PelletList.h"
#include "SysShape/Model.h"
#include "SysShape/AnimMgr.h"
#include "JSystem/JKR/JKRArchive.h"
#include "CollInfo.h"

namespace Game {
struct PelletConfig;
struct GenPelletParm;

struct BasePelletMgr : public GenericObjectMgr {
	BasePelletMgr(PelletList::cKind);

	////////// VTABLE
	virtual void doAnimation();                                        // _08 (weak)
	virtual void doEntry();                                            // _0C (weak)
	virtual void doSetView(int);                                       // _10 (weak)
	virtual void doViewCalc();                                         // _14 (weak)
	virtual void doSimulation(float);                                  // _18 (weak)
	virtual void doDirectDraw(Graphics&);                              // _1C (weak)
	virtual void resetMgrAndResources()          = 0;                  // _38
	virtual Pellet* birth()                      = 0;                  // _3C
	virtual void kill(Pellet*)                   = 0;                  // _40
	virtual void setupResources()                = 0;                  // _44
	virtual Pellet* birthFromTeki(PelletConfig*) = 0;                  // _48
	virtual void setComeAlive(int)               = 0;                  // _4C
	virtual void setComeAlive(Pellet*)           = 0;                  // _50
	virtual void onCreateModel(SysShape::Model*);                      // _54 (weak)
	virtual char* getMgrName()        = 0;                             // _58
	virtual u8 getMgrID()             = 0;                             // _5C
	virtual void setRevival(Pellet*)  = 0;                             // _60
	virtual void setFromTeki(Pellet*) = 0;                             // _64
	virtual void getFlag(Pellet*)     = 0;                             // _68
	virtual SysShape::Model* createShape(int, int);                    // _6C
	virtual void generatorBirth(Vector3f&, Vector3f&, GenPelletParm*); // _70 (weak)
	virtual void generatorWrite(Stream&, GenPelletParm*);              // _74 (weak)
	virtual void generatorRead(Stream&, GenPelletParm*, u32);          // _78 (weak)
	virtual void generatorLocalVersion();                              // _7C (weak)
	virtual void generatorGetShape(GenPelletParm*);                    // _80
	virtual void generatorNewPelletParm();                             // _84
	////////// VTABLE END

	PelletConfig* getPelletConfig(int);
	void setUse(int);
	void load();
	void load_texArc(char*);
	void openTextArc(char*);
	void closeTextArc(JKRArchive*);
	void useModelMgr(int, u32);
	void createModelCallback(SysShape::Model*);
	void setCollTree(Pellet*, int);

	// _00 = VTBL
	u8 _04[0x4];                    // _04, unknown
	PelletConfigList* m_configList; // _08
	J3DModelData* m_modelData;      // _0C
	SysShape::AnimMgr** m_animMgr;  // _10
	CollPart** m_collParts;         // _14
	CollPartMgr m_collPartMgr;      // _18
	u32 _48;                        // _48, unknown
	void* _4C;                      // _4C, 'array'? unknown
	u32 _50;                        // _50, unknown
};

} // namespace Game

#endif
