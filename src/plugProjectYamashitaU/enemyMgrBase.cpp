#include "CollInfo.h"
#include "Game/EnemyBase.h"
#include "Game/EnemyMgrBase.h"
#include "Game/generalEnemyMgr.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/JUtility/JUTException.h"
#include "LoadResource.h"
#include "PSSystem/PSSystemIF.h"
#include "System.h"

namespace Game {

/**
 * @note Address: 0x8012EC24
 * @note Size: 0x70
 */
EnemyBirthArg::EnemyBirthArg()
    : mPosition(Vector3f(0.0f))
    , mFaceDir(0.0f)
    , mTekiBirthType(0)
    , mGenerator(nullptr)
    , mTypeID(EnemyTypeID::EnemyID_NULL)
    , mExistenceLength(0.0f)
    , mIsInPiklopedia(true)
{
}

/**
 * @note Address: 0x8012EC94
 * @note Size: 0xC4
 */
EnemyMgrBase::EnemyMgrBase(int objLimit, u8 viewNum)
{
	mModelData          = nullptr;
	mAnimMgr            = nullptr;
	mMtxBufferSize      = viewNum;
	mCollPartFactory    = nullptr;
	mObjLimit           = objLimit;
	mNumObjects         = 0;
	mParms              = nullptr;
	mGenerator          = nullptr;
	mStoneInfo.mLength  = 0;
	mStoneInfo.mObjList = nullptr;
}

/**
 * @note Address: 0x8012ED58
 * @note Size: 0x70
 */
void EnemyMgrBase::startMovie()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->startMovie();
		}
	}
}

/**
 * @note Address: 0x8012EDC8
 * @note Size: 0x70
 */
void EnemyMgrBase::endMovie()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->endMovie();
		}
	}
}

/**
 * @note Address: 0x8012EE38
 * @note Size: 0xA0
 */
void EnemyMgrBase::alloc()
{
	mNumObjects = 0;
	createObj(mObjLimit);

	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		enemy->constructor();
	}

	doAlloc();
}

/**
 * @note Address: 0x8012EED8
 * @note Size: 0x110
 */
void EnemyMgrBase::doAnimation()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->mDrawFlag & 1) || enemy->isMovieActor())) {
			sys->mTimers->_start("e-upd", true);
			enemy->update();
			sys->mTimers->_stop("e-upd");

			sys->mTimers->_start("e-doa", true);
			enemy->doAnimation();
			sys->mTimers->_stop("e-doa");
		}
	}
}

/**
 * @note Address: 0x8012EFE8
 * @note Size: 0xB4
 */
void EnemyMgrBase::doEntry()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->mDrawFlag & 1) || enemy->isMovieActor())) {
			enemy->doEntry();
		}
	}
}

/**
 * @note Address: 0x8012F09C
 * @note Size: 0x8C
 */
void EnemyMgrBase::doSetView(int viewportNumber)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doSetView(viewportNumber);
		}
	}
}

/**
 * @note Address: 0x8012F128
 * @note Size: 0x7C
 */
void EnemyMgrBase::doViewCalc()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doViewCalc();
		}
	}
}

/**
 * @note Address: 0x8012F1A4
 * @note Size: 0xEC
 */
void EnemyMgrBase::doSimulation(f32 arg)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);

		if (enemy->mPellet) {
			enemy->doSimulationCarcass(arg);
		} else if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->mDrawFlag & 1) || enemy->isMovieActor())) {
			enemy->doSimulation(arg);
		}
	}
}

/**
 * @note Address: 0x8012F290
 * @note Size: 0xC4
 */
void EnemyMgrBase::doDirectDraw(Graphics& graphics)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->mDrawFlag & 1) || enemy->isMovieActor())) {
			enemy->doDirectDraw(graphics);
		}
	}
}

/**
 * @note Address: 0x8012f354
 * @note Size: 0x74
 */
void* EnemyMgrBase::getNext(void* object)
{
	for (int i = (int)object + 1; i < mObjLimit; i++) {
		if (getEnemy(i)->isEvent(0, EB_Alive)) {
			return (void*)i;
		}
	}
	return (void*)mObjLimit;
}

/**
 * @note Address: 0x8012F3C8
 * @note Size: 0x184
 */
EnemyBase* EnemyMgrBase::birth(EnemyBirthArg& arg)
{
	if (arg.mTypeID == ~EnemyTypeID::EnemyID_Pelplant) {
		arg.mTypeID = getEnemyTypeID();
	}

	EnemyBase* enemy = getEnemyByID(arg.mTypeID);

	if (enemy) {
		int objs = mNumObjects;
		mNumObjects++;
		enemy->birth(arg.mPosition, arg.mFaceDir);
		enemy->mExistDuration = arg.mExistenceLength;
		enemy->setOtakaraCode(arg.mOtakaraItemCode);

		enemy->mPelletInfo.mColor       = arg.mPelletInfo.mColor;
		enemy->mPelletInfo.mSize        = arg.mPelletInfo.mSize;
		enemy->mPelletInfo.mMinPellets  = arg.mPelletInfo.mMinPellets;
		enemy->mPelletInfo.mMaxPellets  = arg.mPelletInfo.mMaxPellets;
		enemy->mPelletInfo.mSpawnChance = arg.mPelletInfo.mSpawnChance;

		if (arg.mIsInPiklopedia) {
			enemy->mInPiklopedia = true;
		} else {
			enemy->mInPiklopedia = false;
		}

		enemy->mDropGroup             = arg.mTekiBirthType;
		EnemyGeneratorBase* generator = arg.mGenerator;

		if (generator) {
			if (EnemyInitialParamBase* param = static_cast<EnemyInitialParamBase*>(generator->getInitialParam())) {
				enemy->setInitialSetting(param);
			}
		}
	}

	return enemy;
}

/**
 * @note Address: 0x8012F554
 * @note Size: 0x164
 */
void EnemyMgrBase::kill(EnemyBase* enemy)
{
	if (enemy->isEvent(0, EB_Alive)) {
		EnemyBase* currEnemy;
		for (int i = 0; i < mObjLimit; i++) {
			currEnemy = getEnemy(i);
			if (currEnemy == enemy) {
				currEnemy->disableEvent(0, EB_Alive);
				mNumObjects--;
				break;
			}
		}
		return;
	}

	EnemyFSMState* state = enemy->mCurrentLifecycleState;
	if (state) {
		JUT_PANICLINE(447, "kill dead enemy. %s %d\n state:%s", enemy->getCreatureName(), enemy->getCreatureID(), state->mName);
	} else {
		JUT_PANICLINE(453, "kill dead enemy. %s %d\n state:%d", enemy->getCreatureName(), enemy->getCreatureID(), enemy->getStateID());
	}
}

/**
 * @note Address: 0x8012F6B8
 * @note Size: 0xA8
 */
void EnemyMgrBase::killAll(CreatureKillArg* arg)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->kill(arg);
		}
	}

	if (mNumObjects != 0) {
		JUT_PANICLINE(480, "mNumObjects is not zero. [%d] \n", mNumObjects);
	}
}

/**
 * @note Address: 0x8012F760
 * @note Size: 0x3C
 */
bool EnemyMgrBase::isValidEnemyTypeID()
{
	const bool result = (getEnemyTypeID() != EnemyTypeID::EnemyID_NULL);
	return result;
}

/**
 * @note Address: 0x8012F79C
 * @note Size: 0x100
 */
void EnemyMgrBase::setupSoundViewerAndBas()
{
	PSGame::SoundCreatureMgr soundMgr;

	if (isValidEnemyTypeID() && (mAnimMgr != nullptr)) {
		char* resName   = EnemyInfoFunc::getEnemyResName(getEnemyTypeID(), 0xFFFF);
		char* enemyName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);

		JKRFileLoader* fileLoader = PSSystem::getLoaderInstance();

		mAnimMgr->connectBasArc(resName, enemyName, fileLoader);
		mAnimMgr->registerSoundViewer(&soundMgr);
	}
}

/**
 * @note Address: 0x8012F89C
 * @note Size: 0x8C
 */
void EnemyMgrBase::init(EnemyParmsBase* parms)
{
	mParms = parms;
	loadResource();
	initStoneSetting();
	initParms();
	initObjects();
	initGenerator();
}

/**
 * @note Address: 0x8012F928
 * @note Size: 0x24
 */
void EnemyMgrBase::setDebugParm(u32 debugParm) { mParms->setDebugParm(debugParm); }

/**
 * @note Address: 0x8012F94C
 * @note Size: 0x24
 */
void EnemyMgrBase::resetDebugParm(u32 debugParm) { mParms->resetDebugParm(debugParm); }

/**
 * @note Address: 0x8012F970
 * @note Size: 0xAC
 */
SysShape::Model* EnemyMgrBase::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, J3DMODEL_CreateNewDL, mMtxBufferSize);

	Matrixf identity;
	PSMTXIdentity(identity.mMatrix.mtxView);
	PSMTXCopy(identity.mMatrix.mtxView, j3dSys.mViewMtx);

	J3DModel* j3dModel = model->mJ3dModel;
	j3dModel->calc();
	j3dModel->calcMaterial();
	j3dModel->makeDL();
	j3dModel->lock();

	return model;
}

/**
 * @note Address: 0x8012FA1C
 * @note Size: 0xC0
 */
void EnemyMgrBase::initParms()
{
	if (isValidEnemyTypeID()) {
		EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* paramName = info->mParamName;
		if (*paramName == 0) {
			paramName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		char file[250];
		sprintf(file, "%s/enemyParm.txt", paramName);
		setupParms(file);
	}
}

/**
 * @note Address: 0x8012FADC
 * @note Size: 0x78
 */
void EnemyMgrBase::loadStoneSetting(const char* filename)
{
	void* resource = gParmArc->getResource(filename);
	if (resource) {
		RamStream stream(resource, -1);
		stream.setMode(STREAM_MODE_TEXT, STREAM_MODE_TEXT);
		mStoneInfo.setup(stream);
	}
}

/**
 * @note Address: 0x8012FB54
 * @note Size: 0x90
 */
bool EnemyMgrBase::setupParms(const char* filename)
{
	bool result = mParms->loadSettingFile(gParmArc, (char*)filename);
	for (int i = 0; i < mObjLimit; i++) {
		getEnemy(i)->mParms = mParms;
	}
	return result;
}

/**
 * @note Address: 0x8012FBE4
 * @note Size: 0x88
 */
void EnemyMgrBase::loadResource()
{
	if (isValidEnemyTypeID()) {
		loadModelData();
		loadAnimData();
		loadTexData();
	}
}

/**
 * @note Address: 0x8012FC6C
 * @note Size: 0x2FC
 */
void EnemyMgrBase::initObjects()
{
	if (isValidEnemyTypeID()) {
		EnemyInfo* info     = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* collisionName = info->mCollName;
		if (*collisionName == 0) {
			collisionName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		char file[250];
		sprintf(file, "%s/enemyColl.txt", collisionName);

		for (int i = 0; i < mObjLimit; i++) {
			SysShape::Model* model = createModel();
			mAnimMgr->mModel       = model;

			getEnemy(i)->setCreatureID(i);
			getEnemy(i)->mMgr   = this;
			getEnemy(i)->mModel = model;
			getEnemy(i)->setAnimMgr(mAnimMgr);
			getEnemy(i)->initMouthSlots();
			getEnemy(i)->initWalkSmokeEffect();
			getEnemy(i)->mEnemyStoneObj = new EnemyStone::Obj(getEnemy(i), &mStoneInfo);
		}

		mCollPartFactory = CollPartFactory::load(gParmArc, file);

		for (int i = 0; i < mObjLimit; i++) {
			getEnemy(i)->mCollTree = new CollTree();
			getEnemy(i)->mCollTree->createFromFactory(getEnemy(i)->mModel, mCollPartFactory, nullptr);
			getEnemy(i)->mCollTree->attachModel(getEnemy(i)->mModel);
		}
	}
}

/**
 * @note Address: 0x8012FF68
 * @note Size: 0xC0
 */
void EnemyMgrBase::initStoneSetting()
{
	if (isValidEnemyTypeID()) {
		EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* stoneName = info->mStoneName;
		if (*stoneName == '\0') {
			stoneName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		char file[250];
		sprintf(file, "%s/enemyStoneInfo.txt", stoneName);
		loadStoneSetting(file);
	}
}

/**
 * @note Address: 0x80130028
 * @note Size: 0xE4
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
		mModelData = modelData;
		mModelData->newSharedDisplayList(0x40000);
		mModelData->makeSharedDL();
	} else {
		JUT_PANICLINE(815, "EnemyMgrBase:Can not make mdlData\n");
	}

	return modelData;
}

/**
 * @note Address: 0x8013010C
 * @note Size: 0xC0
 */
void EnemyMgrBase::loadModelData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	char* modelName = info->mModelName;
	if (*modelName == 0) {
		modelName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}

	char file[250];
	sprintf(file, "/enemy/data/%s/model.szs", modelName);

	LoadResource::Arg arg(file);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	loadModelData(node->mArchive);
}

/**
 * @note Address: 0x801301CC
 * @note Size: 0x154
 */
void EnemyMgrBase::loadAnimData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	char* animName  = info->mAnimName;
	if (*animName == 0) {
		animName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}

	char file[PATH_MAX];
	sprintf(file, "/enemy/data/%s/anim.szs", animName);

	JKRArchive* archive = nullptr;
	LoadResource::Arg arg(file);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);

	if (node) {
		archive = node->mArchive;
	}
	if (archive) {
		info              = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
		char* animMgrName = info->mAnimMgrName;
		if (*animMgrName == 0) {
			animMgrName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
		}

		sprintf(file, "%s/enemyAnimMgr.txt", animMgrName);
		mAnimMgr = SysShape::AnimMgr::load(gParmArc, file, mModelData, archive, "");
	} else {
		mAnimMgr = nullptr;
	}
}

/**
 * @note Address: 0x80130320
 * @note Size: 0x74
 */
void EnemyMgrBase::loadTexData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	if (*info->mTextureName == 0) {
		EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}
}

/**
 * @note Address: 0x80130394
 * @note Size: 0x2C
 */
J3DModelData* EnemyMgrBase::doLoadBmd(void* bmd) { return J3DModelLoaderDataBase::load(bmd, 0x240010); }

/**
 * @note Address: 0x801303C0
 * @note Size: 0x28
 */
J3DModelData* EnemyMgrBase::doLoadBdl(void* bdl) { return J3DModelLoaderDataBase::loadBinaryDisplayList(bdl, 0x2000); }

/**
 * @note Address: 0x801303E8
 * @note Size: 0x90
 */
void EnemyMgrBase::initGenerator() { mGenerator = new EnemyGeneratorBase("EnemyGenerator"); }

/**
 * @note Address: 0x80130478
 * @note Size: 0xE8
 */
void EnemyMgrBase::doAnimationAlwaysMovieActor()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			sys->mTimers->_start("e-upd", true);
			enemy->update();
			sys->mTimers->_stop("e-upd");

			sys->mTimers->_start("e-doa", true);
			enemy->doAnimation();
			sys->mTimers->_stop("e-doa");
		}
	}
}

/**
 * @note Address: 0x80130560
 * @note Size: 0x7C
 */
void EnemyMgrBase::doEntryAlwaysMovieActor()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doEntry();
		}
	}
}

/**
 * @note Address: 0x801305DC
 * @note Size: 0x9C
 */
void EnemyMgrBase::doSimulationAlwaysMovieActor(f32 arg)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if ((enemy->isEvent(0, EB_Alive)) && (enemy->mPellet == nullptr)) {
			enemy->doSimulation(arg);
		}
	}
}

/**
 * @note Address: 0x80130678
 * @note Size: 0x8C
 */
void EnemyMgrBase::doDirectDrawAlwaysMovieActor(Graphics& graphics)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doDirectDraw(graphics);
		}
	}
}
} // namespace Game
