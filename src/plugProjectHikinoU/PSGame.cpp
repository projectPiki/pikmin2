#include "PSGame/BASARC.h"
#include "PSSystem/PSSystemIF.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "PSGame/CameraMgr.h"
#include "PSGame/EnvSe.h"
#include "PSGame/PikScene.h"
#include "PSGame/SoundCreatureMgr.h"
#include "PSGame/SoundTable.h"
#include "PSGame/SysFactory.h"
#include "PSM/BossSeq.h"
#include "PSSystem/ConductorList.h"
#include "PSGame/SeMgr.h"
#include "PSGame/Global.h"
#include "PSSystem/PSGame.h"
#include "JSystem/JAudio/JALCalc.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "Game/gamePlayData.h"
#include "PSGame/PSSe.h"

bool PSGame::ConductorList::sToolMode;

namespace PSGame {
char newSeqName[32];

/**
 * @note Address: 0x80334268
 * @note Size: 0x28
 */
u8 CaveFloorInfo::getCaveNoFromID()
{
	if (mCaveID.fullView == 'test') {
		return 0;
	}
	return (u8)(mCaveID.byteView[3] - '1');
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
ConductorList::ConductorList()
    : SingletonBase()
{
	mCaveInfos = nullptr;
	mCaveCount = 255;
}

/**
 * @note Address: 0x80334290
 * @note Size: 0xD4
 */
ConductorList::~ConductorList()
{
	for (u8 i = 0; i < mCaveCount; i++) {
		// works, but theres something weird going on here
		delete[] (&mCaveInfos->mFileNames)[i * 2];
	}

	delete[] mCaveInfos;
}

/**
 * @note Address: 0x80334364
 * @note Size: 0x1AC
 */
bool ConductorList::read(Stream& input)
{
	mCaveCount = input.readByte();
	P2ASSERTLINE(140, !mCaveInfos);
	mCaveInfos = new (JKRGetCurrentHeap(), 0xffffffe0) CaveInfo[mCaveCount];
	P2ASSERTLINE(144, mCaveInfos);

	for (u8 i = 0; i < mCaveCount; i++) {
		u8 floors                    = input.readByte();
		mCaveInfos[i].mFileNameCount = floors;
		mCaveInfos[i].mFileNames     = new (JKRGetCurrentHeap(), 0xffffffe0) char[floors * 32];
		for (u8 j = 0; j < floors; j++) {
			char* str = &mCaveInfos[i].mFileNames[j * 32];
			input.readString(str, 32);
			P2ASSERTLINE(156, strcmp(str, "endoffile"));
			P2ASSERTBOOLLINE(158, str[0] < '0' || str[0] > '9');
		}
	}

	return true;
}

/**
 * @note Address: 0x80334510
 * @note Size: 0x14
 */
ConductorList::CaveInfo::CaveInfo()
{
	mFileNameCount = 255;
	mFileNames     = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xF4
 */
char* ConductorList::getInfo(u8 caves, u8 floor)
{
	if (sToolMode && (caves >= mCaveCount || floor >= mCaveInfos[caves].mFileNameCount)) {
		return &mCaveInfos[0].mFileNames[0];
	}

	P2ASSERTLINE(175, caves < mCaveCount);
	P2ASSERTLINE(176, floor < mCaveInfos[caves].mFileNameCount);
	return &mCaveInfos[caves].mFileNames[floor * 32];
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
ConductorList::AutoBgmInfo ConductorList::getAutoBgmInfo(u8 cave, u8 floor)
{
	AutoBgmInfo info;
	info.mConductorName = getInfo(cave, floor);
	getSeqAndWaveFromConductor(info.mConductorName, &info.mWaveScene, &info.mBmsName);
	return info;
}

/**
 * @note Address: 0x80334524
 * @note Size: 0x3D4
 */
void ConductorList::getSeqAndWaveFromConductor(char const* cndName, u8* wScene, char** bmsName)
{
	// CAVESOIL UNITS
	if (!strncmp("cavesoil", cndName, strlen("cavesoil"))) {
		*bmsName = "cavesoil.bms";
		cndName += strlen("cavesoil_");
		if (!strncmp(cndName, "00", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE22_CaveSoil_00;
		} else if (!strncmp(cndName, "05", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE33_CaveSoil_05;
		} else {
			*wScene = PSSystem::WaveScene::WSCENE34_CaveSoil_10;
		}
		return;
	}

	// CAVEMETAL UNITS
	if (!strncmp("cavemetal", cndName, strlen("cavemetal"))) {
		*bmsName = "cavemetal.bms";
		cndName += strlen("cavemetal_");
		if (!strncmp(cndName, "00", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE10_CaveMetal_00;
		} else if (!strncmp(cndName, "05", 2)) {
			*wScene = PSSystem::WaveScene::WSCENE29_CaveMetal_05;
		} else {
			*wScene = PSSystem::WaveScene::WSCENE30_CaveMetal_10;
		}
		return;
	}

	// CAVECONC UNITS
	if (IS_SAME_STRING_N("caveconc", cndName, strlen("caveconc"))) {
		*bmsName = "caveconc.bms";
		cndName += strlen("caveconc_");
		if (IS_SAME_STRING_PREFIX(cndName, "00")) {
			*wScene = PSSystem::WaveScene::WSCENE26_CaveConc_00;
		} else if (IS_SAME_STRING_PREFIX(cndName, "05")) {
			*wScene = PSSystem::WaveScene::WSCENE31_CaveConc_05;
		} else {
			*wScene = PSSystem::WaveScene::WSCENE32_CaveConc_10;
		}
		return;
	}

	// NEW UNITS
	if (IS_SAME_STRING_N("new", cndName, strlen("new"))) {
		strcpy(newSeqName, cndName);
		strcpy(&newSeqName[6], ".bms\0");
		*bmsName = newSeqName;
		u8 ones, tens;
		if (newSeqName[5] >= '0' && newSeqName[5] <= '9') {
			ones = newSeqName[5] - '0';
		} else {
			ones = 255;
		}
		P2ASSERTLINE(258, ones != 0xffff);
		if (newSeqName[4] >= '0' && newSeqName[4] <= '9') {
			tens = newSeqName[4] - '0';
		} else {
			tens = 255;
		}
		P2ASSERTLINE(260, tens != 0xffff);
		*wScene = PSSystem::WaveScene::WSCENE37_EmergenceCave + u8(ones + (tens * 10));
		return;
	}

	// CAVETILE UNITS
	if (IS_SAME_STRING_N("cavetile", cndName, strlen("cavetile"))) {
		*bmsName = "cavetile.bms";
		*wScene  = PSSystem::WaveScene::WSCENE24_CaveTile;
		return;
	}

	// CAVEGLASS UNITS
	if (IS_SAME_STRING_N("caveglass", cndName, strlen("caveglass"))) {
		*bmsName = "caveglass.bms";
		*wScene  = PSSystem::WaveScene::WSCENE23_CaveOutside;
		return;
	}

	// CAVETSUMIKI UNITS
	if (IS_SAME_STRING_N("cavetsumiki", cndName, strlen("cavetsumiki"))) {
		*bmsName = "cavetsumiki.bms";
		*wScene  = PSSystem::WaveScene::WSCENE25_CaveToy;
		return;
	}

	// CAVERELAX UNITS
	if (IS_SAME_STRING_N("caverelax", cndName, strlen("caverelax"))) {
		*bmsName = "caverelax.bms";
		*wScene  = PSSystem::WaveScene::WSCENE28_CaveRestFloor;
		return;
	}

	JUT_PANICLINE(289, cndName);
}

/**
 * @note Address: 0x803348F8
 * @note Size: 0xE0
 */
SoundTable::CategoryMgr::CategoryMgr()
    : SingletonBase(this)
{
	for (u8 i = 0; i < SoundCat_COUNT; i++) {
		mPerspInfo[i] = new SePerspInfo;
		P2ASSERTLINE(312, mPerspInfo[i]);
		initiate(i);
	}
}

/**
 * @note Address: 0x803349D8
 * @note Size: 0x174
 */
void SoundTable::CategoryMgr::initiate(u8 id)
{
	P2ASSERTLINE(319, mPerspInfo[id]);

	switch (id) {
	case SoundCat0_Navi:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat1_System:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat2_Piki:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat3_Item:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	case SoundCat4_Env:
		mPerspInfo[id]->set(1.0f, 684.0f, 0.197f, 4012.5f, 200.0f);
		break;
	case SoundCat5_Enemy:
		mPerspInfo[id]->set(1.0f, 700.0f, 0.18f, 2600.0f, 200.0f);
		break;
	default:
		P2ASSERTLINE(341, false);
	}
}

/**
 * @note Address: 0x80334B4C
 * @note Size: 0x18
 */
void SoundTable::SePerspInfo::set(f32 defDist, f32 baseDist, f32 a3, f32 a4, f32 forcedDist)
{
	mDefaultDistance = defDist;
	mBaseDistance    = baseDist;
	_08              = a3;
	_0C              = a4;
	mForcedDistance  = forcedDist;
}

/**
 * @note Address: 0x80334B64
 * @note Size: 0x164
 */
f32 SoundTable::SePerspInfo::getDistVol(f32 factor, u8 flag)
{
	if (mDisabled) {
		return 0.0f;
	} else {
		f32 mult = mBaseDistance;
		switch (flag) {
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			mult *= 2.0f;
			break;
		case 4:
			mult *= 0.0f;
			break;
		case 5:
			mult *= 0.5f;
			break;
		case 6:
			mult *= 0.25f;
			break;
		case 7:
			mult = mForcedDistance;
			break;
		default:
			JUT_PANICLINE(403, "P2Assert");
		}

		if (factor < JAIGlobalParameter::getParamMaxVolumeDistance()) {
			return mDefaultDistance;
		} else if (factor < mult) {
			return JALCalc::linearTransform(factor, JAIGlobalParameter::getParamMaxVolumeDistance(), mult, mDefaultDistance, _08, false);
		} else if (factor < _0C) {
			return JALCalc::linearTransform(factor, mult, _0C, _08, JAIGlobalParameter::getParamMinDistanceVolume(), false);
		}
		return 0.0f;
	}
}

const f32 CameraMgr::sDefaultVol = 0.8f;

/**
 * @note Address: 0x80334CC8
 * @note Size: 0xA8
 */
CameraMgr::CameraMgr()
{
	mIsSpecial[0]        = false;
	mIsSpecial[1]        = false;
	mMinDistance         = 61.66f;
	mMidDistance         = 131.25f;
	mFarDistance         = 215.04f;
	mMaxDistance         = 330.18f;
	mMinDistVolume       = 1.0f;
	mMidVolume           = 0.8f;
	mFarVolume           = 0.71f;
	mMaxDistVolume       = 0.62f;
	mZoomCamVolumeMod    = 0.45f;
	mCamDistVolume[0]    = mMidDistance;
	mCamDistVolume[1]    = mMidDistance;
	mDistVolumeFactor[0] = 1.0f;
	mDistVolumeFactor[1] = 1.0f;
}

/**
 * @note Address: 0x80334D70
 * @note Size: 0x60
 */
CameraMgr::~CameraMgr()
{
}

/**
 * @note Address: 0x80334DD0
 * @note Size: 0x24
 */
f32 CameraMgr::getBgmCamVol(u8 id)
{
	if (mIsSpecial[id]) {
		return mZoomCamVolumeMod;
	}

	return 1.0f;
}

/**
 * @note Address: 0x80334DF4
 * @note Size: 0x4C
 */
void CameraMgr::update(u8 id, f32 distance)
{
	f32 volume            = getVol_DistBetweenCamAndLookat(distance);
	mCamDistVolume[id]    = volume;
	mDistVolumeFactor[id] = 1.0f;
}

/**
 * @note Address: 0x80334E40
 * @note Size: 0x10
 */
f32 CameraMgr::getCurrentCamDistVol(u8 id)
{
	return mCamDistVolume[id];
}

/**
 * @note Address: 0x80334E50
 * @note Size: 0x88
 */
f32 CameraMgr::getVol_DistBetweenCamAndLookat(f32 dist)
{
	if (dist <= mMidDistance) {
		return JALCalc::linearTransform(dist, mMinDistance, mMidDistance, mMinDistVolume, mMidVolume, false);
	} else if (dist <= mFarDistance) {
		return JALCalc::linearTransform(dist, mMidDistance, mFarDistance, mMidVolume, mFarVolume, false);
	} else {
		return JALCalc::linearTransform(dist, mFarDistance, mMaxDistance, mFarVolume, mMaxDistVolume, false);
	}
}

/**
 * @note Address: 0x80334ED8
 * @note Size: 0x34
 */
SysFactory::SysFactory()
{
	mHeap          = nullptr;
	mHeapSize      = 0;
	mAafFile       = nullptr;
	mMakeSeFunc    = nullptr;
	mSolidHeapSize = SYSFACTORY_HEAP_SIZE;
	mSolidHeap     = nullptr;
}

/**
 * @note Address: 0x80334F0C
 * @note Size: 0x404
 */
void SysFactory::newSoundSystem()
{
	P2ASSERTLINE(715, mHeap);
	P2ASSERTLINE(716, mHeapSize);
	P2ASSERTLINE(717, mAafFile);
	preInitJAI();

	JKRHeap* backupheap = JKRGetCurrentHeap();
	mHeap->becomeCurrentHeap();

	JKRSolidHeap* newheap = makeSolidHeap(mHeap->getFreeSize(), mHeap, false);
	P2ASSERTLINE(741, newheap);
	newheap->becomeCurrentHeap();
	PSSystem::SingletonBase<SoundTable::CategoryMgr>::newInstance();
	P2ASSERTLINE(748, mSolidHeapSize < newheap->getFreeSize());

	mSolidHeap = makeSolidHeap(mSolidHeapSize, newheap, false);
	P2ASSERTLINE(754, mSolidHeap);

	PSSystem::SetupArg arg = { mSolidHeap, mHeapSize, 231, seqCpuSync, mAafFile, "/SeqTest/" };
	P2ASSERTLINE(769, !PSSystem::spSysIF);
	PSSystem::SysIF::sMakeJAISeCallback = mMakeSeFunc;
	PSSystem::SysIF* sysif              = new PSSystem::SysIF(arg);
	P2ASSERTLINE(773, sysif);

	PSSystem::spSceneMgr = (PSSystem::SceneMgr*)newSceneMgr();
	P2ASSERTLINE(776, PSSystem::spSceneMgr);

	postInitJAI();

	PSAutoBgm::ConductorArcMgr::createInstance();
	PSSystem::ArcMgr<BASARC>::createInstance();

	PSSystem::SingletonBase<SeMgr>::newInstance();

	backupheap->becomeCurrentHeap();
	newheap->adjustSize();
	OSLockMutex(&sysif->mChecker.mMutex);
	sysif->mChecker.mIsEnabled = true;
	OSUnlockMutex(&sysif->mChecker.mMutex);
	OSDisableInterrupts();
	PSSystem::spSysIF = sysif;
	OSEnableInterrupts();
}

/**
 * @note Address: 0x80335310
 * @note Size: 0x80
 */
void SysFactory::preInitJAI()
{
	JAIGlobalParameter::setParamInitDataFileName("PSGame.aaf");
	JAIGlobalParameter::setParamSequenceArchivesFileName("Seq.arc");
	JAIGlobalParameter::setParamAudioCameraMax(2);
	JAIGlobalParameter::setParamSystemTrackMax(0xe7);
	JAIGlobalParameter::setParamSeqPlayTrackMax(5);
	JAIGlobalParameter::setParamSeqControlBufferMax(10);
	JAIGlobalParameter::setParamSystemRootTrackMax(10);
	JAIGlobalParameter::setParamStayHeapSize(0xf000);
	JAIGlobalParameter::setParamAutoHeapMax(3);
	JAIGlobalParameter::setParamAutoHeapRoomSize(0xa2ff);
	JAIGlobalParameter::setParamStayHeapMax(1);
}

/**
 * @note Address: 0x80335390
 * @note Size: 0x120
 */
void SysFactory::postInitJAI()
{
	f32 max = 0.0f;
	for (u8 i = 0; i < (u8)JAIGlobalParameter::getParamSeCategoryMax(); i++) {
		if (JAInter::SoundTable::getSoundMax(i)) {
			f32 calc = getSoundCategoryInfo(PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::sInstance, i)->_0C;
			if (max < calc) {
				max = calc;
			}
			JAInter::SeMgr::seCategoryVolume[i]
			    = getSoundCategoryInfo(PSSystem::SingletonBase<PSGame::SoundTable::CategoryMgr>::sInstance, i)->mDefaultDistance;
		}
	}

	JAIGlobalParameter::setParamDistanceMax(max);
	JAIGlobalParameter::setParamMinDistanceVolume(0.0f);
	JAIGlobalParameter::setParamMaxVolumeDistance(120.0f);
}

/**
 * @note Address: 0x803354B0
 * @note Size: 0x38
 */
SceneInfo::SceneInfo()
    : mStageFlags(0)
    , mSceneType(0)
    , mCameras(0)
{
	for (int i = 0; i < 2; i++) {
		mCam1Position[i] = nullptr;
		mCam2Position[i] = nullptr;
		mCameraMtx[i]    = nullptr;
	}
}

/**
 * @note Address: 0x803354E8
 * @note Size: 0x78
 */
void SceneInfo::setStageFlag(SceneInfo::FlagDef flag, SceneInfo::FlagBitShift shift)
{
	if (flag == 0) {
		mStageFlags &= ~(1 << shift);
	} else if (flag == 1) {
		mStageFlags |= (1 << shift);
	} else {
		JUT_PANICLINE(906, "flagは0 or1です");
	}
}

/**
 * @note Address: 0x80335560
 * @note Size: 0x10
 */
SceneInfo::FlagDef SceneInfo::getFlag(SceneInfo::FlagBitShift shift) const
{
	return (SceneInfo::FlagDef)(mStageFlags >> shift & 1);
}

/**
 * @note Address: 0x80335570
 * @note Size: 0x74
 */
void SceneInfo::setStageCamera() const
{
	for (u8 i = 0; i < mCameras; i++) {
		JAIBasic::msBasic->setCameraInfo((Vec*)mCam1Position[i], (Vec*)mCam2Position[i], mCameraMtx[i]->mMatrix.mtxView, i);
	}
}

/**
 * @note Address: 0x803355E4
 * @note Size: 0x3C
 */
PikScene::PikScene(u8 id)
    : PSSystem::Scene(id)
{
}

/**
 * @note Address: 0x80335620
 * @note Size: 0x60
 */
PikScene::~PikScene()
{
}

/**
 * @note Address: 0x80335680
 * @note Size: 0xA8
 */
PSM::MiddleBossSeq* PikScene::getMiddleBossBgm()
{
	char* name;
	PSSystem::SeqBase* seq = mSeqMgr.getSeq(1);
	if (!seq) {
		return nullptr;
	}

	name = seq->mBmsFileName;
	if ((!strcmp(name, "m_boss.bms") || !strcmp(name, "l_boss.bms")) && seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq) {
		return static_cast<PSM::MiddleBossSeq*>(seq);
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void PikScene::getJumpMainBgm()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80335728
 * @note Size: 0x378
 */
PSSystem::Scene* PikSceneMgr::newAndSetGlobalScene()
{
	JUT_ASSERTLINE(1002, !mScenes, "2重にグローバルシーンを作成しようとした"); // 'I tried to create a global scene twice'
	SceneInfo info;
	info.mSceneType = SceneInfo::SCENE_NULL;
	info.mCameras   = 0;
	info.setStageFlag(SceneInfo::SCENEFLAG_Unk0, SceneInfo::SFBS_1);

	mScenes = newGameScene(0, &info);
	P2ASSERTLINE(1015, mScenes);
	mScenes->adaptTo(&mScenes);
	mEndScene = mScenes;

	PSSystem::SingletonBase<PSSystem::StreamDataList>::newInstance();
	P2ASSERTLINE(1024, PSSystem::SingletonBase<PSSystem::StreamDataList>::getInstance()->onlyLoad("/user/Totaka/StreamList.txt",
	                                                                                              JKRDvdRipper::ALLOC_DIR_TOP));
	PSSystem::SingletonBase<PSSystem::SeqDataList>::newInstance();
	P2ASSERTLINE(1028, PSSystem::SingletonBase<PSSystem::SeqDataList>::getInstance()->onlyLoad("/user/Totaka/BgmList.txt",
	                                                                                           JKRDvdRipper::ALLOC_DIR_TOP));

	JAInter::SoundInfo seInfo = { 0x00001F00, 255, 0, 0, 1.0f, 127, 0 };
	P2ASSERTLINE(1040, seInfo.mVolume <= 127);
	PSSystem::SeSeq* seSeq = new PSSystem::SeSeq("se.bms", seInfo);
	P2ASSERTLINE(1043, seSeq);
	seSeq->init();
	mScenes->appendSeq(seSeq);

	JAInter::SoundInfo bgmInfo = { 0x00000000, 0x7F, 1, 0, 1.0f, 50, 0 };
	PSSystem::BgmSeq* bgmSeq   = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_OPTION), bgmInfo);
	P2ASSERTLINE(1061, bgmSeq);
	bgmSeq->init();
	mScenes->appendSeq(bgmSeq);
	return mScenes;
}

/**
 * @note Address: 0x80335AA0
 * @note Size: 0x4AC
 */
PSSystem::Scene* PikSceneMgr::newAndSetCurrentScene(SceneInfo& info)
{
	u8 sceneType = info.getSceneType();
	P2ASSERTLINE(1093, sceneType != SceneInfo::SCENE_NULL);
	JUT_ASSERTLINE(1094, sceneType < SceneInfo::SCENE_COUNT, "scene noが不正"); // 'scene no is invalid'

	checkScene();

	JUT_ASSERTLINE(1095, !mScenes->mChild, "前回のmCurrentSceneの後処理が不正"); // 'previous mCurrentScene post-processing is invalid

	info.setStageCamera();

	P2ASSERTLINE(1105, mScenes);
	P2ASSERTLINE(1106, !mScenes->mChild);

	u8 wScene                      = 255;
	PSAutoBgm::ConductorMgr::sHeap = JKRGetCurrentHeap();
	PSSystem::BgmSeq* seq          = initMainBgm(info, &wScene);
	P2ASSERTLINE(1132, seq);

	bool needboss              = false;
	PSSystem::SeqBase* bossSeq = nullptr;
	if ((u8)info.mSceneType == SceneInfo::CHALLENGE_MODE || (u8)info.mSceneType == SceneInfo::TWO_PLAYER_BATTLE
	    || u8(info.mSceneType - 1) <= 3 || info.isCaveFloor()) {
		needboss = true;
	}

	// Check for submerged castle theme
	if (info.isCaveFloor() && info.mSceneType == SceneInfo::COURSE_YAKUSHIMA) {
		if (static_cast<CaveFloorInfo&>(info).getCaveNoFromID() == 3 && !static_cast<CaveFloorInfo&>(info).isBossFloor()) {
			needboss = false;
		}
	}

	if (needboss) {
		bossSeq = initBossBgm(info, &wScene);
		P2ASSERTLINE(1163, bossSeq);
	}

	SceneInfo* newinfo;
	if (info.isCaveFloor()) {
		newinfo = new CaveFloorInfo(static_cast<CaveFloorInfo&>(info));
	} else {
		newinfo = new SceneInfo(info);
	}

	PSSystem::Scene* newscene = newGameScene(wScene, newinfo);
	P2ASSERTLINE(1185, seq);
	newscene->appendSeq(seq);

	if (needboss) {
		P2ASSERTLINE(1191, bossSeq);
		newscene->appendSeq(bossSeq);
	}

	initAdditionalBgm(info, newscene);
	P2ASSERTLINE(1214, newscene);
	mScenes->adaptChildScene(newscene);
	return newscene;
}

/**
 * @note Address: 0x80335F4C
 * @note Size: 0x98
 */
PSSystem::BgmSeq* PikSceneMgr::newBgmSeq(char const* bmsFilePath, JAInter::SoundInfo& info)
{
	PSSystem::BgmSeq* seq = new PSSystem::BgmSeq(bmsFilePath, info);
	P2ASSERTLINE(1223, seq);
	seq->init();
	return seq;
}

/**
 * @note Address: 0x80335FE4
 * @note Size: 0x88
 */
PSSystem::BgmSeq* PikSceneMgr::newStreamBgm(u32 id, JAInter::SoundInfo& info)
{
	info.mFlag            = 0;
	PSSystem::BgmSeq* seq = new PSSystem::StreamBgm(id, info);
	P2ASSERTLINE(1234, seq);
	return seq;
}

/**
 * @note Address: 0x8033606C
 * @note Size: 0x150
 */
PSSystem::BgmSeq* PikSceneMgr::initBossBgm(SceneInfo& info, u8* wScene)
{
	JAInter::SoundInfo soundInfo = { 0x00000000, 127, 2, 0, 1.0f, 40, 0 };

	PSSystem::DirectedBgm* seq;
	if (curSceneIsBigBossFloor()) {
		seq     = (PSSystem::DirectedBgm*)newDirectedBgm("l_boss.bms", soundInfo);
		*wScene = PSSystem::WaveScene::WSCENE35_TitanDweevil;

	} else {
		seq = (PSSystem::DirectedBgm*)newDirectedBgm("m_boss.bms", soundInfo);
	}

	P2ASSERTLINE(1264, seq);

	seq->assertValidTrack();

	seq->mRootTrack->mBeatInterval = 60;
	P2ASSERTLINE(1267, soundInfo.mVolume <= 127);
	return seq;
}

/**
 * @note Address: 0x803361BC
 * @note Size: 0x400
 */
void PikSceneMgr::initAdditionalBgm(SceneInfo& info, PSSystem::Scene* scene)
{
	JAInter::SoundInfo soundInfo = { 0x00000000, 0x7F, 0x01, 0, 1.0f, 50, 0 };

	PSSystem::BgmSeq* seq;
	switch (info.mSceneType) {
	case SceneInfo::TITLE_SCREEN:
		seq = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_OPTION), soundInfo);
		P2ASSERTLINE(1290, seq);
		scene->appendSeq(seq);

		seq = newBgmSeq("hiscore.bms", soundInfo);
		P2ASSERTLINE(1296, seq);
		scene->appendSeq(seq);

		seq = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_OMAKE), soundInfo);
		P2ASSERTLINE(1302, seq);
		scene->appendSeq(seq);
		break;

	case SceneInfo::COURSE_TUTORIALDAY1:
		seq = newBgmSeq("n_tutorial_1stday.bms", soundInfo);
		P2ASSERTLINE(1318, seq);
		scene->appendSeq(seq);
		break;

	case SceneInfo::CHALLENGE_MODE:
		soundInfo._05                 = 4;
		soundInfo.mVolume             = 35;
		soundInfo.mFlag               = 0x1F00;
		JADUtility::AccessMode flag   = (JADUtility::AccessMode)mAccessMode;
		PSSystem::DirectedBgm* seqold = (PSSystem::DirectedBgm*)scene->mSeqMgr.getFirstSeq();
		seq                           = newAutoBgm("cavekeyget.cnd", "cavekeyget.bms", soundInfo, flag, info, seqold->mDirectorMgr);
		scene->appendSeq(seq);
		scene->setSecondaryWaveScene(PSSystem::WaveScene::WSCENE5_Challenge_KeyGet);
		P2ASSERTLINE(1342, seq == scene->mSeqMgr.getSeq(2));
		break;
	}

	// Check for submerged castle theme
	if (info.isCaveFloor() && info.mSceneType == SceneInfo::COURSE_YAKUSHIMA) {
		if (static_cast<CaveFloorInfo&>(info).getCaveNoFromID() == 3 && !static_cast<CaveFloorInfo&>(info).isBossFloor()) {
			seq = newBgmSeq("kuro_post.bms", soundInfo);
			P2ASSERTLINE(1353, seq);
			scene->appendSeq(seq);
		}
	}
}

/**
 * @note Address: 0x803365BC
 * @note Size: 0xD24
 */
PSSystem::BgmSeq* PikSceneMgr::initMainBgm(SceneInfo& info, u8* wScene)
{
	P2ASSERTLINE(1378, wScene);
	JADUtility::AccessMode mode = (JADUtility::AccessMode)mAccessMode;
	PSSystem::BgmSeq* bgm       = nullptr;

	JAInter::SoundInfo soundInfo = { 0x1F00, 127, 255, 0, 1.0f, 50, 0 };
	soundInfo._05                = 1;

	CaveFloorInfo& cinfo = static_cast<CaveFloorInfo&>(info);
	P2ASSERTLINE(1393, soundInfo._05 < 5);

	if (info.isCaveFloor()) {
		// we're in a 'cave' (story mode cave, 2P battle, vs or challenge mode)
		switch (info.mSceneType) {
		case SceneInfo::CHALLENGE_MODE:
			const char* path = "/user/Totaka/ChallengeBgmList.txt";
			PSSystem::SingletonBase<ConductorList>::newHeapInstance();

			ConductorList* list = PSSystem::SingletonBase<ConductorList>::getInstance();
			bool loaded         = list->load(path, JKRDvdRipper::ALLOC_DIR_BOTTOM);
			P2ASSERTLINE(1417, loaded);
			ConductorList::AutoBgmInfo bgmInfo = list->getAutoBgmInfo(cinfo.mChallengeModeStageNum, cinfo.mFloorNum);
			*wScene                            = bgmInfo.mWaveScene;
			bgm                                = newAutoBgm(bgmInfo.mConductorName, bgmInfo.mBmsName, soundInfo, mode, info, nullptr);
			delete PSSystem::SingletonBase<ConductorList>::sInstance;
			PSSystem::SingletonBase<ConductorList>::sInstance = nullptr;
			break;

		case SceneInfo::TWO_PLAYER_BATTLE:
			bgm     = newDirectedBgm("battle_t.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE6_2P_Battle;
			break;
		}

		if (!bgm) {
			switch (cinfo.mBetaType) {
			case CaveFloorInfo::BetaType_Boss: // Floor without music for bosses, apparently it loads caveconc_00 by default
				bgm = newAutoBgm("caveconc_00_0.cnd", "caveconc.bms", soundInfo, (JADUtility::AccessMode)mode, info, nullptr);
				break;

			case CaveFloorInfo::BetaType_Relax: // Rest floor, load rest/relax music
				bgm     = newAutoBgm("caverelax.cnd", "caverelax.bms", soundInfo, (JADUtility::AccessMode)mode, info, nullptr);
				*wScene = PSSystem::WaveScene::WSCENE28_CaveRestFloor;
				break;
			}
		}

		// Check for submerged castle theme
		if (info.isCaveFloor() && info.mSceneType == SceneInfo::COURSE_YAKUSHIMA) {
			if (cinfo.getCaveNoFromID() == 3 && !cinfo.isBossFloor()) { // cave is submerged castle + not sublevel 5
				bgm = newBgmSeq("kuro_pre.bms", soundInfo);             // cue spooky music
				P2ASSERTLINE(1566, bgm);
				*wScene = PSSystem::WaveScene::WSCENE48_SubmergedCastle;
			}
		}

		// story mode cave bgm settings
		if (!bgm) {
			P2ASSERTLINE(1574, !cinfo.mBetaType);
			char* txtpath = nullptr;
			switch (info.mSceneType) {
			case SceneInfo::COURSE_TUTORIAL:
			case SceneInfo::COURSE_TUTORIALDAY1:
				txtpath = "/user/Totaka/BgmList_Tutorial.txt";
				break;
			case SceneInfo::COURSE_FOREST:
				txtpath = "/user/Totaka/BgmList_Forest.txt";
				break;
			case SceneInfo::COURSE_YAKUSHIMA:
				txtpath = "/user/Totaka/BgmList_Yakushima.txt";
				break;
			case SceneInfo::COURSE_LAST:
				txtpath = "/user/Totaka/BgmList_Last.txt";
				break;
			case SceneInfo::COURSE_TEST:
				txtpath = "/user/Totaka/BgmList_BgmTest.txt";
				break;
			}

			PSSystem::SingletonBase<PSGame::ConductorList>::newHeapInstance();
			ConductorList* list = PSSystem::SingletonBase<PSGame::ConductorList>::getInstance();
			bool loaded         = list->load(txtpath, JKRDvdRipper::ALLOC_DIR_BOTTOM);
			P2ASSERTLINE(1601, loaded);
			OSReport("caveID==%d\n", cinfo.getCaveNoFromID());
			ConductorList::AutoBgmInfo bgmInfo = list->getAutoBgmInfo(cinfo.getCaveNoFromID(), cinfo.mFloorNum);
			*wScene                            = bgmInfo.mWaveScene;
			bgm                                = newAutoBgm(bgmInfo.mConductorName, bgmInfo.mBmsName, soundInfo, mode, info, nullptr);
			delete PSSystem::SingletonBase<ConductorList>::sInstance;
			PSSystem::SingletonBase<ConductorList>::sInstance = nullptr;
		}

	} else {
		// we're in story mode overworld, a menu/title/ending, or piklopedia
		switch (info.mSceneType) {
		// OVERWORLD
		case SceneInfo::COURSE_TUTORIAL:
		case SceneInfo::COURSE_TUTORIALDAY1:
			bgm     = newMainBgm("n_tutorial.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE15_Valley_of_Repose;
			break;

		case SceneInfo::COURSE_FOREST:
			bgm     = newMainBgm("forest.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE2_Awakening_Wood;
			break;

		case SceneInfo::COURSE_YAKUSHIMA:
			bgm     = newMainBgm("yakushima.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE3_Perplexing_Pool;
			P2ASSERTLINE(1640, bgm);
			static_cast<PSSystem::DirectedBgm*>(bgm)->assertValidTrack();
			static_cast<PSSystem::DirectedBgm*>(bgm)->mRootTrack->mBeatInterval = 30;
			break;

		case SceneInfo::COURSE_LAST:
			bgm     = newMainBgm("last.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE4_Wistful_Wild;
			P2ASSERTLINE(1650, bgm);
			static_cast<PSSystem::DirectedBgm*>(bgm)->assertValidTrack();
			static_cast<PSSystem::DirectedBgm*>(bgm)->mRootTrack->mBeatInterval = 30;
			break;

		// TITLE
		case SceneInfo::TITLE_SCREEN:
			bgm     = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_TITLE), soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE21_HighScores;
			break;

		// RESULTS
		case SceneInfo::CAVE_RESULTS:
			bgm = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_U_RESULT), soundInfo);
			break;
		case SceneInfo::CHALLENGE_RESULTS:
			bgm = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_C_RESULT), soundInfo);
			break;

		// FILE SELECT
		case SceneInfo::FILE_SELECT:
			bgm = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_FILE_SELECT), soundInfo);
			break;

		// MAP
		case SceneInfo::WORLD_MAP_NORMAL:
			bgm     = newBgmSeq("worldmap.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE16_WorldMap;
			break;
		case SceneInfo::WORLD_MAP_NEWLEVEL:
			bgm     = newBgmSeq("worldmap_intro.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE16_WorldMap;
			break;

		// CM MENU
		case SceneInfo::CHALLENGE_MENU:
			bgm     = newBgmSeq("c_menu.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE20_ChallengeSelect;
			break;

		// PIKLOPEDIA
		case SceneInfo::PIKLOPEDIA:
			bgm     = newBgmSeq("book.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE36_Piklopedia;
			break;

		// ENDINGS
		case SceneInfo::ENDING_COMPLETE:
			bgm     = newBgmSeq("comp_result.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE19_Final_Result;
			break;
		case SceneInfo::ENDING_DEBTRESULT:
			bgm     = newBgmSeq("f_result.bms", soundInfo);
			*wScene = PSSystem::WaveScene::WSCENE19_Final_Result;
			break;

		// VS MENU
		case SceneInfo::VERSUS_MENU:
			bgm = newStreamBgm(P2_STREAM_SOUND_ID(PSSTR_VS_MENU), soundInfo);
			break;
		default:
			JUT_PANICLINE(1745, "P2Assert");
		}
	}

	P2ASSERTLINE(1749, bgm);
	P2ASSERTLINE(1750, soundInfo.mVolume <= 127);

	return bgm;
}

/**
 * @note Address: N/A
 * @note Size: 0x1A8
 */
void ConductorSelector::getConductorFile(char const* path, CaveFloorInfo&, u8*, char*)
{
	JUT_PANICLINE(999, "%s_%02d_0.cnd");
	JUT_PANICLINE(999, "\nnot find Seq\n");
	JUT_PANICLINE(999, "%s_%02d_%1d.cnd");
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803372E0
 * @note Size: 0x94C
 */
u16 seqCpuSync(JASTrack* track, u16 command)
{
	u32 testID;
	PSAutoBgm::Conductor* prm;
	u32 cmd = command;
	switch (cmd) {
	case 0x3000:
		// even though the inline already HAS an assertion
		P2ASSERTLINE(1875, Rappa::getRappa(0));
		return Rappa::getRappa(0)->syncCpu_TblNo(track);
	case 0x3001:
		P2ASSERTLINE(1879, Rappa::getRappa(0));
		return Rappa::getRappa(0)->syncCpu_WaitChk(track);
	case 0x3002:
		P2ASSERTLINE(1883, Rappa::getRappa(1));
		return Rappa::getRappa(1)->syncCpu_TblNo(track);
	case 0x3003:
		P2ASSERTLINE(1887, Rappa::getRappa(1));
		return Rappa::getRappa(1)->syncCpu_WaitChk(track);
	case 0x5000:
		return Game::playData->isStoryFlag(Game::STORY_DebtPaid);
	case 0:
		JASTrack* temp;
		JASTrack* ref;
		u16 ret = 0;
		for (u32 i = 0; i < JAIGlobalParameter::getParamSeqPlayTrackMax(); i++) {
			if (JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence) {
				ref = &JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSeqParameter.mTrack;
				if (JAInter::SequenceMgr::getPlayTrackInfo(i)->mSequence->mSoundID & 0x800) {
					temp = track->mParentTrack->mParentTrack;
				} else {
					temp = track->mParentTrack;
				}
				if (ref == temp) {
					u32 route                   = JAInter::routeToTrack(track->_348);
					PSSystem::SeqBase* childSeq = PSMGetSceneMgrCheck()->findSeq(track);
					P2ASSERTLINE(1923, childSeq);
					JAInter::SystemInterface::outerInit(JAInter::SequenceMgr::getPlayTrackInfo(i), temp, route,
					                                    childSeq->mSoundInfo.mFlag >> 8, cmd & 1);
					JAInter::SequenceMgr::getPlayTrackInfo(i)->_04 |= 1 << route;
					ret = 0;
					i   = JAIGlobalParameter::getParamSeqPlayTrackMax(); // stupid way to break but ok
				}
			}
		}
		return ret;
	case 1:
		return JAIBasic::setParameterSeqSync(track, command);
	}

	P2ASSERTLINE(1948, PSSystem::spSceneMgr);
	testID         = track->_348;
	JASTrack* root = track;
	while (root->mParentTrack) {
		root = root->mParentTrack;
	}
	PSSystem::SeqBase* seq = PSSystem::spSceneMgr->getPlayingSeq(root);
	P2ASSERTLINE(1957, seq);
	JAISound** se = seq->getHandleP();
	u32 seExists  = *se != nullptr;
	if (seExists == 0) {
		switch (cmd) {
		case 0x2e00:
			return 30;
		case 0x900:
			return 1;
		case 0xc00:
			return 4;
		case 0xd00:
			return 1;
		case 0x300:
			return 0;
		case 0x800:
		case 0x600:
			return 10;
		default:
			return 0;
		}
	} else {
		switch (cmd) {
		case 0x1e00: {
			PSSystem::SeqTrackRoot* roottrack = (PSSystem::SeqTrackRoot*)PSSystem::getObject(track, 18);
			return roottrack->update();
		}
		case 0x1f00: {
			if (seExists <= 0) {
				return 0;
			}
			PSSystem::SeqTrackRoot* roottrack = (PSSystem::SeqTrackRoot*)PSSystem::getObject(track, 18);
			return roottrack->update();
		}
		case 0x2e00: {
			PSSystem::SeqTrackRoot* roottrack = (PSSystem::SeqTrackRoot*)PSSystem::getObject(track, 18);
			return roottrack->beatUpdate();
		}
		case 0x900: {
			PSAutoBgm::Module* module = (PSAutoBgm::Module*)PSSystem::getObject(track, 20);
			P2ASSERTLINE(2028, module);
			return module->cycleLoop(track);
		}
		case 0xa00: {
			PSAutoBgm::Module* module = (PSAutoBgm::Module*)PSSystem::getObject(track, 20);
			P2ASSERTLINE(2036, module);
			return module->mCycles[module->mCycleIndex]->cycleTop(track);
		}
		case 0xc00: {
			PSAutoBgm::Module* module = (PSAutoBgm::Module*)PSSystem::getObject(track, 20);
			P2ASSERTLINE(2043, module);
			return module->mCycles[module->mCycleIndex]->play(track);
		}
		case 0xd00: {
			PSAutoBgm::Module* module = (PSAutoBgm::Module*)PSSystem::getObject(track, 20);
			P2ASSERTLINE(2049, module);
			return module->mCycles[module->mCycleIndex]->checkCloser(track);
		}
		case 0xb00: {
			PSAutoBgm::Module* module = (PSAutoBgm::Module*)PSSystem::getObject(track, 20);
			P2ASSERTLINE(2055, module);
			module->_2B6 = -1;
			return 0;
		}
		}
	}

	if (!seq) {
		seq = PSSystem::spSceneMgr->findSeq(track);
	}

	switch (cmd) {
	case 0x4000:
		P2ASSERTLINE(2085, seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq);
		return static_cast<PSSystem::JumpBgmSeq*>(seq)->getSeqStartPoint();
	case 0x4001:
		P2ASSERTLINE(2095, seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq);
		return static_cast<PSSystem::JumpBgmSeq*>(seq)->outputJumpRequest();
	case 0xe00:
		bool isRootTrackBgm = seq->getCastType() == PSSystem::SeqBase::TYPE_DirectedBgm
		                   || seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq
		                   || seq->getCastType() == PSSystem::SeqBase::TYPE_AutoBgm;
		P2ASSERTLINE(2107, isRootTrackBgm);
		static_cast<PSSystem::DirectedBgm*>(seq)->initRootTrack_onPlaying(track);
		return 0;
	case 0xf00:
		bool isChildTrackBgm = seq->getCastType() == PSSystem::SeqBase::TYPE_DirectedBgm
		                    || seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq
		                    || seq->getCastType() == PSSystem::SeqBase::TYPE_AutoBgm;
		P2ASSERTLINE(2117, isChildTrackBgm);
		static_cast<PSSystem::DirectedBgm*>(seq)->initChildTrack_onPlaying(track, track->_348 & 0xf);
		return 0;
	case 0x600:
	case 0x300:
	case 0x800:
		prm = static_cast<PSAutoBgm::AutoBgm*>(seq)->mConductorMgr.mPrmSetRc;
		P2ASSERTLINE(2128, prm);
		return prm->seqCpuSync_AutoBgm(track, command, testID, root);
	default:
		return 0;
	}
}

} // namespace PSGame

/**
 * @note Address: 0x80337C2C
 * @note Size: 0x7C
 */
void PSPlayerChangeToOrimer()
{
	PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
	if (bgm) {
		bgm->assertValidTrack();
		bgm->mRootTrack->mSwingState = 0;
	}
}

/**
 * @note Address: 0x80337CA8
 * @note Size: 0x124
 */
PSSystem::DirectedBgm* PSGetDirectedMainBgm()
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	mgr->checkScene();
	PSSystem::Scene* scene = mgr->mScenes->mChild;
	if (!scene) {
		return nullptr;
	}

	PSSystem::SeqBase* seq = scene->mSeqMgr.getFirstSeq();
	if (seq
	    && (seq->getCastType() == PSSystem::SeqBase::TYPE_DirectedBgm || seq->getCastType() == PSSystem::SeqBase::TYPE_AutoBgm
	        || seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq)) {
		return static_cast<PSSystem::DirectedBgm*>(seq);
	}
	return nullptr;
}

/**
 * @note Address: 0x80337DCC
 * @note Size: 0x170
 */
void PSPlayerChangeToLugie()
{
	PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
	if (bgm) {
		bgm->assertValidTrack();
		bgm->mRootTrack->mSwingState = 1;
	}
}

/**
 * @note Address: 0x80337F3C
 * @note Size: 0x170
 */
PSSystem::DirectedBgm* PSGetDirectedMainBgmA()
{
	PSSystem::DirectedBgm* seq = (PSSystem::DirectedBgm*)PSMGetSceneMgrCheck()->getChildScene()->getSeqMgr()->getFirstSeqA();
	if (seq) {
		P2ASSERTLINE(2241, seq->isDirectedType());
		return seq;
	} else {
		P2ASSERTLINE(2244, false);
	}
	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void PSSetBgmSelectAsToolMode()
{
	PSSystem::DirectorBase::sToolMode = true;
}
