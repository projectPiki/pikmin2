#include "efx2d/TChasePos.h"
#include "efx2d/TForever.h"
#include "efx2d/TSimple.h"
#include "JSystem/JUT/JUTException.h"
#include "TParticle2dMgr.h"

namespace efx2d {

/*
 * --INFO--
 * Address:	803B9830
 * Size:	000098
 */
bool TSimple1::create(Arg* arg)
{
	P2ASSERTLINE(10, arg != nullptr);

	Vector2f vec = *arg;

	mEmitters[0] = particle2dMgr->create(mEffectIDs[0], vec, _05, _04);

	if (mEmitters[0] == nullptr) {
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	803B98C8
 * Size:	0000B0
 */
bool TSimple2::create(Arg* arg)
{
	P2ASSERTLINE(25, arg != nullptr);

	Vector2f vec = *arg;

	for (int i = 0; i < 2; i++) {
		mEmitters[i] = particle2dMgr->create(mEffectIDs[i], vec, _05, _04);
		if (mEmitters[i] == nullptr) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	803B9978
 * Size:	0000B0
 */
bool TSimple3::create(Arg* arg)
{
	P2ASSERTLINE(40, arg != nullptr);

	Vector2f vec = *arg;

	for (int i = 0; i < 3; i++) {
		mEmitters[i] = particle2dMgr->create(mEffectIDs[i], vec, _05, _04);
		if (mEmitters[i] == nullptr) {
			return false;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	803B9A28
 * Size:	0000A4
 */
bool TForever::create(Arg* arg)
{
	P2ASSERTLINE(54, arg != nullptr);

	Vector2f vec = *arg;

	if (mEmitter) {
		return false;
	}

	mEmitter = particle2dMgr->create(mEfxID, vec, _05, _04);
	return mEmitter != nullptr;
}

/*
 * --INFO--
 * Address:	803B9ACC
 * Size:	00003C
 */
void TForever::kill()
{
	particle2dMgr->kill(mEmitter);
	mEmitter = nullptr;
}

/*
 * --INFO--
 * Address:	803B9B08
 * Size:	00003C
 */
void TForever::fade()
{
	particle2dMgr->fade(mEmitter);
	mEmitter = nullptr;
}

/*
 * --INFO--
 * Address:	803B9B44
 * Size:	000024
 */
void TForever::setGlobalScale(float scale)
{
	JPABaseEmitter* emitter = mEmitter;

	if (emitter == nullptr) {
		return;
	}

	emitter->_98 = scale;
	emitter->_B0 = scale;
	emitter->_B4 = scale;
}

/*
 * --INFO--
 * Address:	803B9B68
 * Size:	000028
 */
void TForever::setGlobalEnvColor(JUtility::TColor& color)
{
	JPABaseEmitter* emitter = mEmitter;

	if (emitter) {
		mEmitter->mColor2.setRGB(color);
	}
}

/*
 * --INFO--
 * Address:	803B9B90
 * Size:	000014
 */
void TForever::setGlobalAlpha(u8 alpha)
{
	if (mEmitter) {
		mEmitter->mColor1.a = alpha;
	}
}

/*
 * --INFO--
 * Address:	803B9BA4
 * Size:	000080
 */
TForeverN::TForeverN(u8 length)
    : mLength(length)
{
	mForevers = new TForever[mLength];
}

/*
 * --INFO--
 * Address:	803B9C24
 * Size:	000050
 */
TForever::TForever()
{
	mEfxID   = 0;
	mEmitter = nullptr;
}

/*
 * --INFO--
 * Address:	803B9C74
 * Size:	000098
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

/*
 * --INFO--
 * Address:	803B9D0C
 * Size:	00006C
 */
void TForeverN::kill()
{
	for (u8 i = 0; i < mLength; i++) {
		mForevers[i].kill();
	}
}

/*
 * --INFO--
 * Address:	803B9D78
 * Size:	00006C
 */
void TForeverN::fade()
{
	for (u8 i = 0; i < mLength; i++) {
		mForevers[i].fade();
	}
}

/*
 * --INFO--
 * Address:	803B9DE4
 * Size:	00007C
 */
void TForeverN::setGroup(u8 group)
{
	for (u8 i = 0; i < mLength; i++) {
		mForevers[i].setGroup(group);
	}
}

/*
 * --INFO--
 * Address:	803B9E60
 * Size:	000040
 */
void TForeverN::setGlobalAlpha(u8 alpha)
{
	for (u8 i = 0; i < mLength; i++) {
		JPABaseEmitter* emitter = mForevers[i].mEmitter;
		if (emitter) {
			emitter->mColor1.a = alpha;
		}
	}
}

/*
 * --INFO--
 * Address:	803B9EA0
 * Size:	000088
 */
bool TChasePos::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	}

	mEmitter = particle2dMgr->create(mEfxID, *_14, _05, _04);

	if (mEmitter) {
		mEmitter->mEmitterCallback = this;
	} else {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	803B9F28
 * Size:	000078
 */
void TChasePos::execute(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(214, _14 != nullptr);

	float x = _14->x;
	float y = _14->y;

	emitter->mPositon.x = x;
	emitter->mPositon.y = y;
	emitter->mPositon.z = 0.0f;
}

/*
 * --INFO--
 * Address:	803B9FA0
 * Size:	000088
 */
bool TChasePosDir::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	}

	mEmitter = particle2dMgr->create(mEfxID, *_14, _05, _04);

	if (mEmitter) {
		mEmitter->mEmitterCallback = this;
	} else {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	803BA028
 * Size:	0000B8
 */
void TChasePosDir::execute(JPABaseEmitter* emitter)
{
	P2ASSERTLINE(244, _14 != nullptr);
	P2ASSERTLINE(245, _18 != nullptr);

	float x1 = _14->x;
	float y1 = _14->y;

	float x2 = _18->x;
	float y2 = _18->y;

	emitter->mPositon.x = x1;
	emitter->mPositon.y = y1;
	emitter->mPositon.z = 0.0f;

	emitter->_18.x = x2;
	emitter->_18.y = y2;
	emitter->_18.z = 0.0f;
}
} // namespace efx2d
