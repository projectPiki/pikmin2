#ifndef _PSM_DIRECTORMGR_H
#define _PSM_DIRECTORMGR_H

#include "types.h"
#include "PSSystem/PSDirector.h"
#include "PSM/Director.h"
#include "PSM/BgmTrackMap.h"

namespace PSM {
struct DirectorMgr_Scene : public ::PSSystem::DirectorMgrBase, public JKRDisposer {

	// For caves/overworlds only, Bosses and 2P-battle theme has a seperate manager
	enum DirectorType {
		Director_Working   = 0,
		Director_Treasure  = 1,
		Director_EnemyNear = 2,
		Director_Battle    = 3,
		Director_Ground    = 4, // aka spiderworts
		Director_Pikmin    = 5, // missing notes when pikmin die
		Director_Damage    = 6, // distortion when getting hit
		Director_Tempo     = 7, // slow music when low health
		Director_COUNT,         // 8
	};

	DirectorMgr_Scene(DirectorMgr_Scene*, u8);

	virtual ~DirectorMgr_Scene();                                                             // _08 (weak)
	virtual ::PSSystem::DirectorBase* newDirector(u8, ::PSSystem::DirectedBgm&);              // _0C
	virtual bool isSlave() { return mOwner; }                                                 // _1C (weak)
	virtual PikminNumberDirector* newPikminNumberDirector(int, u8, ::PSSystem::DirectedBgm&); // _20

	void initTrackMap(::PSSystem::DirectedBgm&);
	void adaptDirectorActor(::PSSystem::DirectorBase*, u8);

	inline ::PSSystem::DirectorCopyActor* getCopyActorList(int i) { return mCopyActorList[i]; }

	inline void setCopyActorList(int i, ::PSSystem::DirectorCopyActor* list) { mCopyActorList[i] = list; }

	// _00     = VTBL 1 (DirectorMgrBase)
	// _0C     = VTBL 2 (JKRDisposer + Self)
	// _00-_0C = PSSystem::DirectorMgrBase
	// _0C-_24 = JKRDisposer
	::PSSystem::DirectorCopyActor* mCopyActorList[8]; // _24
	DirectorMgr_Scene* mOwner;                        // _44
	BgmTrackMap mBgmTrackMap;                         // _48
};

struct DirectorMgr_Scene_AutoBgm : public DirectorMgr_Scene {
	DirectorMgr_Scene_AutoBgm(PSSystem::DirectorMgrBase* mgr, u8 mode)
	    : DirectorMgr_Scene((DirectorMgr_Scene*)mgr, mode)
	{
	}

	// virtual ~DirectorMgr_Scene_AutoBgm() { }                                                  // _08 (weak)
	virtual PikminNumberDirector* newPikminNumberDirector(int, u8, ::PSSystem::DirectedBgm&); // _20

	// _00     = VTBL 1
	// _0C     = VTBL 2
	// _00-_88 = DirectorMgr_Scene
};

struct DirectorMgr_Battle : public ::PSSystem::DirectorMgrBase, public JKRDisposer {
	DirectorMgr_Battle();

	// virtual ~DirectorMgr_Battle() { }                                            // _08 (weak)
	virtual ::PSSystem::DirectorBase* newDirector(u8, ::PSSystem::DirectedBgm&); // _0C

	// _00     = VTBL 1 (DirectorMgrBase)
	// _0C     = VTBL 2 (JKRDisposer + Self)
	// _00-_0C = PSSystem::DirectorMgrBase
	// _0C-_24 = JKRDisposer
};

struct DirectorMgr_2PBattle : public ::PSSystem::DirectorMgrBase, public JKRDisposer {

	enum DirectorType {
		Director2P_Working      = 0,
		Director2P_EnemyNear    = 1,
		Director2P_Battle       = 2,
		Director2P_OlimarMarble = 3,
		Director2P_LouieMarble  = 4,
		Director2P_OlimarIchou  = 5,
		Director2P_LouieIchou   = 6,
		Director2P_PikBattle    = 7,
	};

	DirectorMgr_2PBattle();

	// virtual ~DirectorMgr_2PBattle() { }                                          // _08 (weak)
	virtual ::PSSystem::DirectorBase* newDirector(u8, ::PSSystem::DirectedBgm&); // _0C

	// _00     = VTBL 1 (DirectorMgrBase)
	// _0C     = VTBL 2 (JKRDisposer + Self)
	// _00-_0C = PSSystem::DirectorMgrBase
	// _0C-_24 = JKRDisposer
};
} // namespace PSM

#endif
