#include "P2Macros.h"
#include "PSM/Creature.h"
#include "PSM/ObjMgr.h"
#include "PSGame/SoundTable.h"
#include "PSM/Se.h"
#include "PSSystem/PSCommon.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSSystem/PSSystemIF.h"
#include "PSM/CreaturePrm.h"
#include "nans.h"

static const u32 padding[] = { 0, 0, 0 };

namespace PSM {

f32 SeSound::cDol_0Rad    = 1.0316;
f32 SeSound::cDol_HalfRad = 1.5707999;
f32 SeSound::cDol_FullRad = 2.1099999;
f32 SeSound::cPan_MaxAmp  = 0.98;
f32 SeSound::cCenterRad   = 1.57;

const f32 SeSound::smACosPrm[101] = {
	3.141592f,   2.941258f,  2.857799f,   2.793427f,   2.738877f,   2.690566f,  2.6466579f, 2.606066f,   2.568079f,   2.532207f,
	2.4980919f,  2.465462f,  2.434109f,   2.403867f,   2.374599f,   2.346194f,  2.3185589f, 2.291615f,   2.265295f,   2.2395389f,
	2.214298f,   2.1895249f, 2.165182f,   2.141233f,   2.1176469f,  2.0943949f, 2.0714509f, 2.0487909f,  2.026395f,   2.004241f,
	1.982313f,   1.960593f,  1.939064f,   1.917713f,   1.896526f,   1.875489f,  1.854591f,  1.833819f,   1.813162f,   1.792611f,
	1.772154f,   1.751783f,  1.731487f,   1.711258f,   1.691086f,   1.670964f,  1.650882f,  1.630832f,   1.6108069f,  1.590798f,
	1.570796f,   1.550795f,  1.530786f,   1.5107599f,  1.490711f,   1.470629f,  1.450507f,  1.430335f,   1.4101059f,  1.38981f,
	1.369439f,   1.348982f,  1.328431f,   1.3077739f,  1.287002f,   1.266104f,  1.245067f,  1.223879f,   1.202528f,   1.181f,
	1.1592799f,  1.137351f,  1.115198f,   1.092801f,   1.070142f,   1.047198f,  1.023945f,  1.000359f,   0.97641098f, 0.95206797f,
	0.927295f,   0.902054f,  0.876298f,   0.849978f,   0.82303399f, 0.795399f,  0.766994f,  0.73772597f, 0.70748299f, 0.676131f,
	0.64350098f, 0.609386f,  0.57351297f, 0.53552699f, 0.49493399f, 0.451027f,  0.402716f,  0.34816599f, 0.28379399f, 0.200335f,
	0.0f,
};

/**
 * @note Address: 0x80470F0C
 * @note Size: 0x78
 */
SeSound* SeSound::makeSeSound()
{
	return new SeSound;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
f32 SeSound::psACos(f32 val)
{
	int mod = (val + 1.0f) * 50.0f;
	if (mod < 0) {
		return smACosPrm[0];
	} else if (mod >= 101) {
		return smACosPrm[100];
	}
	return smACosPrm[mod];
}

/**
 * @note Address: 0x80470F84
 * @note Size: 0x4
 */
void SeSound::onGet()
{
}

/**
 * @note Address: 0x80470F88
 * @note Size: 0xA4
 */
void SeSound::onRelease()
{
	if (mIsPlayingWithActor == false) {
		return;
	}
	if (mCreatureObj == nullptr) {
		return;
	}

	Creature* creature = static_cast<Creature*>(mCreatureObj);
	P2ASSERTLINE(184, creature);

	if (creature->getPlayingHandleNum() != 0) {
		return;
	}
	ObjMgr::getInstance()->remove(creature);
}

/**
 * @note Address: 0x8047102C
 * @note Size: 0x154
 */
void SeSound::initParameter(void* mainSoundPtr, JAInter::Actor* actor, u32 id, u32 a2, u8 a3, JAInter::SoundInfo* info)
{
	JAISound::initParameter(mainSoundPtr, actor, id, a2, a3, info);
	mPerspInfo.mIsSpecialSound = false;
	if (mIsPlayingWithActor) {
		if (mCreatureObj) {
			Creature* creature = static_cast<Creature*>(mCreatureObj);
			P2ASSERTLINE(208, creature);

			if (creature->getPlayingHandleNum() == 0) {
				ObjMgr::getInstance()->append(creature);
			}
		}
	}

	P2ASSERTLINE(215, info);

	u32 num = (u32)info->mFlag >> 0x1c;
	if (num) {
		mDistanceModifier = (num / 15.0f) * JALCalc::getRandom_0_1();
		mDistanceModifier = mDistanceModifier < 0.0f ? 0.0f : mDistanceModifier > 1.0f ? 1.0f : mDistanceModifier;
	} else {
		mDistanceModifier = 0.0f;
	}
}

/**
 * @note Address: 0x80471180
 * @note Size: 0x2D8
 */
f32 SeSound::setDistanceVolumeCommon(f32, u8 flag)
{
	setFxmix(CreaturePrm::cSeFxMix, 0, SOUNDPARAM_Dopplar);
	f32 dist = mSoundObj->mDistance;
	u8 test  = isValidSeType(mSoundID);

	f32 dist2;
	if (mPerspInfo.mIsSpecialSound == true) {
		dist2 = calcVolumeSpecialized(dist);
	} else {
		dist2 = calcVolume(dist, flag, test);
	}
	dist2 -= mDistanceModifier;
	if (!mIsPlayingWithActor || mCreatureObj) {
		PSM::SceneBase* scene = static_cast<PSM::SceneBase*>(PSMGetSceneMgrCheck()->getEndScene());
		P2ASSERTLINE(261, scene);
		f32 calc = scene->getCamDistVol(mPlayerNum);
		JUT_ASSERTLINE(269, calc != 0.0f, "\nSE called at invalid timming\n(%08x)\n", mSoundID);
		dist2 *= calc;
		f32 fx = static_cast<PSM::Scene_Cave*>(PSMGetChildScene())->getSceneFx();
		setFxmix(fx, 0, SOUNDPARAM_Demo);
	}
	return dist2 < 0.0f ? 0.0f : dist2 > 1.0f ? 1.0f : dist2;
}

/**
 * @note Address: 0x80471458
 * @note Size: 0x44
 */
void SeSound::specializePerspCalc(const PSGame::SoundTable::SePerspInfo& info)
{
	mPerspInfo                 = info;
	mPerspInfo.mIsSpecialSound = true;
}

/**
 * @note Address: 0x8047149C
 * @note Size: 0x6C
 */
f32 SeSound::calcVolumeSpecialized(f32 p1)
{
	P2ASSERTLINE(294, mPerspInfo.mIsSpecialSound == true);
	return mPerspInfo.getDistVol(p1, 0);
}

/**
 * @note Address: 0x80471508
 * @note Size: 0x8C
 */
f32 SeSound::calcVolume(f32 p1, u8 p2, u8 soundCat)
{
	PSGame::SoundTable::CategoryMgr* mgr = PSGame::SoundTable::CategoryMgr::sInstance;
	PSSystem::getSoundCategoryInfo(mgr, soundCat)->getDistVol(p1, p2);
}

/**
 * @note Address: 0x80471594
 * @note Size: 0xB8
 */
void SeSound::setSeDistancePan(u8 flag)
{
	f32 calc = 0.5f;

	if (!mIsPlayingWithActor) {
		calc = calcPan(mSoundObj->mPosition, mSoundObj->mDistance);
	} else if (mCreatureObj) {
		Creature* creature = static_cast<Creature*>(mCreatureObj);
		P2ASSERTLINE(337, creature);
		calc = creature->getJAIObject()->mPan;
	}

	setSeInterPan(4, calc, flag, 0);
}

/**
 * @note Address: 0x8047164C
 * @note Size: 0xC8
 */
f32 SeSound::calcPan(const Vec& pos, f32 modifier)
{
	f32 calc = (modifier <= 0.0f) ? cCenterRad : psACos(-pos.x / modifier);

	static f32 panRatio = cPan_MaxAmp / 3.1415f;

	f32 ret = panRatio * calc;
	return (ret > 1.0f) ? 1.0f : ret;
}

/**
 * @note Address: 0x80471714
 * @note Size: 0x88
 */
void SeSound::setSeDistanceDolby(u8 flag)
{
	f32 calc = 0.0f;
	if (!mIsPlayingWithActor) {
		calc = calcDolby(mSoundObj->mPosition, mSoundObj->mDistance);
	} else if (mCreatureObj) {
		Creature* creature = static_cast<Creature*>(mCreatureObj);
		calc               = creature->getJAIObject()->mDolby;
	}
	setSeInterDolby(4, calc, flag, 0);
}

/**
 * @note Address: 0x8047179C
 * @note Size: 0x10C
 */
f32 SeSound::calcDolby(const Vec& pos, f32 modifier)
{
	if (modifier <= 0.0f) {
		return 0.0f;
	}

	f32 calc = psACos(-pos.z / modifier);

	f32 dolby;
	if (calc < cDol_0Rad) {
		dolby = 0.0f;

	} else if (calc < cDol_HalfRad) {
		dolby = (0.5f / (cDol_HalfRad - cDol_0Rad)) * (calc - cDol_0Rad);

	} else if (calc < cDol_FullRad) {
		dolby = (0.5f / (cDol_FullRad - cDol_HalfRad)) * (calc - cDol_HalfRad) + 0.5f;

	} else {
		dolby = 1.0f;
	}

	if (dolby > 1.0f) {
		return 1.0f;
	}

	if (dolby < 0.0f) {
		return 0.0f;
	}

	return dolby;
}

} // namespace PSM
