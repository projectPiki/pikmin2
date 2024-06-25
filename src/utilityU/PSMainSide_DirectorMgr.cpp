#include "PSM/DirectorMgr.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "PSSystem/PSGame.h"
#include "PSGame/PikScene.h"
#include "PSM/BossBgmFader.h"
#include "PSM/Scene.h"

namespace PSM {

/**
 * @note Address: 0x8046F2BC
 * @note Size: 0x2D8
 */
DirectorMgr_Scene::DirectorMgr_Scene(DirectorMgr_Scene* owner, u8 type)
    : PSSystem::DirectorMgrBase(type)
    , mOwner(owner)
{
	if (!isSlave()) {
		for (u8 i = 0; i < Director_COUNT; i++) {
			switch (i) {
			case Director_Working:
			case Director_Treasure:
			case Director_EnemyNear:
			case Director_Battle:
				mCopyActorList[i] = new ListDirectorActor(nullptr);
				break;
			case Director_Ground:
				mCopyActorList[i] = new ListDirectorActor(nullptr);
				break;
			case Director_Pikmin:
			case Director_Damage:
			case Director_Tempo:
				mCopyActorList[i] = new PSSystem::DirectorCopyActor(nullptr, nullptr);
				break;
			default:
				JUT_PANICLINE(60, "P2Assert");
			}
		}
	} else {
		for (u8 i = 0; i < Director_COUNT; i++) {
			setCopyActorList(i, mOwner->getCopyActorList(i));
			P2ASSERTLINE(69, mCopyActorList[i]);
		}
	}
}

/**
 * @note Address: 0x8046F594
 * @note Size: 0x8C
 */
DirectorMgr_Scene::~DirectorMgr_Scene() { }

/**
 * @note Address: 0x8046F620
 * @note Size: 0x294
 */
void DirectorMgr_Scene::initTrackMap(PSSystem::DirectedBgm& bgm)
{
	BgmTrackMapFile file(false);
	char* path = bgm.mBmsFileName;
	char* bms  = path;

	// Determine what trackMap file to load, depending on bms/cnd file name
	if (IS_SAME_STRING(bms, "caveglass.bms") || (IS_SAME_STRING(bms, "caverelax.bms"))) {
		path = "/user/Totaka/trackMap_Seq_T.txt";
	} else if (IS_SAME_STRING(bms, "caveconc.bms")) {
		path = "/user/Totaka/trackMap_Cond_T.txt";
		P2ASSERTLINE(116, bgm.getCastType() == PSSystem::SeqBase::TYPE_AutoBgm);
		bms = static_cast<PSAutoBgm::AutoBgm*>(&bgm)->mConductorFilePath;
	} else if (IS_SAME_STRING_N("new_", bms, strlen("new_"))) {
		path = "/user/Totaka/trackMap_Cond_T.txt";
		P2ASSERTLINE(126, bgm.getCastType() == PSSystem::SeqBase::TYPE_AutoBgm);
		bms = static_cast<PSAutoBgm::AutoBgm*>(&bgm)->mConductorFilePath;
	} else if (IS_SAME_STRING(bms, "cavesoil.bms") || (IS_SAME_STRING(bms, "cavemetal.bms"))) {
		path = "/user/Wakai/trackMap_Cond_W.txt";
		P2ASSERTLINE(139, bgm.getCastType() == PSSystem::SeqBase::TYPE_AutoBgm);
		bms = static_cast<PSAutoBgm::AutoBgm*>(&bgm)->mConductorFilePath;
	} else {
		path = "/user/Wakai/trackMap_Seq_W.txt";
	}

	file.onlyLoad(path, JKRDvdRipper::ALLOC_DIR_BOTTOM);
	mBgmTrackMap = file.readTrackMap(bms);
}

/**
 * @note Address: 0x8046F8B4
 * @note Size: 0x770
 */
PSSystem::DirectorBase* DirectorMgr_Scene::newDirector(u8 type, PSSystem::DirectedBgm& bgm)
{
	PSM::BgmTrackMap& trackMap = mBgmTrackMap;

	JUT_ASSERTLINE(161, trackMap.mBasicTrackCount, "track map is\nnot initialized\n");
	PSSystem::DirectorBase* actor  = nullptr;
	PSSystem::DirectorBase* damage = nullptr;

	switch (type) {
	case Director_Working: {
		actor = new ActorDirector_Scaled("eventD", trackMap.mEventTrackCount, 200.0f, 1500.0f, 100, 100, 100);
		P2ASSERTLINE(173, actor);
		for (u8 i = 0; i < (int)trackMap.mEventTrackCount; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + trackMap.mBasicTrackCount));
		}
		break;
	}
	case Director_EnemyNear: {
		actor = new ActorDirector_Kehai("kehaiD   ", trackMap.mKehaiTrackCount, 100, 100, 100);
		P2ASSERTLINE(188, actor);
		for (u8 i = 0; i < (int)trackMap.mKehaiTrackCount; i++) {
			actor->setTrack(i,
			                bgm.getChildTrack(i + (trackMap.mEventTrackCount + trackMap.mBasicTrackCount + trackMap.mOtakaraTrackCount)));
		}
		break;
	}
	case Director_Battle: {
		actor = new ActorDirector_Battle("battleD  ", trackMap.mBattleTrackCount, 100, 100, 100);
		P2ASSERTLINE(206, actor);
		for (u8 i = 0; i < (int)trackMap.mBattleTrackCount; i++) {
			actor->setTrack(i, bgm.getChildTrack(i
			                                     + (trackMap.mEventTrackCount + trackMap.mBasicTrackCount + trackMap.mOtakaraTrackCount
			                                        + trackMap.mKehaiTrackCount)));
		}
		break;
	}
	case Director_Treasure: {
		actor = new ActorDirector_TrackOn("OtakaraD", trackMap.mOtakaraTrackCount, 100, 100);
		P2ASSERTLINE(219, actor);
		for (u8 i = 0; i < (int)trackMap.mOtakaraTrackCount; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + (trackMap.mEventTrackCount + trackMap.mBasicTrackCount)));
		}
		break;
	}
	case Director_Ground: {
		if (bgm.getCastType() == PSSystem::SeqBase::TYPE_AutoBgm) {
			actor = new GroundDirector_Cave("GroundD  ", trackMap.mGroundTrackCount, 100, 100);
		} else {
			actor = new ActorDirector_Scaled("GroundD  ", trackMap.mGroundTrackCount, 300.0f, 600.0f, 200, 200, 10);
		}
		P2ASSERTLINE(275, actor);
		for (u8 i = 0; i < (int)trackMap.mGroundTrackCount; i++) {
			int id = trackMap.mEventTrackCount + trackMap.mBasicTrackCount + trackMap.mOtakaraTrackCount + trackMap.mKehaiTrackCount
			       + trackMap.mBattleTrackCount + i;
			actor->setTrack(i, bgm.getChildTrack(id));
		}
		break;
	}
	case Director_Pikmin: {
		int pikNum = trackMap.getPikNum();
		u8 mask    = trackMap.getPikMaskFlag();
		actor      = newPikminNumberDirector(pikNum, mask, bgm);
		P2ASSERTLINE(290, actor);
		u8 id = 0;
		for (u8 i = 0; i < 16; i++) {
			if (trackMap.mPikNum[i])
				actor->setTrack(id++, bgm.getChildTrack(i));
		}
		if (bgm.getCastType() == PSSystem::SeqBase::TYPE_AutoBgm) {
			static_cast<PSAutoBgm::AutoBgm*>(&bgm)->setPikiMaskNum(trackMap.mPikNum);
		}
		break;
	}
	case Director_Damage: {
		damage = new DamageDirector;
		bgm.assertValidTrack();
		damage->setTrack(0, bgm.mRootTrack);
		break;
	case Director_Tempo:
		actor = new ActorDirector_TempoChange;
		bgm.assertValidTrack();
		actor->setTrack(0, bgm.mRootTrack);
		break;
	}
	}

	PSSystem::DirectorBase* ret = nullptr;

	if (!actor && damage) {
		ret = damage;
	} else if (actor && !damage) {
		ret = actor;
	}

	P2ASSERTLINE(334, ret);

	PSSystem::DirectorCopyActor* obj = mCopyActorList[type];
	if (isSlave()) {
		obj->mDirectorParent = ret;
	} else {
		obj->mDirectorChild = ret;
	}
	adaptDirectorActor(ret, type);
	return ret;
}

/**
 * @note Address: 0x80470024
 * @note Size: 0xA8
 */
void DirectorMgr_Scene::adaptDirectorActor(PSSystem::DirectorBase* director, u8 type)
{
	ListDirectorActor* actor = static_cast<ListDirectorActor*>(mCopyActorList[type]);
	switch (type) {
	case Director_Working:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case Director_Treasure:
		static_cast<ActorDirector_TrackOn*>(director)->mActor = actor;
		break;
	case Director_EnemyNear:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case Director_Battle:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case Director_Ground:
		static_cast<ActorDirector_Scaled*>(director)->mActor = actor;
		break;
	case Director_Pikmin:
		static_cast<PikminNumberDirector*>(director)->mActor = actor;
		break;
	case Director_Damage:
		static_cast<DamageDirector*>(director)->mActor = actor;
		break;
	case Director_Tempo:
		static_cast<ActorDirector_TempoChange*>(director)->mActor = actor;
		break;
	default:
		P2ASSERTLINE(405, false);
	}
}

/**
 * @note Address: 0x804700CC
 * @note Size: 0x94
 */
PikminNumberDirector* DirectorMgr_Scene::newPikminNumberDirector(int pikNum, u8 pikMask, PSSystem::DirectedBgm& bgm)
{
	PikminNumberDirector* director = new PikminNumberDirector(pikNum, pikMask, bgm);
	P2ASSERTLINE(412, director);
	return director;
}

/**
 * @note Address: 0x80470160
 * @note Size: 0x90
 */
PikminNumberDirector* DirectorMgr_Scene_AutoBgm::newPikminNumberDirector(int pikNum, u8 pikMask, PSSystem::DirectedBgm& bgm)
{
	PikminNumberDirector* director = new PikminNumberDirector_AutoBgm(pikNum, pikMask, bgm);
	P2ASSERTLINE(425, director);
	return director;
}

/**
 * @note Address: 0x804701F0
 * @note Size: 0x50
 */
DirectorMgr_Battle::DirectorMgr_Battle()
    : PSSystem::DirectorMgrBase(2)
{
}

/**
 * @note Address: 0x80470240
 * @note Size: 0x244
 */
PSSystem::DirectorBase* DirectorMgr_Battle::newDirector(u8 flag, PSSystem::DirectedBgm& bgm)
{
	PSSystem::DirectorBase* director = nullptr;
	u8 trackNum                      = 255;
	u8 trackID                       = 255;

	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	bool boss               = static_cast<PSGame::PikSceneMgr*>(mgr)->curSceneIsBigBossFloor();

	switch (flag) {
	case 0:
		if (boss) {
			trackID  = 14;
			trackNum = 1;
		} else {
			trackID  = 10;
			trackNum = 1;
		}
		director = new PikAttackDirector(trackNum);

		BossBgmFader::Mgr* fader = PSSystem::SingletonBase<BossBgmFader::Mgr>::sInstance;
		if (fader) {
			u8 count = PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance()->mTypedProc.mLinkCount;
			if (count) {
				fader->mTypedProc.mDirectorUpdator = new DirectorUpdator(director, count, DirectorUpdator::TYPE_0);
			}
		}

		break;
	case 1:
		if (boss) {
			trackID  = 15;
			trackNum = 1;
		} else {
			trackID  = 11;
			trackNum = 1;
		}
		director = new ExiteDirector(trackNum);
		break;
	}

	P2ASSERTLINE(495, trackNum != 255);
	P2ASSERTLINE(496, trackID != 255);
	P2ASSERTLINE(497, director);

	for (u8 i = 0; i < trackNum; i++) {
		int index = trackID + i;
		director->setTrack(i, bgm.getChildTrack(index));
	}
	return director;
}

/**
 * @note Address: 0x80470484
 * @note Size: 0x50
 */
DirectorMgr_2PBattle::DirectorMgr_2PBattle()
    : PSSystem::DirectorMgrBase(8)
{
}

/**
 * @note Address: 0x804704D4
 * @note Size: 0x6B8
 */
PSSystem::DirectorBase* DirectorMgr_2PBattle::newDirector(u8 type, PSSystem::DirectedBgm& bgm)
{
	PSSystem::DirectorBase* actor = nullptr;
	switch (type) {
	case Director2P_Working: {
		actor = new ActorDirector_Scaled("eventD   ", 1, 200.0, 1500.0, 100, 100, 100);
		P2ASSERTLINE(615, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 8));
		}
		static_cast<TrackOnDirector_Scaled*>(actor)->mActor = new ListDirectorActor(actor);
		break;
	}
	case Director2P_EnemyNear: {
		actor = new ActorDirector_Kehai("kehaiD   ", 1, 100, 100, 100);
		P2ASSERTLINE(627, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 9));
		}
		static_cast<ActorDirector_Kehai*>(actor)->mActor = new ListDirectorActor(actor);
		break;
	}
	case Director2P_Battle: {
		actor = new ActorDirector_Battle("battleD  ", 1, 100, 100, 100);
		P2ASSERTLINE(639, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 10));
		}
		static_cast<ActorDirector_Kehai*>(actor)->mActor = new ListDirectorActor(actor);
		break;
	}
	case Director2P_OlimarMarble: {
		actor = new ActorDirector_TrackOn("OriBeedaD", 1, 100, 100);
		P2ASSERTLINE(662, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 11));
		}
		break;
	}
	case Director2P_LouieMarble: {
		actor = new ActorDirector_TrackOn("RugBeedaD", 1, 100, 100);
		P2ASSERTLINE(699, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 12));
		}
		break;
	}
	case Director2P_OlimarIchou: {
		actor = new ActorDirector_TrackOn("OriIchouD", 1, 100, 100);
		P2ASSERTLINE(729, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 13));
		}
		static_cast<ActorDirector_TrackOn*>(actor)->mActor = new ListDirectorActor(actor);
		break;
	}
	case Director2P_LouieIchou: {
		actor = new ActorDirector_TrackOn("RouIchouD", 1, 100, 100);
		P2ASSERTLINE(757, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 14));
		}
		static_cast<ActorDirector_TrackOn*>(actor)->mActor = new ListDirectorActor(actor);
		break;
	case Director2P_PikBattle:
		actor = new TrackOnDirector_Voting(1, "PikBattlD", 100, 100);
		P2ASSERTLINE(784, actor);
		for (u8 i = 0; i < 1; i++) {
			actor->setTrack(i, bgm.getChildTrack(i + 15));
		}
		break;
	default:
		JUT_PANICLINE(791, "P2Assert");
	}
	}

	P2ASSERTLINE(797, actor);
	return actor;
}

// I'm not thrilled with this solution but utility is a hunk of junk. This makes the dtors spawn correctly so w/e. -HP
static void fuckingHateSymOn(DirectorMgr_2PBattle* battle2P, DirectorMgr_Battle* battle, DirectorMgr_Scene_AutoBgm* autoBGM)
{
	delete autoBGM;
	delete battle;
	delete battle2P;
}

} // namespace PSM
