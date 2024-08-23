#include "Game/pelletConfig.h"
#include "P2Macros.h"
#include "string.h"
#include "TagParm.h"

const char* className = "pelletConfig";

namespace Game {

/**
 * @note Address: 0x801B3EEC
 * @note Size: 0x48
 */
PelletConfigList::PelletConfigList()
{
	mConfigs   = nullptr;
	mConfigCnt = 0;
}

/**
 * @note Address: 0x801B3F34
 * @note Size: 0xAC
 */
PelletConfig::PelletConfig()
{
	mParams.mIndex                                     = -1;
	mParams.mUnique.mData                              = "no";
	mParams.mIndirect.mData                            = "no";
	mParams.mTxtArchive.mData                          = nullptr;
	mParams.mDepth.mData                               = 0.0f;
	mParams.mDepthA.mData                              = 10.0f;
	mParams.mDepthB.mData                              = 20.0f;
	mParams.mDepthC.mData                              = 30.0f;
	mParams.mDepthD.mData                              = 40.0f;
	mParams.mNumPMotions.mData                         = 0;
	reinterpret_cast<int*>(&mParams.mMessage.mData)[1] = 0;
	reinterpret_cast<int*>(&mParams.mMessage.mData)[0] = 0;
	mParams.mOffset.mData.x                            = 0.0f;
	mParams.mOffset.mData.y                            = 0.0f;
	mParams.mOffset.mData.z                            = 0.0f;
	mParams.mCode.mData                                = 0;
	mParams.mDictionary.mData                          = 0;
	mParams.mIndirectState                             = Indirect_No;
}

/**
 * @note Address: 0x801B4050
 * @note Size: 0x374
 */
PelletConfig::TParms::TParms()
    : TagParameters("PelletConfig")
    , mName(this, "name")
    , mArchive(this, "archive")
    , mTxtArchive(this, "txt_archive")
    , mBmd(this, "bmd")
    , mAnimMgr(this, "animmgr")
    , mColltree(this, "colltree")
    , mRadius(this, "radius")
    , mPRadius(this, "p_radius")
    , mHeight(this, "height")
    , mInertiaScaling(this, "inertiascaling")
    , mParticleType(this, "particletype")
    , mNumParticles(this, "numparticles")
    , mParticleSize(this, "particlesize")
    , mFriction(this, "friction")
    , mMin(this, "min")
    , mMax(this, "max")
    , mPikiCountMax(this, "pikicountmax")
    , mPikiCountMin(this, "pikicountmin")
    , mDynamics(this, "dynamics")
    , mMoney(this, "money")
    , mUnique(this, "unique")
    , mIndirect(this, "indirect")
    , mNumPMotions(this, "num_pmotions")
    , mDepth(this, "depth")
    , mDepthMax(this, "depth_max")
    , mDepthA(this, "depth_a")
    , mDepthB(this, "depth_b")
    , mDepthC(this, "depth_c")
    , mDepthD(this, "depth_d")
    , mOffset(this, "offset")
    , mMessage(this, "message")
    , mCode(this, "code")
    , mDictionary(this, "dictionary")
{
}

/**
 * @note Address: 0x801B4424
 * @note Size: 0x84
 */
PelletConfig* PelletConfigList::getPelletConfig(char* str)
{
	for (int i = 0; i < mConfigCnt; i++) {
		PelletConfig* pConfig = &mConfigs[i];
		u32 len               = strlen(str);

		if (IS_SAME_STRING_N(pConfig->mParams.mName.mData, str, len)) {
			return pConfig;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801B44A8
 * @note Size: 0x7C
 */
PelletConfig* PelletConfigList::getPelletConfig(int index)
{
	bool isValid = 0 <= index && index < mConfigCnt;
	P2ASSERTLINE(125, isValid);

	return &mConfigs[index];
}

/**
 * @note Address: 0x801B4524
 * @note Size: 0x44
 */
PelletConfig* PelletConfigList::getPelletConfig_ByDictionaryNo(int dictNumber)
{
	for (int i = 0; i < mConfigCnt; i++) {
		PelletConfig* pConfig = &mConfigs[i];
		if (dictNumber + 1 == pConfig->mParams.mDictionary.mData) {
			return pConfig;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x801B4568
 * @note Size: 0x130
 */
void PelletConfigList::read(Stream& stream)
{
	mConfigCnt = stream.readInt();
	mConfigs   = new PelletConfig[mConfigCnt];
	for (int i = 0; i < mConfigCnt; i++) {
		mConfigs[i].mParams.read(stream);
		mConfigs[i].mParams.mIndex = i;

		// Set indirect state
		if (!strcmp("yes", mConfigs[i].mParams.mIndirect.mData)) {
			mConfigs[i].mParams.mIndirectState = PelletConfig::Indirect_Yes;
		} else if (!strcmp("use", mConfigs[i].mParams.mIndirect.mData)) {
			mConfigs[i].mParams.mIndirectState = PelletConfig::Indirect_Use;
		} else {
			mConfigs[i].mParams.mIndirectState = PelletConfig::Indirect_No;
		}
	}
}

} // namespace Game
