#include "PSGame/SeMgr.h"
#include "PSGame/PSSe.h"
#include "PSGame/EnvSe.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSSystem/PSSystemIF.h"
#include "trig.h"
#include "CNode.h"

namespace PSGame {
f32 Rappa::cRatio                  = 15.0f;
u16 Rappa::cBaseWaitTime           = 3;
Rappa* Rappa::sRappa[2]            = { nullptr, nullptr };
f32 RandId::cNotUsingMasterIdRatio = -1.0f;

/**
 * @note Address: 0x8033F158
 * @note Size: 0x210
 */
SeMgr::SeMgr()
    : PSSystem::SingletonBase<SeMgr>(this)
    , mRandid()
    , mSound(nullptr)
{
	for (int i = 0; i < 8; i++) {
		mSetSeList[i] = nullptr;
	}

	mSetSeList[0] = new SetSe("ピキSE間引き設定", 0, 3);               // "Pixel SE thinning setting"
	mSetSeList[1] = new SetSe("ピキ物運び音", 9, 9);                   // "piki hauling sound"
	mSetSeList[2] = new SetSe("ピキ仕事叩き音", 0, 5);                 // "Piki job tapping sound"
	mSetSeList[4] = new SetSe("ピキ呑み込まれもがき声", 20, 20);       // "Piki swallowed and struggle voice"
	mSetSeList[5] = new SetSe("チャレンジモードのトップ画面用", 0, 2); // "For challenge mode top screen"
	mSetSeList[6] = new SetSe("ピキ着水音用", 2, 5);                   // "For Piki landing sound"
	mSetSeList[7] = new SetSe("ピキパニックラン用", 4, 10);            // "For Piki Panic Run"
	mSetSeList[3] = new SetSe("敵汎用", 20, 9);                        // "Enemy General Purpose"

	for (u8 i = 0; i < 8; i++) {
		P2ASSERTLINE(44, mSetSeList[i]);
	}
}

/**
 * @note Address: 0x8033F368
 * @note Size: 0x120
 */
void SeMgr::playMessageVoice(u32 soundID, bool flag)
{
	f32 calc = 1.0f;
	f32 mod  = RandId::cNotUsingMasterIdRatio;
	int message;
	switch (soundID) {
	case PSSE_MP_VOX_HEAD_A_FLAT:
		message = 10;
		break;
	case PSSE_MP_VOX_BODY_MN:
		if (!flag) {
			calc = 0.5f;
		}
		mod     = 0.0f;
		message = 15;
		break;
	case PSSE_MP_VOX_FOOT_A_UP:
		message = 15;
		break;
	default:
		return;
	}

	P2ASSERTLINE(90, message != 0xffffffff);
	bool test = JALCalc::getRandom_0_1() < calc ? true : false;

	if (test) {
		mRandid.mId = mod;
		mRandid.playSystemSe(soundID, &mSound, message, 0);
		mRandid.mId = RandId::cNotUsingMasterIdRatio;
	}
}

/**
 * @note Address: 0x8033F488
 * @note Size: 0x3C
 */
void SeMgr::stopMessageVoice()
{
	if (mSound) {
		mSound->stop(0);
	}
}

/**
 * @note Address: 0x8033F4C4
 * @note Size: 0x50
 */
Rappa::Rappa()
{
	mId         = -1;
	mDelay      = 0;
	mTableIndex = 0;
}

/**
 * @note Address: 0x8033F514
 * @note Size: 0xA0
 */
void Rappa::init(u16 id)
{
	bool check = (id == 0 || id == 1);
	P2ASSERTLINE(180, check);

	u32 val    = -(id == 0);
	mId        = val + 14;
	sRappa[id] = this;
}

/**
 * @note Address: 0x8033F5B4
 * @note Size: 0x8
 */
void Rappa::setId(u32 id)
{
	mId = id;
}

/**
 * @note Address: 0x8033F5BC
 * @note Size: 0x98
 */
Rappa::~Rappa()
{
	for (u8 i = 0; i < 2; i++) {
		if (sRappa[i] == this) {
			sRappa[i] = nullptr;
		}
	}
}

/**
 * @note Address: 0x8033F654
 * @note Size: 0x170
 */
JAISound* Rappa::playRappa(bool flag, f32 x, f32 y, JAInter::Object* obj)
{
	P2ASSERTLINE(204, mId != -1);

	JAISound* sound = nullptr;
	if (flag == true) {
		f32 absY = (y >= 0.0f) ? y : -y;
		f32 absX = (x >= 0.0f) ? x : -x;

		f32 min = (absX > absY) ? absX : absY;

		if (min < 0.1f) {
			sound = nullptr;
		} else {
			sound = obj->startSound(mId, 0);

			f32 val = (min - 1.0f);
			val *= -1.0f;
			val = (val < 0.0f) ? 0.0f : (val > 1.0f) ? 1.0f : val;
			val *= cRatio;
			int extraWait = val;
			mDelay        = extraWait + cBaseWaitTime;
		}
	}
	return sound;
}

/**
 * @note Address: 0x8033F7C4
 * @note Size: 0x3C
 */
u16 Rappa::syncCpu_WaitChk(JASTrack* track)
{
	track->readPortAppDirect(0xb, &mTableIndex);
	return mDelay;
}

/**
 * @note Address: 0x8033F800
 * @note Size: 0x8
 */
u16 Rappa::syncCpu_TblNo(JASTrack* track)
{
	return mTableIndex;
}

/**
 * @note Address: 0x8033F808
 * @note Size: 0x78
 */
SetSe::SetSe(const char* name, s16 min, s16 max)
{
	mCounter   = 0;
	mMinId     = min;
	mMaxId     = max;
	mMaxCount  = min;
	mStatus    = -1;
	mCounter2  = 0;
	mSounds[0] = nullptr;
	mSounds[1] = nullptr;
	P2ASSERTLINE(319, max >= 0);
}

/**
 * @note Address: 0x8033F880
 * @note Size: 0x38
 */
void SetSe::exec()
{
	if (mCounter > mMaxCount)
		mStatus = -1;
	if (mStatus == -1)
		return;
	mCounter++;
}

/**
 * @note Address: 0x8033F8B8
 * @note Size: 0xB8
 */
JAISound* SetSe::startSound(JAInter::Object* obj, u32 id1, u32 flag)
{
	P2ASSERTLINE(336, obj);
	if (mStatus == -1) {
		JAISound* ret = obj->startSound(id1, flag);
		startCounter(id1);
		return ret;
	}

	return nullptr;
}

/**
 * @note Address: 0x8033F970
 * @note Size: 0xA0
 */
JAISound* SetSe::playSystemSe(u32 soundID, u32 flag)
{
	JAISound* ret;
	if (mStatus == -1) {
		PSSystem::spSysIF->playSystemSe(soundID, &mSounds[mCounter2], flag);
		startCounter(soundID);
		ret = mSounds[mCounter2];
		mCounter2++;
		if (mCounter2 == 2) {
			mCounter2 = 0;
		}
	} else {
		ret = nullptr;
	}
	return ret;
}

/**
 * @note Address: 0x8033FA10
 * @note Size: 0x84
 */
void SetSe::startCounter(u32 id)
{
	mCounter  = 0;
	mStatus   = id;
	mMaxCount = mMaxId * JALCalc::getRandom_0_1() + mMinId;
}

/**
 * @note Address: 0x8033FA94
 * @note Size: 0xC
 */
RandId::RandId()
{
	mId = cNotUsingMasterIdRatio;
}

/**
 * @note Address: N/A
 * @note Size: 0x1B0
 */
u32 RandId::getRandomId(u32 soundID, u32 range)
{
	if (mId == -1.0f) {
		P2ASSERTLINE(426, range > 1);
		u32 inc = range * JALCalc::getRandom_0_1();
		P2ASSERTLINE(429, inc < range);
		return soundID + inc;
	}

	P2ASSERTLINE(432, mId >= 0.0f);
	P2ASSERTLINE(433, range > 1);
	f32 comp = JALCalc::getRandom_0_1() - mId;
	if (comp < 0.0f) {
		return soundID;
	}

	f32 dec = (1.0f - mId) / ((f32)range - 1.0f);
	for (int i = 1; i < range; i++) {
		comp -= dec;
		if (comp < 0.0f) {
			return soundID + i;
		}
	}
	P2ASSERTLINE(451, false);
	return soundID;
}

/**
 * @note Address: 0x8033FAA0
 * @note Size: 0x1E8
 */
JAISe* RandId::startSound(JAInter::Object* obj, u32 soundID, u32 range, u32 flag)
{
	u32 randomID = getRandomId(soundID, range);
	P2ASSERTLINE(460, obj);
	obj->startSound(randomID, flag);
}

/**
 * @note Address: 0x8033FC88
 * @note Size: 0x1B8
 */
void RandId::playSystemSe(u32 soundID, JAISound** sound, u32 range, u32 flag)
{
	u32 randomID = getRandomId(soundID, range);
	PSSystem::spSysIF->playSystemSe(randomID, sound, flag);
}

/**
 * @note Address: 0x8033FE40
 * @note Size: 0x74
 */
void EnvSe_Pan::setPanAndDolby(JAISound* sound)
{
	sound->setPan(mPanDolby[PD_Pan], 0, SOUNDPARAM_Unk0);
	sound->setDolby(mPanDolby[PD_Dolby], 0, SOUNDPARAM_Unk0);
}

/**
 * @note Address: 0x8033FEB4
 * @note Size: 0x60
 */
EnvSe_Perspective::EnvSe_Perspective(u32 soundID, f32 volume, Vec pos)
    : EnvSeBase(soundID, volume)
{
	mPosition = pos;
}

/**
 * @note Address: 0x8033FF14
 * @note Size: 0x4C
 */
JAISound* EnvSe_Perspective::play()
{
	PSSystem::spSysIF->startSoundVecT(mSoundID, &mSound, &mPosition, 0, 0, 4);
	return mSound;
}

/**
 * @note Address: 0x8033FF60
 * @note Size: 0x88
 */
EnvSe_AutoPan::EnvSe_AutoPan(u32 soundID, f32 pan, f32 dolby, f32 volume, f32 panInc, f32 dolbyInc)
    : EnvSe_Pan(soundID, volume, pan, dolby)
{
	mStepValues[PD_Pan]     = panInc;
	mStepValues[PD_Dolby]   = dolbyInc;
	mIsIncreasing[PD_Pan]   = true;
	mIsIncreasing[PD_Dolby] = true;
}

/**
 * @note Address: 0x8033FFE8
 * @note Size: 0xC
 */
void EnvSe_AutoPan::setDirection(bool isPanIncrease, bool isDolbyIncrease)
{
	mIsIncreasing[PD_Pan]   = isPanIncrease;
	mIsIncreasing[PD_Dolby] = isDolbyIncrease;
}

/**
 * @note Address: 0x8033FFF4
 * @note Size: 0x11C
 */
void EnvSe_AutoPan::setPanAndDolby(JAISound* sound)
{
	// loop through both pan and dolby
	for (u8 i = 0; i < PD_Count; i++) {
		if (mIsIncreasing[i]) {
			mPanDolby[i] += mStepValues[i];
			if (mPanDolby[i] > 1.0f) {
				mPanDolby[i]     = 2.0f - mPanDolby[i];
				mIsIncreasing[i] = false;
			}
		} else {
			mPanDolby[i] -= mStepValues[i];
			if (mPanDolby[i] < 0.0f) {
				mPanDolby[i] *= -1.0f;
				mIsIncreasing[i] = true;
			}
		}
	}

	sound->setPan(mPanDolby[PD_Pan], 0, SOUNDPARAM_Unk0);
	sound->setDolby(mPanDolby[PD_Dolby], 0, SOUNDPARAM_Unk0);
}

/**
 * @note Address: 0x80340110
 * @note Size: 0x21C
 */
Builder_EvnSe_Perspective::Builder_EvnSe_Perspective(JGeometry::TBox3f box)
    : mDoSkipSizeCheck(false)
    , mGridSizeX(0)
    , mGridSizeZ(0)
    , mBox(box.i, box.f)
    , mYPosition(0.0f)
{
	mBox.absolute();
}

/**
 * @note Address: 0x8034032C
 * @note Size: 0x2D0
 */
void Builder_EvnSe_Perspective::build(f32 volume, PSSystem::EnvSeMgr* mgr)
{
	P2ASSERTLINE(596, mgr);
	f32 totalSizeX = mBox.f.x - mBox.i.x;
	f32 totalSizeZ = mBox.f.z - mBox.i.z;

	f32 sizeX = totalSizeX;
	f32 sizeZ = totalSizeZ;
	if (!mDoSkipSizeCheck) {
		int* val  = &mGridSizeX;
		f32* temp = &sizeX;
		while (true) {
			*val = *temp / 1000.0f;
			if (val == &mGridSizeZ) {
				break;
			}
			val  = &mGridSizeZ;
			temp = &sizeZ;
		}
	} else {
		P2ASSERTBOOLLINE(639, mGridSizeX > 0 && mGridSizeZ > 0);
	}

	Vec pos;
	pos.y = mYPosition;

	f32 unitSizeX = totalSizeX / f32(mGridSizeX);
	f32 unitSizeZ = totalSizeZ / f32(mGridSizeZ);
	f32 startPosX = mBox.i.x + unitSizeX / 2;
	f32 startPosZ = mBox.i.z + unitSizeZ / 2;

	for (int x = 0; x < mGridSizeX; x++) {
		pos.x = unitSizeX * f32(x) + startPosX;
		for (int z = 0; z < mGridSizeZ; z++) {
			pos.z = unitSizeZ * f32(z) + startPosZ;

			u32 soundID = mList.setNextLink()->mId;

			EnvSe_Perspective* se = newSeObj(soundID, volume, pos);
			P2ASSERTLINE(662, se);
			onBuild(se);
			mgr->mEnvList.append(se);
		}
	}
}

/**
 * @note Address: 0x803405FC
 * @note Size: 0xAC
 */
EnvSe_Perspective* Builder_EvnSe_Perspective::newSeObj(u32 soundID, f32 volume, Vec pos)
{
	return new EnvSe_Perspective(soundID, volume, pos);
}

/**
 * @note Address: 0x803406A8
 * @note Size: 0xC8
 */
Builder_EvnSe_Perspective::~Builder_EvnSe_Perspective()
{
}

} // namespace PSGame
