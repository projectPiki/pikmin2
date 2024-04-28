#include "efx2d/TChasePos.h"
#include "efx2d/TForever.h"
#include "efx2d/TSimple.h"
#include "P2Macros.h"
#include "TParticle2dMgr.h"

namespace efx2d {

/**
 * @note Address: 0x803B9830
 * @note Size: 0x98
 */
bool TSimple1::create(Arg* arg)
{
	P2ASSERTLINE(10, arg != nullptr);

	Vector2f pos = *arg;
	mEmitters[0] = particle2dMgr->create(mEffectIDs[0], pos, mGroup, mResMgrId);

	if (mEmitters[0] == nullptr) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x803B98C8
 * @note Size: 0xB0
 */
bool TSimple2::create(Arg* arg)
{
	P2ASSERTLINE(25, arg != nullptr);

	Vector2f pos = *arg;
	for (int i = 0; i < 2; i++) {
		mEmitters[i] = particle2dMgr->create(mEffectIDs[i], pos, mGroup, mResMgrId);
		if (mEmitters[i] == nullptr) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x803B9978
 * @note Size: 0xB0
 */
bool TSimple3::create(Arg* arg)
{
	P2ASSERTLINE(40, arg != nullptr);

	Vector2f pos = *arg;
	for (int i = 0; i < 3; i++) {
		mEmitters[i] = particle2dMgr->create(mEffectIDs[i], pos, mGroup, mResMgrId);
		if (mEmitters[i] == nullptr) {
			return false;
		}
	}

	return true;
}

/**
 * @note Address: 0x803B9A28
 * @note Size: 0xA4
 */
bool TForever::create(Arg* arg)
{
	P2ASSERTLINE(54, arg != nullptr);

	Vector2f pos = *arg;

	if (mEmitter) {
		return false;
	}

	mEmitter = particle2dMgr->create(mEfxID, pos, mGroup, mResMgrId);
	return mEmitter != nullptr;
}

/**
 * @note Address: 0x803B9ACC
 * @note Size: 0x3C
 */
void TForever::kill()
{
	particle2dMgr->kill(mEmitter);
	mEmitter = nullptr;
}

/**
 * @note Address: 0x803B9B08
 * @note Size: 0x3C
 */
void TForever::fade()
{
	particle2dMgr->fade(mEmitter);
	mEmitter = nullptr;
}

/**
 * @note Address: 0x803B9B44
 * @note Size: 0x24
 */
void TForever::setGlobalScale(f32 scale)
{
	JPABaseEmitter* emitter = mEmitter;

	if (emitter == nullptr) {
		return;
	}

	emitter->setScale(scale);
}

/**
 * @note Address: 0x803B9B68
 * @note Size: 0x28
 */
void TForever::setGlobalEnvColor(JUtility::TColor& color)
{
	if (!mEmitter) {
		return;
	}
	mEmitter->setEnvColorRGB(color.r, color.g, color.b);
}

/**
 * @note Address: 0x803B9B90
 * @note Size: 0x14
 */
void TForever::setGlobalAlpha(u8 alpha)
{
	if (!mEmitter) {
		return;
	}

	mEmitter->mGlobalPrmClr.a = alpha;
}

/**
 * @note Address: 0x803B9BA4
 * @note Size: 0x80
 */
TForeverN::TForeverN(u8 length)
    : mLength(length)
{
	mForevers = new TForever[mLength];
}

/**
 * @note Address: 0x803B9C24
 * @note Size: 0x50
 */
TForever::TForever()
{
	mEfxID   = 0;
	mEmitter = nullptr;
}

/**
 * @note Address: 0x803B9C74
 * @note Size: 0x98
 */
bool TForeverN::create(Arg* arg)
{
	bool success = true;

	for (u8 i = 0; i < mLength; i++) {
		if (!mForevers[i].create(arg)) {
			success = false;
		}
	}

	return success;
}

/**
 * @note Address: 0x803B9D0C
 * @note Size: 0x6C
 */
void TForeverN::kill()
{
	for (u8 i = 0; i < mLength; i++) {
		mForevers[i].kill();
	}
}

/**
 * @note Address: 0x803B9D78
 * @note Size: 0x6C
 */
void TForeverN::fade()
{
	for (u8 i = 0; i < mLength; i++) {
		mForevers[i].fade();
	}
}

/**
 * @note Address: 0x803B9DE4
 * @note Size: 0x7C
 */
void TForeverN::setGroup(u8 group)
{
	for (u8 i = 0; i < mLength; i++) {
		mForevers[i].setGroup(group);
	}
}

/**
 * @note Address: 0x803B9E60
 * @note Size: 0x40
 */
void TForeverN::setGlobalAlpha(u8 alpha)
{
	for (u8 i = 0; i < mLength; i++) {
		JPABaseEmitter* emitter = mForevers[i].mEmitter;

		if (!emitter) {
			continue;
		}

		emitter->mGlobalPrmClr.a = alpha;
	}
}

/**
 * @note Address: 0x803B9EA0
 * @note Size: 0x88
 */
bool TChasePos::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	}

	mEmitter = particle2dMgr->create(mEfxID, *mChasePosition, mGroup, mResMgrId);

	if (mEmitter) {
		mEmitter->mEmitterCallback = this;
	} else {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x803B9F28
 * @note Size: 0x78
 */
void TChasePos::execute(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(214, mChasePosition != nullptr);

	f32 x = mChasePosition->x;
	f32 y = mChasePosition->y;

	emitter->mGlobalTrs.x = x;
	emitter->mGlobalTrs.y = y;
	emitter->mGlobalTrs.z = 0.0f;
}

/**
 * @note Address: 0x803B9FA0
 * @note Size: 0x88
 */
bool TChasePosDir::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	}

	mEmitter = particle2dMgr->create(mEfxID, *mChasePosition, mGroup, mResMgrId);

	if (mEmitter) {
		mEmitter->mEmitterCallback = this;
	} else {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x803BA028
 * @note Size: 0xB8
 */
void TChasePosDir::execute(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(244, mChasePosition != nullptr);
	P2ASSERTLINE(245, mDirection != nullptr);

	f32 x1 = mChasePosition->x;
	f32 y1 = mChasePosition->y;

	f32 x2 = mDirection->x;
	f32 y2 = mDirection->y;

	emitter->mGlobalTrs.x = x1;
	emitter->mGlobalTrs.y = y1;
	emitter->mGlobalTrs.z = 0.0f;

	emitter->mLocalDir.x = x2;
	emitter->mLocalDir.y = y2;
	emitter->mLocalDir.z = 0.0f;
}
} // namespace efx2d
