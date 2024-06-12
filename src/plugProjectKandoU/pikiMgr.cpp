#include "Game/PikiMgr.h"
#include "Game/Entities/ItemPikihead.h"
#include "SysShape/ModelMgr.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DTransform.h"
#include "PSSystem/PSSystemIF.h"
#include "Game/MoviePlayer.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"
#include "Game/gamePlayData.h"
#include "Game/DeathMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "PikiAI.h"
#include "nans.h"

namespace Game {

static const int unusedPikiMgrArray[] = { 0, 0, 0 };

bool PikiMgr::throwPikiDebug = false;
PikiMgr* pikiMgr;
int PikiMgr::mBirthMode = PikiMgr::PSM_Normal;

/**
 * @note Address: 0x8015CD14
 * @note Size: 0xB4
 */
PikiMgr::PikiMgr()
{
	mFlags[0] = 0;
	mFlags[1] = 0;

	mFlags[0]   = 0;
	mDopedPikis = 0;
	mName       = "pikiMgr";
	mParms      = new PikiParms;
	mUpdateMgr2 = new UpdateMgr;
	mUpdateMgr2->create(10);

	allocStorePikmins();
	mFlags[1] = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void PikiMgr::init()
{
	JUT_PANICLINE(0, "who use this ??\n");

	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8015E68C
 * @note Size: 0x38
 */
void PikiMgr::resetMgr()
{
	MonoObjectMgr::resetMgr();
	mDopedPikis = 0;
	mFlags[0]   = 0;
}

/**
 * @note Address: 0x8015E6C4
 * @note Size: 0x64
 */
void PikiMgr::onAlloc()
{
	for (int i = 0; i < mMax; i++) {
		getAt(i)->mMgrIndex = i;
	}
}

/**
 * @note Address: 0x8015E738
 * @note Size: 0x60
 */
void PikiMgr::setupPiki(Piki* piki)
{
	piki->mModel     = createModel(piki->mPikiKind, piki->mMgrIndex);
	piki->mLeafModel = createLeafModel(piki->mHappaKind, piki->mMgrIndex);
	piki->mParms     = mParms;
}

/**
 * @note Address: 0x8015E798
 * @note Size: 0x324
 */
Piki* PikiMgr::birth()
{
	switch (mBirthMode) {
	case PikiMgr::PSM_Normal: {
		int pikiCount   = mActiveCount;
		int sproutCount = 0;

		if (ItemPikihead::mgr) {
			sproutCount = ItemPikihead::mgr->mMonoObjectMgr.mActiveCount;
		}

		if (pikiCount + sproutCount < MAX_PIKI_COUNT) {
			break;
		}

		return nullptr;
	}

	case PikiMgr::PSM_Force:
		return MonoObjectMgr::birth();

	case PikiMgr::PSM_Replace: {
		int pikiCount   = mActiveCount;
		int sproutCount = 0;

		if (ItemPikihead::mgr) {
			sproutCount = ItemPikihead::mgr->mMonoObjectMgr.mActiveCount;
		}

		Piki* piki = nullptr;
		if (pikiCount + sproutCount < MAX_PIKI_COUNT) {
			piki = MonoObjectMgr::birth();
		}

		if (!piki) {

			Piki* toKill = nullptr;
			Iterator<Piki> iter(this);
			CI_LOOP(iter)
			{
				Piki* currPiki = *iter;
				if ((int)currPiki->mPikiKind == Bulbmin && currPiki->isAlive() && currPiki->isTekiFollowAI()) {
					toKill = currPiki;
					break;
				}
			}

			if (toKill) {
				PikiKillArg killArg(CKILL_DontCountAsDeath);
				toKill->kill(&killArg);

				return MonoObjectMgr::birth();
			}

			return nullptr;
		}

		return piki;
	}
	}

	return MonoObjectMgr::birth();
}

/**
 * @note Address: 0x8015EABC
 * @note Size: 0xCC
 */
void PikiMgr::loadResources(int viewNum)
{
	void* file
	    = JKRDvdRipper::loadToMainRAM("user/Abe/piki/pikiParms.txt", 0, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (file) {
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mParms->read(stream);
		delete[] file;
	}
	load(viewNum);
}

/**
 * @note Address: 0x8015EBD8
 * @note Size: 0x298
 */
void PikiMgr::load(int viewNum)
{
	JKRHeap* heap = JKRGetCurrentHeap();
	heap->getFreeSize();
	JKRArchive* arc = JKRMountArchive("/user/Kando/piki/pikis.szs", JKRArchive::EMM_Mem, sys->mSysHeap, JKRArchive::EMD_Head);
	mModelArchive   = arc;
	heap->getFreeSize();

	JUT_ASSERTLINE(450, arc, "pikis.szs not found !\n");

	loadBmd(Blue, "piki_p2_blue");
	loadBmd(Red, "piki_p2_red");
	loadBmd(Yellow, "piki_p2_yellow");
	loadBmd(White, "piki_p2_white");
	loadBmd(Purple, "piki_p2_black");
	loadBmd(Bulbmin, "piki_kochappy");
	loadBmd(Carrot, "piki_ninjin");

	mHappaModel[Leaf]    = J3DModelLoaderDataBase::load(arc->getResource("happa_model/leaf.bmd"), J3DMLF_Material_PE_FogOff);
	mHappaModel[Bud]     = J3DModelLoaderDataBase::load(arc->getResource("happa_model/bud.bmd"), J3DMLF_UseUniqueMaterials | J3DMLF_19);
	mHappaModel[Flower]  = J3DModelLoaderDataBase::load(arc->getResource("happa_model/flower.bmd"), J3DMLF_UseUniqueMaterials | J3DMLF_19);
	mHappaModel[Bud_Red] = J3DModelLoaderDataBase::load(arc->getResource("happa_model/bud_red.bmd"), J3DMLF_UseUniqueMaterials | J3DMLF_19);
	mHappaModel[Flower_Red]
	    = J3DModelLoaderDataBase::load(arc->getResource("happa_model/flower_red.bmd"), J3DMLF_UseUniqueMaterials | J3DMLF_19);

	sys->heapStatusStart("pikmin-ModelMgr", nullptr);
	mModelMgr = new SysShape::ModelMgr(PikiColorCount, &mBluPikiModel, MAX_PIKI_COUNT, 0x20000, viewNum,
	                                   new Delegate1<PikiMgr, SysShape::Model*>(this, createModelCallback));
	sys->heapStatusEnd("pikmin-ModelMgr");

	for (int i = 0; i < PikiHappaCount; i++) {
		J3DModelData* model = mHappaModel[i];

		const u32 lightObjNum = 0;
		const u32 texGenNum   = 0;
		const u32 texCoordNum = 4;
		const u32 tevStageNum = 0;
		u32 dlFlags           = CREATE_DIFF_FLAG(lightObjNum, texGenNum, texCoordNum, tevStageNum);
		model->newSharedDisplayList(dlFlags);
		model->simpleCalcMaterial(0, *(Mtx*)j3dDefaultMtx);
		model->makeSharedDL();
	}
}

/**
 * @note Address: 0x8015EE70
 * @note Size: 0x98
 */
void PikiMgr::loadBmd(int id, char* name)
{
	char pathbuf[PATH_MAX];
	sprintf(pathbuf, "piki_model/%s.bmd", name);
	J3DModelData* data = J3DModelLoaderDataBase::load(mModelArchive->getResource(pathbuf), 0x60010);
	{
		const u32 lightObjNum = 0;
		const u32 texGenNum   = 0;
		const u32 texCoordNum = 4;
		const u32 tevStageNum = 0;
		u32 dlFlags           = CREATE_DIFF_FLAG(lightObjNum, texGenNum, texCoordNum, tevStageNum);
		data->newSharedDisplayList(dlFlags);
		data->makeSharedDL();
	}

	(&mBluPikiModel)[id] = data;
}

/**
 * @note Address: 0x8015EF08
 * @note Size: 0x4C
 */
void PikiMgr::createModelCallback(SysShape::Model* model)
{
	model->mJ3dModel->calcMaterial();
	model->mJ3dModel->makeDL();
	model->mJ3dModel->lock();
}

/**
 * @note Address: 0x8015EF54
 * @note Size: 0x24
 */
SysShape::Model* PikiMgr::createModel(int id, int num) { return mModelMgr->createModel(id, num); }

/**
 * @note Address: 0x8015EF78
 * @note Size: 0x8
 */
SysShape::Model* PikiMgr::createLeafModel(int id, int num) { return nullptr; }

/**
 * @note Address: 0x8015EF80
 * @note Size: 0x280
 */
void PikiMgr::setMovieDraw(bool drawOn)
{
	if (!drawOn) {
		mFlags[1] |= 1;
	} else {
		mFlags[1] &= ~1;
	}

	for (int i = 0; i < mMax; i++) {
		if (!mOpenIds[i]) {
			if (!mArray[i].isMovieActor()) {
				if (drawOn) {
					mArray[i].mEffectsObj->createAllEffects();
				} else {
					mArray[i].mEffectsObj->killAllEffects();
				}
			}
		}
	}
}

/**
 * @note Address: 0x8015F200
 * @note Size: 0x84
 */
void PikiMgr::debugShapeDL(char* text)
{
	for (int i = 0; i < mMax; i++) {
		if (!mOpenIds[i]) {
			mArray[i].debugShapeDL(text);
		}
	}
}

/**
 * @note Address: 0x8015F284
 * @note Size: 0x198
 */
void PikiMgr::doSimpleDraw(Viewport* vp)
{
	int vpId = vp->mVpId;
	for (int i = 0; i < PikiHappaCount; i++) {
		J3DModelData& modelData = *mHappaModel[i];
		J3DMaterial* mat        = (*modelData.mJointTree.mJoints)->mMaterial;

		j3dSys.mVtxPos   = modelData.getVertexData()->getVtxPosArray();
		j3dSys.mVtxNorm  = modelData.getVertexData()->getVtxNrmArray();
		j3dSys.mVtxColor = modelData.getVertexData()->getVtxColorArray(0);

		J3DShape::sOldVcdVatCmd = nullptr;

		// Cycle through every material that needs rendering
		for (mat; mat != nullptr; mat = mat->mNext) {
			mat->loadSharedDL();
			mat->mShape->loadPreDrawSetting();

			// Cycle through every possible Pikmin
			for (int j = 0; j < mMax; j++) {
				// Skip open spaces in the array (Pikmin doesn't exist)
				if (mOpenIds[j]) {
					continue;
				}

				// If invisble, don't render
				Piki* piki = &mArray[j];
				if (!piki->mLod.isFlag(AILOD_IsVisible)) {
					continue;
				}

				// If Pikmin has spicy spray or is out of viewport, don't render
				if (piki->doped() || !piki->mLod.isVPVisible(vpId)) {
					continue;
				}

				int id = piki->getHappa();

				// Make purple and white pikmin use the red flower/bud
				if ((piki->getKind() == White || piki->getKind() == Purple) && id >= 1) {
					id += 2;
				}

				if (id == i) {
					Mtx test;
					Matrixf* mtx = piki->mLeafStemJoint->getWorldMatrix();
					PSMTXConcat(vp->getMatrix(true)->mMatrix.mtxView, mtx->mMatrix.mtxView, test);
					GXLoadPosMtxImm(test, 0);
					GXLoadNrmMtxImm(test, 0);
					mat->mShape->simpleDrawCache();
				}
			}
		}
	}
}

inline void PikiMgr::updateArrayAt(int i)
{
	mArray[i].mFaceDirOffset = mArray[i].mFaceDir;
	mArray[i].update();

	if (!mOpenIds[i]) {
		mArray[i].doAnimation();
	}
}

/**
 * @note Address: 0x8015F41C
 * @note Size: 0x1D8
 */
void PikiMgr::doAnimation()
{
	sys->mTimers->_start("doaPIKI", true);
	mUpdateMgr2->update();
	if (mFlags[1] & 1) {
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i] || !mArray[i].isMovieActor()) {
				continue;
			}

			updateArrayAt(i);
		}
	} else {
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i]) {
				continue;
			}

			updateArrayAt(i);
		}
	}

	if (mDopedPikis > 0 && gameSystem && gameSystem->isFlag(GAMESYS_IsGameWorldActive) && moviePlayer->mDemoState == DEMOSTATE_Inactive) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_PK_UNDER_DOPING, 0);
	}

	sys->mTimers->_stop("doaPIKI");
}

/**
 * @note Address: 0x8015F5F4
 * @note Size: 0x58
 */
void PikiMgr::setVsXlu(int naviIndex, bool ghostIconNotActive)
{
	if (ghostIconNotActive) {
		if (naviIndex == 0) {
			mFlags[0] &= ~1;
		} else {
			mFlags[0] &= ~2;
		}
	} else {
		if (naviIndex == 0) {
			mFlags[0] |= 1;
		} else {
			mFlags[0] |= 2;
		}
	}
}

/**
 * @note Address: 0x8015F64C
 * @note Size: 0x1FC
 */
void PikiMgr::doEntry()
{
	if (gameSystem->isVersusMode()) {
		u8 flag = mFlags[1] & 1;
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i]) {
				continue;
			}

			if (flag && !mArray[i].isMovieActor()) {
				// Typo in the original code, should be ~ not -
				mArray[i].mLod.mFlags &= -(AILOD_IsVisibleBoth | AILOD_IsMid);
			} else {
				mArray[i].isMovieActor();
			}

			// Hide blue or red pikmin if the ghost power is active
			Piki* piki = &mArray[i];
			if (piki->getKind() == Blue && mFlags[0] & 1) {
				piki->mLod.resetFlag(AILOD_IsVisVP0);
			} else if (piki->getKind() == Red && mFlags[0] & 2) {
				piki->mLod.resetFlag(AILOD_IsVisVP1);
			}
			mArray[i].doEntry();
		}
	} else {
		u8 flag = mFlags[1] & 1;
		for (int i = 0; i < mMax; i++) {
			if (mOpenIds[i]) {
				continue;
			}

			if (flag && !mArray[i].isMovieActor()) {
				mArray[i].mLod.mFlags &= -0x35;
			} else {
				mArray[i].isMovieActor();
			}
			mArray[i].doEntry();
		}
	}
}

/**
 * @note Address: 0x8015F848
 * @note Size: 0x4
 */
void PikiMgr::setupSoundViewerAndBas() { }

/**
 * @note Address: 0x8015F84C
 * @note Size: 0x74
 */
int PikiMgr::getColorTransportScale(int color)
{
	P2ASSERTBOUNDSLINE(857, 0, color, PikiColorCount);
	if (color == Purple) {
		return 10;
	}

	return 1;
}

/**
 * @note Address: 0x8015F8C0
 * @note Size: 0x3C
 */
void PikiMgr::allocStorePikmins()
{
	mStoredPikis = new s32[PikiColorCount * PikiGrowthStageCount];
	clearStorePikmins();
}

/**
 * @note Address: 0x8015F8FC
 * @note Size: 0x6C
 */
void PikiMgr::clearStorePikmins()
{
	for (int i = 0; i < (PikiColorCount * PikiGrowthStageCount); i++) {
		mStoredPikis[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C0
 */
// void saveStorePikmins__Q24Game7PikiMgrFP23Condition<Game::Piki>()
void PikiMgr::saveStorePikmins(Condition<Piki>*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void PikiMgr::getStorePikmin(int, int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8015F968
 * @note Size: 0x34C
 */
void PikiMgr::moveAllPikmins(Vector3f& pos, f32 range, Condition<Piki>* cond)
{
	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->mFlags.isSet(CF_IsAlive) && (!cond || cond->satisfy(piki))) {
			f32 angle = randFloat() * TAU;
			f32 dist  = randFloat() * range;
			Vector3f setPos(dist * pikmin2_sinf(angle), 0.0f, dist * pikmin2_cosf(angle));
			setPos = setPos + pos;
			if (mapMgr) {
				setPos.y = mapMgr->getMinY(setPos);
			}
			piki->setPosition(setPos, false);
		}
	}
}

/**
 * @note Address: 0x8015FCB4
 * @note Size: 0x298
 */
void PikiMgr::forceEnterPikmins(u8 check)
{
	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive() && !piki->isZikatu()
		    && (check != true || piki->getCurrActionID() != PikiAI::ACT_Formation || !piki->isFPFlag(FPFLAGS_PikiEnteringCave))) {
			playData->mPikiContainer.getCount(piki->getKind(), piki->getHappa())++;
			PikiKillArg arg(CKILL_DontCountAsDeath | CKILL_Unk17);
			piki->kill(&arg);
		}
	}
}

/**
 * @note Address: 0x8015FF4C
 * @note Size: 0x60C
 */
void PikiMgr::killDayEndPikmins(PikiContainer& container)
{
	container.clear();

	Piki* killList[MAX_PIKI_COUNT]; // pikis that end up here are set to die
	int deathCount = 0;             // number of pikis set to die

	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive() && !piki->surviveDayEnd() && !piki->isZikatu()) {
			if (mapMgr->getDemoMatrix()) {
				// idk why this offset is set so specifically
				Vector3f offset(33.0f, 0.0f, 0.0f);
				// convert offset to demo space
				offset       = mapMgr->getDemoMatrix()->mtxMult(offset);
				Vector3f pos = piki->getPosition();
				if (sqrDistanceXZ(pos, offset) < SQUARE(374.0f)) {
					continue;
				}
			}

			// if piki is within 300 units of an onyon (incl. ship), it's save
			bool isSafe = false;
			Iterator<Onyon> iterOnyon(ItemOnyon::mgr);
			CI_LOOP(iterOnyon)
			{
				Onyon* onyon      = *iterOnyon;
				Vector3f pikipos  = piki->getPosition();
				Vector3f onyonpos = onyon->getPosition();
				if (onyonpos.qDistance(pikipos) < 300.0f) {
					isSafe = true;
					break;
				}
			}

			// if it's not within 300 units, it's getting left behind :(
			if (!isSafe) {
				killList[deathCount++] = piki;
			}
		}
	}

	// kill left behind pikis
	for (int j = 0; j < deathCount; j++) {
		// death is just good bookkeeping - some guy
		deathMgr->inc(DeathCounter::COD_Sunset);
		deathMgr->inc(DeathCounter::COD_All);
		container(killList[j])++;

		PikiKillArg arg(CKILL_DontCountAsDeath); // we already counted it as a death, don't double count
		killList[j]->kill(&arg);
	}
	container.dump("PikiContainer");
}

/**
 * @note Address: 0x80160558
 * @note Size: 0x258
 */
void PikiMgr::killAllPikmins()
{
	Piki* killList[MAX_PIKI_COUNT];
	int deathCount = 0;

	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive()) {
			killList[deathCount++] = piki;
		}
	}

	for (int j = 0; j < deathCount; j++) {
		PikiKillArg arg(CKILL_DontCountAsDeath | CKILL_Unk17);
		killList[j]->kill(&arg);
	}
}

/**
 * @note Address: 0x801607B0
 * @note Size: 0x2C8
 */
void PikiMgr::caveSaveFormationPikmins(bool doKill)
{
	Piki* squadList[MAX_PIKI_COUNT];
	int squadCount = 0;
	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if (piki->isAlive() && piki->getCurrActionID() == PikiAI::ACT_Formation && piki->isFPFlag(FPFLAGS_PikiEnteringCave)) {
			squadList[squadCount++] = piki;
		}
	}

	if (squadCount == 0) {
		// you're not bringing pikmin with you? sit and think about what you've done.
		for (int j = 125; j > 0; j--) { }
	}

	for (int j = 0; j < squadCount; j++) {
		// put squad in cave
		playData->mCaveSaveData.mCavePikis(squadList[j])++;

		// this never happens (doKill is always false) - why would you wanna kill all your squad when you enter a cave you monsters?
		if (doKill) {
			PikiKillArg arg(CKILL_DontCountAsDeath | CKILL_Unk17);
			squadList[j]->kill(&arg);
		}
	}

	playData->mCaveSaveData.mCavePikis.dump("caveSaveFormationPikmins");
}

/**
 * @note Address: 0x80160A78
 * @note Size: 0x2C4
 */
void PikiMgr::caveSaveAllPikmins(bool doKill, bool isExitingCave)
{
	Piki* saveList[MAX_PIKI_COUNT];
	int saveCount = 0;

	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		// don't save bulbmin if we're exiting a cave, and if we're going down a floor, only save bulbmin we've whistled
		if (piki->isAlive() && (!isExitingCave || piki->getKind() != Bulbmin) && (piki->getKind() != Bulbmin || piki->isPikmin())) {
			saveList[saveCount++] = piki;
		}
	}

	for (int j = 0; j < saveCount; j++) {
		playData->mCaveSaveData.mCavePikis(saveList[j])++;
		// "kill" pikis on exiting (we rebirth them outside)
		if (doKill) {
			PikiKillArg arg(CKILL_DontCountAsDeath | CKILL_Unk17);
			saveList[j]->kill(&arg);
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x290
 */
void PikiMgr::saveFormationPikmins(PikiContainer&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80160D3C
 * @note Size: 0x2A8
 */
void PikiMgr::saveAllPikmins(PikiContainer& container)
{
	container.clear();

	Piki* saveList[MAX_PIKI_COUNT];
	int saveCount = 0;

	Iterator<Piki> iterator(this);
	CI_LOOP(iterator)
	{
		Piki* piki = *iterator;
		if ((piki->getKind() != Bulbmin || piki->isPikmin()) && piki->isAlive()) {
			saveList[saveCount++] = piki;
		}
	}

	for (int j = 0; j < saveCount; j++) {
		container(saveList[j])++;
	}
	container.dump("saveAllPikmins");
}

} // namespace Game
