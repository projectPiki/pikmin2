#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "SysShape/Model.h"
#include "PSM/ObjMgr.h"
#include "PSM/Navi.h"
#include "utilityU.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/PikiMgr.h"

namespace Game {

NaviMgr* naviMgr;
SysShape::AnimMgr* NaviMgr::animMgr;

/**
 * @note Address: 0x8015928C
 * @note Size: 0xCC
 */
NaviMgr::NaviMgr()
    : mFlags()
{
	mName      = "naviMgr";
	mNaviParms = new NaviParms;
	clearDeadCount();
	mBackupPSMMgr = nullptr;
	mPSMMgr       = nullptr;
}

/**
 * @note Address: 0x8015A7C0
 * @note Size: 0x110
 */
NaviMgr::~NaviMgr()
{
	animMgr = nullptr;
	naviMgr = nullptr;

	if (mBackupPSMMgr) {
		delete mBackupPSMMgr;
		mBackupPSMMgr = nullptr;
	}
	if (mPSMMgr) {
		delete mPSMMgr;
		mPSMMgr = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void NaviMgr::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8015A8D0
 * @note Size: 0x78
 */
void NaviMgr::createPSMDirectorUpdator()
{
	mPSMMgr = new PSM::DirectorUpdator(PSMGetLifeD(), 2, PSM::DirectorUpdator::TYPE_0);
	mPSMMgr->directOff(0);
	mPSMMgr->directOff(1);
}

/**
 * @note Address: 0x8015A948
 * @note Size: 0x5C
 */
void NaviMgr::resetMgr()
{
	MonoObjectMgr::resetMgr();

	if (mBackupPSMMgr) {
		delete mBackupPSMMgr;
		mBackupPSMMgr = nullptr;
	}

	if (mPSMMgr) {
		delete mPSMMgr;
		mPSMMgr = nullptr;
	}
}

/**
 * @note Address: 0x8015A9A4
 * @note Size: 0x90
 */
void NaviMgr::killAll()
{
	for (int i = 0; i < getMax(); i++) {
		Navi* navi = &mArray[i];
		navi->kill(nullptr);
		if (PSSystem::SingletonBase<PSM::ObjMgr>::sInstance && navi->mSoundObj) {
			PSSystem::SingletonBase<PSM::ObjMgr>::sInstance->remove(navi->mSoundObj);
		}
	}
}

/**
 * @note Address: 0x8015AA34
 * @note Size: 0xF0
 */
void NaviMgr::setupNavi(Navi* navi)
{
	navi->mModel       = createModel(navi->mNaviIndex);
	navi->mParms       = mNaviParms;
	navi->mMarkerModel = new SysShape::Model(mCursorModelData, 0, 2);

	navi->mCursorModel = new SysShape::Model(mMarkerModelData, J3DMODEL_ShareDL, 2);
	navi->mCursorModel->mJ3dModel->newDifferedDisplayList(0x1000000);
	navi->mCursorModel->mJ3dModel->calc();
	navi->mCursorModel->mJ3dModel->calcMaterial();
	navi->mCursorModel->mJ3dModel->makeDL();
	navi->mCursorModel->mJ3dModel->lock();
}

/**
 * @note Address: 0x8015AB24
 * @note Size: 0xFC
 */
Navi* NaviMgr::birth()
{
	Navi* navi = MonoObjectMgr::birth();
	if (navi) {
		navi->mNaviIndex = mActiveCount - 1;

		P2ASSERTLINE(349, navi->mSoundObj);
		navi->mSoundObj->init(navi->mNaviIndex);

		// Use president sounds for navi ID 1
		if (playData->isStoryFlag(STORY_DebtPaid) && navi->mNaviIndex == NAVIID_Louie) {
			navi->mSoundObj->setShacho();
		}
	}

	for (int i = 0; i < mDeadNavis; i++) {
		if (mNaviDeadFlags[i] == navi->mNaviIndex) {
			navi->setAlive(false);
		}
	}
	return navi;
}

/**
 * @note Address: 0x8015AC20
 * @note Size: 0x9C
 */
Navi* NaviMgr::getActiveNavi()
{
	Navi* navi1 = getAt(NAVIID_Olimar);
	Navi* navi2 = getAt(NAVIID_Louie);
	if (!navi1 && !navi2) {
		return nullptr;
	}

	// navi is considered active if it has a controller initialised
	if (navi1->mController1) {
		return navi1;
	} else if (navi2->mController1) {
		return navi2;
	}
	return nullptr;
}

/**
 * @note Address: 0x8015ACBC
 * @note Size: 0xBC
 */
void NaviMgr::loadResources()
{
	void* parmsFile = JKRDvdRipper::loadToMainRAM("user/Abe/piki/naviParms.txt", nullptr, Switch_0, 0, nullptr,
	                                              JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (parmsFile) {
		RamStream stream(parmsFile, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mNaviParms->read(stream);
		delete[] parmsFile;
	}

	load();
}

/**
 * @note Address: 0x8015ADC8
 * @note Size: 0x264
 */
void NaviMgr::load()
{
	P2DEBUG("Before mount: %d", JKRGetCurrentHeap()->getTotalFreeSize());
	JKRArchive* texts = JKRMountArchive("/user/Kando/piki/texts.szs", JKRArchive::EMM_Mem, JKRGetCurrentHeap(), JKRArchive::EMD_Tail);
	P2DEBUG("After mount: %d", JKRGetCurrentHeap()->getTotalFreeSize());

	sys->heapStatusStart("NaviMgr::Archive", nullptr);
	JKRArchive* arc = JKRMountArchive("/user/Kando/piki/pikis.szs", JKRArchive::EMM_Mem, sys->mSysHeap, JKRArchive::EMD_Head);
	sys->heapStatusEnd("NaviMgr::Archive");

	J3DModelData* model = J3DModelLoaderDataBase::load(arc->getResource("orima_model/orima1.bmd"), 0x20000030);
	for (u16 j = 0; j < model->getShapeNum(); j++) {
		model->mShapeTable.mItems[j]->setTexMtxLoadType(0x2000);
	}

	mOlimarModel = model;

	if (!animMgr) {
		animMgr = SysShape::AnimMgr::load(texts, "animMgr.txt", model, arc, "motion");
	}
	mCollData = CollPartFactory::load(texts, "naviColl.txt");

	mCursorModelData = J3DModelLoaderDataBase::load(arc->getResource("cursor/cursor.bmd"), 0x240000);
	mMarkerModelData = J3DModelLoaderDataBase::load(arc->getResource("cursor/marker.bmd"), 0x240000);
	mMarkerModelData->newSharedDisplayList(0x40000);

	SysShape::Model::enableMaterialAnim(mCursorModelData, 0);
	mCursorAnims[0].attachResource(arc->getResource("cursor/wakka_orima.brk"), mCursorModelData);
	mCursorAnims[1].attachResource(arc->getResource("cursor/wakka_luji.brk"), mCursorModelData);
	mMarkerAnims[0].attachResource(arc->getResource("cursor/arrow_orima.brk"), mCursorModelData);
	mMarkerAnims[1].attachResource(arc->getResource("cursor/arrow_luji.brk"), mCursorModelData);

	P2DEBUG("Before unmount: %d", JKRGetCurrentHeap()->getTotalFreeSize());
	texts->unmount();
	P2DEBUG("After unmount: %d", JKRGetCurrentHeap()->getTotalFreeSize());
}

/**
 * @note Address: 0x8015B02C
 * @note Size: 0x64
 */
SysShape::Model* NaviMgr::createModel(int naviID) { return new SysShape::Model((&mOlimarModel)[naviID], 0, 2); }

/**
 * @note Address: 0x8015B090
 * @note Size: 0xD4
 */
void NaviMgr::loadResources_float()
{
	JKRArchive* arc = JKRMountArchive("/user/Kando/piki/pikis.szs", JKRArchive::EMM_Mem, sys->mSysHeap, JKRArchive::EMD_Head);

	void* file
	    = playData->isStoryFlag(STORY_DebtPaid) ? arc->getResource("orima_model/syatyou.bmd") : arc->getResource("orima_model/orima3.bmd");

	J3DModelData* model = J3DModelLoaderDataBase::load(file, 0x20000030);
	for (u16 j = 0; j < model->getShapeNum(); j++) {
		J3DShape* shape = model->mShapeTable.mItems[j];
		shape->setTexMtxLoadType(0x2000);
	}

	mLouieModel = model;
}

/**
 * @note Address: 0x8015B164
 * @note Size: 0x8C
 */
int NaviMgr::getAliveCount()
{
	int alive = 0;
	for (int i = 0; i < getMax(); i++) {
		if (mArray[i].isAlive()) {
			alive++;
		}
	}
	return alive;
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
Navi* NaviMgr::getSurviveNavi()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8015B1F0
 * @note Size: 0x18
 */
void NaviMgr::clearDeadCount()
{
	mDeadNavis        = 0;
	mNaviDeadFlags[0] = -1;
	mNaviDeadFlags[1] = -1;
}

/**
 * @note Address: 0x8015B208
 * @note Size: 0x78
 */
void NaviMgr::informOrimaDead(int id)
{
	// check if already dead
	for (int i = 0; i < mDeadNavis; i++) {
		if (mNaviDeadFlags[i] == id) {
			return;
		}
	}

	mNaviDeadFlags[mDeadNavis] = id;
	mDeadNavis++;
	Navi* navi = getAt(id);
	if (navi) {
		navi->releasePikis();
	}
}

/**
 * @note Address: 0x8015B280
 * @note Size: 0x4C
 */
Navi* NaviMgr::getDeadOrima(int id)
{
	if (mDeadNavis > id) {
		return getAt(mNaviDeadFlags[id]);
	}
	return nullptr;
}

/**
 * @note Address: 0x8015B2CC
 * @note Size: 0xEC
 */
Navi* NaviMgr::getAliveOrima(int type)
{
	// no captains alive to get
	if (mDeadNavis == 2) {
		return nullptr;
	}

	// only one captain alive to get
	if (mDeadNavis == 1) {
		int index = 1 - mNaviDeadFlags[0];

		// no inactive captain to return, so only return if we want active
		return (type == ALIVEORIMA_Active) ? getAt(index) : nullptr;
	}

	// both captains alive
	if (mDeadNavis == 0) {
		Navi* olimar = getAt(NAVIID_Olimar);
		Navi* louie  = getAt(NAVIID_Louie); // or president
		Navi* activeNavi;
		Navi* inactiveNavi;

		if (olimar->mController1) { // olimar's active
			activeNavi   = olimar;
			inactiveNavi = louie;
		} else { // louie or president is active
			activeNavi   = louie;
			inactiveNavi = olimar;
		}

		if (type == ALIVEORIMA_Active) {
			return activeNavi;
		}
		return inactiveNavi;
	}

	return nullptr;
}

/**
 * @note Address: 0x8015B3B8
 * @note Size: 0xA8
 */
void NaviMgr::setMovieDraw(bool drawOn)
{
	if (!drawOn) {
		mFlags.set(0x01);
	} else {
		mFlags.unset(0x01);
	}

	for (int i = 0; i < getMax(); i++) {
		if (!mOpenIds[i]) {
			mArray[i].set_movie_draw(drawOn);
		}
	}
}

/**
 * @note Address: 0x8015B460
 * @note Size: 0xE0
 */
void NaviMgr::doAnimation()
{
	bool flag = mFlags.isSet(1);
	for (int i = 0; i < getMax(); i++) {
		if (mOpenIds[i] == 0 && (flag == 0 || mArray[i].isMovieActor())) {
			mArray[i].mFaceDirOffset = mArray[i].mFaceDir;
			mArray[i].update();
			mArray[i].doAnimation();
		}
	}
}

/**
 * @note Address: 0x8015B540
 * @note Size: 0x168
 */
void NaviMgr::doEntry()
{
	bool vs = false;
	if (gameSystem->isVersusMode()) {
		vs = true;
	}
	bool flag = mFlags.isSet(1);
	for (int i = 0; i < mMax; i++) {
		if (mOpenIds[i] != 0) {
			continue;
		}
		if (flag && !mArray[i].isMovieActor()) {
			mArray[i].mLod.resetFlag(AILOD_IsVisibleBoth);
		} else if (mArray[i].isMovieActor()) {
			mArray[i].mLod.setFlag(AILOD_IsVisibleBoth);
		}

		if (vs) {
			Navi* navi = &mArray[i];
			if ((int)navi->mNaviIndex == NAVIID_Louie && pikiMgr->mFlags[0] & 1) {
				navi->mLod.resetFlag(AILOD_IsVisVP0);
			} else if ((int)navi->mNaviIndex == NAVIID_Olimar && pikiMgr->mFlags[0] & 2) {
				navi->mLod.resetFlag(AILOD_IsVisVP1);
			}
		}
		mArray[i].doEntry();
	}
}

/**
 * @note Address: 0x8015B6A8
 * @note Size: 0x378
 */
void NaviMgr::doSimulation(f32 rate)
{
	MonoObjectMgr::doSimulation(rate);
	if (gameSystem->isChallengeMode() || mPSMMgr) {
		Iterator<Navi> iterator(this);
		CI_LOOP(iterator)
		{
			Navi* navi = *iterator;
			if (navi->isAlive() && navi->mHealth <= 0.5f) {
				mPSMMgr->directOn(navi->mNaviIndex);
			} else {
				mPSMMgr->directOff(navi->mNaviIndex);
			}
		}
		mPSMMgr->frameEndWork();

		return;
	}

	PSM::ActorDirector_TempoChange* psm = PSMGetLifeD();
	if (psm) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			if (navi->getLifeRatio() <= 0.5f) {
				psm->directOn();
			} else {
				psm->directOff();
			}
		} else {
			psm->directOff();
		}
	}
}

/**
 * @note Address: 0x8015BA20
 * @note Size: 0x4
 */
void NaviMgr::setupSoundViewerAndBas() { }

} // namespace Game
