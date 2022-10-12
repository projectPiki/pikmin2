#ifndef _GAME_PIKIMGR_H
#define _GAME_PIKIMGR_H

#include "types.h"

#include "Condition.h"
#include "CNode.h"
#include "MonoObjectMgr.h"

#include "Game/Piki.h"
#include "Game/PikiParms.h"

struct J3DModelData;
struct UpdateMgr;
struct JKRArchive;

namespace SysShape {
struct ModelMgr;
} // namespace SysShape

namespace Game {
struct PikiContainer;

struct PikiMgr : public MonoObjectMgr<Piki> {
	PikiMgr();

	// vtable 1
	virtual ~PikiMgr(); // _08 (weak)
	// vtable 2
	virtual void doAnimation();           // _64 (weak)
	virtual void doEntry();               // _68 (weak)
	virtual Piki* birth();                // _7C
	virtual void resetMgr();              // _80 (weak)
	virtual void onAlloc();               // _88
	virtual void doSimpleDraw(Viewport*); // _8C (weak)
	virtual u32 getMatrixLoadType();      // _90 (weak)
	virtual void getMgrName();            // _94 (weak)
	virtual void loadResources();         // _98 (weak)
	virtual void loadResources(int);      // _9C

	void init();
	void setupPiki(Piki*);
	void load(int);
	void loadBmd(int, char*);
	void createModelCallback(SysShape::Model*);
	SysShape::Model* createModel(int, int);
	SysShape::Model* createLeafModel(int, int);
	void setMovieDraw(bool);
	void debugShapeDL(char*);
	void setVsXlu(int, bool);
	void setupSoundViewerAndBas();
	int getColorTransportScale(int);
	void allocStorePikmins();
	void clearStorePikmins();
	void saveStorePikmins(Condition<Piki>*);
	void getStorePikmin(int, int);
	void moveAllPikmins(Vector3f&, f32, Condition<Piki>*);
	void forceEnterPikmins(u8);
	void killDayEndPikmins(PikiContainer&);
	void killAllPikmins();
	void caveSaveFormationPikmins(bool);
	void caveSaveAllPikmins(bool, bool);
	void saveFormationPikmins(PikiContainer&);
	void saveAllPikmins(PikiContainer&);

	s32 m_dopedPikis;               // _30
	s32* m_storedPikis;             // _34
	u8 m_flags[4];                  // _38
	J3DModelData* m_bluPikiModel;   // _3C, blue
	J3DModelData* m_redPikiModel;   // _40, red
	J3DModelData* m_yelPikiModel;   // _44, yellow
	J3DModelData* m_prpPikiModel;   // _48, purple
	J3DModelData* m_wtePikiModel;   // _4C, white
	J3DModelData* m_blbPikiModel;   // _50, bulbmin
	J3DModelData* m_crtPikiModel;   // _54, carrot
	J3DModelData* m_leafModel;      // _58
	J3DModelData* m_budModel;       // _5C
	J3DModelData* m_flowerModel;    // _60
	J3DModelData* m_redBudModel;    // _64
	J3DModelData* m_redFlowerModel; // _68
	PikiParms* m_parms;             // _6C
	SysShape::ModelMgr* m_modelMgr; // _70
	UpdateMgr* m_updateMgr;         // _74
	UpdateMgr* m_updateMgr2;        // _78, unsure of type
	JKRArchive* m_modelArchive;     // _7C
};

extern PikiMgr* pikiMgr;
} // namespace Game

#endif
