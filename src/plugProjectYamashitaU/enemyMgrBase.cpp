#include "CollInfo.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JUT/JUTException.h"
#include "LoadResource.h"
#include "PSSystem/PSSystemIF.h"
#include "System.h"

namespace Game {

/*
 * --INFO--
 * Address:	8012EC24
 * Size:	000070
 */
EnemyBirthArg::EnemyBirthArg()
    : m_position(Vector3f(0.0f))
    , m_faceDir(0.0f)
    , m_tekiBirthType(0)
    , m_generator(nullptr)
    , m_typeID(EnemyTypeID::EnemyID_NULL)
    , _2C(0.0f)
    , _30(1)
{
}

/*
 * --INFO--
 * Address:	8012EC94
 * Size:	0000C4
 */
EnemyMgrBase::EnemyMgrBase(int objLimit, u8 modelType)
{
	m_modelData           = nullptr;
	m_animMgr             = nullptr;
	m_modelType           = modelType;
	m_collPartFactory     = nullptr;
	m_objLimit            = objLimit;
	m_objCount            = 0;
	m_parms               = nullptr;
	m_generator           = nullptr;
	m_stoneInfo.m_infoCnt = 0;
	m_stoneInfo.m_infoArr = nullptr;
}

/*
 * --INFO--
 * Address:	8012ED58
 * Size:	000070
 */
void EnemyMgrBase::startMovie()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->startMovie();
		}
	}
}

/*
 * --INFO--
 * Address:	8012EDC8
 * Size:	000070
 */
void EnemyMgrBase::endMovie()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->endMovie();
		}
	}
}

/*
 * --INFO--
 * Address:	8012EE38
 * Size:	0000A0
 */
void EnemyMgrBase::alloc()
{
	m_objCount = 0;
	createObj(m_objLimit);

	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		enemy->constructor();
	}

	doAlloc();
}

/*
 * --INFO--
 * Address:	8012EED8
 * Size:	000110
 */
void EnemyMgrBase::doAnimation()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->_1C & 1) || enemy->isMovieActor())) {
			sys->m_timers->_start("e-upd", true);
			enemy->update();
			sys->m_timers->_stop("e-upd");

			sys->m_timers->_start("e-doa", true);
			enemy->doAnimation();
			sys->m_timers->_stop("e-doa");
		}
	}
}

/*
 * --INFO--
 * Address:	8012EFE8
 * Size:	0000B4
 */
void EnemyMgrBase::doEntry()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->_1C & 1) || enemy->isMovieActor())) {
			enemy->doEntry();
		}
	}
}

/*
 * --INFO--
 * Address:	8012F09C
 * Size:	00008C
 */
void EnemyMgrBase::doSetView(int viewport)
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doSetView(viewport);
		}
	}
}

/*
 * --INFO--
 * Address:	8012F128
 * Size:	00007C
 */
void EnemyMgrBase::doViewCalc()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doViewCalc();
		}
	}
}

/*
 * --INFO--
 * Address:	8012F1A4
 * Size:	0000EC
 */
void EnemyMgrBase::doSimulation(float arg)
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->m_pellet) {
			enemy->doSimulationCarcass(arg);
		} else {
			if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->_1C & 1) || enemy->isMovieActor())) {
				enemy->doSimulation(arg);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8012F290
 * Size:	0000C4
 */
void EnemyMgrBase::doDirectDraw(Graphics& graphics)
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->_1C & 1) || enemy->isMovieActor())) {
			enemy->doDirectDraw(graphics);
		}
	}
}

/*
 * --INFO--
 * Address:	8012f354
 * Size:	000074
 */
void* EnemyMgrBase::getNext(void* object)
{
	for (int i = (int)object + 1; i < m_objLimit; i++) {
		if (getEnemy(i)->isEvent(0, EB_Alive)) {
			return (void*)i;
		}
	}
	return (void*)m_objLimit;
}

/*
 * --INFO--
 * Address:	8012F3C8
 * Size:	000184
 */
EnemyBase* EnemyMgrBase::birth(Game::EnemyBirthArg& arg)
{
	if (arg.m_typeID == ~EnemyTypeID::EnemyID_Pelplant) {
		arg.m_typeID = getEnemyTypeID();
	}

	EnemyBase* enemy = getEnemyByID(arg.m_typeID);

	if (enemy) {
		int objs = m_objCount;
		m_objCount++;
		enemy->birth(arg.m_position, arg.m_faceDir);
		enemy->m_maxExistTime = arg._2C;
		enemy->setOtakaraCode(arg.m_otakaraItemCode);

		enemy->m_pelletInfo.m_color       = arg.m_pelletInfo.m_color;
		enemy->m_pelletInfo.m_size        = arg.m_pelletInfo.m_size;
		enemy->m_pelletInfo.m_minPellets  = arg.m_pelletInfo.m_minPellets;
		enemy->m_pelletInfo.m_maxPellets  = arg.m_pelletInfo.m_maxPellets;
		enemy->m_pelletInfo.m_spawnChance = arg.m_pelletInfo.m_spawnChance;

		if (arg._30) {
			enemy->m_inPiklopedia = true;
		} else {
			enemy->m_inPiklopedia = false;
		}

		enemy->m_dropGroup            = arg.m_tekiBirthType;
		EnemyGeneratorBase* generator = arg.m_generator;

		if (generator) {
			if (EnemyInitialParamBase* param = static_cast<EnemyInitialParamBase*>(generator->getInitialParam())) {
				enemy->setInitialSetting(param);
			}
		}
	}

	return enemy;
}

/*
 * --INFO--
 * Address:	8012F554
 * Size:	000164
 */
void EnemyMgrBase::kill(EnemyBase* enemy)
{
	if (enemy->isEvent(0, EB_Alive)) {
		EnemyBase* currEnemy;
		for (int i = 0; i < m_objLimit; i++) {
			currEnemy = getEnemy(i);
			if (currEnemy == enemy) {
				currEnemy->resetEvent(0, EB_Alive);
				m_objCount--;
				break;
			}
		}
		return;
	}

	EnemyFSMState* state = enemy->m_currentLifecycleState;
	if (state) {
		JUT_PANICLINE(447, "kill dead enemy. %s %d\n state:%s", enemy->getCreatureName(), enemy->getCreatureID(), state->m_name);
	} else {
		JUT_PANICLINE(453, "kill dead enemy. %s %d\n state:%d", enemy->getCreatureName(), enemy->getCreatureID(), enemy->getStateID());
	}
}

/*
 * --INFO--
 * Address:	8012F6B8
 * Size:	0000A8
 */
void EnemyMgrBase::killAll(CreatureKillArg* arg)
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->kill(arg);
		}
	}

	if (m_objCount != 0) {
		JUT_PANICLINE(480, "mNumObjects is not zero. [%d] \n", m_objCount);
	}
}

/*
 * --INFO--
 * Address:	8012F760
 * Size:	00003C
 */
bool EnemyMgrBase::isValidEnemyTypeID()
{
	const bool result = (getEnemyTypeID() != EnemyTypeID::EnemyID_NULL);
	return result;
}

/*
 * --INFO--
 * Address:	8012F79C
 * Size:	000100
 */
void Game::EnemyMgrBase::setupSoundViewerAndBas()
{
	PSGame::SoundCreatureMgr soundMgr;

	if (isValidEnemyTypeID() && (m_animMgr != nullptr)) {
		char* resName   = EnemyInfoFunc::getEnemyResName(getEnemyTypeID(), 0xFFFF);
		char* enemyName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);

		JKRFileLoader* fileLoader = PSSystem::getLoaderInstance();

		m_animMgr->connectBasArc(resName, enemyName, fileLoader);
		m_animMgr->registerSoundViewer(&soundMgr);
	}
}

/*
 * --INFO--
 * Address:	8012F89C
 * Size:	00008C
 */
void EnemyMgrBase::init(EnemyParmsBase* parms)
{
	m_parms = parms;
	loadResource();
	initStoneSetting();
	initParms();
	initObjects();
	initGenerator();
}

/*
 * --INFO--
 * Address:	8012F928
 * Size:	000024
 */
void EnemyMgrBase::setDebugParm(u32 debugParm) { m_parms->setDebugParm(debugParm); }

/*
 * --INFO--
 * Address:	8012F94C
 * Size:	000024
 */
void EnemyMgrBase::resetDebugParm(u32 debugParm) { m_parms->resetDebugParm(debugParm); }

/*
 * --INFO--
 * Address:	8012F970
 * Size:	0000AC
 */
SysShape::Model* EnemyMgrBase::createModel()
{
	SysShape::Model* model = new SysShape::Model(m_modelData, 0x20000, m_modelType);

	Matrixf identity;
	PSMTXIdentity(identity.m_matrix.mtxView);
	PSMTXCopy(identity.m_matrix.mtxView, j3dSys._00);

	J3DModel* j3dModel = model->m_j3dModel;
	j3dModel->calc();
	j3dModel->calcMaterial();
	j3dModel->makeDL();
	j3dModel->lock();

	return model;
}

/*
 * --INFO--
 * Address:	8012FA1C
 * Size:	0000C0
 */
void EnemyMgrBase::initParms()
{
	if (isValidEnemyTypeID()) {
		EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* paramName = info->m_paramName;
		if (*paramName == 0) {
			paramName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		char file[250];
		sprintf(file, "%s/enemyParm.txt", paramName);
		setupParms(file);
	}
}

/*
 * --INFO--
 * Address:	8012FADC
 * Size:	000078
 */
void EnemyMgrBase::loadStoneSetting(const char* filename)
{
	void* resource = gParmArc->getResource(filename);
	if (resource) {
		RamStream stream(resource, -1);
		stream.resetPosition(STREAM_MODE_TEXT, STREAM_MODE_TEXT);
		m_stoneInfo.setup(stream);
	}
}

/*
 * --INFO--
 * Address:	8012FB54
 * Size:	000090
 */
bool EnemyMgrBase::setupParms(const char* filename)
{
	bool result = m_parms->loadSettingFile(gParmArc, (char*)filename);
	for (int i = 0; i < m_objLimit; i++) {
		getEnemy(i)->m_parms = m_parms;
	}
	return result;
}

/*
 * --INFO--
 * Address:	8012FBE4
 * Size:	000088
 */
void EnemyMgrBase::loadResource()
{
	if (isValidEnemyTypeID()) {
		loadModelData();
		loadAnimData();
		loadTexData();
	}
}

/*
 * --INFO--
 * Address:	8012FC6C
 * Size:	0002FC
 */
void EnemyMgrBase::initObjects()
{
	if (isValidEnemyTypeID()) {
		EnemyInfo* info     = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* collisionName = info->m_collName;
		if (*collisionName == 0) {
			collisionName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		char file[250];
		sprintf(file, "%s/enemyColl.txt", collisionName);

		for (int i = 0; i < m_objLimit; i++) {
			SysShape::Model* model = createModel();
			m_animMgr->m_model     = model;

			getEnemy(i)->setCreatureID(i);
			getEnemy(i)->m_mgr   = this;
			getEnemy(i)->m_model = model;
			getEnemy(i)->setAnimMgr(m_animMgr);
			getEnemy(i)->initMouthSlots();
			getEnemy(i)->initWalkSmokeEffect();
			getEnemy(i)->m_enemyStoneObj = new EnemyStone::Obj(getEnemy(i), &m_stoneInfo);
		}

		m_collPartFactory = CollPartFactory::load(gParmArc, file);

		for (int i = 0; i < m_objLimit; i++) {
			getEnemy(i)->m_collTree = new CollTree();
			getEnemy(i)->m_collTree->createFromFactory(getEnemy(i)->m_model, m_collPartFactory, nullptr);
			getEnemy(i)->m_collTree->attachModel(getEnemy(i)->m_model);
		}
	}
}

/*
 * --INFO--
 * Address:	8012FF68
 * Size:	0000C0
 */
void EnemyMgrBase::initStoneSetting()
{
	if (isValidEnemyTypeID()) {
		EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* stoneName = info->m_stoneName;
		if (*stoneName == '\0') {
			stoneName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		char file[250];
		sprintf(file, "%s/enemyStoneInfo.txt", stoneName);
		loadStoneSetting(file);
	}
}

/*
 * --INFO--
 * Address:	80130028
 * Size:	0000E4
 */
J3DModelData* EnemyMgrBase::loadModelData(JKRArchive* archive)
{
	J3DModelData* modelData = nullptr;

	void* bmd = JKRFileLoader::getGlbResource("enemy.bmd", archive);
	if (bmd) {
		modelData = doLoadBmd(bmd);
	} else {
		void* bdl = JKRFileLoader::getGlbResource("enemy.bdl", archive);
		if (bdl) {
			modelData = doLoadBdl(bdl);
		}
	}

	if (modelData) {
		m_modelData = modelData;
		m_modelData->newSharedDisplayList(0x40000);
		m_modelData->makeSharedDL();
	} else {
		JUT_PANICLINE(815, "EnemyMgrBase:Can not make mdlData\n");
	}

	return modelData;
}

/*
 * --INFO--
 * Address:	8013010C
 * Size:	0000C0
 */
void EnemyMgrBase::loadModelData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	char* modelName = info->m_modelName;
	if (*modelName == 0) {
		modelName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}

	char file[250];
	sprintf(file, "/enemy/data/%s/model.szs", modelName);

	LoadResource::Arg arg(file);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	loadModelData(node->m_archive);
}

/*
 * --INFO--
 * Address:	801301CC
 * Size:	000154
 */
void EnemyMgrBase::loadAnimData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	char* animName  = info->m_animName;
	if (*animName == 0) {
		animName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}

	char file[256];
	sprintf(file, "/enemy/data/%s/anim.szs", animName);

	JKRArchive* archive = nullptr;
	LoadResource::Arg arg(file);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);

	if (node) {
		archive = node->m_archive;
	}
	if (archive) {
		info              = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* animMgrName = info->m_animMgrName;
		if (*animMgrName == 0) {
			animMgrName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		sprintf(file, "%s/enemyAnimMgr.txt", animMgrName);
		m_animMgr = SysShape::AnimMgr::load(gParmArc, file, m_modelData, archive, "");
	} else {
		m_animMgr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80130320
 * Size:	000074
 */
void EnemyMgrBase::loadTexData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	if (*info->m_textureName == 0) {
		EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}
}

/*
 * --INFO--
 * Address:	80130394
 * Size:	00002C
 */
J3DModelData* EnemyMgrBase::doLoadBmd(void* bmd) { return J3DModelLoaderDataBase::load(bmd, 0x240010); }

/*
 * --INFO--
 * Address:	801303C0
 * Size:	000028
 */
J3DModelData* EnemyMgrBase::doLoadBdl(void* bdl) { return J3DModelLoaderDataBase::loadBinaryDisplayList(bdl, 0x2000); }

/*
 * --INFO--
 * Address:	801303E8
 * Size:	000090
 */
void EnemyMgrBase::initGenerator() { m_generator = new EnemyGeneratorBase("EnemyGenerator"); }

/*
 * --INFO--
 * Address:	80130478
 * Size:	0000E8
 */
void EnemyMgrBase::doAnimationAlwaysMovieActor()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			sys->m_timers->_start("e-upd", true);
			enemy->update();
			sys->m_timers->_stop("e-upd");

			sys->m_timers->_start("e-doa", true);
			enemy->doAnimation();
			sys->m_timers->_stop("e-doa");
		}
	}
}

/*
 * --INFO--
 * Address:	80130560
 * Size:	00007C
 */
void EnemyMgrBase::doEntryAlwaysMovieActor()
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doEntry();
		}
	}
}

/*
 * --INFO--
 * Address:	801305DC
 * Size:	00009C
 */
void EnemyMgrBase::doSimulationAlwaysMovieActor(float arg)
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if ((enemy->isEvent(0, EB_Alive)) && (enemy->m_pellet == nullptr)) {
			enemy->doSimulation(arg);
		}
	}
}

/*
 * --INFO--
 * Address:	80130678
 * Size:	00008C
 */
void EnemyMgrBase::doDirectDrawAlwaysMovieActor(Graphics& graphics)
{
	for (int i = 0; i < m_objLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doDirectDraw(graphics);
		}
	}
}
} // namespace Game
