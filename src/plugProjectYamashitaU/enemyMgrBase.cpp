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

/*
 * --INFO--
 * Address:	8012EC24
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8012EC94
 * Size:	0000C4
 */
EnemyMgrBase::EnemyMgrBase(int objLimit, u8 modelType)
{
	mModelData          = nullptr;
	mAnimMgr            = nullptr;
	mModelType          = modelType;
	mCollPartFactory    = nullptr;
	mObjLimit           = objLimit;
	mNumObjects         = 0;
	mParms              = nullptr;
	mGenerator          = nullptr;
	mStoneInfo.mLength  = 0;
	mStoneInfo.mObjList = nullptr;
}

/*
 * --INFO--
 * Address:	8012ED58
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8012EDC8
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8012EE38
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	8012EED8
 * Size:	000110
 */
void EnemyMgrBase::doAnimation()
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->_1C & 1) || enemy->isMovieActor())) {
			sys->mTimers->_start("e-upd", true);
			enemy->update();
			sys->mTimers->_stop("e-upd");

			sys->mTimers->_start("e-doa", true);
			enemy->doAnimation();
			sys->mTimers->_stop("e-doa");
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
	for (int i = 0; i < mObjLimit; i++) {
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
void EnemyMgrBase::doSetView(int viewportNumber)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);
		if (enemy->isEvent(0, EB_Alive)) {
			enemy->doSetView(viewportNumber);
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
	for (int i = 0; i < mObjLimit; i++) {
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
void EnemyMgrBase::doSimulation(f32 arg)
{
	for (int i = 0; i < mObjLimit; i++) {
		EnemyBase* enemy = getEnemy(i);

		if (enemy->mPellet) {
			enemy->doSimulationCarcass(arg);
		} else if (enemy->isEvent(0, EB_Alive) && (!(generalEnemyMgr->_1C & 1) || enemy->isMovieActor())) {
			enemy->doSimulation(arg);
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
	for (int i = 0; i < mObjLimit; i++) {
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
	for (int i = (int)object + 1; i < mObjLimit; i++) {
		if (getEnemy(i)->isEvent(0, EB_Alive)) {
			return (void*)i;
		}
	}
	return (void*)mObjLimit;
}

/*
 * --INFO--
 * Address:	8012F3C8
 * Size:	000184
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

/*
 * --INFO--
 * Address:	8012F554
 * Size:	000164
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

/*
 * --INFO--
 * Address:	8012F6B8
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	8012F89C
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8012F928
 * Size:	000024
 */
void EnemyMgrBase::setDebugParm(u32 debugParm) { mParms->setDebugParm(debugParm); }

/*
 * --INFO--
 * Address:	8012F94C
 * Size:	000024
 */
void EnemyMgrBase::resetDebugParm(u32 debugParm) { mParms->resetDebugParm(debugParm); }

/*
 * --INFO--
 * Address:	8012F970
 * Size:	0000AC
 */
SysShape::Model* EnemyMgrBase::createModel()
{
	SysShape::Model* model = new SysShape::Model(mModelData, 0x20000, mModelType);

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

/*
 * --INFO--
 * Address:	8012FA1C
 * Size:	0000C0
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
		mStoneInfo.setup(stream);
	}
}

/*
 * --INFO--
 * Address:	8012FB54
 * Size:	000090
 */
bool EnemyMgrBase::setupParms(const char* filename)
{
	bool result = mParms->loadSettingFile(gParmArc, (char*)filename);
	for (int i = 0; i < mObjLimit; i++) {
		getEnemy(i)->mParms = mParms;
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

/*
 * --INFO--
 * Address:	8012FF68
 * Size:	0000C0
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
		mModelData = modelData;
		mModelData->newSharedDisplayList(0x40000);
		mModelData->makeSharedDL();
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

/*
 * --INFO--
 * Address:	801301CC
 * Size:	000154
 */
void EnemyMgrBase::loadAnimData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	char* animName  = info->mAnimName;
	if (*animName == 0) {
		animName = EnemyInfoFunc::getEnemyName(getEnemyTypeID(), 0xFFFF);
	}

	char file[256];
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

/*
 * --INFO--
 * Address:	80130320
 * Size:	000074
 */
void EnemyMgrBase::loadTexData()
{
	EnemyInfo* info = EnemyInfoFunc::getEnemyInfo(getEnemyTypeID(), 0xFFFF);
	if (*info->mTextureName == 0) {
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
void EnemyMgrBase::initGenerator() { mGenerator = new EnemyGeneratorBase("EnemyGenerator"); }

/*
 * --INFO--
 * Address:	80130478
 * Size:	0000E8
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

/*
 * --INFO--
 * Address:	80130560
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	801305DC
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	80130678
 * Size:	00008C
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
