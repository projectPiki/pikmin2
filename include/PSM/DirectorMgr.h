#ifndef _PSM_DIRECTORMGR_H
#define _PSM_DIRECTORMGR_H

#include "types.h"
#include "PSSystem/Director.h"
#include "PSM/Director.h"
#include "PSM/BgmTrackMap.h"

namespace PSM {
struct DirectorMgr_Scene : public PSSystem::DirectorMgrBase, public JKRDisposer {
	DirectorMgr_Scene(DirectorMgr_Scene*, u8);

	virtual ~DirectorMgr_Scene();                                          // _08 (weak)
	virtual void newDirector(u8, PSSystem::DirectedBgm&);                  // _0C
	virtual void isSlave();                                                // _1C (weak)
	virtual void newPikminNumberDirector(int, u8, PSSystem::DirectedBgm&); // _20

	void initTrackMap(PSSystem::DirectedBgm&);
	void adaptDirectorActor(PSSystem::DirectorBase*, u8);

	// _00     = VTBL 1 (DirectorMgrBase)
	// _0C     = VTBL 2 (JKRDisposer + Self)
	// _00-_0C = PSSystem::DirectorMgrBase
	// _0C-_24 = JKRDisposer
	PSSystem::DirectorCopyActor* _24[4];    // _24
	ListDirectorActor* m_listDirectorActor; // _34
	PSSystem::DirectorCopyActor* _38[3];    // _38
	DirectorMgr_Scene* m_owner;             // _44
	BgmTrackMap m_bgmTrackMap;              // _48
};

struct DirectorMgr_Scene_AutoBgm : public DirectorMgr_Scene {
	virtual ~DirectorMgr_Scene_AutoBgm();                                  // _08 (weak)
	virtual void newPikminNumberDirector(int, u8, PSSystem::DirectedBgm&); // _20

	// _00     = VTBL 1
	// _0C     = VTBL 2
	// _00-_88 = DirectorMgr_Scene
};

struct DirectorMgr_Battle : public PSSystem::DirectorMgrBase, public JKRDisposer {
	DirectorMgr_Battle();

	virtual ~DirectorMgr_Battle();                        // _08 (weak)
	virtual void newDirector(u8, PSSystem::DirectedBgm&); // _0C

	// _00     = VTBL 1 (DirectorMgrBase)
	// _0C     = VTBL 2 (JKRDisposer + Self)
	// _00-_0C = PSSystem::DirectorMgrBase
	// _0C-_24 = JKRDisposer
};

struct DirectorMgr_2PBattle : public PSSystem::DirectorMgrBase, public JKRDisposer {
	DirectorMgr_2PBattle();

	virtual ~DirectorMgr_2PBattle();                      // _08 (weak)
	virtual void newDirector(u8, PSSystem::DirectedBgm&); // _0C

	// _00     = VTBL 1 (DirectorMgrBase)
	// _0C     = VTBL 2 (JKRDisposer + Self)
	// _00-_0C = PSSystem::DirectorMgrBase
	// _0C-_24 = JKRDisposer
};
} // namespace PSM

#endif
