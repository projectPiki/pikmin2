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

#define CREATE_NEW_ID(id, builder)                                                   \
	{                                                                                \
		PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(id); \
		PSSystem::IdList* list = &builder.mList;                                     \
		if (!builder.mCurrentId) {                                                   \
			builder.mCurrentId = link;                                               \
		}                                                                            \
		list->append(link);                                                          \
	}

static const u32 padding[] = { 0, 0, 0 };

namespace PSM {

// idk if these are Vec&, Vec*, Vec, or JGeometry::TVec3f/Vector3f equivalents. this is the closest i've gotten but stack is off
// might take EnvSe_Perspective_AvoidY* and Navi*? seems unlikely comparing the functions it's used in but who knows
// see EnvSe_Perspective_AvoidY::play and PersEnvManager::exec
static inline f32 getSoundDistance(Vec& sound, Vec& navi)
{
	f32 x = sound.x - navi.x;
	x *= x;
	f32 z = sound.z - navi.z;
	z *= z;
	f32 dist = x + z;
	sqrtf(dist);
	return dist;
}

/**
 * @note Address: 0x80459BD4
 * @note Size: 0x274
 */
JAISound* Env_Pollutin::play()
{
	EnvSeBase::play();
	mVolume = 1.0f;
	if (_50 != 1.0f) {
		P2ASSERTLINE(79, _50 < 1.0f);

		MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq && *seq->getHandleP()) {
			JAISound** se = seq->getHandleP();
			f32 newVolume = (*se)->getVolume(SOUNDPARAM_Unk0);
			if (newVolume > 0.0f) {
				mVolume = JALCalc::linearTransform(newVolume, 0.0f, 1.0f, 1.0f, _50, true);
			}
		} else {
			PSM::Scene_Ground* scene = static_cast<PSM::Scene_Ground*>(PSMGetChildScene());
			PSSystem::checkGameScene(scene);
			PSSystem::SeqBase* seq = scene->getSeqMgr()->getSeq(1);
			if (seq && *seq->getHandleP() && !strcmp(seq->mBmsFileName, "kuro_post.bms")) {
				mVolume = _50;
			}
		}
	}

	return mSound;
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
	Scene_Game* scene            = PSMGetGameScene();
	PSM::PersEnvManager* persMgr = scene->mPersEnvMgr;
	if (hasNavi && persMgr && persMgr->playOk(this)) {
		mPosition.y = _48 + navi->getPosition().y;

		Vector3f pos = navi->getPosition();
		Vec naviPos  = *(Vec*)&pos;
		f32 dist     = getSoundDistance(mPosition, naviPos); // this is close. need to match with this and PersEnvManager::exec

		PSSystem::spSysIF->startSoundVecT(mSoundID, &mSound, &mPosition, 0, 0,
		                                  PSSystem::SingletonBase<ObjCalcBase>::getInstance()->getPlayerNo(mPosition));
		f32 calc;
		if (dist < mInfo._08) {
			calc = JALCalc::linearTransform(dist, mInfo._04, mInfo._08, 0.0f, mInfo._10, true);
		} else if (dist < mInfo._0C) {
			calc = mInfo._10;
		} else {
			calc = JALCalc::linearTransform(dist, mInfo._0C, mInfo._00, mInfo._10, 0.0f, true);
		}
		mVolume = calc;
	}

	return mSound;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	mr       r31, r3
	lis      r4, lbl_8049CE68@ha
	lwz      r3, naviMgr__4Game@sda21(r13)
	addi     r30, r4, lbl_8049CE68@l
	li       r28, 1
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r27, r3, r3
	bne      lbl_80459E84
	li       r28, 0

lbl_80459E84:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80459EA4
	addi     r3, r30, 0x30
	addi     r5, r30, 0x24
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80459EA4:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_80459EC4
	addi     r3, r30, 0x30
	addi     r5, r30, 0x24
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80459EC4:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80459EE4
	addi     r3, r30, 0x3c
	addi     r5, r30, 0x24
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80459EE4:
	lwz      r3, 4(r29)
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	bne      lbl_80459F08
	addi     r3, r30, 0x3c
	addi     r5, r30, 0x48
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80459F08:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80459F28
	b        lbl_80459F2C

lbl_80459F28:
	li       r29, 0

lbl_80459F2C:
	clrlwi.  r0, r28, 0x18
	lwz      r3, 0x58(r29)
	beq      lbl_8045A0A8
	cmplwi   r3, 0
	beq      lbl_8045A0A8
	mr       r4, r31
	bl       playOk__Q23PSM14PersEnvManagerFPQ23PSM24EnvSe_Perspective_AvoidY
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045A0A8
	mr       r4, r27
	addi     r3, r1, 0x20
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	mr       r4, r27
	lfs      f0, 0x48(r31)
	addi     r3, r1, 0x14
	fadds    f0, f0, f1
	stfs     f0, 0x40(r31)
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	stfs     f1, 8(r1)
	lfs      f4, 0x18(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 8(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x2c(r1)
	lfs      f3, 0x3c(r31)
	stw      r0, 0x34(r1)
	lfs      f2, 0x2c(r1)
	lfs      f1, 0x44(r31)
	lfs      f0, 0x34(r1)
	fsubs    f2, f3, f2
	stfs     f4, 0xc(r1)
	fsubs    f1, f1, f0
	lfs      f0, lbl_80520C24@sda21(r2)
	fmuls    f2, f2, f2
	lwz      r0, 0xc(r1)
	fmuls    f1, f1, f1
	stw      r0, 0x30(r1)
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_80459FF8
	frsqrte  f0, f31
	fmuls    f31, f0, f31

lbl_80459FF8:
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) cmplwi
r0, 0 bne      lbl_8045A018 addi     r3, r30, 0x90 addi     r5, r30, 0x24 li r4,
0x89 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045A018:
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) addi r4,
r31, 0x3c lwz      r12, 0(r3) lwz      r12, 0x10(r12) mtctr    r12 bctrl mr r9,
r3 lwz      r3, spSysIF__8PSSystem@sda21(r13) lwz      r4, 0x24(r31) addi r5,
r31, 0x34 addi     r6, r31, 0x3c li       r7, 0 li       r8, 0 bl
"startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc" lfs      f3,
0x54(r31) fcmpo    cr0, f31, f3 bge      lbl_8045A078 fmr      f1, f31 lfs f2,
0x50(r31) lfs      f4, lbl_80520C24@sda21(r2) li       r3, 1 lfs      f5,
0x5c(r31) bl       linearTransform__7JALCalcFfffffb b        lbl_8045A0A4

lbl_8045A078:
	lfs      f2, 0x58(r31)
	fcmpo    cr0, f31, f2
	bge      lbl_8045A08C
	lfs      f1, 0x5c(r31)
	b        lbl_8045A0A4

lbl_8045A08C:
	fmr      f1, f31
	lfs      f3, 0x4c(r31)
	lfs      f4, 0x5c(r31)
	li       r3, 1
	lfs      f5, lbl_80520C24@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb

lbl_8045A0A4:
	stfs     f1, 0x28(r31)

lbl_8045A0A8:
	lwz      r3, 0x34(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
SceneMgr::SceneMgr() { }

/**
 * @note Address: 0x8045A200
 * @note Size: 0xD8
 */
PSSystem::BgmSeq* SceneMgr::newMainBgm(const char* bmsFilePath, JAInter::SoundInfo& info)
{
	DirectorMgr_Scene* director = new DirectorMgr_Scene(nullptr, 8);
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
bool SceneMgr::curSceneIsBigBossFloor() { return EnemyBigBoss::sBigBoss != nullptr; }

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
		mgr                     = new PSSystem::EnvSeMgr;
		PersEnvManager* persMgr = new PersEnvManager(mgr);
		scene->mPersEnvMgr      = persMgr;
		PSSystem::IdLink* link  = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX1);
		PSSystem::IdList* list  = &builder.mList;
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX1);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX1);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX1);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX1);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX2);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX2);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX2);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX2);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX2);
		if (!list->getFirst()) {
			builder.mCurrentId = link;
		}
		list->append(link);
		PSM::PersEnvInfo envInfo = (PSM::PersEnvInfo) { 1500.0f, 479.0f, 707.0f, 808.0f, 1.0f };
		persMgr->_10             = 479.0f;
		builder.setInfo(envInfo);
		builder.build(1.0f, mgr);
		PSM::SetNoYOfset(mgr);
		mgr->mEnvList.append(new Env_Pollutin(PSSE_EV_POLUTION_MIX01));
		mgr->mEnvList.append(new Env_Pollutin(PSSE_EV_POLUTION_MIX02));

		break;
	case PSGame::SceneInfo::TWO_PLAYER_BATTLE:
		break;
	}

	if (!mgr && info->getFlag(PSGame::SceneInfo::SFBS_1) == 1) {
		if (info->isCaveFloor()) {
			mgr                     = new PSSystem::EnvSeMgr;
			PersEnvManager* persMgr = new PersEnvManager(mgr); // r30
			scene->mPersEnvMgr      = persMgr;
			switch (static_cast<PSGame::CaveFloorInfo*>(info)->mFloorNum) {
			case 0: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 1: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX2);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 2: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT02_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 3: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT03_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 4: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT04_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 5: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT01_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP01_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 6: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECT05_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP01_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP06_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 7: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP01_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP06_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP02_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 8: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP06_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP02_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 9: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP02_MIX1);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 10: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX1);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 11: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 12: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 13: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;

			case 14:
			default: {
				PSSystem::IdLink* link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP05_MIX2);
				PSSystem::IdList* list = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP04_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_INSECTDEEP03_MIX2);
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
			} break;
			}

			PSM::PersEnvInfo envInfo = (PSM::PersEnvInfo) { 1500.0f, 479.0f, 707.0f, 808.0f, 1.0f };
			persMgr->_10             = 479.0f;
			builder.setInfo(envInfo);
			builder.build(1.0f, mgr);
			SetNoYOfset(mgr);
			mgr->mEnvList.append(new Env_Pollutin(PSSE_EV_POLUTION_MIX01));
			mgr->mEnvList.append(new Env_Pollutin(PSSE_EV_POLUTION_MIX02));

		} else {
			switch (type) {
			case PSGame::SceneInfo::COURSE_TUTORIAL:
			case PSGame::SceneInfo::COURSE_TUTORIALDAY1: {
				PSSystem::EnvSeMgr* tutorialMgr = new PSSystem::EnvSeMgr;
				mgr                             = tutorialMgr;
				PSGame::EnvSe_AutoPan* pan0     = new PSGame::EnvSe_AutoPan(PSSE_MP_WIND_BACK, 0.0f, 0.5f, 1.0f, 0.0018554f, 0.0008554f);
				P2ASSERTLINE(778, pan0);
				pan0->setDirection(true, false);
				tutorialMgr->mEnvList.append(pan0);

				PSGame::EnvSe_AutoPan* pan1 = new PSGame::EnvSe_AutoPan(PSSE_MP_WIND_BACK, 1.0f, 0.5f, 1.0f, 0.0018554f, 0.0008554f);
				P2ASSERTLINE(785, pan1);
				pan1->setDirection(false, true);
				tutorialMgr->mEnvList.append(pan1);
			} break;

			case PSGame::SceneInfo::COURSE_FOREST: {
				PSSystem::EnvSeMgr* forestMgr = new PSSystem::EnvSeMgr;
				mgr                           = forestMgr;
				PersEnvManager* persMgr       = new PersEnvManager(forestMgr);
				scene->mPersEnvMgr            = persMgr;
				PSSystem::IdLink* link        = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_SP_SUZUME); // 'sparrow'
				PSSystem::IdList* list        = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_SP_UGUISU); // 'japanese warbler'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_SP_HIBARI); // 'lark'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				PSM::PersEnvInfo envInfo = (PSM::PersEnvInfo) { 1500.0f, 379.0f, 579.0f, 1031.0f, 0.9f };
				persMgr->_10             = 379.0f;
				builder.setInfo(envInfo);
				builder.build(1.0f, forestMgr);
			} break;
			case PSGame::SceneInfo::COURSE_YAKUSHIMA: {
				PSSystem::EnvSeMgr* yakuMgr = new PSSystem::EnvSeMgr;
				mgr                         = yakuMgr;
				PersEnvManager* persMgr     = new PersEnvManager(yakuMgr);
				scene->mPersEnvMgr          = persMgr;
				PSSystem::IdLink* link      = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_KUMA01); // 'bear cicada'
				PSSystem::IdList* list      = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_MINMIN01); // 'minmin cicada'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_NIINII01); // 'niinii cicada'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_KUMA02); // 'bear cicada'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_MINMIN02); // 'minmin cicada'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_SEMI_NIINII02); // 'niinii cicada'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				PSM::PersEnvInfo envInfo = (PSM::PersEnvInfo) { 1500.0f, 479.0f, 707.0f, 808.0f, 1.0f };
				persMgr->_10             = 479.0f;
				builder.setInfo(envInfo);
				builder.build(1.0f, yakuMgr);
			} break;
			case PSGame::SceneInfo::COURSE_LAST: {
				PSSystem::EnvSeMgr* lastMgr = new PSSystem::EnvSeMgr;
				mgr                         = lastMgr;
				PersEnvManager* persMgr     = new PersEnvManager(lastMgr);
				scene->mPersEnvMgr          = persMgr;
				PSSystem::IdLink* link      = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_KAMO); // 'duck'
				PSSystem::IdList* list      = &builder.mList;
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_MOZU); // 'shrike'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_KAMO); // 'duck'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				link = new (JKRGetCurrentHeap(), -4) PSSystem::IdLink(PSSE_MP_BIRD_FA_TSUGUMI); // 'thrush'
				if (!list->getFirst()) {
					builder.mCurrentId = link;
				}
				list->append(link);
				PSM::PersEnvInfo envInfo = (PSM::PersEnvInfo) { 1500.0f, 379.0f, 479.0f, 1131.0f, 1.0f };
				persMgr->_10             = 379.0f;
				builder.setInfo(envInfo);
				builder.build(1.0f, lastMgr);
			} break;
			}
		}

		if (mgr) {
			SetBossBgmMuteVol(mgr, PSSE_EV_POLUTION_MIX01, 0.28f);
			SetBossBgmMuteVol(mgr, PSSE_EV_POLUTION_MIX02, 0.28f);
			scene->adaptEnvSe(mgr);
		}
	}
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stmw     r24, 0x150(r1)
	mr       r27, r4
	lis      r4, lbl_8049CE68@ha
	mr       r3, r27
	addi     r31, r4, lbl_8049CE68@l
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	mr       r0, r3
	addi     r3, r1, 0x6c
	mr       r28, r0
	li       r29, 0
	lbz      r25, 6(r28)
	addi     r4, r28, 0x20
	bl       "__ct__Q29JGeometry8TBox3<f>FRCQ29JGeometry8TBox3<f>"
	mr       r4, r3
	addi     r3, r1, 0xe8
	bl       "__ct__Q23PSM15EnvSeObjBuilderFQ29JGeometry8TBox3<f>"
	clrlwi   r30, r25, 0x18
	cmpwi    r30, 7
	beq      lbl_8045AAF4
	bge      lbl_8045AAF4
	cmpwi    r30, 6
	bge      lbl_8045A708
	b        lbl_8045AAF4

lbl_8045A708:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8045A720
	bl       __ct__Q28PSSystem8EnvSeMgrFv
	mr       r29, r3

lbl_8045A720:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8045A73C
	mr       r4, r29
	bl       __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
	mr       r26, r3

lbl_8045A73C:
	stw      r26, 0x58(r27)
	li       r3, 0x14
	li       r5, -4
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A768
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4016
	stw      r0, 0x10(r24)

lbl_8045A768:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045A77C
	stw      r24, 0x134(r1)

lbl_8045A77C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A7B0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4018
	stw      r0, 0x10(r24)

lbl_8045A7B0:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A7C0
	stw      r24, 0x134(r1)

lbl_8045A7C0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A7F4
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401a
	stw      r0, 0x10(r24)

lbl_8045A7F4:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A804
	stw      r24, 0x134(r1)

lbl_8045A804:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A838
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401c
	stw      r0, 0x10(r24)

lbl_8045A838:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A848
	stw      r24, 0x134(r1)

lbl_8045A848:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A87C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401e
	stw      r0, 0x10(r24)

lbl_8045A87C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A88C
	stw      r24, 0x134(r1)

lbl_8045A88C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A8C0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4017
	stw      r0, 0x10(r24)

lbl_8045A8C0:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A8D0
	stw      r24, 0x134(r1)

lbl_8045A8D0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A904
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4019
	stw      r0, 0x10(r24)

lbl_8045A904:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A914
	stw      r24, 0x134(r1)

lbl_8045A914:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A948
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401b
	stw      r0, 0x10(r24)

lbl_8045A948:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A958
	stw      r24, 0x134(r1)

lbl_8045A958:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A98C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401d
	stw      r0, 0x10(r24)

lbl_8045A98C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A99C
	stw      r24, 0x134(r1)

lbl_8045A99C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045A9D0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401f
	stw      r0, 0x10(r24)

lbl_8045A9D0:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045A9E0
	stw      r24, 0x134(r1)

lbl_8045A9E0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r8, 0xc4(r31)
	addi     r3, r1, 0xe8
	lwz      r7, 0xc8(r31)
	addi     r4, r1, 0x58
	lwz      r6, 0xcc(r31)
	lwz      r5, 0xd0(r31)
	lwz      r0, 0xd4(r31)
	lfs      f0, lbl_80520C2C@sda21(r2)
	stw      r8, 0xd4(r1)
	stfs     f0, 0x10(r26)
	stw      r7, 0xd8(r1)
	stw      r6, 0xdc(r1)
	stw      r5, 0xe0(r1)
	stw      r0, 0xe4(r1)
	stw      r8, 0x58(r1)
	stw      r7, 0x5c(r1)
	stw      r6, 0x60(r1)
	stw      r5, 0x64(r1)
	stw      r0, 0x68(r1)
	bl       setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0xe8
	bl       build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
	mr       r3, r29
	bl       SetNoYOfset__3PSMFPQ28PSSystem8EnvSeMgr
	li       r3, 0x54
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8045AA98
	lfs      f2, lbl_80520C20@sda21(r2)
	mr       r24, r25
	lfs      f1, lbl_80520C24@sda21(r2)
	li       r4, 0x3079
	fmr      f3, f2
	lfs      f4, lbl_80520C30@sda21(r2)
	lfs      f5, lbl_80520C34@sda21(r2)
	bl       __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
	lis      r3, __vt__Q23PSM12Env_Pollutin@ha
	lfs      f0, lbl_80520C20@sda21(r2)
	addi     r0, r3, __vt__Q23PSM12Env_Pollutin@l
	stw      r0, 0x10(r24)
	stfs     f0, 0x50(r24)

lbl_8045AA98:
	mr       r3, r29
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r3, 0x54
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8045AAE8
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r24, r25
	lfs      f2, lbl_80520C24@sda21(r2)
	li       r4, 0x307a
	fmr      f3, f1
	lfs      f4, lbl_80520C30@sda21(r2)
	lfs      f5, lbl_80520C34@sda21(r2)
	bl       __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
	lis      r3, __vt__Q23PSM12Env_Pollutin@ha
	lfs      f0, lbl_80520C20@sda21(r2)
	addi     r0, r3, __vt__Q23PSM12Env_Pollutin@l
	stw      r0, 0x10(r24)
	stfs     f0, 0x50(r24)

lbl_8045AAE8:
	mr       r3, r29
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink

lbl_8045AAF4:
	cmplwi   r29, 0
	bne      lbl_8045BEFC
	mr       r3, r28
	li       r4, 1
	bl       getFlag__Q26PSGame9SceneInfoCFQ36PSGame9SceneInfo12FlagBitShift
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 1
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_8045BEFC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045B880
	li       r3, 0x18
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8045AB50
	bl       __ct__Q28PSSystem8EnvSeMgrFv
	mr       r29, r3

lbl_8045AB50:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8045AB6C
	mr       r4, r29
	bl       __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
	mr       r30, r3

lbl_8045AB6C:
	stw      r30, 0x58(r27)
	lbz      r0, 0x40(r28)
	cmplwi   r0, 0xe
	bgt      lbl_8045B6A4
	lis      r3, lbl_804EE1B8@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804EE1B8@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr

lbl_8045AB94:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045ABBC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4018
	stw      r0, 0x10(r24)

lbl_8045ABBC:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045ABD0
	stw      r24, 0x134(r1)

lbl_8045ABD0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AC04
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401a
	stw      r0, 0x10(r24)

lbl_8045AC04:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AC14
	stw      r24, 0x134(r1)

lbl_8045AC14:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045AC24:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AC4C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4019
	stw      r0, 0x10(r24)

lbl_8045AC4C:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045AC60
	stw      r24, 0x134(r1)

lbl_8045AC60:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AC94
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401b
	stw      r0, 0x10(r24)

lbl_8045AC94:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045ACA4
	stw      r24, 0x134(r1)

lbl_8045ACA4:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045ACB4:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045ACDC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4018
	stw      r0, 0x10(r24)

lbl_8045ACDC:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045ACF0
	stw      r24, 0x134(r1)

lbl_8045ACF0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AD24
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401b
	stw      r0, 0x10(r24)

lbl_8045AD24:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AD34
	stw      r24, 0x134(r1)

lbl_8045AD34:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AD68
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401c
	stw      r0, 0x10(r24)

lbl_8045AD68:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AD78
	stw      r24, 0x134(r1)

lbl_8045AD78:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045AD88:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045ADB0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401a
	stw      r0, 0x10(r24)

lbl_8045ADB0:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045ADC4
	stw      r24, 0x134(r1)

lbl_8045ADC4:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045ADF8
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401d
	stw      r0, 0x10(r24)

lbl_8045ADF8:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AE08
	stw      r24, 0x134(r1)

lbl_8045AE08:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AE3C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4016
	stw      r0, 0x10(r24)

lbl_8045AE3C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AE4C
	stw      r24, 0x134(r1)

lbl_8045AE4C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045AE5C:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AE84
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401c
	stw      r0, 0x10(r24)

lbl_8045AE84:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045AE98
	stw      r24, 0x134(r1)

lbl_8045AE98:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AECC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4017
	stw      r0, 0x10(r24)

lbl_8045AECC:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AEDC
	stw      r24, 0x134(r1)

lbl_8045AEDC:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AF10
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401e
	stw      r0, 0x10(r24)

lbl_8045AF10:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AF20
	stw      r24, 0x134(r1)

lbl_8045AF20:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045AF30:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AF58
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4016
	stw      r0, 0x10(r24)

lbl_8045AF58:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045AF6C
	stw      r24, 0x134(r1)

lbl_8045AF6C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AFA0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401f
	stw      r0, 0x10(r24)

lbl_8045AFA0:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AFB0
	stw      r24, 0x134(r1)

lbl_8045AFB0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045AFE4
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4020
	stw      r0, 0x10(r24)

lbl_8045AFE4:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045AFF4
	stw      r24, 0x134(r1)

lbl_8045AFF4:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B004:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B02C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x401e
	stw      r0, 0x10(r24)

lbl_8045B02C:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B040
	stw      r24, 0x134(r1)

lbl_8045B040:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B074
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4021
	stw      r0, 0x10(r24)

lbl_8045B074:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B084
	stw      r24, 0x134(r1)

lbl_8045B084:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B0B8
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x402a
	stw      r0, 0x10(r24)

lbl_8045B0B8:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B0C8
	stw      r24, 0x134(r1)

lbl_8045B0C8:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B0D8:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B100
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4020
	stw      r0, 0x10(r24)

lbl_8045B100:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B114
	stw      r24, 0x134(r1)

lbl_8045B114:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B148
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x402b
	stw      r0, 0x10(r24)

lbl_8045B148:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B158
	stw      r24, 0x134(r1)

lbl_8045B158:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B18C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4022
	stw      r0, 0x10(r24)

lbl_8045B18C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B19C
	stw      r24, 0x134(r1)

lbl_8045B19C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B1AC:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B1D4
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x402a
	stw      r0, 0x10(r24)

lbl_8045B1D4:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B1E8
	stw      r24, 0x134(r1)

lbl_8045B1E8:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B21C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4023
	stw      r0, 0x10(r24)

lbl_8045B21C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B22C
	stw      r24, 0x134(r1)

lbl_8045B22C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B260
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4028
	stw      r0, 0x10(r24)

lbl_8045B260:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B270
	stw      r24, 0x134(r1)

lbl_8045B270:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B280:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B2A8
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4022
	stw      r0, 0x10(r24)

lbl_8045B2A8:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B2BC
	stw      r24, 0x134(r1)

lbl_8045B2BC:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B2F0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4029
	stw      r0, 0x10(r24)

lbl_8045B2F0:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B300
	stw      r24, 0x134(r1)

lbl_8045B300:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B334
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4026
	stw      r0, 0x10(r24)

lbl_8045B334:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B344
	stw      r24, 0x134(r1)

lbl_8045B344:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B354:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B37C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4029
	stw      r0, 0x10(r24)

lbl_8045B37C:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B390
	stw      r24, 0x134(r1)

lbl_8045B390:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B3C4
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4027
	stw      r0, 0x10(r24)

lbl_8045B3C4:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B3D4
	stw      r24, 0x134(r1)

lbl_8045B3D4:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B408
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4024
	stw      r0, 0x10(r24)

lbl_8045B408:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B418
	stw      r24, 0x134(r1)

lbl_8045B418:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B428:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B450
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4029
	stw      r0, 0x10(r24)

lbl_8045B450:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B464
	stw      r24, 0x134(r1)

lbl_8045B464:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B498
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4027
	stw      r0, 0x10(r24)

lbl_8045B498:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B4A8
	stw      r24, 0x134(r1)

lbl_8045B4A8:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B4DC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4025
	stw      r0, 0x10(r24)

lbl_8045B4DC:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B4EC
	stw      r24, 0x134(r1)

lbl_8045B4EC:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B4FC:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B524
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4029
	stw      r0, 0x10(r24)

lbl_8045B524:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B538
	stw      r24, 0x134(r1)

lbl_8045B538:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B56C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4027
	stw      r0, 0x10(r24)

lbl_8045B56C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B57C
	stw      r24, 0x134(r1)

lbl_8045B57C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B5B0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4025
	stw      r0, 0x10(r24)

lbl_8045B5B0:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B5C0
	stw      r24, 0x134(r1)

lbl_8045B5C0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B5D0:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B5F8
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4029
	stw      r0, 0x10(r24)

lbl_8045B5F8:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B60C
	stw      r24, 0x134(r1)

lbl_8045B60C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B640
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4027
	stw      r0, 0x10(r24)

lbl_8045B640:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B650
	stw      r24, 0x134(r1)

lbl_8045B650:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B684
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4025
	stw      r0, 0x10(r24)

lbl_8045B684:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B694
	stw      r24, 0x134(r1)

lbl_8045B694:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045B774

lbl_8045B6A4:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B6CC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4029
	stw      r0, 0x10(r24)

lbl_8045B6CC:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045B6E0
	stw      r24, 0x134(r1)

lbl_8045B6E0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B714
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4027
	stw      r0, 0x10(r24)

lbl_8045B714:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B724
	stw      r24, 0x134(r1)

lbl_8045B724:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045B758
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4025
	stw      r0, 0x10(r24)

lbl_8045B758:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045B768
	stw      r24, 0x134(r1)

lbl_8045B768:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink

lbl_8045B774:
	lwz      r8, 0xd8(r31)
	addi     r3, r1, 0xe8
	lwz      r7, 0xdc(r31)
	addi     r4, r1, 0x44
	lwz      r6, 0xe0(r31)
	lwz      r5, 0xe4(r31)
	lwz      r0, 0xe8(r31)
	lfs      f0, lbl_80520C2C@sda21(r2)
	stw      r8, 0xc0(r1)
	stfs     f0, 0x10(r30)
	stw      r7, 0xc4(r1)
	stw      r6, 0xc8(r1)
	stw      r5, 0xcc(r1)
	stw      r0, 0xd0(r1)
	stw      r8, 0x44(r1)
	stw      r7, 0x48(r1)
	stw      r6, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r0, 0x54(r1)
	bl       setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0xe8
	bl       build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
	mr       r3, r29
	bl       SetNoYOfset__3PSMFPQ28PSSystem8EnvSeMgr
	li       r3, 0x54
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8045B820
	lfs      f2, lbl_80520C20@sda21(r2)
	mr       r24, r25
	lfs      f1, lbl_80520C24@sda21(r2)
	li       r4, 0x3079
	fmr      f3, f2
	lfs      f4, lbl_80520C30@sda21(r2)
	lfs      f5, lbl_80520C34@sda21(r2)
	bl       __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
	lis      r3, __vt__Q23PSM12Env_Pollutin@ha
	lfs      f0, lbl_80520C20@sda21(r2)
	addi     r0, r3, __vt__Q23PSM12Env_Pollutin@l
	stw      r0, 0x10(r24)
	stfs     f0, 0x50(r24)

lbl_8045B820:
	mr       r3, r29
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r3, 0x54
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8045B870
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r24, r25
	lfs      f2, lbl_80520C24@sda21(r2)
	li       r4, 0x307a
	fmr      f3, f1
	lfs      f4, lbl_80520C30@sda21(r2)
	lfs      f5, lbl_80520C34@sda21(r2)
	bl       __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
	lis      r3, __vt__Q23PSM12Env_Pollutin@ha
	lfs      f0, lbl_80520C20@sda21(r2)
	addi     r0, r3, __vt__Q23PSM12Env_Pollutin@l
	stw      r0, 0x10(r24)
	stfs     f0, 0x50(r24)

lbl_8045B870:
	mr       r3, r29
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045BEFC

lbl_8045B880:
	cmpwi    r30, 4
	beq      lbl_8045BD4C
	bge      lbl_8045B8A4
	cmpwi    r30, 2
	beq      lbl_8045B9A0
	bge      lbl_8045BB10
	cmpwi    r30, 1
	bge      lbl_8045B8B0
	b        lbl_8045BEFC

lbl_8045B8A4:
	cmpwi    r30, 0x14
	beq      lbl_8045B8B0
	b        lbl_8045BEFC

lbl_8045B8B0:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8045B8C8
	bl       __ct__Q28PSSystem8EnvSeMgrFv
	mr       r24, r3

lbl_8045B8C8:
	mr       r29, r24
	li       r3, 0x50
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8045B8FC
	lfs      f1, lbl_80520C24@sda21(r2)
	li       r4, 0x402d
	lfs      f2, lbl_80520C38@sda21(r2)
	lfs      f3, lbl_80520C20@sda21(r2)
	lfs      f4, lbl_80520C30@sda21(r2)
	lfs      f5, lbl_80520C34@sda21(r2)
	bl       __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
	mr       r25, r3

lbl_8045B8FC:
	cmplwi   r25, 0
	bne      lbl_8045B918
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x30a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045B918:
	mr       r3, r25
	li       r4, 1
	li       r5, 0
	bl       setDirection__Q26PSGame13EnvSe_AutoPanFbb
	mr       r3, r24
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink
	li       r3, 0x50
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8045B964
	lfs      f1, lbl_80520C20@sda21(r2)
	li       r4, 0x402d
	lfs      f2, lbl_80520C38@sda21(r2)
	fmr      f3, f1
	lfs      f4, lbl_80520C30@sda21(r2)
	lfs      f5, lbl_80520C34@sda21(r2)
	bl       __ct__Q26PSGame13EnvSe_AutoPanFUlfffff
	mr       r25, r3

lbl_8045B964:
	cmplwi   r25, 0
	bne      lbl_8045B980
	addi     r3, r31, 0xc
	addi     r5, r31, 0x24
	li       r4, 0x311
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045B980:
	mr       r3, r25
	li       r4, 0
	li       r5, 1
	bl       setDirection__Q26PSGame13EnvSe_AutoPanFbb
	mr       r3, r24
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink
	b        lbl_8045BEFC

lbl_8045B9A0:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8045B9B8
	bl       __ct__Q28PSSystem8EnvSeMgrFv
	mr       r26, r3

lbl_8045B9B8:
	mr       r29, r26
	li       r3, 0x14
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8045B9D8
	mr       r4, r26
	bl       __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
	mr       r28, r3

lbl_8045B9D8:
	stw      r28, 0x58(r27)
	li       r3, 0x14
	li       r5, -4
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BA04
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4037
	stw      r0, 0x10(r24)

lbl_8045BA04:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045BA18
	stw      r24, 0x134(r1)

lbl_8045BA18:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BA4C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4038
	stw      r0, 0x10(r24)

lbl_8045BA4C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BA5C
	stw      r24, 0x134(r1)

lbl_8045BA5C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BA90
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4039
	stw      r0, 0x10(r24)

lbl_8045BA90:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BAA0
	stw      r24, 0x134(r1)

lbl_8045BAA0:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r8, 0xec(r31)
	addi     r3, r1, 0xe8
	lwz      r7, 0xf0(r31)
	addi     r4, r1, 0x30
	lwz      r6, 0xf4(r31)
	lwz      r5, 0xf8(r31)
	lwz      r0, 0xfc(r31)
	lfs      f0, lbl_80520C3C@sda21(r2)
	stw      r8, 0xac(r1)
	stfs     f0, 0x10(r28)
	stw      r7, 0xb0(r1)
	stw      r6, 0xb4(r1)
	stw      r5, 0xb8(r1)
	stw      r0, 0xbc(r1)
	stw      r8, 0x30(r1)
	stw      r7, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r5, 0x3c(r1)
	stw      r0, 0x40(r1)
	bl       setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r4, r26
	addi     r3, r1, 0xe8
	bl       build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
	b        lbl_8045BEFC

lbl_8045BB10:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8045BB28
	bl       __ct__Q28PSSystem8EnvSeMgrFv
	mr       r26, r3

lbl_8045BB28:
	mr       r29, r26
	li       r3, 0x14
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8045BB48
	mr       r4, r26
	bl       __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
	mr       r28, r3

lbl_8045BB48:
	stw      r28, 0x58(r27)
	li       r3, 0x14
	li       r5, -4
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BB74
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x402f
	stw      r0, 0x10(r24)

lbl_8045BB74:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045BB88
	stw      r24, 0x134(r1)

lbl_8045BB88:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BBBC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4033
	stw      r0, 0x10(r24)

lbl_8045BBBC:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BBCC
	stw      r24, 0x134(r1)

lbl_8045BBCC:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BC00
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4035
	stw      r0, 0x10(r24)

lbl_8045BC00:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BC10
	stw      r24, 0x134(r1)

lbl_8045BC10:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BC44
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4030
	stw      r0, 0x10(r24)

lbl_8045BC44:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BC54
	stw      r24, 0x134(r1)

lbl_8045BC54:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BC88
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4034
	stw      r0, 0x10(r24)

lbl_8045BC88:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BC98
	stw      r24, 0x134(r1)

lbl_8045BC98:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BCCC
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x4036
	stw      r0, 0x10(r24)

lbl_8045BCCC:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BCDC
	stw      r24, 0x134(r1)

lbl_8045BCDC:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r8, 0x100(r31)
	addi     r3, r1, 0xe8
	lwz      r7, 0x104(r31)
	addi     r4, r1, 0x1c
	lwz      r6, 0x108(r31)
	lwz      r5, 0x10c(r31)
	lwz      r0, 0x110(r31)
	lfs      f0, lbl_80520C2C@sda21(r2)
	stw      r8, 0x98(r1)
	stfs     f0, 0x10(r28)
	stw      r7, 0x9c(r1)
	stw      r6, 0xa0(r1)
	stw      r5, 0xa4(r1)
	stw      r0, 0xa8(r1)
	stw      r8, 0x1c(r1)
	stw      r7, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r0, 0x2c(r1)
	bl       setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r4, r26
	addi     r3, r1, 0xe8
	bl       build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr
	b        lbl_8045BEFC

lbl_8045BD4C:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8045BD64
	bl       __ct__Q28PSSystem8EnvSeMgrFv
	mr       r26, r3

lbl_8045BD64:
	mr       r29, r26
	li       r3, 0x14
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8045BD84
	mr       r4, r26
	bl       __ct__Q23PSM14PersEnvManagerFPQ28PSSystem8EnvSeMgr
	mr       r28, r3

lbl_8045BD84:
	stw      r28, 0x58(r27)
	li       r3, 0x14
	li       r5, -4
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BDB0
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x403a
	stw      r0, 0x10(r24)

lbl_8045BDB0:
	lwz      r0, 0x128(r1)
	addi     r25, r1, 0x128
	cmplwi   r0, 0
	bne      lbl_8045BDC4
	stw      r24, 0x134(r1)

lbl_8045BDC4:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BDF8
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x403b
	stw      r0, 0x10(r24)

lbl_8045BDF8:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BE08
	stw      r24, 0x134(r1)

lbl_8045BE08:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BE3C
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x403a
	stw      r0, 0x10(r24)

lbl_8045BE3C:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BE4C
	stw      r24, 0x134(r1)

lbl_8045BE4C:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r3, 0x14
	li       r5, -4
	bl       __nw__FUlP7JKRHeapi
	or.      r24, r3, r3
	beq      lbl_8045BE80
	mr       r4, r24
	bl       __ct__10JSUPtrLinkFPv
	li       r0, 0x403c
	stw      r0, 0x10(r24)

lbl_8045BE80:
	lwz      r0, 0x128(r1)
	cmplwi   r0, 0
	bne      lbl_8045BE90
	stw      r24, 0x134(r1)

lbl_8045BE90:
	mr       r3, r25
	mr       r4, r24
	bl       append__10JSUPtrListFP10JSUPtrLink
	lwz      r8, 0x114(r31)
	addi     r3, r1, 0xe8
	lwz      r7, 0x118(r31)
	addi     r4, r1, 8
	lwz      r6, 0x11c(r31)
	lwz      r5, 0x120(r31)
	lwz      r0, 0x124(r31)
	lfs      f0, lbl_80520C3C@sda21(r2)
	stw      r8, 0x84(r1)
	stfs     f0, 0x10(r28)
	stw      r7, 0x88(r1)
	stw      r6, 0x8c(r1)
	stw      r5, 0x90(r1)
	stw      r0, 0x94(r1)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x18(r1)
	bl       setInfo__Q23PSM15EnvSeObjBuilderFQ23PSM11PersEnvInfo
	lfs      f1, lbl_80520C20@sda21(r2)
	mr       r4, r26
	addi     r3, r1, 0xe8
	bl       build__Q26PSGame25Builder_EvnSe_PerspectiveFfPQ28PSSystem8EnvSeMgr

lbl_8045BEFC:
	cmplwi   r29, 0
	beq      lbl_8045BF30
	lfs      f1, lbl_80520C40@sda21(r2)
	mr       r3, r29
	li       r4, 0x3079
	bl       SetBossBgmMuteVol__3PSMFPQ28PSSystem8EnvSeMgrUlf
	lfs      f1, lbl_80520C40@sda21(r2)
	mr       r3, r29
	li       r4, 0x307a
	bl       SetBossBgmMuteVol__3PSMFPQ28PSSystem8EnvSeMgrUlf
	mr       r3, r27
	mr       r4, r29
	bl       adaptEnvSe__Q23PSM10Scene_GameFPQ28PSSystem8EnvSeMgr

lbl_8045BF30:
	lis      r4, __vt__Q23PSM15EnvSeObjBuilder@ha
	addi     r3, r1, 0xe8
	addi     r0, r4, __vt__Q23PSM15EnvSeObjBuilder@l
	li       r4, 0
	stw      r0, 0xe8(r1)
	bl       __dt__Q26PSGame25Builder_EvnSe_PerspectiveFv
	lmw      r24, 0x150(r1)
	lwz      r0, 0x174(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}

/**
 * @note Address: 0x8045BF5C
 * @note Size: 0x8C
 */
void SetBossBgmMuteVol(PSSystem::EnvSeMgr* mgr, u32 id, f32 vol)
{
	EnvSe_Perspective_AvoidY* se;
	for (JSULink<PSSystem::EnvSeBase>* link = mgr->mEnvList.getFirst(); link; link = link->getNext()) {
		se = (EnvSe_Perspective_AvoidY*)link->getObjectPtr();
		if (se->getCastType() == 'poll' && id == se->mSoundID) {
			se->mInfo._04 = vol;
		}
	}
}

/**
 * @note Address: 0x8045BFE8
 * @note Size: 0x74
 */
void SetNoYOfset(PSSystem::EnvSeMgr* mgr)
{
	for (JSULink<PSSystem::EnvSeBase>* link = mgr->mEnvList.getFirst(); link; link = link->getNext()) {
		if (((EnvSe_Perspective_AvoidY*)link->mValue)->getCastType() == 'pers') {
			((EnvSe_Perspective_AvoidY*)link->mValue)->_48 = 0.0f;
		}
	}
}

/**
 * @note Address: 0x8045C05C
 * @note Size: 0x2C
 */
void EnvSeObjBuilder::setInfo(PersEnvInfo info) { mPersEnvInfo = info; }

/**
 * @note Address: 0x8045C088
 * @note Size: 0x70
 */
EnvSeObjBuilder::EnvSeObjBuilder(JGeometry::TBox3f bounds)
    : PSGame::Builder_EvnSe_Perspective(bounds)
{
}

/**
 * @note Address: 0x8045C12C
 * @note Size: 0x164
 */
PSSystem::BgmSeq* SceneMgr::newAutoBgm(const char* conductorFileName, const char* bmsFileName, JAInter::SoundInfo& soundInfo,
                                       JADUtility::AccessMode mode, PSGame::SceneInfo& sceneinfo, PSSystem::DirectorMgrBase* directorMgr)
{
	DirectorMgr_Scene* scene = new DirectorMgr_Scene_AutoBgm(directorMgr, 8);
	PSAutoBgm::AutoBgm* bgm  = new PSAutoBgm::AutoBgm(conductorFileName, bmsFileName, soundInfo, mode, scene);
	P2ASSERTLINE(1015, bgm);
	bgm->init();
	scene->initTrackMap(*bgm);
	scene->initAndAdaptToBgm(*bgm);

	PSAutoBgm::MeloArr_RandomAvoid* melo = new PSAutoBgm::MeloArr_RandomAvoid("乱数位置Avoid"); // 'random position Avoid'
	melo->_18                            = true;
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
    , _138(0)
    , _13C(3)
    , _13E(-1)
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
	case 4:
		break;
	case 9:
		_13E = 0;
		break;
	case 3:
	case 5:
	case 6:
	case 7:
	case 8:
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
	if (_13E != 0xFFFF) {
		_13E++;
	}
}

/**
 * @note Address: 0x8045C3C4
 * @note Size: 0x5C
 */
void MiddleBossSeq::requestJumpBgmQuickly(u16 flag)
{
	u16 flag2 = jumpCheck(flag);
	if (flag2 != 0xFFFF) {
		JumpBgmSeq::requestJumpBgmQuickly(flag2);
		JumpBgmSeq::setAvoidJumpTimer_Checked(_138);
	}
}

/**
 * @note Address: 0x8045C420
 * @note Size: 0x5C
 */
void MiddleBossSeq::requestJumpBgmOnBeat(u16 flag)
{
	u16 flag2 = jumpCheck(flag);
	if (flag2 != 0xFFFF) {
		JumpBgmSeq::requestJumpBgmOnBeat(flag2);
		JumpBgmSeq::setAvoidJumpTimer_Checked(_138);
	}
}

/**
 * @note Address: 0x8045C47C
 * @note Size: 0x5C
 */
void MiddleBossSeq::requestJumpBgmEveryBeat(u16 track)
{
	u16 checkedTrack = jumpCheck(track);
	if (checkedTrack != 0xFFFF) {
		JumpBgmSeq::requestJumpBgmEveryBeat(checkedTrack);
		JumpBgmSeq::setAvoidJumpTimer_Checked(_138);
	}
}

/**
 * @note Address: 0x8045C4D8
 * @note Size: 0x214
 */
u16 MiddleBossSeq::jumpCheck(u16 track)
{
	bool check  = true;
	bool check2 = true;
	_138        = 0;
	if (track > 1 && track < 5) { // probably an inline?
		check2 = false;
	}
	if (!check2 && track != 7) {
		check = false;
	}
	P2ASSERTLINE(1136, !check);
	switch (mJumpPort._70) {
	case 1:
		if (track == 1) {
			return 0xFFFF;
		}
		break;
	case 2:
	case 3:
	case 4: // please someone get this switch case to spawn correctly
	        // case 5:
	        // case 6:
	        // case 7:
		break;
	case 8:
	case 9:
		if (track != 1 && track != 10) {
			return 0xFFFF;
		}
		break;
		// case 9:
		// 	break;
	}

	switch (track) {
	case 3:
		_13C++;
		if (_13C == 4) {
			_13C = 5;
		} else if (_13C == 8) {
			_13C = 3;
		}
		track = _13C;
		_138  = 50;
		break;
	case 4:
		P2ASSERTLINE(1205, mCurrBossObj);
		if (_13E < 400 || !mCurrBossObj->mHasReset) {
			return 0xFFFF;
		}
		_138 = 90;
		break;
	case 9:
		_138 = 180;
		break;
	case 10:
		_138                      = 180;
		mJumpPort.mAvoidJumpTimer = 0;
		break;
	case 11:
		mJumpPort.mAvoidJumpTimer = 0;
		break;
	}

	return track;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x14(r1)
	mr       r6, r5
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r0, r31, -5
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	clrlwi   r3, r0, 0x10
	subfic   r0, r3, 1
	stw      r4, 0x138(r30)
	orc      r3, r5, r3
	srwi     r0, r0, 1
	subf     r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_8045C528
	mr       r6, r4

lbl_8045C528:
	clrlwi.  r0, r6, 0x18
	bne      lbl_8045C540
	clrlwi   r0, r31, 0x10
	cmplwi   r0, 7
	beq      lbl_8045C540
	li       r5, 0

lbl_8045C540:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8045C564
	lis      r3, lbl_8049CE74@ha
	lis      r5, lbl_8049CE8C@ha
	addi     r3, r3, lbl_8049CE74@l
	li       r4, 0x470
	addi     r5, r5, lbl_8049CE8C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045C564:
	lhz      r0, 0x130(r30)
	cmpwi    r0, 5
	bge      lbl_8045C580
	cmpwi    r0, 1
	beq      lbl_8045C598
	bge      lbl_8045C5D0
	b        lbl_8045C5D0

lbl_8045C580:
	cmpwi    r0, 9
	beq      lbl_8045C5D0
	bge      lbl_8045C5D0
	cmpwi    r0, 8
	bge      lbl_8045C5B0
	b        lbl_8045C5D0

lbl_8045C598:
	clrlwi   r0, r31, 0x10
	cmplwi   r0, 1
	bne      lbl_8045C5D0
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	b        lbl_8045C6D4

lbl_8045C5B0:
	clrlwi   r0, r31, 0x10
	cmplwi   r0, 1
	beq      lbl_8045C5D0
	cmplwi   r0, 0xa
	beq      lbl_8045C5D0
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	b        lbl_8045C6D4

lbl_8045C5D0:
	clrlwi   r0, r31, 0x10
	cmpwi    r0, 9
	beq      lbl_8045C6A8
	bge      lbl_8045C5F8
	cmpwi    r0, 4
	beq      lbl_8045C64C
	bge      lbl_8045C6D0
	cmpwi    r0, 3
	bge      lbl_8045C608
	b        lbl_8045C6D0

lbl_8045C5F8:
	cmpwi    r0, 0xb
	beq      lbl_8045C6C8
	bge      lbl_8045C6D0
	b        lbl_8045C6B4

lbl_8045C608:
	lhz      r3, 0x13c(r30)
	addi     r0, r3, 1
	sth      r0, 0x13c(r30)
	lhz      r0, 0x13c(r30)
	cmplwi   r0, 4
	bne      lbl_8045C62C
	li       r0, 5
	sth      r0, 0x13c(r30)
	b        lbl_8045C63C

lbl_8045C62C:
	cmplwi   r0, 8
	bne      lbl_8045C63C
	li       r0, 3
	sth      r0, 0x13c(r30)

lbl_8045C63C:
	lhz      r31, 0x13c(r30)
	li       r0, 0x32
	stw      r0, 0x138(r30)
	b        lbl_8045C6D0

lbl_8045C64C:
	lwz      r0, 0x134(r30)
	cmplwi   r0, 0
	bne      lbl_8045C674
	lis      r3, lbl_8049CE74@ha
	lis      r5, lbl_8049CE8C@ha
	addi     r3, r3, lbl_8049CE74@l
	li       r4, 0x4b5
	addi     r5, r5, lbl_8049CE8C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045C674:
	lhz      r0, 0x13e(r30)
	cmplwi   r0, 0x190
	blt      lbl_8045C690
	lwz      r3, 0x134(r30)
	lbz      r0, 0xff(r3)
	cmplwi   r0, 0
	bne      lbl_8045C69C

lbl_8045C690:
	lis      r3, 0x0000FFFF@ha
	addi     r3, r3, 0x0000FFFF@l
	b        lbl_8045C6D4

lbl_8045C69C:
	li       r0, 0x5a
	stw      r0, 0x138(r30)
	b        lbl_8045C6D0

lbl_8045C6A8:
	li       r0, 0xb4
	stw      r0, 0x138(r30)
	b        lbl_8045C6D0

lbl_8045C6B4:
	li       r3, 0xb4
	li       r0, 0
	stw      r3, 0x138(r30)
	stw      r0, 0x12c(r30)
	b        lbl_8045C6D0

lbl_8045C6C8:
	li       r0, 0
	stw      r0, 0x12c(r30)

lbl_8045C6D0:
	mr       r3, r31

lbl_8045C6D4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
 * @note Address: 0x8045C758
 * @note Size: 0x80
 */
MiddleBossSeq::~MiddleBossSeq() { }

/**
 * @note Address: 0x8045C7D8
 * @note Size: 0x1B4
 */
u16 BigBossSeq::jumpCheck(u16 track)
{
	_138 = 0;
	switch (mJumpPort._70) {
	case 1:
		if (track == 1) {
			return 0xFFFF;
		}
		break;
	case 8:
		if (track == 8) {
			return 0xFFFF;
		}
		break;
	case 9:
		if (track == 9) {
			return 0xFFFF;
		}
		break;
	case 10:
		if (track == 10) {
			return 0xFFFF;
		}
		break;
	case 11:
		if (track == 11) {
			return 0xFFFF;
		}
		break;
	case 3:
	case 5:
	case 6:
	case 7:
		if (track != 1 && (u16)(track - 8) > 3 && track != 13) {
			return 0xFFFF;
		}
		break;
	case 0:
	case 2:
	case 4:
	case 12:
		break;
	}

	switch (track) {
	case 4:
		P2ASSERTLINE(1332, mCurrBossObj);
		if (_13E < 800 || !mCurrBossObj->mHasReset) {
			return 0xFFFF;
		}
		_138 = 90;
		break;
	case 12:
		_138                      = 180;
		mJumpPort.mAvoidJumpTimer = 0;
		break;
	case 13:
		_138                      = 180;
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
	case 12:
		_13E = 0;
		break;
	case 3:
	case 5:
	case 6:
	case 7:
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
	mEnvSeMgr   = mgr;
	mSeCount    = 3;
	mPersEnvSes = new EnvSe_Perspective_AvoidY*[3];
	_0C         = new f32[3];
	_10         = 0.0f;
}

/**
 * @note Address: 0x8045CA7C
 * @note Size: 0x40
 */
bool PersEnvManager::playOk(EnvSe_Perspective_AvoidY* se)
{
	for (u8 i = 0; i < mSeCount; i++) {
		if (mPersEnvSes[i] == se) {
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
		mPersEnvSes[i] = nullptr;
		_0C[i]         = 10000.0f;
	}

	for (u8 i = 0; i < mSeCount; i++) {
		for (JSULink<PSSystem::EnvSeBase>* link = mEnvSeMgr->mEnvList.getFirst(); link; link = link->getNext()) {
			se = (EnvSe_Perspective_AvoidY*)link->getObjectPtr();
			if (se->getCastType() != 'pers') {
				continue;
			}

			bool isAlreadyInList = false;
			for (u8 j = 0; j < i; j++) {
				if (mPersEnvSes[j] == se) {
					isAlreadyInList = true;
					break;
				}
			}

			if (isAlreadyInList) {
				continue;
			}

			Vec soundDist = se->mPosition;
			Vector3f pos  = navi->getPosition();
			Vec naviPos   = *(Vec*)&pos;
			f32 dist = getSoundDistance(soundDist, naviPos); // this is close. need to match with this and EnvSe_Perspective_AvoidY::play
			if (_0C[i] > dist) {
				_0C[i]         = dist;
				mPersEnvSes[i] = se;
			}
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r26, 0x38(r1)
	mr       r26, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r29, r3, r3
	beq      lbl_8045CC6C
	lfs      f0, lbl_80520C48@sda21(r2)
	li       r5, 0
	li       r4, 0
	b        lbl_8045CB08

lbl_8045CAF0:
	lwz      r3, 8(r26)
	rlwinm   r0, r5, 2, 0x16, 0x1d
	addi     r5, r5, 1
	stwx     r4, r3, r0
	lwz      r3, 0xc(r26)
	stfsx    f0, r3, r0

lbl_8045CB08:
	lbz      r0, 4(r26)
	clrlwi   r3, r5, 0x18
	cmplw    r3, r0
	blt      lbl_8045CAF0
	li       r28, 0
	b        lbl_8045CC5C

lbl_8045CB20:
	lwz      r3, 0(r26)
	rlwinm   r30, r28, 2, 0x16, 0x1d
	lwz      r27, 0(r3)
	b        lbl_8045CC50

lbl_8045CB30:
	lwz      r31, 0(r27)
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x8f9b
	cmplwi   r0, 0x7273
	bne      lbl_8045CC4C
	clrlwi   r0, r28, 0x18
	li       r5, 0
	li       r6, 0
	b        lbl_8045CB84

lbl_8045CB64:
	lwz      r4, 8(r26)
	rlwinm   r3, r6, 2, 0x16, 0x1d
	lwzx     r3, r4, r3
	cmplw    r3, r31
	bne      lbl_8045CB80
	li       r5, 1
	b        lbl_8045CB90

lbl_8045CB80:
	addi     r6, r6, 1

lbl_8045CB84:
	clrlwi   r3, r6, 0x18
	cmplw    r3, r0
	blt      lbl_8045CB64

lbl_8045CB90:
	clrlwi.  r0, r5, 0x18
	bne      lbl_8045CC4C
	mr       r4, r29
	lwz      r6, 0x3c(r31)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x14
	lwz      r5, 0x40(r31)
	lwz      r0, 0x44(r31)
	lwz      r12, 8(r12)
	stw      r6, 0x2c(r1)
	stw      r5, 0x30(r1)
	stw      r0, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	stfs     f1, 8(r1)
	lfs      f4, 0x18(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 8(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x20(r1)
	lfs      f3, 0x2c(r1)
	stw      r0, 0x28(r1)
	lfs      f2, 0x20(r1)
	lfs      f1, 0x34(r1)
	lfs      f0, 0x28(r1)
	fsubs    f2, f3, f2
	stfs     f4, 0xc(r1)
	fsubs    f1, f1, f0
	lfs      f0, lbl_80520C24@sda21(r2)
	fmuls    f2, f2, f2
	lwz      r0, 0xc(r1)
	fmuls    f1, f1, f1
	stw      r0, 0x24(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8045CC30
	frsqrte  f0, f1
	fmuls    f1, f0, f1

lbl_8045CC30:
	lwz      r0, 0xc(r26)
	lfsx     f0, r30, r0
	fcmpo    cr0, f0, f1
	ble      lbl_8045CC4C
	stfsx    f1, r30, r0
	lwz      r0, 8(r26)
	stwx     r31, r30, r0

lbl_8045CC4C:
	lwz      r27, 0xc(r27)

lbl_8045CC50:
	cmplwi   r27, 0
	bne      lbl_8045CB30
	addi     r28, r28, 1

lbl_8045CC5C:
	lbz      r0, 4(r26)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_8045CB20

lbl_8045CC6C:
	lmw      r26, 0x38(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace PSM
