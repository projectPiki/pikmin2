#include "PSGame/EnvSe.h"
#include "PSGame/PikScene.h"
#include "PSM/BossSeq.h"
#include "PSM/ObjBase.h"
#include "PSM/Scene.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSM/Se.h"
#include "PSM/ObjCalc.h"
#include "PSSystem/PSSystemIF.h"
#include "PSSystem/EnvSeBase.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "PSSystem/PSSeq.h"
#include "Game/Navi.h"
#include "PSM/DirectorMgr.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "PSAutoBgm/MeloArr.h"
#include "nans.h"
#include "PSMath.h"

static const u32 padding[] = { 0, 0, 0 };

namespace PSM {

/**
 * @size{0x14}
 */
struct PersEnvInfo {
	f32 _00;          // _00
	f32 mMutedVolume; // _04
	f32 _08;          // _08
	f32 _0C;          // _0C
	f32 _10;          // _10

	inline void operator=(PersEnvInfo& other)
	{
		_00          = other._00;
		mMutedVolume = other.mMutedVolume;
		_08          = other._08;
		_0C          = other._0C;
		_10          = other._10;
	}
};

struct EnvSe_Perspective_AvoidY : public PSGame::EnvSe_Perspective {
	EnvSe_Perspective_AvoidY(u32 soundID, f32 volume, Vec pos, f32 yOffset = 400.0f);

	virtual JAISound* play();                    // _0C
	virtual u32 getCastType() { return 'pers'; } // _10 (weak)

	// _10     = VTBL
	// _00-_48 = PSGame::EnvSe_Perspective
	f32 mYOffset;      // _48
	PersEnvInfo mInfo; // _4C
};

// FUN FACT: the Env_Pollutin ctor refuses to behave unless it has an empty default thing it inherits from
// this is completely fabricated - no clue what it was called or what it was, but it seems Hard Required
struct FakePollutinParent {
	~FakePollutinParent() { }
};

struct Env_Pollutin : public FakePollutinParent, public PSGame::EnvSe_AutoPan {
	Env_Pollutin(u32 soundID, f32 pan = 0.0f, f32 dolby = 1.0f)
	    : EnvSe_AutoPan(soundID, pan, dolby, 1.0f, 0.0018554f, 0.0008554f)
	    , mVolumeModifier(1.0f)
	{
	}

	virtual JAISound* play();                    // _0C
	virtual u32 getCastType() { return 'poll'; } // _10 (weak)

	// _10     = VTBL
	// _00-_50 = PSGame::EnvSe_AutoPan
	f32 mVolumeModifier; // _50
};

struct EnvSeObjBuilder : public PSGame::Builder_EvnSe_Perspective {
	EnvSeObjBuilder(JGeometry::TBox3<f32> bounds)
	    : PSGame::Builder_EvnSe_Perspective(bounds)
	{
	}

	virtual void onBuild(PSSystem::EnvSeBase*);                 // _0C
	virtual PSGame::EnvSe_Perspective* newSeObj(u32, f32, Vec); // _10

	void setInfo(PersEnvInfo info) { mPersEnvInfo = info; }

	void appendLink(PSSystem::IdLink* link) { mList.append(link); }

	// _00     = VTBL
	// _00-_50 = PSGame::Builder_EvnSe_Perspective
	PersEnvInfo mPersEnvInfo; // _50
};

inline void SetNoYOfset(PSSystem::EnvSeMgr* mgr)
{
	for (JSULink<PSSystem::EnvSeBase>* link = mgr->mEnvList.getFirst(); link; link = link->getNext()) {
		if (static_cast<PSSystem::EnvSeBase*>(link->getObjectPtr())->getCastType() == 'pers') {
			((EnvSe_Perspective_AvoidY*)link->getObjectPtr())->mYOffset = 0.0f;
		}
	}
}
inline void SetBossBgmMuteVol(PSSystem::EnvSeMgr* mgr, u32 id, f32 vol)
{
	PSSystem::EnvSeBase* se;
	for (JSULink<PSSystem::EnvSeBase>* link = mgr->mEnvList.getFirst(); link; link = link->getNext()) {
		se = static_cast<PSSystem::EnvSeBase*>(link->getObjectPtr());
		if (se->getCastType() == 'poll' && id == se->mSoundID) {
			static_cast<Env_Pollutin*>(se)->mVolumeModifier = vol;
		}
	}
}

/**
 * @note Address: 0x80459BD4
 * @note Size: 0x274
 */
JAISound* Env_Pollutin::play()
{
	EnvSeBase::play();
	mVolume = 1.0f;
	if (mVolumeModifier != 1.0f) {
		P2ASSERTLINE(79, mVolumeModifier < 1.0f);

		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq && *seq->getHandleP()) {
			JAISound** se = seq->getHandleP();
			f32 newVolume = (*se)->getVolume(SOUNDPARAM_Unk0);
			if (newVolume > 0.0f) {
				mVolume = JALCalc::linearTransform(newVolume, 0.0f, 1.0f, 1.0f, mVolumeModifier, true);
			}
		} else {
			PSM::Scene_Ground* scene = static_cast<PSM::Scene_Ground*>(PSMGetChildScene());
			PSSystem::checkGameScene(scene);
			PSSystem::SeqBase* seq = scene->getSeqMgr()->getSeq(1);
			if (seq && *seq->getHandleP() && !strcmp(seq->mBmsFileName, "kuro_post.bms")) {
				mVolume = mVolumeModifier;
			}
		}
	}

	return mSound;
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
EnvSe_Perspective_AvoidY::EnvSe_Perspective_AvoidY(u32 soundID, f32 volume, Vec pos, f32 yOffset)
    : PSGame::EnvSe_Perspective(soundID, volume, pos)
{
	mYOffset = yOffset;
}

/**
 * @note Address: 0x80459E48
 * @note Size: 0x280
 */
JAISound* EnvSe_Perspective_AvoidY::play()
{
	bool hasNavi     = true;
	Game::Navi* navi = Game::naviMgr->getActiveNavi();
	if (!navi) {
		hasNavi = false;
	}
	PSM::PersEnvManager* persMgr = PSMGetGameScene()->mPersEnvMgr;
	if (hasNavi && persMgr && persMgr->playOk(this)) {
		mPosition.y = mYOffset + navi->getPosition().y;

		JGeometry::TVec3f naviPos = PSMath::toVec(navi->getPosition());
		f32 dist                  = PSMath::calcDistanceXZ(mPosition, naviPos);

		PSSystem::spSysIF->startSoundVecT(mSoundID, &mSound, &mPosition, 0, 0,
		                                  PSSystem::SingletonBase<ObjCalcBase>::getInstance()->getPlayerNo(mPosition));
		f32 calc;
		if (dist < mInfo._08) {
			calc = JALCalc::linearTransform(dist, mInfo.mMutedVolume, mInfo._08, 0.0f, mInfo._10, true);
		} else if (dist < mInfo._0C) {
			calc = mInfo._10;
		} else {
			calc = JALCalc::linearTransform(dist, mInfo._0C, mInfo._00, mInfo._10, 0.0f, true);
		}
		mVolume = calc;
	}

	return mSound;
}

/**
 * @note Address: 0x8045A0C8
 * @note Size: 0xA0
 */
PSGame::EnvSe_Perspective* EnvSeObjBuilder::newSeObj(u32 soundID, f32 volume, Vec pos)
{
	return new EnvSe_Perspective_AvoidY(soundID, volume, pos);
}

/**
 * @note Address: 0x8045A168
 * @note Size: 0x5C
 */
void EnvSeObjBuilder::onBuild(PSSystem::EnvSeBase* se)
{
	PersEnvInfo info                = mPersEnvInfo;
	EnvSe_Perspective_AvoidY* sound = static_cast<EnvSe_Perspective_AvoidY*>(se);
	sound->mInfo                    = info;
}

/**
 * @note Address: 0x8045A1C4
 * @note Size: 0x3C
 */
SceneMgr::SceneMgr()
{
}

/**
 * @note Address: 0x8045A200
 * @note Size: 0xD8
 */
PSSystem::BgmSeq* SceneMgr::newMainBgm(const char* bmsFilePath, JAInter::SoundInfo& info)
{
	DirectorMgr_Scene* director = new DirectorMgr_Scene(nullptr, DirectorMgr_Scene::Director_COUNT);
	PSSystem::DirectedBgm* seq  = new PSSystem::JumpBgmSeq(bmsFilePath, info, director);

	P2ASSERTLINE(349, seq);
	seq->init();
	director->initTrackMap(*seq);
	director->initAndAdaptToBgm(*seq);
	return seq;
}

/**
 * @note Address: 0x8045A2D8
 * @note Size: 0x14
 */
bool SceneMgr::curSceneIsBigBossFloor()
{
	return EnemyBigBoss::sBigBoss != nullptr;
}

/**
 * @note Address: 0x8045A2EC
 * @note Size: 0x1C0
 */
PSSystem::BgmSeq* SceneMgr::newDirectedBgm(const char* name, JAInter::SoundInfo& info)
{
	PSSystem::DirectedBgm* seq          = nullptr;
	PSSystem::DirectorMgrBase* director = nullptr;

	if (!strcmp(name, "m_boss.bms")) {
		director = new DirectorMgr_Battle;
		seq      = new MiddleBossSeq(name, info, director);

	} else if (!strcmp(name, "l_boss.bms")) {
		director = new DirectorMgr_Battle;
		seq      = new BigBossSeq(name, info, director);

	} else if (!strcmp(name, "battle_t.bms")) {
		director = new DirectorMgr_2PBattle;
		seq      = new PSSystem::DirectedBgm(name, info, director);

	} else {
		JUT_PANICLINE(403, "P2Assert");
	}

	P2ASSERTLINE(406, director);
	P2ASSERTLINE(407, seq);

	seq->init();
	director->initAndAdaptToBgm(*seq);
	return seq;
}

/**
 * @note Address: 0x8045A4AC
 * @note Size: 0x1F4
 */
PSSystem::Scene* SceneMgr::newGameScene(u8 wscene, PSGame::SceneInfo* info)
{
	PSSystem::Scene* scene = nullptr;
	if (info->getSceneType() == PSGame::SceneInfo::CHALLENGE_MODE || info->getSceneType() == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		scene = new Scene_Challenge(wscene, info);

	} else {
		if (info->isCaveFloor()) {
			scene = new Scene_Cave(wscene, info);

		} else {
			switch (info->mSceneType) {
			case PSGame::SceneInfo::SCENE_NULL:
				scene = new Scene_Global(wscene, info);
				break;

			case PSGame::SceneInfo::PIKLOPEDIA:
				scene = new Scene_Zukan(wscene, info);
				break;

			case PSGame::SceneInfo::COURSE_TUTORIAL:
			case PSGame::SceneInfo::COURSE_FOREST:
			case PSGame::SceneInfo::COURSE_YAKUSHIMA:
			case PSGame::SceneInfo::COURSE_LAST:
			case PSGame::SceneInfo::COURSE_TUTORIALDAY1:
				scene = new Scene_Ground(wscene, info);
				break;

			case PSGame::SceneInfo::WORLD_MAP_NORMAL:
			case PSGame::SceneInfo::WORLD_MAP_NEWLEVEL:
				scene = new Scene_WorldMap(wscene, info);
				break;
			}
		}
	}

	if (!scene) {
		scene = new Scene_NoObjects(wscene, info);
	}

	P2ASSERTLINE(468, scene);

	scene->init();

	return scene;
}

/**
 * @note Address: 0x8045A6A0
 * @note Size: 0x18BC
 */
void SceneMgr::initEnvironmentSe(PSM::Scene_Game* scene)
{
	PSGame::SceneInfo* info = scene->getSceneInfoA(); // r28
	PSSystem::EnvSeMgr* mgr = nullptr;                // r29
	u8 type                 = info->getSceneType();   // r25

	EnvSeObjBuilder builder(JGeometry::TBox3f(info->mBounds)); // 0xE8

	switch (type) {
	case PSGame::SceneInfo::CHALLENGE_MODE:
		mgr = new PSSystem::EnvSeMgr;

		PersEnvManager* persMgr = new PersEnvManager(mgr);
		scene->mPersEnvMgr      = persMgr;

		// use all 10 INSECT sounds in challenge mode (the amount that actually play depends on the map size)
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX1));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX1));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX1));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX1));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX1));

		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX2));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX2));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX2));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX2));
		builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX2));

		PSM::PersEnvInfo envInfo = { 1500.0f, 479.0f, 707.0f, 808.0f, 1.0f };
		persMgr->_10             = 479.0f;
		builder.setInfo(envInfo);
		builder.build(1.0f, mgr);
		PSM::SetNoYOfset(mgr);
		Env_Pollutin* pollutin1 = new Env_Pollutin(PSSE_EV_POLUTION_MIX01);
		mgr->mEnvList.append(pollutin1);
		Env_Pollutin* pollutin2 = new Env_Pollutin(PSSE_EV_POLUTION_MIX02, 1.0f, 0.0f);
		mgr->mEnvList.append(pollutin2);
		break;

	case PSGame::SceneInfo::TWO_PLAYER_BATTLE:
		break;
	}

	if (!mgr && info->getBitShift1() == FALSE) {
		if (info->isCaveFloor()) {
			mgr = new PSSystem::EnvSeMgr;

			PersEnvManager* persMgr = new PersEnvManager(mgr); // r30
			scene->mPersEnvMgr      = persMgr;

			// In story mode caves, use different ambient noises based on the sublevel (from 1 - 15)
			switch (static_cast<PSGame::CaveFloorInfo*>(info)->mFloorNum) {
			case 0: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX1));
			} break;

			case 1: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX2));
			} break;

			case 2: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX1));
			} break;

			case 3: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX1));
			} break;

			case 4: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX1));
			} break;

			case 5: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP01_MIX1));
			} break;

			case 6: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP01_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP06_MIX1));
			} break;

			case 7: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP01_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP06_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP02_MIX1));
			} break;

			case 8: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP06_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP02_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX1));
			} break;

			case 9: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP02_MIX1));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX1));
			} break;

			case 10: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX1));
			} break;

			case 11: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2));
			} break;

			case 12: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2));
			} break;

			case 13: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2));
			} break;

			case 14:
			default: {
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2));
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2));
			} break;
			}

			PSM::PersEnvInfo envInfo = { 1500.0f, 479.0f, 707.0f, 808.0f, 1.0f };
			persMgr->_10             = 479.0f;
			builder.setInfo(envInfo);
			builder.build(1.0f, mgr);
			SetNoYOfset(mgr);
			Env_Pollutin* pollutin1 = new Env_Pollutin(PSSE_EV_POLUTION_MIX01);
			mgr->mEnvList.append(pollutin1);
			Env_Pollutin* pollutin2 = new Env_Pollutin(PSSE_EV_POLUTION_MIX02, 1.0f, 0.0f);
			mgr->mEnvList.append(pollutin2);

		} else {
			switch (type) {
			case PSGame::SceneInfo::COURSE_TUTORIAL:
			case PSGame::SceneInfo::COURSE_TUTORIALDAY1: {
				mgr = new PSSystem::EnvSeMgr;

				PSGame::EnvSe_AutoPan* pan0 = new PSGame::EnvSe_AutoPan(PSSE_MP_WIND_BACK, 0.0f, 0.5f, 1.0f, 0.0018554f, 0.0008554f);
				P2ASSERTLINE(778, pan0);
				pan0->setDirection(true, false);
				mgr->mEnvList.append(pan0);

				PSGame::EnvSe_AutoPan* pan1 = new PSGame::EnvSe_AutoPan(PSSE_MP_WIND_BACK, 1.0f, 0.5f, 1.0f, 0.0018554f, 0.0008554f);
				P2ASSERTLINE(785, pan1);
				pan1->setDirection(false, true);
				mgr->mEnvList.append(pan1);
			} break;

			case PSGame::SceneInfo::COURSE_FOREST: {
				mgr = new PSSystem::EnvSeMgr;

				PersEnvManager* persMgr = new PersEnvManager(mgr);
				scene->mPersEnvMgr      = persMgr;

				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_SP_SUZUME)); // 'sparrow'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_SP_UGUISU)); // 'japanese warbler'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_SP_HIBARI)); // 'lark'

				PSM::PersEnvInfo envInfo = { 1500.0f, 379.0f, 579.0f, 1031.0f, 0.9f };
				persMgr->_10             = 379.0f;
				builder.setInfo(envInfo);
				builder.build(1.0f, mgr);
			} break;
			case PSGame::SceneInfo::COURSE_YAKUSHIMA: {
				mgr = new PSSystem::EnvSeMgr;

				PersEnvManager* persMgr = new PersEnvManager(mgr);
				scene->mPersEnvMgr      = persMgr;

				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_KUMA01));   // 'bear cicada'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_MINMIN01)); // 'minmin cicada'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_NIINII01)); // 'niinii cicada'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_KUMA02));   // 'bear cicada'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_MINMIN02)); // 'minmin cicada'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_NIINII02)); // 'niinii cicada'

				PSM::PersEnvInfo envInfo = { 1500.0f, 479.0f, 707.0f, 808.0f, 1.0f };
				persMgr->_10             = 479.0f;
				builder.setInfo(envInfo);
				builder.build(1.0f, mgr);
			} break;
			case PSGame::SceneInfo::COURSE_LAST: {
				mgr = new PSSystem::EnvSeMgr;

				PersEnvManager* persMgr = new PersEnvManager(mgr);
				scene->mPersEnvMgr      = persMgr;

				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_KAMO));    // 'duck'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_MOZU));    // 'shrike'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_KAMO));    // 'duck'
				builder.appendLink(new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_TSUGUMI)); // 'thrush'

				PSM::PersEnvInfo envInfo = { 1500.0f, 379.0f, 479.0f, 1131.0f, 1.0f };
				persMgr->_10             = 379.0f;
				builder.setInfo(envInfo);
				builder.build(1.0f, mgr);
			} break;
			}
		}
	}

	if (mgr) {
		SetBossBgmMuteVol(mgr, PSSE_EV_POLUTION_MIX01, 0.28f);
		SetBossBgmMuteVol(mgr, PSSE_EV_POLUTION_MIX02, 0.28f);
		scene->adaptEnvSe(mgr);
	}
}

/**
 * @note Address: 0x8045C12C
 * @note Size: 0x164
 */
PSSystem::BgmSeq* SceneMgr::newAutoBgm(const char* conductorFileName, const char* bmsFileName, JAInter::SoundInfo& soundInfo,
                                       JADUtility::AccessMode mode, PSGame::SceneInfo& sceneinfo, PSSystem::DirectorMgrBase* directorMgr)
{
	DirectorMgr_Scene* scene = new DirectorMgr_Scene_AutoBgm(directorMgr, DirectorMgr_Scene::Director_COUNT);
	PSAutoBgm::AutoBgm* bgm  = new PSAutoBgm::AutoBgm(conductorFileName, bmsFileName, soundInfo, mode, scene);
	P2ASSERTLINE(1015, bgm);
	bgm->init();
	scene->initTrackMap(*bgm);
	scene->initAndAdaptToBgm(*bgm);

	PSAutoBgm::MeloArr_RandomAvoid* melo = new PSAutoBgm::MeloArr_RandomAvoid("乱数位置Avoid"); // 'random position Avoid'
	melo->mDoDirectSubTracks             = true;
	bgm->mMeloArr.mList.append(melo);
	return bgm;
}

/**
 * @note Address: 0x8045C290
 * @note Size: 0x60
 */
MiddleBossSeq::MiddleBossSeq(const char* bmsFileName, const JAInter::SoundInfo& info, PSSystem::DirectorMgrBase* directorMgr)
    : PSSystem::JumpBgmSeq(bmsFileName, info, directorMgr)
    , mCurrBossObj(nullptr)
    , mAvoidJumpMaxTime(0)
    , mCurrentAttackMixId(EnemyMidBoss::BossBgm_Attack)
    , mAvoidJumpTimer(-1)
    , _140(0)
{
}

/**
 * @note Address: 0x8045C2F0
 * @note Size: 0x94
 */
void MiddleBossSeq::onJump(u16 track)
{
	switch (track) {
	case EnemyMidBoss::BossBgm_Flick:
		break;
	case EnemyMidBoss::BossBgm_Appear:
		mAvoidJumpTimer = 0;
		break;
	case EnemyMidBoss::BossBgm_Attack:
	case EnemyMidBoss::BossBgm_Attack2:
	case EnemyMidBoss::BossBgm_Attack3:
	case EnemyMidBoss::BossBgm_Attack4:
	case EnemyMidBoss::BossBgm_AttackLong:
		P2ASSERTLINE(1078, mCurrBossObj);
		mCurrBossObj->mHasReset = true;
		break;
	}
}

/**
 * @note Address: 0x8045C384
 * @note Size: 0x40
 */
void MiddleBossSeq::exec()
{
	SeqBase::exec();
	if (mAvoidJumpTimer != 0xFFFF) {
		mAvoidJumpTimer++;
	}
}

/**
 * @note Address: 0x8045C3C4
 * @note Size: 0x5C
 */
void MiddleBossSeq::requestJumpBgmQuickly(u16 track)
{
	u16 newTrack = jumpCheck(track);
	if (newTrack != 0xFFFF) {
		JumpBgmSeq::requestJumpBgmQuickly(newTrack);
		JumpBgmSeq::setAvoidJumpTimer_Checked(mAvoidJumpMaxTime);
	}
}

/**
 * @note Address: 0x8045C420
 * @note Size: 0x5C
 */
void MiddleBossSeq::requestJumpBgmOnBeat(u16 track)
{
	u16 newTrack = jumpCheck(track);
	if (newTrack != 0xFFFF) {
		JumpBgmSeq::requestJumpBgmOnBeat(newTrack);
		JumpBgmSeq::setAvoidJumpTimer_Checked(mAvoidJumpMaxTime);
	}
}

/**
 * @note Address: 0x8045C47C
 * @note Size: 0x5C
 */
void MiddleBossSeq::requestJumpBgmEveryBeat(u16 track)
{
	u16 newTrack = jumpCheck(track);
	if (newTrack != 0xFFFF) {
		JumpBgmSeq::requestJumpBgmEveryBeat(newTrack);
		JumpBgmSeq::setAvoidJumpTimer_Checked(mAvoidJumpMaxTime);
	}
}

/**
 * @note Address: 0x8045C4D8
 * @note Size: 0x214
 */
u16 MiddleBossSeq::jumpCheck(u16 track)
{
	mAvoidJumpMaxTime = 0;

	// i think this makes sure we never jump into Attack2/3/4 without starting with Attack
	P2ASSERTLINE(1136, !EnemyMidBoss::isSecondaryAttackTrack(track));

	switch (mJumpPort.mCurrentTrackId) {
	case EnemyMidBoss::BossBgm_MainLoop:
		if (track == EnemyMidBoss::BossBgm_MainLoop) {
			return 0xFFFF;
		}
		break;

	case EnemyMidBoss::BossBgm_AttackLong:
		if (track != EnemyMidBoss::BossBgm_MainLoop && track != EnemyMidBoss::BossBgm_Defeated) {
			return 0xFFFF;
		}
		break;

	case EnemyMidBoss::BossBgm_InactiveLoop:
	case EnemyMidBoss::BossBgm_AttackPrep:
	case EnemyMidBoss::BossBgm_Attack:
	case EnemyMidBoss::BossBgm_Flick:
	case EnemyMidBoss::BossBgm_Appear:
		break;
	}

	switch (track) {
	case EnemyMidBoss::BossBgm_Attack:
		// attack mixes play in a fixed order (BossBgm_Attack, BossBgm_Attack2, BossBgm_Attack3, BossBgm_Attack4)
		mCurrentAttackMixId++;
		if (mCurrentAttackMixId == EnemyMidBoss::BossBgm_Flick) {
			mCurrentAttackMixId = EnemyMidBoss::BossBgm_Attack2;
		} else if (mCurrentAttackMixId == EnemyMidBoss::BossBgm_AttackLong) {
			mCurrentAttackMixId = EnemyMidBoss::BossBgm_Attack;
		}
		track             = mCurrentAttackMixId;
		mAvoidJumpMaxTime = 50;
		break;

	case EnemyMidBoss::BossBgm_Flick:
		P2ASSERTLINE(1205, mCurrBossObj);
		if (mAvoidJumpTimer < 400 || !mCurrBossObj->mHasReset) {
			return 0xFFFF;
		}
		mAvoidJumpMaxTime = 90;
		break;

	case EnemyMidBoss::BossBgm_Appear:
		mAvoidJumpMaxTime = 180;
		break;

	case EnemyMidBoss::BossBgm_Defeated:
		mAvoidJumpMaxTime         = 180;
		mJumpPort.mAvoidJumpTimer = 0;
		break;

	case EnemyMidBoss::BossBgm_WaterwraithEscape:
		mJumpPort.mAvoidJumpTimer = 0;
		break;
	}

	return track;
}

/**
 * @note Address: 0x8045C6EC
 * @note Size: 0x6C
 */
BigBossSeq::BigBossSeq(const char* bmsFileName, const JAInter::SoundInfo& info, PSSystem::DirectorMgrBase* directorMgr)
    : MiddleBossSeq(bmsFileName, info, directorMgr)
{
}

/**
 * @note Address: 0x8045C7D8
 * @note Size: 0x1B4
 */
u16 BigBossSeq::jumpCheck(u16 track)
{
	mAvoidJumpMaxTime = 0;
	switch (mJumpPort.mCurrentTrackId) {
	case EnemyBigBoss::BigBossBgm_4Weapons:
		if (track == EnemyBigBoss::BigBossBgm_4Weapons) {
			return 0xFFFF;
		}
		break;
	case EnemyBigBoss::BigBossBgm_3Weapons:
		if (track == EnemyBigBoss::BigBossBgm_3Weapons) {
			return 0xFFFF;
		}
		break;
	case EnemyBigBoss::BigBossBgm_2Weapons:
		if (track == EnemyBigBoss::BigBossBgm_2Weapons) {
			return 0xFFFF;
		}
		break;
	case EnemyBigBoss::BigBossBgm_1Weapon:
		if (track == EnemyBigBoss::BigBossBgm_1Weapon) {
			return 0xFFFF;
		}
		break;
	case EnemyBigBoss::BigBossBgm_NoWeapons:
		if (track == EnemyBigBoss::BigBossBgm_NoWeapons) {
			return 0xFFFF;
		}
		break;
	case EnemyBigBoss::BigBossBgm_FlareCannon:
	case EnemyBigBoss::BigBossBgm_ComedyBomb:
	case EnemyBigBoss::BigBossBgm_MonsterPump:
	case EnemyBigBoss::BigBossBgm_ShockTherapist:
		if (track != EnemyBigBoss::BigBossBgm_4Weapons && (u16)(track - 8) > 3 && track != EnemyBigBoss::BigBossBgm_Defeated) {
			return 0xFFFF;
		}
		break;
	case EnemyBigBoss::BigBossBgm_Null:
	case EnemyBigBoss::BigBossBgm_AttackPrep:
	case EnemyBigBoss::BigBossBgm_NoWeaponsFlick:
	case EnemyBigBoss::BigBossBgm_Intro:
		break;
	}

	switch (track) {
	case EnemyBigBoss::BigBossBgm_NoWeaponsFlick:
		P2ASSERTLINE(1332, mCurrBossObj);
		if (mAvoidJumpTimer < 800 || !mCurrBossObj->mHasReset) {
			return 0xFFFF;
		}
		mAvoidJumpMaxTime = 90;
		break;
	case EnemyBigBoss::BigBossBgm_Intro:
		mAvoidJumpMaxTime         = 180;
		mJumpPort.mAvoidJumpTimer = 0;
		break;
	case EnemyBigBoss::BigBossBgm_Defeated:
		mAvoidJumpMaxTime         = 180;
		mJumpPort.mAvoidJumpTimer = 0;
	}
	return track;
}

/**
 * @note Address: 0x8045C98C
 * @note Size: 0x98
 */
void BigBossSeq::onJump(u16 track)
{
	switch (track) {
	case EnemyBigBoss::BigBossBgm_Intro:
		mAvoidJumpTimer = 0;
		break;
	case EnemyBigBoss::BigBossBgm_FlareCannon:
	case EnemyBigBoss::BigBossBgm_ComedyBomb:
	case EnemyBigBoss::BigBossBgm_MonsterPump:
	case EnemyBigBoss::BigBossBgm_ShockTherapist:
		P2ASSERTLINE(1378, mCurrBossObj);
		mCurrBossObj->mHasReset = true;
		break;
	}
}

/**
 * @note Address: 0x8045CA24
 * @note Size: 0x58
 */
PersEnvManager::PersEnvManager(PSSystem::EnvSeMgr* mgr)
{
	mEnvSeMgr      = mgr;
	mSeCount       = 3;
	mPersEnvSounds = new EnvSe_Perspective_AvoidY*[3];
	mSeDistances   = new f32[3];
	_10            = 0.0f;
}

/**
 * @note Address: 0x8045CA7C
 * @note Size: 0x40
 */
bool PersEnvManager::playOk(EnvSe_Perspective_AvoidY* se)
{
	for (u8 i = 0; i < mSeCount; i++) {
		if (mPersEnvSounds[i] == se) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x8045CABC
 * @note Size: 0x1C4
 */
void PersEnvManager::exec()
{
	EnvSe_Perspective_AvoidY* se;
	Game::Navi* navi = Game::naviMgr->getActiveNavi();
	if (!navi) {
		return;
	}

	for (u8 i = 0; i < mSeCount; i++) {
		mPersEnvSounds[i] = nullptr;
		mSeDistances[i]   = 10000.0f;
	}

	for (u8 i = 0; i < mSeCount; i++) {
		for (JSULink<PSSystem::EnvSeBase>* link = mEnvSeMgr->mEnvList.getFirst(); link; link = link->getNext()) {
			se = static_cast<EnvSe_Perspective_AvoidY*>(link->getObjectPtr());
			if (static_cast<PSSystem::EnvSeBase*>(se)->getCastType() != 'pers') {
				continue;
			}

			bool isAlreadyInList = false;
			for (u8 j = 0; j < i; j++) {
				if (mPersEnvSounds[j] == se) {
					isAlreadyInList = true;
					break;
				}
			}

			if (isAlreadyInList) {
				continue;
			}

			Vec soundDist             = se->mPosition;
			JGeometry::TVec3f naviPos = PSMath::toVec(navi->getPosition());
			f32 dist                  = PSMath::calcDistanceXZ(soundDist, naviPos);
			if (mSeDistances[i] > dist) {
				mSeDistances[i]   = dist;
				mPersEnvSounds[i] = se;
			}
		}
	}
}

} // namespace PSM
