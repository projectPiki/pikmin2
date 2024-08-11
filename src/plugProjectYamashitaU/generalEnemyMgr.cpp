#include "Dolphin/rand.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/Armor.h"
#include "Game/Entities/Baby.h"
#include "Game/Entities/BigFoot.h"
#include "Game/Entities/BigTreasure.h"
#include "Game/Entities/BlackMan.h"
#include "Game/Entities/BlueChappy.h"
#include "Game/Entities/BlueKochappy.h"
#include "Game/Entities/Bomb.h"
#include "Game/Entities/BombOtakara.h"
#include "Game/Entities/BombSarai.h"
#include "Game/Entities/Catfish.h"
#include "Game/Entities/Chappy.h"
#include "Game/Entities/Damagumo.h"
#include "Game/Entities/DangoMushi.h"
#include "Game/Entities/Demon.h"
#include "Game/Entities/Egg.h"
#include "Game/Entities/ElecBug.h"
#include "Game/Entities/ElecHiba.h"
#include "Game/Entities/ElecOtakara.h"
#include "Game/Entities/Fart.h"
#include "Game/Entities/FireChappy.h"
#include "Game/Entities/FireOtakara.h"
#include "Game/Entities/Frog.h"
#include "Game/Entities/Fuefuki.h"
#include "Game/Entities/GasHiba.h"
#include "Game/Entities/GasOtakara.h"
#include "Game/Entities/Hana.h"
#include "Game/Entities/Hanachirashi.h"
#include "Game/Entities/Hiba.h"
#include "Game/Entities/Houdai.h"
#include "Game/Entities/Imomushi.h"
#include "Game/Entities/Jigumo.h"
#include "Game/Entities/Kabuto.h"
#include "Game/Entities/KingChappy.h"
#include "Game/Entities/Kochappy.h"
#include "Game/Entities/Koganemushi.h"
#include "Game/Entities/KumaKochappy.h"
#include "Game/Entities/Kurage.h"
#include "Game/Entities/LeafChappy.h"
#include "Game/Entities/Mar.h"
#include "Game/Entities/MaroFrog.h"
#include "Game/Entities/MiniHoudai.h"
#include "Game/Entities/Miulin.h"
#include "Game/Entities/Nest.h"
#include "Game/Entities/OniKurage.h"
#include "Game/Entities/OoPanModoki.h"
#include "Game/Entities/PanModoki.h"
#include "Game/Entities/Pelplant.h"
#include "Game/Entities/Pom.h"
#include "Game/Entities/Queen.h"
#include "Game/Entities/Qurione.h"
#include "Game/Entities/Rock.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/Entities/SnakeCrow.h"
#include "Game/Entities/SnakeWhole.h"
#include "Game/Entities/Sokkuri.h"
#include "Game/Entities/Tadpole.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/Entities/Tank.h"
#include "Game/Entities/Tobi.h"
#include "Game/Entities/Tyre.h"
#include "Game/Entities/Ujia.h"
#include "Game/Entities/Ujib.h"
#include "Game/Entities/UmiMushi.h"
#include "Game/Entities/WaterOtakara.h"
#include "Game/Entities/Wealthy.h"
#include "Game/Entities/YellowChappy.h"
#include "Game/Entities/YellowKochappy.h"
#include "Game/plantsMgr.h"
#include "Game/gamePlayData.h"
#include "Game/MapMgr.h"
#include "Game/Interaction.h"
#include "LoadResource.h"

static const char matchText[] = "enemyBase";

namespace Game {

GeneralEnemyMgr* generalEnemyMgr;
int GeneralEnemyMgr::mCullCount;
int GeneralEnemyMgr::mTotalCount;

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
int EnemyNumInfo::getOriginalEnemyID(int enemyID)
{
	int origID = -1;

	for (int i = 0; i < gEnemyInfoNum; i++) {
		char id = gEnemyInfo[i].mId;

		if (id == enemyID) {
			if (gEnemyInfo[i].mFlags & EFlag_UseOwnID) {
				origID = enemyID;
			} else {
				origID = gEnemyInfo[i].mParentID;
			}
		}
	}

	return origID;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void EnemyNumInfo::init()
{
	mEnemyNumList = new EnemyTypeID[gEnemyInfoNum];

	for (int i = 0; i < gEnemyInfoNum; i++) {
		mEnemyNumList[i].mEnemyID = (EnemyTypeID::EEnemyTypeID)gEnemyInfo[i].mId;
	}

	resetEnemyNum();
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void EnemyNumInfo::resetEnemyNum()
{
	if (mEnemyNumList == nullptr) {
		return;
	}

	for (int i = 0; i < gEnemyInfoNum; i++) {
		mEnemyNumList[i].mCount = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void EnemyNumInfo::addEnemyNum(int enemyID, u8 num)
{
	EnemyTypeID* enemyNumList = mEnemyNumList;
	if (enemyNumList) {
		for (int i = 0; i < gEnemyInfoNum; i++) {
			if (enemyID == mEnemyNumList[i].mEnemyID) {
				mEnemyNumList[i].mCount += num;
				return;
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
u8 EnemyNumInfo::getEnemyNum(int enemyID, bool doCheckOriginal)
{
	u8 count = 0;

	if (doCheckOriginal) {
		if (mEnemyNumList) {
			int origID = getOriginalEnemyID(enemyID);
			for (int i = 0; i < gEnemyInfoNum; i++) {
				EnemyTypeID* typeID = &mEnemyNumList[i];

				bool isOriginal = (u8)(enemyID == origID);
				int id          = isOriginal ? getOriginalEnemyID(typeID->mEnemyID) : typeID->mEnemyID;

				if (id == enemyID) {
					count += typeID->mCount;
				}
			}
		}
	} else {
		for (int i = 0; i < gEnemyInfoNum; i++) {
			if (mEnemyNumList[i].mEnemyID == enemyID) {
				count = mEnemyNumList[i].mCount;
				break;
			}
		}
	}

	return count;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
u8 EnemyNumInfo::getEnemyNumData(int enemyID)
{
	for (int i = 0; i < gEnemyInfoNum; i++) {
		if (mEnemyNumList[i].mEnemyID == enemyID) {
			return mEnemyNumList[i].mCount;
		}
	}
	return 0;
}

/**
 * @note Address: 0x8010BD3C
 * @note Size: 0xFAC
 */
void GeneralEnemyMgr::createEnemyMgr(u8 viewNum, int enemyID, int limit)
{
	EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
	char* name = getEnemyName(enemyID, 0xFFFF);
	sys->heapStatusStart(name, nullptr);

	EnemyMgrBase* mgr;

	// NEW ENEMY MODS: add Mgr entry to this switch case
	switch (enemyID) {
	case EnemyTypeID::EnemyID_Pelplant:
		mgr = new Pelplant::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Kochappy:
		mgr = new Kochappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BlueKochappy:
		mgr = new BlueKochappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_YellowKochappy:
		mgr = new YellowKochappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Chappy:
		mgr = new Chappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BlueChappy:
		mgr = new BlueChappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_YellowChappy:
		mgr = new YellowChappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Pom:
		mgr = new Pom::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Frog:
		mgr = new Frog::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Kogane:
		mgr = new Koganemushi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Wealthy:
		mgr = new Wealthy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Fart:
		mgr = new Fart::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Qurione:
		mgr = new Qurione::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_MaroFrog:
		mgr = new MaroFrog::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Rock:
		mgr = new Rock::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_UjiA:
		mgr = new Ujia::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_UjiB:
		mgr = new Ujib::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Tobi:
		mgr = new Tobi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Armor:
		mgr = new Armor::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Hiba:
		mgr = new Hiba::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_GasHiba:
		mgr = new GasHiba::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_ElecHiba:
		mgr = new ElecHiba::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Sarai:
		mgr = new Sarai::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Tank:
		mgr = new Ftank::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Wtank:
		mgr = new Wtank::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Catfish:
		mgr = new Catfish::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Tadpole:
		mgr = new Tadpole::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_ElecBug:
		mgr = new ElecBug::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Mar:
		mgr = new Mar::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Queen:
		mgr = new Queen::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Baby:
		mgr = new Baby::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Demon:
		mgr = new Demon::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_FireChappy:
		mgr = new FireChappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_SnakeCrow:
		mgr = new SnakeCrow::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_KumaChappy:
		mgr = new KumaChappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Bomb:
		mgr = new Bomb::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Egg:
		mgr = new Egg::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_PanModoki:
		mgr = new PanModoki::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_OoPanModoki:
		mgr = new OoPanModoki::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_PanHouse:
		mgr = new Nest::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Fuefuki:
		mgr = new Fuefuki::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Tanpopo:
		mgr = new Tanpopo::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Clover:
		mgr = new Clover::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_HikariKinoko:
		mgr = new HikariKinoko::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Ooinu_s:
		mgr = new Ooinu_s::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_KareOoinu_s:
		mgr = new KareOoinu_s::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Ooinu_l:
		mgr = new Ooinu_l::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_KareOoinu_l:
		mgr = new KareOoinu_l::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Wakame_s:
		mgr = new Wakame_s::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Wakame_l:
		mgr = new Wakame_l::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Tukushi:
		mgr = new Tukushi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Watage:
		mgr = new Watage::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_DaiodoRed:
		mgr = new DiodeRed::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_DaiodoGreen:
		mgr = new DiodeGreen::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Magaret:
		mgr = new Margaret::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Nekojarashi:
		mgr = new Nekojarashi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Chiyogami:
		mgr = new Chiyogami::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Zenmai:
		mgr = new Zenmai::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_KingChappy:
		mgr = new KingChappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Miulin:
		mgr = new Miulin::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Hanachirashi:
		mgr = new Hanachirashi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Damagumo:
		mgr = new Damagumo::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Kurage:
		mgr = new Kurage::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BombSarai:
		mgr = new BombSarai::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_FireOtakara:
		mgr = new FireOtakara::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_WaterOtakara:
		mgr = new WaterOtakara::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_GasOtakara:
		mgr = new GasOtakara::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_ElecOtakara:
		mgr = new ElecOtakara::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BombOtakara:
		mgr = new BombOtakara::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Jigumo:
		mgr = new Jigumo::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Imomushi:
		mgr = new Imomushi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Houdai:
		mgr = new Houdai::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_LeafChappy:
		mgr = new LeafChappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_TamagoMushi:
		if (gameSystem && (gameSystem->mIsInCave == 0)) {
			limit = 10;
		} else {
			limit = TAMAGOMUSHI_GROUP_COUNT;
		}
		mgr = new TamagoMushi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BigFoot:
		mgr = new BigFoot::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_SnakeWhole:
		mgr = new SnakeWhole::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_UmiMushiBase:
		mgr = new UmiMushi::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_OniKurage:
		mgr = new OniKurage::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BigTreasure:
		mgr = new BigTreasure::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Kabuto:
		mgr = new GreenKabuto::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Rkabuto:
		mgr = new RedKabuto::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Fkabuto:
		mgr = new FixKabuto::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_KumaKochappy:
		mgr = new KumaKochappy::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_ShijimiChou:
		if (gameSystem && (gameSystem->mIsInCave == 0)) {
			limit = 10;
		} else {
			limit = SHIJIMICHOU_GROUP_COUNT;
		}
		mgr = new ShijimiChou::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_MiniHoudai:
		mgr = new NormMiniHoudai::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_FminiHoudai:
		mgr = new FixMiniHoudai::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Sokkuri:
		mgr = new Sokkuri::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Hana:
		mgr = new Hana::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_BlackMan:
		mgr = new BlackMan::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_Tyre:
		mgr = new Tyre::Mgr(limit, viewNum);
		break;
	case EnemyTypeID::EnemyID_DangoMushi:
		mgr = new DangoMushi::Mgr(limit, viewNum);
		break;
	}

	mgr->alloc();
	mEnemyMgrNode.add(new EnemyMgrNode(enemyID, name, mgr));
	add(mgr);
	sys->heapStatusEnd(name);
}

/**
 * @note Address: 0x8010CCE8
 * @note Size: 0x1BC
 */
GeneralEnemyMgr::GeneralEnemyMgr()
    : mDrawFlag(0)
    , mEnemyNumInfo()
    , mHeap(nullptr)
{
	sys->heapStatusStart("GeneralEnemyMgr", nullptr);
	mName = "敵マネージャ"; // enemy manager

	mEnemyNumInfo.init();

	sys->heapStatusEnd("GeneralEnemyMgr");
	resetEnemyNum();
	mFlags.clear();
	mFlags.set(GEM_DoSimulate);
	mFlags.set(GEM_DoDraw);
}

/**
 * @note Address: 0x8010CF0C
 * @note Size: 0x78
 */
void GeneralEnemyMgr::killAll()
{
	EnemyKillArg killArg(CKILL_NULL);
	killArg.setFlag(CKILL_DisableDeathEffects | CKILL_LeaveNoCarcass | CKILL_NotKilledByPlayer);

	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
		childNode->killAll(&killArg);
	}
}

/**
 * @note Address: 0x8010CFB4
 * @note Size: 0x4C
 */
void GeneralEnemyMgr::setupSoundViewerAndBas()
{
	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
		childNode->setupSoundViewerAndBas();
	}
}

/**
 * @note Address: 0x8010D030
 * @note Size: 0x8C
 */
void GeneralEnemyMgr::doAnimation()
{
	mCullCount  = 0;
	mTotalCount = 0;
	sys->mTimers->_start("doaTEKI", true);
	if (mFlags.isSet(GEM_DoSimulate)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doAnimation();
		}
	}
	sys->mTimers->_stop("doaTEKI");
}

/**
 * @note Address: 0x8010D0EC
 * @note Size: 0x58
 */
void GeneralEnemyMgr::doEntry()
{
	if (mFlags.isSet(GEM_DoDraw)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doEntry();
		}
	}
}

/**
 * @note Address: 0x8010D174
 * @note Size: 0x68
 */
void GeneralEnemyMgr::doSetView(int viewportNumber)
{
	if (mFlags.isSet(GEM_DoDraw)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doSetView(viewportNumber);
		}
	}
}

/**
 * @note Address: 0x8010D20C
 * @note Size: 0x58
 */
void GeneralEnemyMgr::doViewCalc()
{
	if (mFlags.isSet(GEM_DoDraw)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doViewCalc();
		}
	}
}

/**
 * @note Address: 0x8010D294
 * @note Size: 0x68
 */
void GeneralEnemyMgr::doSimulation(f32 constraint)
{
	if (mFlags.isSet(GEM_DoSimulate)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doSimulation(constraint);
		}
	}
}

/**
 * @note Address: 0x8010D32C
 * @note Size: 0x68
 */
void GeneralEnemyMgr::doDirectDraw(Graphics& gfx)
{
	if (mFlags.isSet(GEM_DoDraw)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doDirectDraw(gfx);
		}
	}
}

/**
 * @note Address: 0x8010D3C4
 * @note Size: 0x80
 */
void GeneralEnemyMgr::doSimpleDraw(Viewport* viewport)
{
	if (mFlags.isSet(GEM_DoDraw)) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->doSimpleDraw(viewport);
		}
		mStoneMgr.draw(viewport);
	}
}

/**
 * @note Address: 0x8010D474
 * @note Size: 0x4C
 */
J3DModelData* GeneralEnemyMgr::getJ3DModelData(int idx)
{
	J3DModelData* modelData = nullptr;
	IEnemyMgrBase* base     = getIEnemyMgrBase(idx);
	if (base) {
		modelData = base->getJ3DModelData();
	}

	return modelData;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
EnemyBase* GeneralEnemyMgr::birth(char* name, EnemyBirthArg& birthArg)
{
	int enemyID = getEnemyID(name, 0xFFFF);
	return birth(enemyID, birthArg);
}

/**
 * @note Address: 0x8010D4C0
 * @note Size: 0xBC
 */
EnemyBase* GeneralEnemyMgr::birth(int enemyID, EnemyBirthArg& birthArg)
{
	EnemyBase* enemy = nullptr;
	int idx          = EnemyNumInfo::getOriginalEnemyID(enemyID);

	EnemyMgrBase* base = getIEnemyMgrBase(idx);
	if (base) {
		birthArg.mTypeID = (EnemyTypeID::EEnemyTypeID)enemyID;
		enemy            = base->birth(birthArg);
	}

	return enemy;
}

/**
 * @note Address: 0x8010D57C
 * @note Size: 0x28
 */
char* GeneralEnemyMgr::getEnemyName(int enemyID, int flags) { return EnemyInfoFunc::getEnemyName(enemyID, flags); }

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
char GeneralEnemyMgr::getEnemyMember(int enemyID, int flags) { return EnemyInfoFunc::getEnemyMember(enemyID, flags); }

/**
 * @note Address: 0x8010D5A4
 * @note Size: 0x28
 */
int GeneralEnemyMgr::getEnemyID(char* name, int flags) { return EnemyInfoFunc::getEnemyID(name, flags); }

/**
 * @note Address: 0x8010D5CC
 * @note Size: 0x2C
 */
EnemyMgrBase* GeneralEnemyMgr::getIEnemyMgrBase(int enemyID)
{
	EnemyMgrBase* base = nullptr;

	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
		if (childNode->mEnemyID == enemyID) {
			base = childNode->mMgr;
		}
	}

	return base;
}

/**
 * @note Address: 0x8010D5F8
 * @note Size: 0x21C
 */
void GeneralEnemyMgr::allocateEnemys(u8 viewNum, int heapSize)
{
	if (heapSize < 0) {
		mHeapSize = ENEMY_HEAP_SIZE_STORY;
		if (gameSystem) {
			if (gameSystem->isChallengeMode()) {
				mHeapSize = ENEMY_HEAP_SIZE_CM;
			} else if (gameSystem->isVersusMode()) {
				mHeapSize = ENEMY_HEAP_SIZE_VS;
			}
		}
	} else {
		mHeapSize = heapSize;
	}

	sys->heapStatusStart("enemyHeap", nullptr);
	JKRHeap* currentHeap = JKRGetCurrentHeap();
	mHeap                = JKRSolidHeap::create(mHeapSize, currentHeap, true);
	mHeap->becomeCurrentHeap();

	mStoneMgr.loadResource();

	P2ASSERTLINE(1844, currentHeap->getHeapType() == 'EXPH');

	LoadResource::ArgAramOnly arg("/enemy/parm/enemyParms.szs");
	arg.mHeap     = currentHeap;
	arg.mAllocDir = JKRDvdRipper::ALLOC_DIR_BOTTOM;

	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(arg);
	gParmArc                         = resourceNode->mArchive;

	sys->heapStatusStart("allocateEnemys", nullptr);
	sys->heapStatusIndividual();

	for (int i = 0; i < gEnemyInfoNum; i++) {
		int enemyNum = getEnemyNum(gEnemyInfo[i].mId, true);
		if ((gEnemyInfo[i].mFlags & EFlag_UseOwnID) && (enemyNum > 0)) {
			createEnemyMgr(viewNum, gEnemyInfo[i].mId, enemyNum);
		}
	}

	sys->heapStatusNormal();
	sys->heapStatusEnd("allocateEnemys");
	currentHeap->becomeCurrentHeap();
	mHeap->mInitFlag = 1;
	delete resourceNode;

	gParmArc = nullptr;
	sys->heapStatusEnd("enemyHeap");
}

/**
 * @note Address: 0x8010D814
 * @note Size: 0x40
 */
void GeneralEnemyMgr::resetEnemyNum() { mEnemyNumInfo.resetEnemyNum(); }

/**
 * @note Address: 0x8010D854
 * @note Size: 0x22C
 */
#pragma dont_inline on
void GeneralEnemyMgr::addEnemyNum(int enemyID, u8 max, GenObjectEnemy* genObj)
{
	if (enemyID != -1) {
		mEnemyNumInfo.addEnemyNum(enemyID, max * getEnemyMember(enemyID, 0xFFFF));

		for (int i = 0; i < max; i++) {
			switch (enemyID) {
				// check if we're dealing with a plant that can spawn spectralids
			case EnemyTypeID::EnemyID_Ooinu_l:
			case EnemyTypeID::EnemyID_Tanpopo:
			case EnemyTypeID::EnemyID_Magaret:
				if (genObj) {
					EnemyPelletInfo pelletInfo;
					pelletInfo = genObj->mPelletInfo;

					if (pelletInfo.mColor == PELCOLOR_SPECTRALID && pelletInfo.mSize == PELSIZE_SPECTRALID) {
						EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
						addEnemyNum(info->mChildID, info->mChildNum, nullptr);
					}
				}
				break;

			default:
				EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
				addEnemyNum(info->mChildID, info->mChildNum, nullptr);
				// check if we're dealing with crawbster, since we need to handle falling rock and egg spawns
				if (enemyID == EnemyTypeID::EnemyID_DangoMushi) {
					if (getEnemyNum(EnemyTypeID::EnemyID_Egg, true) < 10) {
						addEnemyNum(EnemyTypeID::EnemyID_Egg, 10, nullptr);
					}
					if (getEnemyNum(EnemyTypeID::EnemyID_Rock, true) < 30) {
						addEnemyNum(EnemyTypeID::EnemyID_Rock, 30, nullptr);
					}

					// check if we're dealing with empress, since we need to handle falling rock spawns
				} else if ((enemyID == EnemyTypeID::EnemyID_Queen) && (getEnemyNum(EnemyTypeID::EnemyID_Rock, true) < 10)) {
					addEnemyNum(EnemyTypeID::EnemyID_Rock, 10, nullptr);
				}
				break;
			}
		}
	}
}
#pragma dont_inline reset

/**
 * @note Address: 0x8010DA80
 * @note Size: 0x170
 */
u8 GeneralEnemyMgr::getEnemyNum(int enemyID, bool doFullCount) { return mEnemyNumInfo.getEnemyNum(enemyID, doFullCount); }

/**
 * @note Address: 0x8010DBF0
 * @note Size: 0xB4
 */
JKRHeap* GeneralEnemyMgr::useHeap()
{
	killAll();

	if (mHeap) {
		mHeap->freeAll();
		mEnemyMgrNode.clearRelations();
	}
	mChild = nullptr;
	return mHeap;
}

/**
 * @note Address: 0x8010DCA4
 * @note Size: 0x38
 */
EnemyMgrBase* GeneralEnemyMgr::getEnemyMgr(int enemyID)
{
	EnemyMgrBase* base = static_cast<EnemyMgrBase*>(getIEnemyMgrBase(enemyID));
	if (base) {
		return base;
	}
	return nullptr;
}

/**
 * @note Address: 0x8010DCDC
 * @note Size: 0x98
 */
void GeneralEnemyMgr::setMovieDraw(bool isEndMovie)
{
	if (!isEndMovie) {
		mDrawFlag |= 0x1;
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->startMovie();
		}
	} else {
		mDrawFlag &= ~0x1;
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {
			childNode->endMovie();
		}
	}
}

/**
 * @note Address: 0x8010DDD4
 * @note Size: 0x11C
 */
void GeneralEnemyMgr::prepareDayendEnemies()
{
	// clear out the enemies from the map - don't add them to the piklopedia though, since the player didn't kill them
	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->mNext)) {

		EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(childNode->mEnemyID, 0xFFFF);

		// love a random trivial loop - probably debug stuff?
		EnemyMgrNode* otherNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
		for (otherNode; otherNode != nullptr; otherNode = static_cast<EnemyMgrNode*>(otherNode->mNext)) { }

		if (info->mFlags & EFlag_CanAppearDayEnd) {
			EnemyKillArg killArg(CKILL_NULL);
			killArg.setFlag(CKILL_DisableDeathEffects | CKILL_LeaveNoCarcass | CKILL_NotKilledByPlayer);
			childNode->killAll(&killArg);
		}
	}

	GeneralMgrIterator<EnemyBase> iterator(this);

	iterator.first();

	while (iterator.mContainer) {
		EnemyBase* enemy     = iterator.getObject();
		enemy->mInPiklopedia = false;
		iterator.next();
	}
}

/**
 * @note Address: 0x8010E4BC
 * @note Size: 0xC84
 */
void GeneralEnemyMgr::createDayendEnemies(Sys::Sphere& birthSphere)
{
	// need to make sure we have enemies to spawn
	if (mEnemyMgrNode.getChildCount() != 0) {
		// max "amount" of enemies to spawn - different types of enemies carry different weights though
		int i = 0;
		while (i < 10) {
			// pick a random start enemy
			int randIdx = randFloat() * mEnemyMgrNode.getChildCount();

			// need to know when we get back to our starting enemy, since it's not the start or end of a list
			EnemyMgrNode* startNode  = static_cast<EnemyMgrNode*>(mEnemyMgrNode.getChildAt(randIdx));
			EnemyMgrNode* randomNode = startNode;

			// loop through available enemies til we fill up our slots
			do {
				EnemyInfo* randomInfo = EnemyInfoFunc::getEnemyInfo(randomNode->mEnemyID, 0xFFFF);
				EnemyMgrBase* mgr     = getIEnemyMgrBase(randomNode->mEnemyID);

				TekiStat::Info* tekiInfo = playData->mTekiStatMgr.getTekiInfo(randomNode->mEnemyID);
				P2ASSERTLINE(2203, tekiInfo);

				if ((randomInfo->mFlags & EFlag_CanAppearDayEnd) && (tekiInfo->mState.isSet(1))) {
					// appearing at the end of the day doesn't trigger an entry in the piklopedia, obvs
					EnemyBirthArg birthArg;
					birthArg.mIsInPiklopedia = false;

					if (randomInfo->mFlags & EFlag_DayEndMax1) {
						// maximum 1 of these - if this is spawned first, ONLY get this
						birthArg.mPosition = birthSphere.mPosition;
						birthArg.mFaceDir  = TAU * randFloat();
						EnemyBase* enemy   = birth(randomNode->mEnemyID, birthArg);

						if (enemy) {
							enemy->init(nullptr);
							InteractAttack attack(enemy, 0.0f, nullptr);
							enemy->stimulate(attack);
							enemy->movie_begin(false);
						}

						i += 10;
						goto noadd;

					} else if (randomInfo->mFlags & EFlag_DayEndMax2) {
						// maximum 2 of these
						f32 randAngle = TAU * randFloat();
						birthArg.mFaceDir
						    = _angXZ(birthSphere.mPosition.x, birthSphere.mPosition.z, birthArg.mPosition.x, birthArg.mPosition.z);
						EnemyBase* enemy = birth(randomNode->mEnemyID, birthArg);

						if (enemy) {
							Sys::Sphere boundingSphere;
							enemy->getBoundingSphere(boundingSphere);
							f32 radDiff = birthSphere.mRadius - boundingSphere.mRadius;
							if (radDiff < 0.0f) {
								radDiff = 0.0f;
							}

							Vector3f pos(radDiff * sinf(randAngle) + birthSphere.mPosition.x, 0.0f,
							             radDiff * cosf(randAngle) + birthSphere.mPosition.z);
							pos.y = mapMgr->getMinY(pos);
							enemy->setPosition(pos, false);
							enemy->mHomePosition = pos;

							enemy->init(nullptr);
							InteractAttack attack(enemy, 0.0f, nullptr);
							enemy->stimulate(attack);
							enemy->movie_begin(false);
						}

						i += 5;
						goto noadd;

					} else if (randomInfo->mFlags & EFlag_DayEndMax4) {
						// maximum 4 of these groups

						// each group has a max of up to 5
						int maxObj    = mgr->getMaxObjects();
						int randLimit = randInt(3) + 2;

						if (maxObj > randLimit) {
							maxObj = randLimit;
						}

						f32 randAngle = TAU * randFloat();
						f32 increment = TAU / (f32)maxObj;
						for (int j = 0; j < maxObj; j++) {

							rand();
							birthArg.mFaceDir
							    = _angXZ(birthSphere.mPosition.x, birthSphere.mPosition.z, birthArg.mPosition.x, birthArg.mPosition.z);
							EnemyBase* enemy = birth(randomNode->mEnemyID, birthArg);

							if (enemy) {
								Sys::Sphere enemySphere;
								enemy->getBoundingSphere(enemySphere);
								f32 radDiff = birthSphere.mRadius - enemySphere.mRadius;
								if (radDiff < 0.0f) {
									radDiff = 0.0f;
								}

								f32 randomRad = (0.5f * radDiff) * randFloat() + (0.5f * radDiff);

								Vector3f pos(randomRad * sinf(randAngle) + birthSphere.mPosition.x, 0.0f,
								             randomRad * cosf(randAngle) + birthSphere.mPosition.z);
								pos.y = mapMgr->getMinY(pos);
								enemy->setPosition(pos, false);
								enemy->mHomePosition = pos;

								enemy->init(nullptr);
								InteractAttack attack(enemy, 0.0f, nullptr);
								enemy->stimulate(attack);
								enemy->movie_begin(false);
							}
							randAngle += increment;
						}

						i += 3;
						goto noadd;
					} else {
						// maximum 7 of these groups

						// each group has a max of up to 14
						int maxObj    = mgr->getMaxObjects();
						int randLimit = randInt(7) + 7;

						if (maxObj > randLimit) {
							maxObj = randLimit;
						}

						f32 randAngle = TAU * randFloat();
						f32 increment = TAU / (f32)maxObj;
						for (int j = 0; j < maxObj; j++) {

							rand();

							birthArg.mFaceDir
							    = _angXZ(birthSphere.mPosition.x, birthSphere.mPosition.z, birthArg.mPosition.x, birthArg.mPosition.z);

							EnemyBase* enemy = birth(randomNode->mEnemyID, birthArg);

							if (enemy) {
								Sys::Sphere enemySphere;
								enemy->getBoundingSphere(enemySphere);
								f32 radDiff = birthSphere.mRadius - enemySphere.mRadius;
								if (radDiff < 0.0f) {
									radDiff = 0.0f;
								}

								f32 randomRad = (0.5f * radDiff) * randFloat() + (0.5f * radDiff);

								Vector3f pos(randomRad * sinf(randAngle) + birthSphere.mPosition.x, 0.0f,
								             randomRad * cosf(randAngle) + birthSphere.mPosition.z);
								pos.y = mapMgr->getMinY(pos);
								enemy->setPosition(pos, false);
								enemy->mHomePosition = pos;

								enemy->init(nullptr);
								InteractAttack attack(enemy, 0.0f, nullptr);
								enemy->stimulate(attack);
								enemy->movie_begin(false);
							}

							randAngle += increment;
						}

						i += 1;
						goto noadd;
					}
				} else {
					randomNode = static_cast<EnemyMgrNode*>(randomNode->mNext);
					if (randomNode == nullptr) {
						randomNode = static_cast<EnemyMgrNode*>(mEnemyMgrNode.mChild);
					}
				}
			} while (randomNode != startNode);
			i += 10;
		noadd:;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void GeneralEnemyMgr::setParmsDebugNameAndID()
{
	// more than this but this is the essential bit for weak function ordering
	mEnemyMgrNode.setDebugParm(0);
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void GeneralEnemyMgr::resetParmsDebugNameAndID()
{
	// more than this but this is the essential bit for weak function ordering
	mEnemyMgrNode.resetDebugParm(0);
}
} // namespace Game
