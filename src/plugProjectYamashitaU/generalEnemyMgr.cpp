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

/*
 * --INFO--
 * Address:	8010BD3C
 * Size:	000FAC
 */
void GeneralEnemyMgr::createEnemyMgr(u8 type, int enemyID, int limit)
{
	// int limit = objLimit;
	EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
	char* name = getEnemyName(enemyID, 0xFFFF);
	sys->heapStatusStart(name, nullptr);

	EnemyMgrBase* mgr;

	switch (enemyID) {
	case EnemyTypeID::EnemyID_Pelplant:
		mgr = new Pelplant::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Kochappy:
		mgr = new Kochappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BlueKochappy:
		mgr = new BlueKochappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_YellowKochappy:
		mgr = new YellowKochappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Chappy:
		mgr = new Chappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BlueChappy:
		mgr = new BlueChappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_YellowChappy:
		mgr = new YellowChappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Pom:
		mgr = new Pom::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Frog:
		mgr = new Frog::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Kogane:
		mgr = new Koganemushi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Wealthy:
		mgr = new Wealthy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Fart:
		mgr = new Fart::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Qurione:
		mgr = new Qurione::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_MaroFrog:
		mgr = new MaroFrog::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Rock:
		mgr = new Rock::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_UjiA:
		mgr = new Ujia::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_UjiB:
		mgr = new Ujib::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Tobi:
		mgr = new Tobi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Armor:
		mgr = new Armor::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Hiba:
		mgr = new Hiba::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_GasHiba:
		mgr = new GasHiba::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_ElecHiba:
		mgr = new ElecHiba::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Sarai:
		mgr = new Sarai::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Tank:
		mgr = new Ftank::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Wtank:
		mgr = new Wtank::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Catfish:
		mgr = new Catfish::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Tadpole:
		mgr = new Tadpole::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_ElecBug:
		mgr = new ElecBug::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Mar:
		mgr = new Mar::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Queen:
		mgr = new Queen::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Baby:
		mgr = new Baby::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Demon:
		mgr = new Demon::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_FireChappy:
		mgr = new FireChappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_SnakeCrow:
		mgr = new SnakeCrow::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_KumaChappy:
		mgr = new KumaChappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Bomb:
		mgr = new Bomb::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Egg:
		mgr = new Egg::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_PanModoki:
		mgr = new PanModoki::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_OoPanModoki:
		mgr = new OoPanModoki::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_PanHouse:
		mgr = new Nest::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Fuefuki:
		mgr = new Fuefuki::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Tanpopo:
		mgr = new Tanpopo::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Clover:
		mgr = new Clover::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_HikariKinoko:
		mgr = new HikariKinoko::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Ooinu_s:
		mgr = new Ooinu_s::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_KareOoinu_s:
		mgr = new KareOoinu_s::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Ooinu_l:
		mgr = new Ooinu_l::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_KareOoinu_l:
		mgr = new KareOoinu_l::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Wakame_s:
		mgr = new Wakame_s::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Wakame_l:
		mgr = new Wakame_l::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Tukushi:
		mgr = new Tukushi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Watage:
		mgr = new Watage::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_DaiodoRed:
		mgr = new DiodeRed::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_DaiodoGreen:
		mgr = new DiodeGreen::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Magaret:
		mgr = new Margaret::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Nekojarashi:
		mgr = new Nekojarashi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Chiyogami:
		mgr = new Chiyogami::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Zenmai:
		mgr = new Zenmai::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_KingChappy:
		mgr = new KingChappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Miulin:
		mgr = new Miulin::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Hanachirashi:
		mgr = new Hanachirashi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Damagumo:
		mgr = new Damagumo::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Kurage:
		mgr = new Kurage::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BombSarai:
		mgr = new BombSarai::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_FireOtakara:
		mgr = new FireOtakara::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_WaterOtakara:
		mgr = new WaterOtakara::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_GasOtakara:
		mgr = new GasOtakara::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_ElecOtakara:
		mgr = new ElecOtakara::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BombOtakara:
		mgr = new BombOtakara::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Jigumo:
		mgr = new Jigumo::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Imomushi:
		mgr = new Imomushi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Houdai:
		mgr = new Houdai::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_LeafChappy:
		mgr = new LeafChappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_TamagoMushi:
		if ((gameSystem != nullptr) && (gameSystem->m_inCave == 0)) {
			limit = 10;
		} else {
			limit = 30;
		}
		mgr = new TamagoMushi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BigFoot:
		mgr = new BigFoot::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_SnakeWhole:
		mgr = new SnakeWhole::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_UmiMushiBase:
		mgr = new UmiMushi::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_OniKurage:
		mgr = new OniKurage::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BigTreasure:
		mgr = new BigTreasure::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Kabuto:
		mgr = new GreenKabuto::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Rkabuto:
		mgr = new RedKabuto::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Fkabuto:
		mgr = new FixKabuto::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_KumaKochappy:
		mgr = new KumaKochappy::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_ShijimiChou:
		if ((gameSystem != nullptr) && (gameSystem->m_inCave == 0)) {
			limit = 10;
		} else {
			limit = 25;
		}
		mgr = new ShijimiChou::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_MiniHoudai:
		mgr = new NormMiniHoudai::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_FminiHoudai:
		mgr = new FixMiniHoudai::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Sokkuri:
		mgr = new Sokkuri::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Hana:
		mgr = new Hana::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_BlackMan:
		mgr = new BlackMan::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_Tyre:
		mgr = new Tyre::Mgr(limit, type);
		break;
	case EnemyTypeID::EnemyID_DangoMushi:
		mgr = new DangoMushi::Mgr(limit, type);
		break;
	}

	mgr->alloc();
	m_enemyMgrNode.add(new EnemyMgrNode(enemyID, name, mgr));
	add(mgr);
	sys->heapStatusEnd(name);
}

/*
 * --INFO--
 * Address:	8010CCE8
 * Size:	0001BC
 */
GeneralEnemyMgr::GeneralEnemyMgr()
    : _1C(0)
    , m_enemyNumList(nullptr)
    , m_heap(nullptr)
{
	sys->heapStatusStart("GeneralEnemyMgr", nullptr);
	m_name         = "敵マネージャ"; // enemy manager
	m_enemyNumList = new EnemyTypeID[gEnemyInfoNum];

	setEnemyIDs();

	if (m_enemyNumList) {
		setEnemyNums(0);
	}

	sys->heapStatusEnd("GeneralEnemyMgr");
	resetEnemyNum();
	m_flags.clear();
	m_flags.typeView |= 0x1;
	m_flags.typeView |= 0x2;
}

/*
 * --INFO--
 * Address:	8010CF0C
 * Size:	000078
 */
void GeneralEnemyMgr::killAll()
{
	EnemyKillArg killArg(0);
	killArg._04 |= 0x70000000;

	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
		childNode->killAll(&killArg);
	}
}

/*
 * --INFO--
 * Address:	8010CFB4
 * Size:	00004C
 */
void GeneralEnemyMgr::setupSoundViewerAndBas()
{
	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
		childNode->setupSoundViewerAndBas();
	}
}

/*
 * --INFO--
 * Address:	8010D030
 * Size:	00008C
 */
void GeneralEnemyMgr::doAnimation()
{
	mCullCount  = 0;
	mTotalCount = 0;
	sys->m_timers->_start("doaTEKI", true);
	if (m_flags.typeView & 0x1) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doAnimation();
		}
	}
	sys->m_timers->_stop("doaTEKI");
}

/*
 * --INFO--
 * Address:	8010D0EC
 * Size:	000058
 */
void GeneralEnemyMgr::doEntry()
{
	if (m_flags.typeView & 0x2) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doEntry();
		}
	}
}

/*
 * --INFO--
 * Address:	8010D174
 * Size:	000068
 */
void GeneralEnemyMgr::doSetView(int p1)
{
	if (m_flags.typeView & 0x2) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doSetView(p1);
		}
	}
}

/*
 * --INFO--
 * Address:	8010D20C
 * Size:	000058
 */
void GeneralEnemyMgr::doViewCalc()
{
	if (m_flags.typeView & 0x2) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doViewCalc();
		}
	}
}

/*
 * --INFO--
 * Address:	8010D294
 * Size:	000068
 */
void GeneralEnemyMgr::doSimulation(f32 constraint)
{
	if (m_flags.typeView & 0x1) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doSimulation(constraint);
		}
	}
}

/*
 * --INFO--
 * Address:	8010D32C
 * Size:	000068
 */
void GeneralEnemyMgr::doDirectDraw(Graphics& gfx)
{
	if (m_flags.typeView & 0x2) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doDirectDraw(gfx);
		}
	}
}

/*
 * --INFO--
 * Address:	8010D3C4
 * Size:	000080
 */
void GeneralEnemyMgr::doSimpleDraw(Viewport* viewport)
{
	if (m_flags.typeView & 0x2) {
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->doSimpleDraw(viewport);
		}
		m_stoneMgr.draw(viewport);
	}
}

/*
 * --INFO--
 * Address:	8010D474
 * Size:	00004C
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

/*
 * --INFO--
 * Address:	8010D4C0
 * Size:	0000BC
 */
EnemyBase* GeneralEnemyMgr::birth(int enemyID, EnemyBirthArg& birthArg)
{
	EnemyBase* enemy = nullptr;
	int idx          = getEnemyMgrID(enemyID);

	IEnemyMgrBase* base = getIEnemyMgrBase(idx);
	if (base) {
		birthArg.m_typeID = (EnemyTypeID::EEnemyTypeID)enemyID;
		enemy             = base->birth(birthArg);
	}

	return enemy;
}

/*
 * --INFO--
 * Address:	8010D57C
 * Size:	000028
 */
char* GeneralEnemyMgr::getEnemyName(int p1, int p2) { return EnemyInfoFunc::getEnemyName(p1, p2); }

/*
 * --INFO--
 * Address:	8010D5A4
 * Size:	000028
 */
int GeneralEnemyMgr::getEnemyID(char* name, int p1) { return EnemyInfoFunc::getEnemyID(name, p1); }

/*
 * --INFO--
 * Address:	8010D5CC
 * Size:	00002C
 */
IEnemyMgrBase* GeneralEnemyMgr::getIEnemyMgrBase(int enemyID)
{
	IEnemyMgrBase* base = nullptr;

	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
		if (childNode->m_enemyID == enemyID) {
			base = childNode->m_mgr;
		}
	}

	return base;
}

/*
 * --INFO--
 * Address:	8010D5F8
 * Size:	00021C
 */
void GeneralEnemyMgr::allocateEnemys(u8 type, int heapSize)
{
	if (heapSize < 0) {
		m_heapSize = 0x00200800;
		if (gameSystem) {
			if (gameSystem->isChallengeMode()) {
				m_heapSize = 0x00177000;
			} else if (gameSystem->m_mode == GSM_VERSUS_MODE) {
				m_heapSize = 0x001C2000;
			}
		}
	} else {
		m_heapSize = heapSize;
	}

	sys->heapStatusStart("enemyHeap", nullptr);
	JKRHeap* currentHeap = getCurrentHeap();
	m_heap               = JKRSolidHeap::create(m_heapSize, currentHeap, true);
	m_heap->becomeCurrentHeap();

	m_stoneMgr.loadResource();

	P2ASSERTLINE(1844, currentHeap->getHeapType() == 'EXPH');

	LoadResource::ArgAramOnly arg("enemy/parm/enemyParms.szs");
	arg.m_heap = currentHeap;
	arg._1C    = 2;

	LoadResource::Node* resourceNode = gLoadResourceMgr->mountArchive(arg);
	gParmArc                         = resourceNode->m_archive;

	sys->heapStatusStart("allocateEnemys", nullptr);
	sys->heapStatusIndividual();

	for (int i = 0; i < gEnemyInfoNum; i++) {
		int enemyNum = getEnemyNum(gEnemyInfo[i].m_id, true);
		if ((gEnemyInfo[i].m_flags & 0x1) && (enemyNum > 0)) {
			createEnemyMgr(type, gEnemyInfo[i].m_id, enemyNum);
		}
	}

	sys->heapStatusNormal();
	sys->heapStatusEnd("allocateEnemys");
	currentHeap->becomeCurrentHeap();
	m_heap->_69 = 1;
	delete resourceNode;

	gParmArc = nullptr;
	sys->heapStatusEnd("enemyHeap");
}

/*
 * --INFO--
 * Address:	8010D814
 * Size:	000040
 */
void GeneralEnemyMgr::resetEnemyNum()
{
	if (m_enemyNumList == nullptr) {
		return;
	}

	setEnemyNums(0);
}

/*
 * --INFO--
 * Address:	8010D854
 * Size:	00022C
 */
void GeneralEnemyMgr::addEnemyNum(int enemyID, u8 max, GenObjectEnemy* genObj)
{
	if (enemyID != -1) {

		u8 mem = max * EnemyInfoFunc::getEnemyMember(enemyID, 0xFFFF);
		if (m_enemyNumList) {
			for (int i = 0; i < gEnemyInfoNum; i++) {
				if (enemyID == m_enemyNumList[i].m_enemyID) {
					m_enemyNumList[i].m_count += mem;
					break;
				}
			}
		}

		for (int i = 0; i < max; i++) {
			switch (enemyID) {
				// check if we're dealing with a plant that can spawn spectralids
			case EnemyTypeID::EnemyID_Ooinu_l:
			case EnemyTypeID::EnemyID_Tanpopo:
			case EnemyTypeID::EnemyID_Magaret:
				if (genObj) {
					EnemyPelletInfo pelletInfo;
					pelletInfo = genObj->m_pelletInfo; // need an override on equals operator maybe?

					if (pelletInfo.m_color == 0 && pelletInfo.m_size == 1) {
						EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
						addEnemyNum(info->m_childID, info->m_childNum, nullptr);
					}
				}
				break;

			default:
				EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(enemyID, 0xFFFF);
				addEnemyNum(info->m_childID, info->m_childNum, nullptr);
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r28, r4
	cmpwi    r28, -1
	mr       r27, r3
	mr       r30, r5
	mr       r29, r6
	beq      lbl_8010DA6C
	lis      r4, 0x0000FFFF@ha
	mr       r3, r28
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyMember__Q24Game13EnemyInfoFuncFii
	clrlwi   r31, r30, 0x18
	lwz      r6, 0x48(r27)
	mullw    r0, r31, r3
	cmplwi   r6, 0
	clrlwi   r5, r0, 0x18
	beq      lbl_8010D8EC
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	mr       r3, r6
	li       r4, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010D8EC

lbl_8010D8BC:
	lwz      r0, 0(r3)
	cmpw     r28, r0
	bne      lbl_8010D8E0
	slwi     r0, r4, 3
	add      r3, r6, r0
	lbz      r0, 4(r3)
	add      r0, r0, r5
	stb      r0, 4(r3)
	b        lbl_8010D8EC

lbl_8010D8E0:
	addi     r3, r3, 8
	addi     r4, r4, 1
	bdnz     lbl_8010D8BC

lbl_8010D8EC:
	li       r30, 0
	b        lbl_8010DA64

lbl_8010D8F4:
	cmpwi    r28, 0x32
	beq      lbl_8010D918
	bge      lbl_8010D90C
	cmpwi    r28, 0x2e
	beq      lbl_8010D918
	b        lbl_8010D990

lbl_8010D90C:
	cmpwi    r28, 0x57
	beq      lbl_8010D918
	b        lbl_8010D990

lbl_8010D918:
	cmplwi   r29, 0
	beq      lbl_8010DA60
	addi     r3, r1, 8
	bl       __ct__Q24Game15EnemyPelletInfoFv
	lbz      r0, 0x3c(r29)
	lbz      r3, 0x3d(r29)
	lbz      r4, 0x3e(r29)
	cmplwi   r0, 0
	lbz      r5, 0x3f(r29)
	lfs      f0, 0x40(r29)
	stb      r0, 8(r1)
	stb      r3, 9(r1)
	stb      r4, 0xa(r1)
	stb      r5, 0xb(r1)
	stfs     f0, 0xc(r1)
	bne      lbl_8010DA60
	cmplwi   r3, 1
	bne      lbl_8010DA60
	lis      r4, 0x0000FFFF@ha
	mr       r3, r28
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	mr       r4, r3
	mr       r3, r27
	lwz      r0, 0x2c(r4)
	li       r6, 0
	lwz      r4, 0x28(r4)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	b        lbl_8010DA60

lbl_8010D990:
	lis      r4, 0x0000FFFF@ha
	mr       r3, r28
	addi     r4, r4, 0x0000FFFF@l
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	mr       r4, r3
	mr       r3, r27
	lwz      r0, 0x2c(r4)
	li       r6, 0
	lwz      r4, 0x28(r4)
	clrlwi   r5, r0, 0x18
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	cmpwi    r28, 0x5e
	bne      lbl_8010DA28
	mr       r3, r27
	li       r4, 0x25
	li       r5, 1
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xa
	bge      lbl_8010D9F4
	mr       r3, r27
	li       r4, 0x25
	li       r5, 0xa
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_8010D9F4:
	mr       r3, r27
	li       r4, 0x13
	li       r5, 1
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x1e
	bge      lbl_8010DA60
	mr       r3, r27
	li       r4, 0x13
	li       r5, 0x1e
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy
	b        lbl_8010DA60

lbl_8010DA28:
	cmpwi    r28, 0x1e
	bne      lbl_8010DA60
	mr       r3, r27
	li       r4, 0x13
	li       r5, 1
	bl       getEnemyNum__Q24Game15GeneralEnemyMgrFib
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0xa
	bge      lbl_8010DA60
	mr       r3, r27
	li       r4, 0x13
	li       r5, 0xa
	li       r6, 0
	bl       addEnemyNum__Q24Game15GeneralEnemyMgrFiUcPQ24Game14GenObjectEnemy

lbl_8010DA60:
	addi     r30, r30, 1

lbl_8010DA64:
	cmpw     r30, r31
	blt      lbl_8010D8F4

lbl_8010DA6C:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DA80
 * Size:	000170
 */
u8 GeneralEnemyMgr::getEnemyNum(int enemyID, bool check)
{
	u8 num = 0;
	if (check) {
		num = getTotalEnemyCount(num, enemyID);
	} else {
		num = getEnemyCount(num, enemyID);
	}
	return num;
	/*
	stwu     r1, -0x10(r1)
	clrlwi.  r0, r5, 0x18
	li       r7, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	beq      lbl_8010DB98
	lwz      r31, 0x48(r3)
	cmplwi   r31, 0
	beq      lbl_8010DBDC
	lis      r3, gEnemyInfo__4Game@ha
	lwz      r12, gEnemyInfoNum__4Game@sda21(r13)
	addi     r30, r3, gEnemyInfo__4Game@l
	li       r3, -1
	mr       r5, r30
	mtctr    r12
	cmpwi    r12, 0
	ble      lbl_8010DAF8

lbl_8010DAC4:
	lbz      r0, 4(r5)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010DAF0
	lhz      r0, 8(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010DAE8
	mr       r3, r4
	b        lbl_8010DAF0

lbl_8010DAE8:
	lbz      r3, 5(r5)
	extsb    r3, r3

lbl_8010DAF0:
	addi     r5, r5, 0x34
	bdnz     lbl_8010DAC4

lbl_8010DAF8:
	subf     r0, r4, r3
	li       r6, 0
	cntlzw   r0, r0
	mr       r11, r6
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	b        lbl_8010DB8C

lbl_8010DB10:
	cmplwi   r3, 0
	add      r5, r31, r11
	beq      lbl_8010DB6C
	mr       r10, r30
	lwz      r9, 0(r5)
	li       r8, -1
	mtctr    r12
	cmpwi    r12, 0
	ble      lbl_8010DB70

lbl_8010DB34:
	lbz      r0, 4(r10)
	extsb    r0, r0
	cmpw     r0, r9
	bne      lbl_8010DB60
	lhz      r0, 8(r10)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010DB58
	mr       r8, r9
	b        lbl_8010DB60

lbl_8010DB58:
	lbz      r8, 5(r10)
	extsb    r8, r8

lbl_8010DB60:
	addi     r10, r10, 0x34
	bdnz     lbl_8010DB34
	b        lbl_8010DB70

lbl_8010DB6C:
	lwz      r8, 0(r5)

lbl_8010DB70:
	cmpw     r8, r4
	bne      lbl_8010DB84
	lbz      r0, 4(r5)
	add      r0, r7, r0
	clrlwi   r7, r0, 0x18

lbl_8010DB84:
	addi     r11, r11, 8
	addi     r6, r6, 1

lbl_8010DB8C:
	cmpw     r6, r12
	blt      lbl_8010DB10
	b        lbl_8010DBDC

lbl_8010DB98:
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	mr       r5, r7
	mr       r6, r7
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010DBDC

lbl_8010DBB0:
	lwz      r8, 0x48(r3)
	lwzx     r0, r8, r6
	cmpw     r4, r0
	bne      lbl_8010DBD0
	slwi     r0, r5, 3
	add      r3, r8, r0
	lbz      r7, 4(r3)
	b        lbl_8010DBDC

lbl_8010DBD0:
	addi     r6, r6, 8
	addi     r5, r5, 1
	bdnz     lbl_8010DBB0

lbl_8010DBDC:
	lwz      r31, 0xc(r1)
	mr       r3, r7
	lwz      r30, 8(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010DBF0
 * Size:	0000B4
 */
JKRHeap* GeneralEnemyMgr::useHeap()
{
	killAll();

	if (m_heap != 0) {
		m_heap->freeAll();
		m_enemyMgrNode.clearRelations();
	}
	m_child = nullptr;
	return m_heap;
}

/*
 * --INFO--
 * Address:	8010DCA4
 * Size:	000038
 */
EnemyMgrBase* GeneralEnemyMgr::getEnemyMgr(int enemyID)
{
	EnemyMgrBase* base = static_cast<EnemyMgrBase*>(getIEnemyMgrBase(enemyID));
	if (base) {
		return base;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8010DCDC
 * Size:	000098
 */
void GeneralEnemyMgr::setMovieDraw(bool isEndMovie)
{
	if (!isEndMovie) {
		_1C |= 0x1;
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->startMovie();
		}
	} else {
		_1C &= ~0x1;
		EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
			childNode->endMovie();
		}
	}
}

/*
 * --INFO--
 * Address:	8010DDD4
 * Size:	00011C
 */
void GeneralEnemyMgr::prepareDayendEnemies()
{
	EnemyMgrNode* childNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
	for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {

		EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(childNode->m_enemyID, 0xFFFF);

		EnemyMgrNode* otherNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
		for (otherNode; otherNode != nullptr; otherNode = static_cast<EnemyMgrNode*>(otherNode->m_next)) { // ?? not sure why this is here
		}

		if (info->m_flags & 0x10) {
			EnemyKillArg killArg(0);
			killArg._04 |= 0x70000000;
			childNode->killAll(&killArg);
		}
	}

	GeneralMgrIterator<EnemyBase> iterator(this);

	iterator.first();

	while (iterator.m_container) {
		EnemyBase* enemy      = iterator.getObject();
		enemy->m_inPiklopedia = false;
		iterator.next();
	}
}

} // namespace Game

/*
 * --INFO--
 * Address:	8010DEF0
 * Size:	000110
 */
// WEAK but seems to live here? unsure. might be template shenanigans
void GeneralMgrIterator<Game::EnemyBase>::next()
{
	if (m_condition == nullptr) {
		m_index = m_container->getNext(m_index);
	} else {
		m_index = m_container->getStart();

		while (m_index != m_container->getEnd()) {
			Game::EnemyBase* enemy = getObject();
			if (m_condition->satisfy(enemy)) {
				return;
			}
			m_container->getNext(m_index);
		}
	}

	if (m_index == m_container->getEnd()) {
		m_container = static_cast<Container<Game::EnemyBase>*>(m_container->m_next);
		setFirst();
	}
}

/*
 * --INFO--
 * Address:	8010E000
 * Size:	000490
 */
void GeneralMgrIterator<Game::EnemyBase>::setFirst()
{
	if (m_container) {
		if (m_condition == nullptr) {
			m_index = m_container->getStart();
			if (m_index != m_container->getEnd()) {
				return;
			}
		} else {
			m_index = m_container->getStart();
			while (m_index != m_container->getEnd()) {
				if (!m_condition->satisfy(static_cast<Game::EnemyBase*>(m_container->getObject(m_index)))) {
					return;
				} else {
					m_container->getNext(m_index);
				}
			}
		}
		setFirst();
	}

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E044
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E0C8

lbl_8010E044:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E0A8

lbl_8010E05C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E0A8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E05C

lbl_8010E0C8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E124
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E1A8

lbl_8010E124:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E188

lbl_8010E13C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E188:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E13C

lbl_8010E1A8:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E204
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E288

lbl_8010E204:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E268

lbl_8010E21C:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E268:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E21C

lbl_8010E288:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E2E4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E368

lbl_8010E2E4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E348

lbl_8010E2FC:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E348:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E2FC

lbl_8010E368:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r0, 4(r3)
	stw      r0, 0(r31)
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_8010E47C
	lwz      r0, 0xc(r31)
	cmplwi   r0, 0
	bne      lbl_8010E3C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E448

lbl_8010E3C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_8010E428

lbl_8010E3DC:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010E47C
	lwz      r3, 0(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8010E428:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	cmplw    r4, r3
	bne      lbl_8010E3DC

lbl_8010E448:
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	cmplw    r0, r3
	bne      lbl_8010E47C
	lwz      r4, 0(r31)
	mr       r3, r31
	lwz      r0, 4(r4)
	stw      r0, 0(r31)
	bl       "setFirst__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_8010E47C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010E490
 * Size:	00002C
 */
void GeneralMgrIterator<Game::EnemyBase>::first()
{
	m_container = static_cast<Container<Game::EnemyBase>*>(m_node->m_child);
	this->setFirst();
}

namespace Game {

/*
 * --INFO--
 * Address:	8010E4BC
 * Size:	000C84
 */
void GeneralEnemyMgr::createDayendEnemies(Sys::Sphere& sphere)
{
	if (m_enemyMgrNode.getChildCount() != 0) {
		int i = 0;
		while (i < 10) {
			int randIdx              = randFloat() * m_enemyMgrNode.getChildCount();
			EnemyMgrNode* startNode  = static_cast<EnemyMgrNode*>(m_enemyMgrNode.getChildAt(randIdx));
			EnemyMgrNode* randomNode = startNode;
			do {
				EnemyTypeID::EEnemyTypeID randomID = randomNode->m_enemyID;
				EnemyInfo* randomInfo              = EnemyInfoFunc::getEnemyInfo(randomNode->m_enemyID, 0xFFFF);
				EnemyMgrNode* childNode            = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
				EnemyMgrBase* mgr                  = nullptr;

				for (childNode; childNode != nullptr; childNode = static_cast<EnemyMgrNode*>(childNode->m_next)) {
					if (childNode->m_enemyID == randomID) {
						mgr = childNode->m_mgr;
					}
				}

				TekiStat::Info* tekiInfo = playData->m_tekiStatMgr.getTekiInfo(randomID);
				P2ASSERTLINE(2203, tekiInfo != nullptr);

				if ((randomInfo->m_flags & 0x10) && (tekiInfo->m_state & 0x1)) {
					EnemyBirthArg birthArg;
					birthArg._30 = 0;

					u16 infoFlags = randomInfo->m_flags;

					if (infoFlags & 0x20) {
						birthArg.m_position = sphere.m_position;

						birthArg.m_faceDir = TAU * randFloat();

						int searchID     = randomNode->m_enemyID;
						EnemyBase* enemy = nullptr;
						int mgrID        = getEnemyMgrID(searchID);

						EnemyMgrNode* anotherNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
						EnemyMgrBase* anotherMgr  = nullptr;
						for (anotherNode; anotherNode != nullptr; anotherNode = static_cast<EnemyMgrNode*>(anotherNode->m_next)) {
							if (anotherNode->m_enemyID == mgrID) {
								anotherMgr = anotherNode->m_mgr;
							}
						}

						if (anotherMgr) {
							birthArg.m_typeID = (EnemyTypeID::EEnemyTypeID)searchID;
							enemy             = anotherMgr->birth(birthArg);
						}

						if (enemy) {
							enemy->init(nullptr);
							InteractAttack attack(enemy, 0.0f, nullptr);
							enemy->stimulate(attack);
							enemy->movie_begin(false);
						}

						i += 10;
						break;
					} else if (infoFlags & 0x40) {
						f32 randAngle      = TAU * randFloat();
						birthArg.m_faceDir = _angXZ(sphere.m_position.x, sphere.m_position.z, birthArg.m_position.x, birthArg.m_position.z);

						int searchID     = randomNode->m_enemyID;
						EnemyBase* enemy = nullptr;
						int mgrID        = getEnemyMgrID(searchID);

						EnemyMgrNode* anotherNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
						EnemyMgrBase* anotherMgr  = nullptr;
						for (anotherNode; anotherNode != nullptr; anotherNode = static_cast<EnemyMgrNode*>(anotherNode->m_next)) {
							if (anotherNode->m_enemyID == mgrID) {
								anotherMgr = anotherNode->m_mgr;
							}
						}

						if (anotherMgr) {
							birthArg.m_typeID = (EnemyTypeID::EEnemyTypeID)searchID;
							enemy             = anotherMgr->birth(birthArg);
						}

						if (enemy) {
							Sys::Sphere boundingSphere;
							enemy->getBoundingSphere(boundingSphere);
							f32 radDiff = sphere.m_radius - boundingSphere.m_radius;
							if (radDiff < 0.0f) {
								radDiff = 0.0f;
							}

							f32 cosTheta = pikmin2_cosf(randAngle);
							f32 sinTheta = pikmin2_sinf(randAngle);

							Vector3f pos(radDiff * sinTheta + sphere.m_position.x, 0.0f, radDiff * cosTheta + sphere.m_position.z);
							pos.y = mapMgr->getMinY(pos);
							enemy->setPosition(pos, false);
							enemy->m_homePosition = pos;

							enemy->init(nullptr);
							InteractAttack attack(enemy, 0.0f, nullptr);
							enemy->stimulate(attack);
							enemy->movie_begin(false);
						}

						i += 5;
						break;
					} else if (infoFlags & 0x80) {
						int maxObj    = mgr->getMaxObjects();
						int randLimit = (int)(7.0f * randFloat()) + 7;

						if (maxObj > randLimit) {
							maxObj = randLimit;
						}

						f32 randAngle = TAU * randFloat();
						f32 increment = TAU / (f32)maxObj;
						for (int j = 0; j < maxObj; j++) {

							rand();
							birthArg.m_faceDir
							    = _angXZ(sphere.m_position.x, sphere.m_position.z, birthArg.m_position.x, birthArg.m_position.z);
							int searchID     = randomNode->m_enemyID;
							EnemyBase* enemy = nullptr;
							int mgrID        = getEnemyMgrID(searchID);

							EnemyMgrNode* anotherNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
							EnemyMgrBase* anotherMgr  = nullptr;
							for (anotherNode; anotherNode != nullptr; anotherNode = static_cast<EnemyMgrNode*>(anotherNode->m_next)) {
								if (anotherNode->m_enemyID == mgrID) {
									anotherMgr = anotherNode->m_mgr;
								}
							}

							if (anotherMgr) {
								birthArg.m_typeID = (EnemyTypeID::EEnemyTypeID)searchID;
								enemy             = anotherMgr->birth(birthArg);
							}

							if (enemy) {
								Sys::Sphere boundingSphere;
								enemy->getBoundingSphere(boundingSphere);
								f32 radDiff = sphere.m_radius - boundingSphere.m_radius;
								if (radDiff < 0.0f) {
									radDiff = 0.0f;
								}

								f32 halfRad   = radDiff / 2;
								f32 randomRad = halfRad * randFloat() + halfRad;

								f32 cosTheta = pikmin2_cosf(randAngle);
								f32 sinTheta = pikmin2_sinf(randAngle);

								Vector3f pos(randomRad * sinTheta + sphere.m_position.x, 0.0f, randomRad * cosTheta + sphere.m_position.z);
								pos.y = mapMgr->getMinY(pos);
								enemy->setPosition(pos, false);
								enemy->m_homePosition = pos;

								enemy->init(nullptr);
								InteractAttack attack(enemy, 0.0f, nullptr);
								enemy->stimulate(attack);
								enemy->movie_begin(false);
							}
							randAngle += increment;
						}

						i += 3;
						break;
					} else {
						int maxObj    = mgr->getMaxObjects();
						int randLimit = (int)(7.0f * randFloat()) + 7;

						if (maxObj > randLimit) {
							maxObj = randLimit;
						}

						f32 randAngle = TAU * randFloat();
						f32 increment = TAU / (f32)maxObj;
						for (int j = 0; j < maxObj; j++) {

							rand();

							birthArg.m_faceDir
							    = _angXZ(sphere.m_position.x, sphere.m_position.z, birthArg.m_position.x, birthArg.m_position.z);

							int searchID     = randomNode->m_enemyID;
							EnemyBase* enemy = nullptr;
							int mgrID        = getEnemyMgrID(searchID);

							EnemyMgrNode* anotherNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
							EnemyMgrBase* anotherMgr  = nullptr;
							for (anotherNode; anotherNode != nullptr; anotherNode = static_cast<EnemyMgrNode*>(anotherNode->m_next)) {
								if (anotherNode->m_enemyID == mgrID) {
									anotherMgr = anotherNode->m_mgr;
								}
							}

							if (anotherMgr) {
								birthArg.m_typeID = (EnemyTypeID::EEnemyTypeID)searchID;
								enemy             = anotherMgr->birth(birthArg);
							}

							if (enemy) {
								Sys::Sphere boundingSphere;
								enemy->getBoundingSphere(boundingSphere);
								f32 radDiff = sphere.m_radius - boundingSphere.m_radius;
								if (radDiff < 0.0f) {
									radDiff = 0.0f;
								}

								f32 halfRad   = radDiff / 2;
								f32 randomRad = halfRad * randFloat() + halfRad;

								f32 cosTheta = pikmin2_cosf(randAngle);
								f32 sinTheta = pikmin2_sinf(randAngle);

								Vector3f pos(randomRad * sinTheta + sphere.m_position.x, 0.0f, randomRad * cosTheta + sphere.m_position.z);
								pos.y = mapMgr->getMinY(pos);
								enemy->setPosition(pos, false);
								enemy->m_homePosition = pos;

								enemy->init(nullptr);
								InteractAttack attack(enemy, 0.0f, nullptr);
								enemy->stimulate(attack);
								enemy->movie_begin(false);
							}

							randAngle += increment;
						}

						i += 1;
						break;
					}
				} else {
					randomNode = static_cast<EnemyMgrNode*>(randomNode->m_next);
					if (randomNode == nullptr) {
						randomNode = static_cast<EnemyMgrNode*>(m_enemyMgrNode.m_child);
					}
				}
			} while (randomNode != startNode);
			i += 10;
		}
	}
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stfd     f31, 0x160(r1)
	psq_st   f31, 360(r1), 0, qr0
	stfd     f30, 0x150(r1)
	psq_st   f30, 344(r1), 0, qr0
	stfd     f29, 0x140(r1)
	psq_st   f29, 328(r1), 0, qr0
	stfd     f28, 0x130(r1)
	psq_st   f28, 312(r1), 0, qr0
	stfd     f27, 0x120(r1)
	psq_st   f27, 296(r1), 0, qr0
	stmw     r21, 0xf4(r1)
	mr       r30, r3
	mr       r31, r4
	addi     r3, r30, 0x20
	lwz      r12, 0x20(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	beq      lbl_8010F104
	lfd      f30, lbl_805179C8@sda21(r2)
	li       r29, 0
	lfs      f31, lbl_805179A8@sda21(r2)
	lis      r28, 1
	lis      r26, 0x4330
	b        lbl_8010F0FC

lbl_8010E530:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r3, r30, 0x20
	stw      r0, 0xd4(r1)
	lwz      r12, 0x20(r30)
	stw      r26, 0xd0(r1)
	lwz      r12, 0xc(r12)
	lfd      f0, 0xd0(r1)
	fsubs    f0, f0, f30
	fdivs    f28, f0, f31
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	stw      r26, 0xd8(r1)
	addi     r3, r30, 0x20
	stw      r0, 0xdc(r1)
	lfd      f0, 0xd8(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r4, 0xe4(r1)
	bl       getChildAt__5CNodeFi
	mr       r23, r3
	mr       r27, r23

lbl_8010E594:
	lwz      r3, 0x1c(r27)
	addi     r4, r28, -1
	bl       getEnemyInfo__Q24Game13EnemyInfoFuncFii
	lwz      r4, 0x1c(r27)
	mr       r24, r3
	lwz      r3, 0x30(r30)
	li       r25, 0
	b        lbl_8010E5C8

lbl_8010E5B4:
	lwz      r0, 0x1c(r3)
	cmpw     r0, r4
	bne      lbl_8010E5C4
	lwz      r25, 0x20(r3)

lbl_8010E5C4:
	lwz      r3, 4(r3)

lbl_8010E5C8:
	cmplwi   r3, 0
	bne      lbl_8010E5B4
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x40
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	or.      r21, r3, r3
	bne      lbl_8010E600
	lis      r3, lbl_8047AABC@ha
	lis      r5, lbl_8047AAD0@ha
	addi     r3, r3, lbl_8047AABC@l
	li       r4, 0x89b
	addi     r5, r5, lbl_8047AAD0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8010E600:
	lhz      r0, 8(r24)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8010F0E0
	lbz      r0, 8(r21)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010F0E0
	addi     r3, r1, 0x9c
	bl       __ct__Q24Game13EnemyBirthArgFv
	li       r0, 0
	stb      r0, 0xcc(r1)
	lhz      r3, 8(r24)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_8010E790
	lfs      f0, 0(r31)
	stfs     f0, 0x9c(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0xa0(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0xa4(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lis      r3, gEnemyInfo__4Game@ha
	lfd      f3, lbl_805179C8@sda21(r2)
	addi     r3, r3, gEnemyInfo__4Game@l
	stw      r0, 0xe0(r1)
	li       r24, 0
	lfs      f1, lbl_805179A8@sda21(r2)
	li       r5, -1
	lfd      f2, 0xe0(r1)
	lfs      f0, lbl_805179AC@sda21(r2)
	fsubs    f2, f2, f3
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0xa8(r1)
	lwz      r4, 0x1c(r27)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010E6D8

lbl_8010E6A4:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010E6D0
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010E6C8
	mr       r5, r4
	b        lbl_8010E6D0

lbl_8010E6C8:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010E6D0:
	addi     r3, r3, 0x34
	bdnz     lbl_8010E6A4

lbl_8010E6D8:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010E6F8

lbl_8010E6E4:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010E6F4
	lwz      r3, 0x20(r6)

lbl_8010E6F4:
	lwz      r6, 4(r6)

lbl_8010E6F8:
	cmplwi   r6, 0
	bne      lbl_8010E6E4
	cmplwi   r3, 0
	beq      lbl_8010E724
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r24, r3

lbl_8010E724:
	cmplwi   r24, 0
	beq      lbl_8010E788
	mr       r3, r24
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x8c(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r24
	stw      r24, 0x90(r1)
	addi     r4, r1, 0x8c
	stw      r5, 0x8c(r1)
	stfs     f0, 0x94(r1)
	stw      r0, 0x98(r1)
	lwz      r12, 0(r24)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010E788:
	addi     r29, r29, 0xa
	b        lbl_8010F0FC

lbl_8010E790:
	rlwinm.  r0, r3, 0, 0x19, 0x19
	beq      lbl_8010EA20
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_805179C8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0xe0(r1)
	lfs      f0, lbl_805179A8@sda21(r2)
	lfd      f1, 0xe0(r1)
	lfs      f4, lbl_805179AC@sda21(r2)
	fsubs    f5, f1, f2
	lfs      f3, 0(r31)
	lfs      f1, 0x9c(r1)
	lfs      f2, 8(r31)
	fdivs    f5, f5, f0
	lfs      f0, 0xa4(r1)
	fmuls    f29, f4, f5
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0xa8(r1)
	lis      r3, gEnemyInfo__4Game@ha
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	addi     r3, r3, gEnemyInfo__4Game@l
	lwz      r4, 0x1c(r27)
	li       r24, 0
	li       r5, -1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010E84C

lbl_8010E818:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010E844
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010E83C
	mr       r5, r4
	b        lbl_8010E844

lbl_8010E83C:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010E844:
	addi     r3, r3, 0x34
	bdnz     lbl_8010E818

lbl_8010E84C:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010E86C

lbl_8010E858:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010E868
	lwz      r3, 0x20(r6)

lbl_8010E868:
	lwz      r6, 4(r6)

lbl_8010E86C:
	cmplwi   r6, 0
	bne      lbl_8010E858
	cmplwi   r3, 0
	beq      lbl_8010E898
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r24, r3

lbl_8010E898:
	cmplwi   r24, 0
	beq      lbl_8010EA18
	mr       r3, r24
	addi     r4, r1, 0x7c
	lwz      r12, 0(r24)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r31)
	lfs      f1, 0x88(r1)
	lfs      f0, lbl_805179B0@sda21(r2)
	fsubs    f5, f2, f1
	fcmpo    cr0, f5, f0
	bge      lbl_8010E8D4
	fmr      f5, f0

lbl_8010E8D4:
	lfs      f0, lbl_805179B0@sda21(r2)
	fmr      f1, f29
	fcmpo    cr0, f29, f0
	bge      lbl_8010E8E8
	fneg     f1, f29

lbl_8010E8E8:
	lfs      f3, lbl_805179B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 8(r31)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f2
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f4, f5, f0, f1
	bge      lbl_8010E948
	lfs      f0, lbl_805179B8@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8010E960

lbl_8010E948:
	fmuls    f0, f29, f3
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8010E960:
	lfs      f1, 0(r31)
	addi     r4, r1, 0x70
	lfs      f0, lbl_805179B0@sda21(r2)
	fmadds   f1, f5, f2, f1
	stfs     f4, 0x78(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x74(r1)
	stfs     f1, 0x70(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x74(r1)
	mr       r3, r24
	addi     r4, r1, 0x70
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x70(r1)
	mr       r3, r24
	li       r4, 0
	stfs     f0, 0x198(r24)
	lfs      f0, 0x74(r1)
	stfs     f0, 0x19c(r24)
	lfs      f0, 0x78(r1)
	stfs     f0, 0x1a0(r24)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x60(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r24
	stw      r24, 0x64(r1)
	addi     r4, r1, 0x60
	stw      r5, 0x60(r1)
	stfs     f0, 0x68(r1)
	stw      r0, 0x6c(r1)
	lwz      r12, 0(r24)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r24
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010EA18:
	addi     r29, r29, 5
	b        lbl_8010F0FC

lbl_8010EA20:
	rlwinm.  r0, r3, 0, 0x18, 0x18
	beq      lbl_8010ED84
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	mr       r22, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xe4(r1)
	lfd      f3, lbl_805179C8@sda21(r2)
	stw      r0, 0xe0(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	lfd      f2, 0xe0(r1)
	lfs      f0, lbl_805179BC@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r3, 0xdc(r1)
	addi     r0, r3, 2
	cmpw     r22, r0
	ble      lbl_8010EA8C
	mr       r22, r0

lbl_8010EA8C:
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xd4(r1)
	xoris    r0, r22, 0x8000
	lis      r4, atanTable___5JMath@ha
	lis      r3, gEnemyInfo__4Game@ha
	stw      r5, 0xd0(r1)
	addi     r25, r4, atanTable___5JMath@l
	lfd      f4, lbl_805179C8@sda21(r2)
	addi     r24, r3, gEnemyInfo__4Game@l
	lfd      f0, 0xd0(r1)
	li       r21, 0
	stw      r0, 0xec(r1)
	fsubs    f3, f0, f4
	lfs      f2, lbl_805179A8@sda21(r2)
	stw      r5, 0xe8(r1)
	lfs      f1, lbl_805179AC@sda21(r2)
	lfd      f0, 0xe8(r1)
	fdivs    f2, f3, f2
	fsubs    f0, f0, f4
	fmuls    f29, f1, f2
	fdivs    f28, f1, f0
	b        lbl_8010ED74

lbl_8010EAEC:
	bl       rand
	lfs      f3, 0(r31)
	mr       r3, r25
	lfs      f1, 0x9c(r1)
	lfs      f2, 8(r31)
	lfs      f0, 0xa4(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0xa8(r1)
	mr       r3, r24
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	li       r23, 0
	lwz      r4, 0x1c(r27)
	li       r5, -1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010EB6C

lbl_8010EB38:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010EB64
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010EB5C
	mr       r5, r4
	b        lbl_8010EB64

lbl_8010EB5C:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010EB64:
	addi     r3, r3, 0x34
	bdnz     lbl_8010EB38

lbl_8010EB6C:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010EB8C

lbl_8010EB78:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010EB88
	lwz      r3, 0x20(r6)

lbl_8010EB88:
	lwz      r6, 4(r6)

lbl_8010EB8C:
	cmplwi   r6, 0
	bne      lbl_8010EB78
	cmplwi   r3, 0
	beq      lbl_8010EBB8
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r23, r3

lbl_8010EBB8:
	cmplwi   r23, 0
	beq      lbl_8010ED6C
	mr       r3, r23
	addi     r4, r1, 0x50
	lwz      r12, 0(r23)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r31)
	lfs      f1, 0x5c(r1)
	lfs      f0, lbl_805179B0@sda21(r2)
	fsubs    f27, f2, f1
	fcmpo    cr0, f27, f0
	bge      lbl_8010EBF4
	fmr      f27, f0

lbl_8010EBF4:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	fmr      f4, f29
	lfs      f0, lbl_805179C0@sda21(r2)
	stw      r0, 0xe8(r1)
	lfd      f2, lbl_805179C8@sda21(r2)
	fmuls    f3, f0, f27
	lfd      f0, 0xe8(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805179B0@sda21(r2)
	fcmpo    cr0, f29, f0
	fdivs    f0, f2, f1
	fmadds   f5, f3, f0, f3
	bge      lbl_8010EC3C
	fneg     f4, f29

lbl_8010EC3C:
	lfs      f3, lbl_805179B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f1, 8(r31)
	fcmpo    cr0, f29, f0
	fctiwz   f0, f2
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f4, f5, f0, f1
	bge      lbl_8010EC9C
	lfs      f0, lbl_805179B8@sda21(r2)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8010ECB4

lbl_8010EC9C:
	fmuls    f0, f29, f3
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8010ECB4:
	lfs      f1, 0(r31)
	addi     r4, r1, 0x44
	lfs      f0, lbl_805179B0@sda21(r2)
	fmadds   f1, f5, f2, f1
	stfs     f4, 0x4c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x44(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x48(r1)
	mr       r3, r23
	addi     r4, r1, 0x44
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x44(r1)
	mr       r3, r23
	li       r4, 0
	stfs     f0, 0x198(r23)
	lfs      f0, 0x48(r1)
	stfs     f0, 0x19c(r23)
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x1a0(r23)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 0x34(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r23
	stw      r23, 0x38(r1)
	addi     r4, r1, 0x34
	stw      r5, 0x34(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x40(r1)
	lwz      r12, 0(r23)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010ED6C:
	fadds    f29, f29, f28
	addi     r21, r21, 1

lbl_8010ED74:
	cmpw     r21, r22
	blt      lbl_8010EAEC
	addi     r29, r29, 3
	b        lbl_8010F0FC

lbl_8010ED84:
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	mr       r21, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	lfd      f3, lbl_805179C8@sda21(r2)
	stw      r0, 0xe8(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	lfd      f2, 0xe8(r1)
	lfs      f0, lbl_805179C4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xe0(r1)
	lwz      r3, 0xe4(r1)
	addi     r0, r3, 7
	cmpw     r21, r0
	ble      lbl_8010EDE8
	mr       r21, r0

lbl_8010EDE8:
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xdc(r1)
	xoris    r0, r21, 0x8000
	lis      r4, atanTable___5JMath@ha
	lis      r3, gEnemyInfo__4Game@ha
	stw      r5, 0xd8(r1)
	addi     r24, r4, atanTable___5JMath@l
	lfd      f4, lbl_805179C8@sda21(r2)
	addi     r25, r3, gEnemyInfo__4Game@l
	lfd      f0, 0xd8(r1)
	li       r22, 0
	stw      r0, 0xd4(r1)
	fsubs    f3, f0, f4
	lfs      f2, lbl_805179A8@sda21(r2)
	stw      r5, 0xd0(r1)
	lfs      f1, lbl_805179AC@sda21(r2)
	lfd      f0, 0xd0(r1)
	fdivs    f2, f3, f2
	fsubs    f0, f0, f4
	fmuls    f28, f1, f2
	fdivs    f29, f1, f0
	b        lbl_8010F0D0

lbl_8010EE48:
	bl       rand
	lfs      f3, 0(r31)
	mr       r3, r24
	lfs      f1, 0x9c(r1)
	lfs      f2, 8(r31)
	lfs      f0, 0xa4(r1)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	stfs     f1, 0xa8(r1)
	mr       r3, r25
	lwz      r0, gEnemyInfoNum__4Game@sda21(r13)
	li       r23, 0
	lwz      r4, 0x1c(r27)
	li       r5, -1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8010EEC8

lbl_8010EE94:
	lbz      r0, 4(r3)
	extsb    r0, r0
	cmpw     r0, r4
	bne      lbl_8010EEC0
	lhz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8010EEB8
	mr       r5, r4
	b        lbl_8010EEC0

lbl_8010EEB8:
	lbz      r5, 5(r3)
	extsb    r5, r5

lbl_8010EEC0:
	addi     r3, r3, 0x34
	bdnz     lbl_8010EE94

lbl_8010EEC8:
	lwz      r6, 0x30(r30)
	li       r3, 0
	b        lbl_8010EEE8

lbl_8010EED4:
	lwz      r0, 0x1c(r6)
	cmpw     r0, r5
	bne      lbl_8010EEE4
	lwz      r3, 0x20(r6)

lbl_8010EEE4:
	lwz      r6, 4(r6)

lbl_8010EEE8:
	cmplwi   r6, 0
	bne      lbl_8010EED4
	cmplwi   r3, 0
	beq      lbl_8010EF14
	stw      r4, 0xc4(r1)
	addi     r4, r1, 0x9c
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r23, r3

lbl_8010EF14:
	cmplwi   r23, 0
	beq      lbl_8010F0C8
	mr       r3, r23
	addi     r4, r1, 0x24
	lwz      r12, 0(r23)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r31)
	lfs      f1, 0x30(r1)
	lfs      f0, lbl_805179B0@sda21(r2)
	fsubs    f27, f2, f1
	fcmpo    cr0, f27, f0
	bge      lbl_8010EF50
	fmr      f27, f0

lbl_8010EF50:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	fmr      f4, f28
	lfs      f0, lbl_805179C0@sda21(r2)
	stw      r0, 0xe8(r1)
	lfd      f2, lbl_805179C8@sda21(r2)
	fmuls    f3, f0, f27
	lfd      f0, 0xe8(r1)
	lfs      f1, lbl_805179A8@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_805179B0@sda21(r2)
	fcmpo    cr0, f28, f0
	fdivs    f0, f2, f1
	fmadds   f5, f3, f0, f3
	bge      lbl_8010EF98
	fneg     f4, f28

lbl_8010EF98:
	lfs      f3, lbl_805179B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f1, 8(r31)
	fcmpo    cr0, f28, f0
	fctiwz   f0, f2
	stfd     f0, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f4, f5, f0, f1
	bge      lbl_8010EFF8
	lfs      f0, lbl_805179B8@sda21(r2)
	fmuls    f0, f28, f0
	fctiwz   f0, f0
	stfd     f0, 0xd8(r1)
	lwz      r0, 0xdc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_8010F010

lbl_8010EFF8:
	fmuls    f0, f28, f3
	fctiwz   f0, f0
	stfd     f0, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_8010F010:
	lfs      f1, 0(r31)
	addi     r4, r1, 0x18
	lfs      f0, lbl_805179B0@sda21(r2)
	fmadds   f1, f5, f2, f1
	stfs     f4, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x18(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1c(r1)
	mr       r3, r23
	addi     r4, r1, 0x18
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x18(r1)
	mr       r3, r23
	li       r4, 0
	stfs     f0, 0x198(r23)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x19c(r23)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x1a0(r23)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_805179B0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractAttack@ha
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q24Game14InteractAttack@l
	li       r0, 0
	mr       r3, r23
	stw      r23, 0xc(r1)
	addi     r4, r1, 8
	stw      r5, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r23)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r23
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8010F0C8:
	fadds    f28, f28, f29
	addi     r22, r22, 1

lbl_8010F0D0:
	cmpw     r22, r21
	blt      lbl_8010EE48
	addi     r29, r29, 1
	b        lbl_8010F0FC

lbl_8010F0E0:
	lwz      r27, 4(r27)
	cmplwi   r27, 0
	bne      lbl_8010F0F0
	lwz      r27, 0x30(r30)

lbl_8010F0F0:
	cmplw    r27, r23
	bne      lbl_8010E594
	addi     r29, r29, 0xa

lbl_8010F0FC:
	cmpwi    r29, 0xa
	blt      lbl_8010E530

lbl_8010F104:
	psq_l    f31, 360(r1), 0, qr0
	lfd      f31, 0x160(r1)
	psq_l    f30, 344(r1), 0, qr0
	lfd      f30, 0x150(r1)
	psq_l    f29, 328(r1), 0, qr0
	lfd      f29, 0x140(r1)
	psq_l    f28, 312(r1), 0, qr0
	lfd      f28, 0x130(r1)
	psq_l    f27, 296(r1), 0, qr0
	lfd      f27, 0x120(r1)
	lmw      r21, 0xf4(r1)
	lwz      r0, 0x174(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}
} // namespace Game
