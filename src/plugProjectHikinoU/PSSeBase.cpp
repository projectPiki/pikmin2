#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/JSupport/JSUList.h"
#include "P2Macros.h"
#include "PSSystem/ClusterSe.h"
#include "PSSystem/EnvSeBase.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JAudio/JALCalc.h"

namespace PSSystem {

/**
 * @note Address: 0x80340838
 * @note Size: 0xA4
 */
EnvSeBase::EnvSeBase(u32 soundID, f32 volume)
    : JSULink(this)
    , mMoveParam(0.0f, 0, 2, 0)
    , mSoundID((SoundID)soundID)
    , mVolume(volume)
    , _2C(0.0f)
    , _30(0.3f)
    , mSound(nullptr)
    , mPauseFlag(1)
    , mIsOn(false)
    , _3A(0)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void EnvSeBase::requestMoveParam(MoveParamSet param) { mMoveParam = param; }

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void EnvSeBase::doMoveParamRequest()
{
	if (mMoveParam._08 == 2) {
		return;
	}
	switch (mMoveParam._08) {
	case 0:
		mSound->setVolume(mMoveParam._00, mMoveParam._04, mMoveParam._0C);
		break;
	case 1:
		mSound->setPitch(mMoveParam._00, mMoveParam._04, mMoveParam._0C);
		break;

	default:
		P2ASSERTLINE(62, false);
	}

	mMoveParam._00 = 0.0f;
	mMoveParam._04 = 0;
	mMoveParam._08 = 2;
	mMoveParam._0C = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void EnvSeBase::setPauseFlag(u8 flag)
{
	mPauseFlag = flag;
	if (_3A) {
		mPauseFlag = 0;
	}
}

/**
 * @note Address: 0x803408DC
 * @note Size: 0x35C
 */
void EnvSeBase::exec()
{
	if (!mIsOn) {
		if (mSound) {
			mSound->setVolume(0.0f, 0, 5);
		}
		return;
	}

	switch (mPauseFlag) {
	case 1:
		break;
	case 0: {
		JAISound* sound = play();
		if (sound) {
			setPanAndDolby(sound);
			sound->setVolume(mVolume, 0, 0);
			sound->setFxmix(0.4f, 0, 0);
			sound->setVolume(1.0f, 20, 5);
			sound->setFxmix(_30, 0, 0);

			doMoveParamRequest();
		}
		break;
	}

	case 2:
		JAISound* sound = play();
		if (sound) {
			setPanAndDolby(sound);
			sound->setVolume(mVolume, 0, 0);
			sound->setFxmix(0.4f, 0, 0);
			sound->setVolume(_2C, 0, 5);
			sound->setFxmix(_30, 0, 0);

			doMoveParamRequest();
		}
		return;
	default:
		P2ASSERTLINE(132, false);
		break;
	}
}

/**
 * @note Address: 0x80340C38
 * @note Size: 0x40
 */
JAISound* EnvSeBase::play()
{
	spSysIF->playSystemSe(mSoundID, &mSound, 60);
	return mSound;
}

/**
 * @note Address: 0x80340C78
 * @note Size: 0x34
 */
void EnvSeMgr::setAllPauseFlag(u8 flag)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		link->getObject()->setPauseFlag(flag);
	}
}

/**
 * @note Address: 0x80340CAC
 * @note Size: 0x24
 */
void EnvSeMgr::on()
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		link->getObject()->mIsOn = true;
	}
}

/**
 * @note Address: 0x80340CD0
 * @note Size: 0x50
 */
void EnvSeMgr::on(u32 soundID, bool p2)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		if ((soundID == link->getObject()->getSoundID() && (u8)p2 == true) || (soundID != link->getObject()->getSoundID() && p2 == false)) {
			link->getObject()->mIsOn = true;
		}
	}
}

/**
 * @note Address: 0x80340D20
 * @note Size: 0x24
 */
void EnvSeMgr::off()
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->mIsOn = false;
	}
}

/**
 * @note Address: 0x80340D44
 * @note Size: 0x50
 */
void EnvSeMgr::off(u32 soundID, bool p2)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		if ((soundID == link->getObject()->getSoundID() && (u8)p2 == true) || (soundID != link->getObject()->getSoundID() && p2 == false)) {
			link->getObject()->mIsOn = false;
		}
	}
}

/**
 * @note Address: 0x80340D94
 * @note Size: 0xC
 */
void EnvSeMgr::reservePauseOff() { mReservator.mState = 31; }

/**
 * @note Address: 0x80340DA0
 * @note Size: 0x70
 */
void EnvSeMgr::setVolumeRequest(f32 p1, u32 p2, u8 p3)
{
	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		if (link->getObject()) {
			MoveParamSet param(p1, p2, 0, p3);
			link->getObject()->requestMoveParam(param);
		}
	}
}

/**
 * @note Address: 0x80340E10
 * @note Size: 0x80
 */
void EnvSeMgr::exec()
{
	if (mReservator.mState) {
		if (mReservator.mState-- == 1) {
			mReservator.reservatorTask();
		}
	}

	for (JSULink<EnvSeBase>* link = mEnvList.getFirst(); link; link = link->getNext()) {
		link->getObject()->exec();
	}
}

/**
 * @note Address: 0x80340E90
 * @note Size: 0x38
 */
void EnvSe_PauseOffReservator::reservatorTask() { mMgr->setAllPauseFlag(0); }

/**
 * @note Address: 0x80340EC8
 * @note Size: 0x20
 */
ClusterSe::PartInitArg::PartInitArg()
{
	_00      = 0xff;
	_01      = 0xff;
	_02      = 0xff;
	_03      = 0xff;
	mSoundID = PSSE_NULL;
}

/**
 * @note Address: N/A
 * @note Size: 0x1AC
 */
void ClusterSe::PartInitArg::check()
{
	P2ASSERTBOOLLINE(368, _00 != 0 && _00 != 255);
	P2ASSERTBOOLLINE(369, _01 != 255 && _00 > _01);
	P2ASSERTLINE(370, _02 != 255);
	P2ASSERTLINE(371, _03 != 255);

	P2ASSERTLINE(373, _00 >= _02);
	P2ASSERTLINE(374, _02 > _03);
	P2ASSERTLINE(375, _03 >= _01);

	P2ASSERTLINE(377, mSoundID != 0xFFFFFFFF);
}

/**
 * @note Address: 0x80340EE8
 * @note Size: 0x2C
 */
ClusterSe::Part::Part()
    : mInitArg()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x1EC
 */
void ClusterSe::Part::identify(PartInitArg initArg)
{
	initArg.check();
	mInitArg = initArg;
}

void ClusterSe::Part::play(u8 p1, JAInter::Object* obj)
{
	if (p1 > mInitArg._00) {
		return;
	}
	if (p1 < mInitArg._01) {
		return;
	}

	JAISound* sound = callSe(obj);
	if (!sound) {
		return;
	}

	f32 val = 1.0f;
	if (p1 > mInitArg._02) {
		val = JALCalc::linearTransform(p1, mInitArg._00, mInitArg._02, 0.0f, val, true);
	} else if (mInitArg._03 > p1) {
		val = JALCalc::linearTransform(p1, mInitArg._03, mInitArg._01, val, 0.0f, true);
	}

	if (val != 1.0f) {
		sound->setVolume(val, 0, 0);
	}
}

/**
 * @note Address: 0x80340F14
 * @note Size: 0x3C
 */
JAISound* ClusterSe::Part::callSe(JAInter::Object* obj) { obj->startSound(mInitArg.mSoundID, 0); }

/**
 * @note Address: 0x80340F50
 * @note Size: 0x60
 */
ClusterSe::Factory::Factory(u8 count)
{
	mCount = count;
	P2ASSERTLINE(474, count);
}

/**
 * @note Address: 0x80340FB0
 * @note Size: 0x74
 */
ClusterSe::Part* ClusterSe::Factory::constructPart()
{
	Part* parts = new Part[mCount];
	P2ASSERTLINE(484, parts);
	return parts;
}

/**
 * @note Address: 0x80341024
 * @note Size: 0x2B4
 */
void ClusterSe::Mgr::constructParts(PSSystem::ClusterSe::Factory& factory)
{
	mCount = factory.mCount;
	mParts = factory.constructPart();
	P2ASSERTLINE(506, mParts);
	for (u8 i = 0; i < mCount; i++) {
		PartInitArg initArg = factory.identifyPart(i);
		mParts[i].identify(initArg);
	}
}

/**
 * @note Address: 0x803412D8
 * @note Size: 0x1A4
 */
void ClusterSe::Mgr::play(u8 p1, JAInter::Object* obj)
{
	P2ASSERTLINE(522, obj);
	for (u8 i = 0; i < mCount; i++) {
		mParts[i].play(p1, obj);
	}
}
} // namespace PSSystem
