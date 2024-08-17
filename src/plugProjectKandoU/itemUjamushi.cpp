#include "Game/Entities/ItemUjamushi.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"
#include "JSystem/J3D/J3DTransform.h"
#include "nans.h"

#define UJAMUSHI_DROP_CHANCE (0.6f)

namespace Game {
namespace ItemUjamushi {

static const int unusedArray[]         = { 0, 0, 0 };
static const char unusedUjamushiName[] = "itemUjamushi";

Mgr* mgr;

/**
 * @note Address: 0x80205A28
 * @note Size: 0x3D4
 */
BoidParms::BoidParms()
    : Parameters(nullptr, "BoidParms")
    , mCohesion(this, 'p000', "Cohension", 0.27f, 0.0f, 10.0f)
    , mAlignment(this, 'p001', "Alignment", 0.15f, 0.0f, 10.0f)
    , mSeparation(this, 'p002', "Separation", 1.0f, 0.0f, 10.0f)
    , mBounds(this, 'p003', "Bounds", 1.0f, 0.0f, 10.0f)
    , mTarget(this, 'p004', "Target", 0.0f, 0.0f, 10.0f)
    , mRandom(this, 'p005', "Random", 1.5f, 0.0f, 10.0f)
    , mGoHome(this, 'p006', "Gohome", 0.0f, 0.0f, 10.0f)
    , mPiki(this, 'p008', "Piki", 0.2f, 0.0f, 10.0f)
    , mNavi(this, 'p009', "Navi", 0.1f, 0.0f, 10.0f)
    , mCollision(this, 'p010', "Collision", 10.0f, 0.0f, 10.0f)
    , mMaxSpeed(this, 'p011', "MaxSpeed", 30.0f, 1.0f, 200.0f)
    , mFov(this, 'p012', "Fov", 30.0f, 0.0f, 180.0f)
    , mDistance(this, 'p013', "Distance", 50.0f, 0.0f, 1000.0f)
    , mRotationPerSecond(this, 'p014', "Rotation/s", 180.0f, 0.0f, 1080.0f)
    , mRandomAngle(this, 'p007', "RandomAngle", 16.0f, 0.0f, 180.0f)
{
}

/**
 * @note Address: 0x80205DFC
 * @note Size: 0x138
 */
void BoidParms::blendTo(BoidParms& dest, BoidParms& outParms, f32 blendFactor)
{
	f32 comp                      = 1.0f - blendFactor;
	outParms.mCohesion()          = comp * mCohesion() + blendFactor * dest.mCohesion();
	outParms.mAlignment()         = comp * mAlignment() + blendFactor * dest.mAlignment();
	outParms.mSeparation()        = comp * mSeparation() + blendFactor * dest.mSeparation();
	outParms.mBounds()            = comp * mBounds() + blendFactor * dest.mBounds();
	outParms.mTarget()            = comp * mTarget() + blendFactor * dest.mTarget();
	outParms.mRandom()            = comp * mRandom() + blendFactor * dest.mRandom();
	outParms.mGoHome()            = comp * mGoHome() + blendFactor * dest.mGoHome();
	outParms.mPiki()              = comp * mPiki() + blendFactor * dest.mPiki();
	outParms.mNavi()              = comp * mNavi() + blendFactor * dest.mNavi();
	outParms.mCollision()         = comp * mCollision() + blendFactor * dest.mCollision();
	outParms.mMaxSpeed()          = comp * mMaxSpeed() + blendFactor * dest.mMaxSpeed();
	outParms.mFov()               = comp * mFov() + blendFactor * dest.mFov();
	outParms.mDistance()          = comp * mDistance() + blendFactor * dest.mDistance();
	outParms.mRotationPerSecond() = comp * mRotationPerSecond() + blendFactor * dest.mRotationPerSecond();
	outParms.mRandomAngle()       = comp * mRandomAngle() + blendFactor * dest.mRandomAngle();
}

/**
 * @note Address: 0x80205F34
 * @note Size: 0x4C
 */
BoidParameter::BoidParameter()
    : CNode()
    , mNode()
{
	newParms();
}

/**
 * @note Address: 0x80206028
 * @note Size: 0xC0
 */
void BoidParameter::getParms(int srcIndex, int destIndex, f32 blendFactor, BoidParms& outParms)
{
	TNode* src  = static_cast<TNode*>(mNode.getChildAt(srcIndex));
	TNode* dest = static_cast<TNode*>(mNode.getChildAt(destIndex));
	P2ASSERTBOOLLINE(143, src && dest);

	src->mParms.blendTo(dest->mParms, outParms, blendFactor);
}

/**
 * @note Address: 0x802060E8
 * @note Size: 0x48
 */
void BoidParameter::newParms()
{
	TNode* node = new TNode();
	mNode.add(node);
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void BoidParameter::write(Stream& output)
{
	output.textWriteText("\t# num parms\r\n");
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80206130
 * @note Size: 0xA8
 */
void BoidParameter::read(Stream& input)
{
	mNode.clearRelations();

	int count = input.readInt();

	for (int i = 0; i < count; i++) {
		newParms();
	}

	TNode* node = static_cast<TNode*>(mNode.mChild);
	for (int i = 0; i < count; i++) {
		node->mParms.read(input);
		node = static_cast<TNode*>(node->mNext);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x148
 */
UjaParms::UjaParms()
    : Parameters(nullptr, "UjaParms")
    , mDisplayScale(this, 'u001', "表示スケール", 0.3f, 0.1f, 1.0f)    // 'display scale'
    , mMysteryMultiply(this, 'u002', "謎 Multiply", 1.0f, 0.0f, 200.0f) // 'mystery multiply' (lmao)
    , mLife(this, 'u003', "ライフ", 0.0f, 0.0f, 600.0f)                 // 'life'
    , mMotionSpeed(this, 'u004', "モーション速度", 0.5f, 0.0f, 10.0f)   // 'motion speed'
{
}

/**
 * @note Address: 0x802061D8
 * @note Size: 0xA8
 */
Uja::Uja()
    : TFlock()
    , mUpdateContext()
{
	(Vector3f)(*this)    = Vector3f(0.0f);
	mVelocity            = 0.0f;
	mFlockMgr            = nullptr;
	mBufferSlotCount     = 4;
	mClosePikiBuffer     = new Piki*[mBufferSlotCount];
	mClosePikiDistBuffer = new f32[mBufferSlotCount];
	clearBuffer();
}

/**
 * @note Address: N/A
 * @note Size: 0x160
 */
void Uja::init(Mgr* mgr, Vector3f& pos)
{
	// this is wrong but it's a placeholder for floats
	mMotionAnimationFactor = TAU * randFloat();
	mPreviousAlignmentDir  = Vector3f(0.0f);
	mPreviousMoveDir       = Vector3f(0.0f);
	mPreviousClosestUjaDir = Vector3f(0.0f);

	mState = STATE_Appear;

	_AD           = (int)(100.0f * randFloat()) + 20;
	_B0           = 0;
	_AE           = 0;
	mHeightOffset = 0.0f;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80206280
 * @note Size: 0x28
 */
bool Uja::damaged(f32 damage)
{
	mHealth -= damage;
	return mHealth <= 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void Uja::setPosition(Vector3f& pos)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802062A8
 * @note Size: 0x3C
 */
void Uja::clearBuffer()
{
	for (int i = 0; i < mBufferSlotCount; i++) {
		mClosePikiBuffer[i]     = nullptr;
		mClosePikiDistBuffer[i] = 12800.0f;
	}
}

/**
 * @note Address: 0x802062E4
 * @note Size: 0x318
 */
void Uja::updateBuffer()
{
	if (mUpdateContext.updatable()) {
		Iterator<Piki> iter(pikiMgr);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			if (piki->isAlive()) {
				Vector3f sep = piki->getPosition() - *this;
				f32 dist     = sep.length();
				if (dist < 60.0f) {
					for (int i = 0; i < mBufferSlotCount; i++) {
						Piki* bufferPiki = mClosePikiBuffer[i];

						if (!bufferPiki || !bufferPiki->isAlive() || mClosePikiDistBuffer[i] > dist) {
							mClosePikiBuffer[i]     = piki;
							mClosePikiDistBuffer[i] = dist;
						}
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x802065FC
 * @note Size: 0xAC
 */
void Uja::makeMatrix()
{
	Vector3f rot(mPitch, mFaceDirection, 0.0f);

	Vector3f scale = mScale;
	scale *= mFlockMgr->mUjaParms->mDisplayScale();

	Vector3f translation = (Vector3f)(*this);
	translation.y += mHeightOffset;

	mTransformationMtx.makeSRT(scale, rot, translation);
}

/**
 * @note Address: 0x802066A8
 * @note Size: 0x15C
 */
void Uja::updateScale(f32 scale)
{
	f32 factor = 4.0f * (PI * (scale / 20.0f));
	mMotionAnimationFactor += (sys->mDeltaTime * factor) * mFlockMgr->mUjaParms->mMotionSpeed();

	if (mMotionAnimationFactor > TAU) {
		mMotionAnimationFactor -= TAU;
	}

	mScale.x = 0.14f * sinf(mMotionAnimationFactor) + 1.0f;
	mScale.z = 0.14f * cosf(mMotionAnimationFactor) + 1.0f;
	mScale.y = 0.14f * cosf(mMotionAnimationFactor) + 1.0f;
}

/**
 * @note Address: 0x80206804
 * @note Size: 0x134C
 */
void Uja::update(BoidParms& parms)
{
	if (mState == STATE_InFloor) {
		return;
	}

	f32 frameLength = sys->mDeltaTime;
	if (mState == STATE_FallOffWorld) {
		if (mPitch < HALF_PI) {
			mPitch += 4.0f * (HALF_PI * frameLength);
		} else {
			mHeightOffset -= 10.0f * frameLength;
		}

		makeMatrix();
		updateScale(100.0f);

		// If 15 units below the floor
		if (mHeightOffset < -15.0f) {
			mHeightOffset = -15.0f;
			mState        = STATE_InFloor;
			return;
		}

		return;
	}

	Vector2f avoidanceVector(0.0f); // f24, f25 (f23?)

	f32 scale = 10.0f * mFlockMgr->mUjaParms->mDisplayScale(); // f29
	f32 speed = parms.mMaxSpeed();                             // f30

	f32 unk1 = 0.0f; // 0x2f4
	f32 unk2 = 0.0f; // 0x2f0

	sys->mTimers->_start("AI PIKI", true);
	updateBuffer();
	sys->mTimers->_stop("AI PIKI");

	Vector3f seperationVec; // 0x2B4
	seperationVec = mFlockMgr->mFlockCentre - *this;
	seperationVec.normalise();

	// To avoid collisions, we have an arbitrary size (representing the Uja) to keep away from other Uja
	// While calculating the alignment vector.
	f32 alignmentThreshold = 1280.0f;

	// AI Alignment
	sys->mTimers->_start("AI ALN", true);

	Vector3f alignmentVec; // f22, f21, f20
	if (!mUpdateContext.updatable()) {
		alignmentVec  = mPreviousAlignmentDir;
		seperationVec = mPreviousMoveDir;
	} else {
		alignmentThreshold = scale + scale; // f28

		int visibleUjaCount = 0; // r28
		alignmentVec        = Vector3f(0.0f);
		seperationVec       = Vector3f(0.0f);

		f32 distanceThreshold = scale + parms.mDistance(); // f14

		Iterator<Uja> flockList(mFlockMgr);

		f32 doubleScale = 2.0f * scale; // f15

		CI_LOOP(flockList)
		{
			Uja* i = *flockList;

			if (i != this && i->mState != STATE_2) {
				Vector3f directionFromUjaToThis = *this - *i; // 0x298

				f32 dist = directionFromUjaToThis.normalise(); // f16
				f32 fov  = parms.mFov();                       // f17

				if (dist < distanceThreshold) {
					if (dist > 0.0f) {
						// Checks the angular distance between the direction to the other object and the current direction
						f32 angleDist
						    = angDist(roundAng(JMAAtan2Radian(directionFromUjaToThis.x, directionFromUjaToThis.z)), mFaceDirection);

						// If the direction is NOT within the FOV, skip this object
						if (absF(angleDist) > TORADIANS(fov)) {
							continue;
						}
					}

					// We can see the other Uja, so we add it to the alignment vector to not collide with it
					seperationVec += *i;

					Vector3f newVec = mVelocity;
					newVec.normalise();

					visibleUjaCount++;
					alignmentVec += i->mVelocity;
				}

				if (dist < alignmentThreshold) {
					alignmentThreshold = dist;
					avoidanceVector    = Vector2f(directionFromUjaToThis.x, directionFromUjaToThis.z) * (doubleScale - dist);
				}
			}
		}

		// If we could see any other Uja, we cache the move direction
		if (visibleUjaCount > 0) {
			f32 norm              = 1.0f / (f32)visibleUjaCount;
			mPreviousAlignmentDir = alignmentVec * norm;

			seperationVec *= norm;
			seperationVec = seperationVec - *this;
			seperationVec.normalise();

			mPreviousMoveDir = seperationVec;
		}
	}

	sys->mTimers->_stop("AI ALN");

	// UNUSED
	Vector3f directionTo_44(0.0f); // 0x280
	directionTo_44 = _44 - *this;
	directionTo_44.normalise();

	Vector3f closestUjaDirection(0.0f); // f31, f19, f18

	if (mUpdateContext.updatable()) {
		f32 minDist = 2.0f * scale; // f14

		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;

			// If current iteration isn't this, and we aren't STATE_2
			if (uja != this) {
				// Calculate direction and distance to the other Uja
				Vector3f ujaSep = *this - *uja; // 0x264

				f32 dist = ujaSep.normalise();
				if (dist < minDist) {
					minDist                = dist;
					closestUjaDirection    = ujaSep;
					mPreviousClosestUjaDir = ujaSep;
				}
			}
		}
	} else {
		closestUjaDirection = mPreviousClosestUjaDir;
	}

	Vector3f pos    = mFlockMgr->mBoundSphere.mPosition - *this;
	Vector3f result = 0.0f;
	f32 radius      = mFlockMgr->mBoundSphere.mRadius;
	f32 diff        = pos.normalise();
	if (diff > 0.0f) {
		f32 angle = JMAAtan2Radian(pos.x, pos.z) * 8.0f;
		if (radius * (cosf(angle) * 0.2f + 0.8f) < diff) {
			result = pos;
		}
	}

	f32 randAngle = parms.mRandomAngle() * (randFloat() - 0.5f) + mFaceDirection;
	f32 randCos   = cosf(randAngle);
	f32 randSin   = sinf(randAngle);

	Iterator<Navi> naviIt(naviMgr);
	scale               = (scale + 6.0f) + 6.0f;
	Vector3f naviResult = 0.0f;
	CI_LOOP(naviIt)
	{
		Navi* navi = *naviIt;
		if (navi->isAlive()) {
			Vector3f posDiff = navi->getPosition() - *this;
			f32 dist         = posDiff.normalise();
			if (dist < scale) {
				f32 inv      = (scale - dist) * -1.0f;
				naviResult.x = posDiff.x * inv;
				naviResult.y = dist;
				naviResult.z = posDiff.z * inv;
			} else if (dist < 40.0f) {
				naviResult = posDiff;
			}
		}
	}
	Vector3f center = 0.0f;
	center          = mFlockMgr->mFlockCentre - *this;
	if (center.normalise() < 10.0f && mState == 3) {
		mState = 6;
	}

	Vector3f pikiResult = 0.0f;
	if (mClosePikiBuffer[0] && mClosePikiBuffer[0]->isAlive()) {
		Vector3f posDiff = mClosePikiBuffer[0]->getPosition() - *this;
		f32 dist         = posDiff.normalise();
		if (dist > scale) {
			f32 inv      = (scale - dist) * -1.0f;
			pikiResult.x = posDiff.x * inv;
			pikiResult.y = dist;
			pikiResult.z = posDiff.z * inv;
		} else if (dist < 40.0f) {
			pikiResult = posDiff;
			if (mState == 0 && dist < 30.0f) {
				mState = 2;
				Vector3f offs;
				f32 xz    = randFloat() * 10.0f + 60.0f;
				offs.x    = posDiff.x * xz;
				offs.y    = randFloat() * 10.0f + 72.0f;
				offs.z    = posDiff.z * xz;
				mVelocity = mVelocity + offs;
				if (randFloat() > 0.99f) {
					InteractGas act(nullptr, 0.0f);
					mClosePikiBuffer[0]->stimulate(act);
				}
			}
		}
	}

	Vector3f totalResult;
	if (mState != 2) {
		f32 speed2   = speed * parms.mTarget();
		Vector3f dir = directionTo_44 * speed2;

		speed2           = speed * parms.mRandom();
		Vector3f randDir = Vector3f(randCos, 0.0f, randSin) * speed2;

		speed2           = speed * parms.mNavi();
		Vector3f naviPos = naviResult * speed2;

		speed2             = speed * parms.mGoHome();
		Vector3f centerPos = center * speed2;

		speed2           = speed * parms.mPiki();
		Vector3f pikiPos = pikiResult * speed2;

		speed2            = speed * parms.mBounds();
		Vector3f boundPos = result * speed2;

		speed2       = speed * parms.mSeparation();
		Vector3f sep = closestUjaDirection * speed2;

		speed2         = speed * parms.mAlignment();
		Vector3f align = alignmentVec * speed2;

		speed2        = speed * parms.mCohesion();
		Vector3f sep2 = seperationVec * speed2;

		totalResult = dir + randDir + naviPos + centerPos + pikiPos + boundPos + sep + align + sep2;
	}

	if (totalResult.z != 0.0f) {
		f32 angle = JMAAtan2Radian(totalResult.x, totalResult.z);
		mFaceDirection += (angDist(roundAng(angle), mFaceDirection) * 8.0f) * frameLength;
		mFaceDirection = roundAng(mFaceDirection);
	}
	f32 faceCos = cosf(mFaceDirection);
	f32 faceSin = sinf(mFaceDirection);
	f32 mult    = mFlockMgr->mUjaParms->mMysteryMultiply();
	mVelocity   = mVelocity + Vector3f(faceSin, 0.0f, faceCos) * mult;

	if (mState != 2) {
		mVelocity.y = 0.0f;
	}

	if (mState == 2) {
		mVelocity.y = -(sys->mDeltaTime * 560.0f - mVelocity.y);
		f32 minY    = mFlockMgr->mBoundSphere.mPosition.y;
		if (this->y <= minY) {
			this->y = minY;
			mState  = 0;
		}
	}

	f32 vel = mVelocity.length();
	if (mState != 2 && speed > vel) {
		f32 inv = (1.0f / vel) * speed;
		mVelocity *= inv;
		vel = speed;
	}

	if (_AE) {
		if (!_AD) {
			_AE = false;
			_AD = randInt(100) + '2';
		}
		_AD--;
	} else {
		if (_AD) {
			_AD--;
			if (!_AD) {
				_AE = true;
				_AD = randInt(30) + '\n';
			}
		}
		Vector3f test    = pikiResult * frameLength * 10.0f;
		Vector3f dist    = test + *this;
		(Vector3f)* this = dist;

		Vector3f velocity = mVelocity * frameLength;
		Vector3f dist2    = velocity + *this;
		(Vector3f)* this  = dist2;
	}

	Vector3f boundPos  = mFlockMgr->mBoundSphere.mPosition;
	Vector3f boundDiff = boundPos - *this;
	f32 boundDist      = boundDiff.normalise();
	f32 radius2        = mFlockMgr->mBoundSphere.mRadius;
	if (boundDist > 0.0f) {
		f32 angle = JMAAtan2Radian(boundDiff.x, boundDiff.z);
		f32 one   = 1.0f;
		radius2 *= one;
		if (boundDist > radius2) {
			f32 diff      = mVelocity.sqrDistance(boundDiff);
			Vector3f temp = boundDiff * diff;
			mVelocity     = mVelocity - temp;

			(Vector3f)* this = boundPos - (boundDiff * boundDist);
		}
	}

	f32 minY = mFlockMgr->mBoundSphere.mPosition.y;
	if (this->y < minY) {
		this->y = minY;
		if (mState == 2) {
			mState = 0;
		}
	} else {
		minY += radius2 * 2.0f;
		if (minY > this->y) {
			this->y = minY;
		}
	}

	updateScale(alignmentThreshold);
	makeMatrix();

	FORCE_DONT_INLINE;

	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stfd     f31, 0x420(r1)
	psq_st   f31, 1064(r1), 0, qr0
	stfd     f30, 0x410(r1)
	psq_st   f30, 1048(r1), 0, qr0
	stfd     f29, 0x400(r1)
	psq_st   f29, 1032(r1), 0, qr0
	stfd     f28, 0x3f0(r1)
	psq_st   f28, 1016(r1), 0, qr0
	stfd     f27, 0x3e0(r1)
	psq_st   f27, 1000(r1), 0, qr0
	stfd     f26, 0x3d0(r1)
	psq_st   f26, 984(r1), 0, qr0
	stfd     f25, 0x3c0(r1)
	psq_st   f25, 968(r1), 0, qr0
	stfd     f24, 0x3b0(r1)
	psq_st   f24, 952(r1), 0, qr0
	stfd     f23, 0x3a0(r1)
	psq_st   f23, 936(r1), 0, qr0
	stfd     f22, 0x390(r1)
	psq_st   f22, 920(r1), 0, qr0
	stfd     f21, 0x380(r1)
	psq_st   f21, 904(r1), 0, qr0
	stfd     f20, 0x370(r1)
	psq_st   f20, 888(r1), 0, qr0
	stfd     f19, 0x360(r1)
	psq_st   f19, 872(r1), 0, qr0
	stfd     f18, 0x350(r1)
	psq_st   f18, 856(r1), 0, qr0
	stfd     f17, 0x340(r1)
	psq_st   f17, 840(r1), 0, qr0
	stfd     f16, 0x330(r1)
	psq_st   f16, 824(r1), 0, qr0
	stfd     f15, 0x320(r1)
	psq_st   f15, 808(r1), 0, qr0
	stfd     f14, 0x310(r1)
	psq_st   f14, 792(r1), 0, qr0
	stw      r31, 0x30c(r1)
	stw      r30, 0x308(r1)
	stw      r29, 0x304(r1)
	stw      r28, 0x300(r1)
	mr       r29, r3
	mr       r30, r4
	lbz      r0, 0xac(r3)
	cmplwi   r0, 6
	beq      lbl_80207AA0
	lwz      r6, sys@sda21(r13)
	cmplwi   r0, 4
	lfs      f26, 0x54(r6)
	bne      lbl_8020694C
	lfs      f2, 0xb8(r29)
	lfs      f0, lbl_80519E48@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802068F8
	fmuls    f0, f0, f26
	lfs      f1, lbl_80519E30@sda21(r2)
	fmadds   f0, f1, f0, f2
	stfs     f0, 0xb8(r29)
	b        lbl_80206908

lbl_802068F8:
	lfs      f1, lbl_80519D98@sda21(r2)
	lfs      f0, 0xb4(r29)
	fnmsubs  f0, f1, f26, f0
	stfs     f0, 0xb4(r29)

lbl_80206908:
	mr       r3, r29
	lwz      r12, 0xc(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_80519E1C@sda21(r2)
	mr       r3, r29
	bl       updateScale__Q34Game12ItemUjamushi3UjaFf
	lfs      f1, 0xb4(r29)
	lfs      f0, lbl_80519E4C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80207AA0
	stfs     f0, 0xb4(r29)
	li       r0, 6
	stb      r0, 0xac(r29)
	b        lbl_80207AA0
	b        lbl_80207AA0

lbl_8020694C:
	lwz      r3, 0x74(r29)
	addi     r4, r2, lbl_80519E50@sda21
	lfs      f25, lbl_80519D94@sda21(r2)
	li       r5, 1
	lwz      r3, 0x310(r3)
	lfs      f1, lbl_80519D98@sda21(r2)
	fmr      f24, f25
	lfs      f0, 0x24(r3)
	fmr      f23, f25
	stfs     f25, 0x2f4(r1)
	fmuls    f29, f1, f0
	lfs      f30, 0x1b4(r30)
	stfs     f25, 0x2f0(r1)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	mr       r3, r29
	bl       updateBuffer__Q34Game12ItemUjamushi3UjaFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E50@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lwz      r4, 0x74(r29)
	mr       r5, r29
	addi     r3, r1, 0x1dc
	addi     r4, r4, 0x7c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1dc(r1)
	addi     r3, r1, 0x2b4
	lfs      f1, 0x1e0(r1)
	lfs      f0, 0x1e4(r1)
	stfs     f2, 0x2b4(r1)
	stfs     f1, 0x2b8(r1)
	stfs     f0, 0x2bc(r1)
	bl       "normalise__10Vector3<f>Fv"
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E5C@sda21
	lfs      f28, lbl_80519E58@sda21(r2)
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	addi     r3, r29, 0x78
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80206A24
	lfs      f22, 0x84(r29)
	lfs      f21, 0x88(r29)
	lfs      f20, 0x8c(r29)
	lfs      f0, 0x90(r29)
	stfs     f0, 0x2b4(r1)
	lfs      f0, 0x94(r29)
	stfs     f0, 0x2b8(r1)
	lfs      f0, 0x98(r29)
	stfs     f0, 0x2bc(r1)
	b        lbl_80206CA8

lbl_80206A24:
	lfs      f22, lbl_80519D94@sda21(r2)
	fadds    f28, f29, f29
	li       r28, 0
	stfs     f22, 0x2b4(r1)
	fmr      f21, f22
	fmr      f20, f22
	stfs     f22, 0x2b8(r1)
	stfs     f22, 0x2bc(r1)
	lfs      f0, 0x204(r30)
	lwz      r5, 0x74(r29)
	fadds    f14, f29, f0
	cmplwi   r5, 0
	beq      lbl_80206A5C
	addi     r5, r5, 0x20

lbl_80206A5C:
	lis      r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x2b0(r1)
	addi     r3, r1, 0x2a4
	stw      r4, 0x2a4(r1)
	stw      r0, 0x2a8(r1)
	stw      r5, 0x2ac(r1)
	bl       "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	lfs      f0, lbl_80519E64@sda21(r2)
	fmuls    f15, f0, f29
	b        lbl_80206BD8

lbl_80206A8C:
	lwz      r3, 0x2ac(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	cmplw    r31, r29
	beq      lbl_80206BD0
	lbz      r0, 0xac(r31)
	cmplwi   r0, 2
	beq      lbl_80206BD0
	mr       r4, r29
	mr       r5, r31
	addi     r3, r1, 0x1d0
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1d0(r1)
	addi     r3, r1, 0x298
	lfs      f1, 0x1d4(r1)
	lfs      f0, 0x1d8(r1)
	stfs     f2, 0x298(r1)
	stfs     f1, 0x29c(r1)
	stfs     f0, 0x2a0(r1)
	bl       "normalise__10Vector3<f>Fv"
	fmr      f16, f1
	lfs      f17, 0x1dc(r30)
	fcmpo    cr0, f16, f14
	bge      lbl_80206BB0
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f16, f0
	ble      lbl_80206B44
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x298(r1)
	lfs      f2, 0x2a0(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x5c(r29)
	bl       angDist__Fff
	lfs      f0, lbl_80519E68@sda21(r2)
	fabs     f2, f1
	lfs      f1, lbl_80519E34@sda21(r2)
	fmuls    f0, f0, f17
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bgt      lbl_80206BD0

lbl_80206B44:
	lfs      f1, 0x2b4(r1)
	addi     r3, r1, 0x28c
	lfs      f0, 0(r31)
	lfs      f2, 0x2b8(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x2bc(r1)
	stfs     f0, 0x2b4(r1)
	lfs      f0, 4(r31)
	fadds    f0, f2, f0
	stfs     f0, 0x2b8(r1)
	lfs      f0, 8(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x2bc(r1)
	lfs      f0, 0x50(r31)
	stfs     f0, 0x28c(r1)
	lfs      f0, 0x54(r31)
	stfs     f0, 0x290(r1)
	lfs      f0, 0x58(r31)
	stfs     f0, 0x294(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f2, 0x50(r31)
	addi     r28, r28, 1
	lfs      f1, 0x54(r31)
	lfs      f0, 0x58(r31)
	fadds    f22, f22, f2
	fadds    f21, f21, f1
	fadds    f20, f20, f0

lbl_80206BB0:
	fcmpo    cr0, f16, f28
	bge      lbl_80206BD0
	fsubs    f2, f15, f16
	lfs      f1, 0x2a0(r1)
	lfs      f0, 0x298(r1)
	fmr      f28, f16
	fmuls    f24, f1, f2
	fmuls    f25, f0, f2

lbl_80206BD0:
	addi     r3, r1, 0x2a4
	bl       "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

lbl_80206BD8:
	lwz      r3, 0x2ac(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2a8(r1)
	cmplw    r4, r3
	bne      lbl_80206A8C
	cmpwi    r28, 0
	ble      lbl_80206CA8
	xoris    r3, r28, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c4(r1)
	mr       r5, r29
	lfd      f1, lbl_80519E20@sda21(r2)
	addi     r3, r1, 0x1c4
	stw      r0, 0x2c0(r1)
	addi     r4, r1, 0x2b4
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfd      f0, 0x2c0(r1)
	fsubs    f0, f0, f1
	fdivs    f3, f2, f0
	fmuls    f22, f22, f3
	fmuls    f21, f21, f3
	fmuls    f20, f20, f3
	stfs     f22, 0x84(r29)
	stfs     f21, 0x88(r29)
	stfs     f20, 0x8c(r29)
	lfs      f2, 0x2b4(r1)
	lfs      f1, 0x2b8(r1)
	lfs      f0, 0x2bc(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x2b4(r1)
	stfs     f1, 0x2b8(r1)
	stfs     f0, 0x2bc(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1c4(r1)
	addi     r3, r1, 0x2b4
	lfs      f1, 0x1c8(r1)
	lfs      f0, 0x1cc(r1)
	stfs     f2, 0x2b4(r1)
	stfs     f1, 0x2b8(r1)
	stfs     f0, 0x2bc(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f0, 0x2b4(r1)
	stfs     f0, 0x90(r29)
	lfs      f0, 0x2b8(r1)
	stfs     f0, 0x94(r29)
	lfs      f0, 0x2bc(r1)
	stfs     f0, 0x98(r29)

lbl_80206CA8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E5C@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	lfs      f0, lbl_80519D94@sda21(r2)
	mr       r5, r29
	addi     r3, r1, 0x1b8
	addi     r4, r29, 0x44
	stfs     f0, 0x280(r1)
	stfs     f0, 0x284(r1)
	stfs     f0, 0x288(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1b8(r1)
	addi     r3, r1, 0x280
	lfs      f1, 0x1bc(r1)
	lfs      f0, 0x1c0(r1)
	stfs     f2, 0x280(r1)
	stfs     f1, 0x284(r1)
	stfs     f0, 0x288(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f31, lbl_80519D94@sda21(r2)
	addi     r3, r29, 0x78
	fmr      f19, f31
	fmr      f18, f31
	bl       updatable__Q24Game13UpdateContextFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80206DF8
	lfs      f0, lbl_80519E64@sda21(r2)
	lwz      r5, 0x74(r29)
	fmuls    f14, f0, f29
	cmplwi   r5, 0
	beq      lbl_80206D2C
	addi     r5, r5, 0x20

lbl_80206D2C:
	lis      r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@ha
	li       r0, 0
	addi     r4, r3, "__vt__35Iterator<Q34Game12ItemUjamushi3Uja>"@l
	stw      r0, 0x27c(r1)
	addi     r3, r1, 0x270
	stw      r4, 0x270(r1)
	stw      r0, 0x274(r1)
	stw      r5, 0x278(r1)
	bl       "first__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"
	b        lbl_80206DD4

lbl_80206D54:
	lwz      r3, 0x278(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r29
	beq      lbl_80206DCC
	mr       r4, r29
	mr       r5, r3
	addi     r3, r1, 0x1ac
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1ac(r1)
	addi     r3, r1, 0x264
	lfs      f1, 0x1b0(r1)
	lfs      f0, 0x1b4(r1)
	stfs     f2, 0x264(r1)
	stfs     f1, 0x268(r1)
	stfs     f0, 0x26c(r1)
	bl       "normalise__10Vector3<f>Fv"
	fcmpo    cr0, f1, f14
	bge      lbl_80206DCC
	lfs      f31, 0x264(r1)
	fmr      f14, f1
	lfs      f19, 0x268(r1)
	lfs      f18, 0x26c(r1)
	stfs     f31, 0x9c(r29)
	lfs      f0, 0x268(r1)
	stfs     f0, 0xa0(r29)
	lfs      f0, 0x26c(r1)
	stfs     f0, 0xa4(r29)

lbl_80206DCC:
	addi     r3, r1, 0x270
	bl       "next__35Iterator<Q34Game12ItemUjamushi3Uja>Fv"

lbl_80206DD4:
	lwz      r3, 0x278(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x274(r1)
	cmplw    r4, r3
	bne      lbl_80206D54
	b        lbl_80206E04

lbl_80206DF8:
	lfs      f31, 0x9c(r29)
	lfs      f19, 0xa0(r29)
	lfs      f18, 0xa4(r29)

lbl_80206E04:
	lwz      r6, 0x74(r29)
	mr       r5, r29
	lfs      f17, lbl_80519D94@sda21(r2)
	addi     r3, r1, 0x1a0
	lfs      f0, 0x6c(r6)
	addi     r4, r1, 0x258
	stfs     f17, 0x2ec(r1)
	stfs     f0, 0x258(r1)
	lfs      f0, 0x70(r6)
	stfs     f17, 0x2e8(r1)
	stfs     f0, 0x25c(r1)
	lfs      f0, 0x74(r6)
	stfs     f0, 0x260(r1)
	lfs      f14, 0x78(r6)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x1a0(r1)
	addi     r3, r1, 0x24c
	lfs      f1, 0x1a4(r1)
	lfs      f0, 0x1a8(r1)
	stfs     f2, 0x24c(r1)
	stfs     f1, 0x250(r1)
	stfs     f0, 0x254(r1)
	bl       "normalise__10Vector3<f>Fv"
	fmr      f27, f1
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_80206F14
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x24c(r1)
	lfs      f2, 0x254(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f2, lbl_80519E6C@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmuls    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80206EC4
	lfs      f0, lbl_80519E40@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x2c0(r1)
	lwz      r0, 0x2c4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80206EE8

lbl_80206EC4:
	lfs      f0, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x2c8(r1)
	lwz      r0, 0x2cc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80206EE8:
	lfs      f1, lbl_80519DD0@sda21(r2)
	lfs      f0, lbl_80519E70@sda21(r2)
	fmadds   f0, f1, f2, f0
	fmuls    f0, f14, f0
	fcmpo    cr0, f27, f0
	ble      lbl_80206F14
	lfs      f0, 0x250(r1)
	lfs      f17, 0x24c(r1)
	stfs     f0, 0x2ec(r1)
	lfs      f0, 0x254(r1)
	stfs     f0, 0x2e8(r1)

lbl_80206F14:
	lfs      f1, lbl_80519E68@sda21(r2)
	lfs      f0, 0x254(r30)
	lfs      f2, lbl_80519E34@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f14, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2cc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 0x2c8(r1)
	lfs      f3, lbl_80519E14@sda21(r2)
	lfd      f0, 0x2c8(r1)
	lfs      f2, lbl_80519E10@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, 0x5c(r29)
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f3, f4, f3
	fsubs    f2, f3, f2
	fmadds   f3, f14, f2, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80206F74
	fneg     f1, f3

lbl_80206F74:
	lfs      f2, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	addi     r31, r3, 4
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x2c0(r1)
	lwz      r0, 0x2c4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r31, r0
	stfs     f0, 0x2fc(r1)
	bge      lbl_80206FD4
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r0, 0x2d4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	stfs     f0, 0x2f8(r1)
	b        lbl_80206FF0

lbl_80206FD4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x2d8(r1)
	lwz      r0, 0x2dc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	stfs     f0, 0x2f8(r1)

lbl_80206FF0:
	lfs      f27, lbl_80519D94@sda21(r2)
	li       r4, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r3, "__vt__22Iterator<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__22Iterator<Q24Game4Navi>"@l
	fmr      f16, f27
	fmr      f15, f27
	stw      r3, 0x23c(r1)
	addi     r3, r1, 0x23c
	stw      r4, 0x248(r1)
	stw      r4, 0x240(r1)
	stw      r0, 0x244(r1)
	bl       "first__22Iterator<Q24Game4Navi>Fv"
	lfs      f1, lbl_80519E74@sda21(r2)
	fadds    f0, f1, f29
	fadds    f14, f1, f0
	b        lbl_80207100

lbl_80207034:
	lwz      r3, 0x244(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802070F8
	mr       r4, r28
	addi     r3, r1, 0x188
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r29
	addi     r3, r1, 0x194
	addi     r4, r1, 0x188
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x194(r1)
	addi     r3, r1, 0x230
	lfs      f1, 0x198(r1)
	lfs      f0, 0x19c(r1)
	stfs     f2, 0x230(r1)
	stfs     f1, 0x234(r1)
	stfs     f0, 0x238(r1)
	bl       "normalise__10Vector3<f>Fv"
	fcmpo    cr0, f1, f14
	bge      lbl_802070E0
	fcmpo    cr0, f1, f28
	bge      lbl_802070F8
	fsubs    f2, f14, f1
	lfs      f3, lbl_80519E78@sda21(r2)
	fmr      f28, f1
	lfs      f4, 0x238(r1)
	lfs      f0, 0x230(r1)
	fmuls    f1, f3, f2
	fmuls    f24, f4, f1
	fmuls    f25, f0, f1
	b        lbl_802070F8

lbl_802070E0:
	lfs      f0, lbl_80519E7C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802070F8
	lfs      f27, 0x230(r1)
	lfs      f16, 0x234(r1)
	lfs      f15, 0x238(r1)

lbl_802070F8:
	addi     r3, r1, 0x23c
	bl       "next__22Iterator<Q24Game4Navi>Fv"

lbl_80207100:
	lwz      r3, 0x244(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x240(r1)
	cmplw    r4, r3
	bne      lbl_80207034
	lfs      f0, lbl_80519D94@sda21(r2)
	mr       r5, r29
	addi     r3, r1, 0x17c
	stfs     f0, 0x224(r1)
	stfs     f0, 0x228(r1)
	stfs     f0, 0x22c(r1)
	lwz      r4, 0x74(r29)
	addi     r4, r4, 0x7c
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x17c(r1)
	addi     r3, r1, 0x224
	lfs      f1, 0x180(r1)
	lfs      f0, 0x184(r1)
	stfs     f2, 0x224(r1)
	stfs     f1, 0x228(r1)
	stfs     f0, 0x22c(r1)
	bl       "normalise__10Vector3<f>Fv"
	lfs      f0, lbl_80519D98@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80207184
	lbz      r0, 0xac(r29)
	cmplwi   r0, 3
	bne      lbl_80207184
	li       r0, 6
	stb      r0, 0xac(r29)

lbl_80207184:
	lwz      r3, 0xc0(r29)
	lfs      f29, lbl_80519D94@sda21(r2)
	lwz      r3, 0(r3)
	stfs     f29, 0x2e4(r1)
	cmplwi   r3, 0
	stfs     f29, 0x2e0(r1)
	beq      lbl_80207394
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80207394
	lwz      r4, 0xc0(r29)
	addi     r3, r1, 0x164
	lwz      r4, 0(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r5, r29
	addi     r3, r1, 0x170
	addi     r4, r1, 0x164
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x170(r1)
	addi     r3, r1, 0x218
	lfs      f1, 0x174(r1)
	lfs      f0, 0x178(r1)
	stfs     f2, 0x218(r1)
	stfs     f1, 0x21c(r1)
	stfs     f0, 0x220(r1)
	bl       "normalise__10Vector3<f>Fv"
	fcmpo    cr0, f1, f14
	bge      lbl_80207234
	fcmpo    cr0, f1, f28
	bge      lbl_80207394
	fsubs    f1, f14, f1
	lfs      f2, lbl_80519E78@sda21(r2)
	lfs      f3, 0x220(r1)
	lfs      f0, 0x218(r1)
	fmuls    f1, f2, f1
	fmuls    f24, f3, f1
	fmuls    f25, f0, f1
	b        lbl_80207394

lbl_80207234:
	lfs      f0, lbl_80519E7C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_80207394
	lfs      f0, 0x21c(r1)
	lbz      r0, 0xac(r29)
	stfs     f0, 0x2e4(r1)
	lfs      f0, 0x220(r1)
	cmplwi   r0, 0
	lfs      f29, 0x218(r1)
	stfs     f0, 0x2e0(r1)
	bne      lbl_80207394
	lfs      f0, lbl_80519DE0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80207394
	li       r0, 2
	stb      r0, 0xac(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2dc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2d8(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x2d8(r1)
	lfs      f1, lbl_80519D98@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519E2C@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f14, f1, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2d4(r1)
	fmuls    f3, f29, f14
	lfs      f0, 0x2e0(r1)
	addi     r3, r1, 0x158
	stw      r0, 0x2d0(r1)
	addi     r4, r29, 0x50
	lfd      f5, lbl_80519E20@sda21(r2)
	lfd      f1, 0x2d0(r1)
	fmuls    f0, f0, f14
	lfs      f4, lbl_80519E14@sda21(r2)
	addi     r5, r1, 0x20c
	fsubs    f5, f1, f5
	stfs     f3, 0x20c(r1)
	lfs      f2, lbl_80519D98@sda21(r2)
	lfs      f1, lbl_80519E80@sda21(r2)
	fdivs    f3, f5, f4
	stfs     f0, 0x214(r1)
	fmadds   f0, f2, f3, f1
	stfs     f0, 0x210(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x158(r1)
	stfs     f0, 0x50(r29)
	lfs      f0, 0x15c(r1)
	stfs     f0, 0x54(r29)
	lfs      f0, 0x160(r1)
	stfs     f0, 0x58(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2cc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2c8(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x2c8(r1)
	lfs      f0, lbl_80519E84@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80207394
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game11InteractGas@ha
	stw      r0, 0x200(r1)
	addi     r0, r3, __vt__Q24Game11InteractGas@l
	li       r3, 0
	addi     r4, r1, 0x200
	stw      r3, 0x204(r1)
	stw      r0, 0x200(r1)
	stfs     f0, 0x208(r1)
	lwz      r3, 0xc0(r29)
	lwz      r3, 0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80207394:
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	beq      lbl_80207590
	lfs      f0, 0xc4(r30)
	addi     r3, r1, 0xf8
	lfs      f2, 0x280(r1)
	addi     r4, r1, 0xec
	fmuls    f3, f30, f0
	lfs      f1, 0x284(r1)
	lfs      f0, 0x288(r1)
	addi     r5, r1, 0xe0
	lfs      f7, lbl_80519D94@sda21(r2)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	lfs      f6, 0x224(r1)
	fmuls    f0, f0, f3
	lfs      f5, 0x228(r1)
	stfs     f2, 0x8c(r1)
	lfs      f4, 0x22c(r1)
	stfs     f1, 0x90(r1)
	lfs      f3, 0x2b4(r1)
	stfs     f0, 0x94(r1)
	lfs      f2, 0x2b8(r1)
	lfs      f0, 0xec(r30)
	lfs      f1, 0x2bc(r1)
	fmuls    f9, f30, f0
	lfs      f0, 0x2f8(r1)
	fmuls    f8, f0, f9
	lfs      f0, 0x2fc(r1)
	fmuls    f7, f7, f9
	fmuls    f0, f0, f9
	stfs     f8, 0x98(r1)
	stfs     f7, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	lfs      f0, 0x164(r30)
	fmuls    f0, f30, f0
	fmuls    f8, f27, f0
	fmuls    f7, f16, f0
	fmuls    f0, f15, f0
	stfs     f8, 0xa4(r1)
	stfs     f7, 0xa8(r1)
	stfs     f0, 0xac(r1)
	lfs      f0, 0x114(r30)
	fmuls    f0, f30, f0
	fmuls    f6, f6, f0
	fmuls    f5, f5, f0
	fmuls    f0, f4, f0
	stfs     f6, 0xb0(r1)
	stfs     f5, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	lfs      f0, 0x13c(r30)
	fmuls    f6, f30, f0
	lfs      f0, 0x2e4(r1)
	fmuls    f4, f0, f6
	lfs      f0, 0x2e0(r1)
	fmuls    f5, f29, f6
	fmuls    f0, f0, f6
	stfs     f4, 0xc0(r1)
	stfs     f5, 0xbc(r1)
	stfs     f0, 0xc4(r1)
	lfs      f0, 0x9c(r30)
	fmuls    f6, f30, f0
	lfs      f0, 0x2ec(r1)
	fmuls    f4, f0, f6
	lfs      f0, 0x2e8(r1)
	fmuls    f5, f17, f6
	fmuls    f0, f0, f6
	stfs     f4, 0xcc(r1)
	stfs     f5, 0xc8(r1)
	stfs     f0, 0xd0(r1)
	lfs      f0, 0x74(r30)
	fmuls    f0, f30, f0
	fmuls    f5, f31, f0
	fmuls    f4, f19, f0
	fmuls    f0, f18, f0
	stfs     f5, 0xd4(r1)
	stfs     f4, 0xd8(r1)
	stfs     f0, 0xdc(r1)
	lfs      f0, 0x4c(r30)
	fmuls    f5, f22, f0
	fmuls    f4, f21, f0
	fmuls    f0, f20, f0
	stfs     f5, 0xe0(r1)
	stfs     f4, 0xe4(r1)
	stfs     f0, 0xe8(r1)
	lfs      f0, 0x24(r30)
	fmuls    f0, f30, f0
	fmuls    f3, f3, f0
	fmuls    f2, f2, f0
	fmuls    f0, f1, f0
	stfs     f3, 0xec(r1)
	stfs     f2, 0xf0(r1)
	stfs     f0, 0xf4(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x104
	addi     r4, r1, 0xf8
	addi     r5, r1, 0xd4
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x110
	addi     r4, r1, 0x104
	addi     r5, r1, 0xc8
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x11c
	addi     r4, r1, 0x110
	addi     r5, r1, 0xbc
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x128
	addi     r4, r1, 0x11c
	addi     r5, r1, 0xb0
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x134
	addi     r4, r1, 0x128
	addi     r5, r1, 0xa4
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x140
	addi     r4, r1, 0x134
	addi     r5, r1, 0x98
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	addi     r3, r1, 0x14c
	addi     r4, r1, 0x140
	addi     r5, r1, 0x8c
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x14c(r1)
	lfs      f23, 0x154(r1)
	stfs     f0, 0x2f4(r1)
	lfs      f0, 0x150(r1)
	stfs     f0, 0x2f0(r1)

lbl_80207590:
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpu    cr0, f0, f23
	beq      lbl_802075DC
	fmr      f2, f23
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x2f4(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lfs      f2, 0x5c(r29)
	bl       angDist__Fff
	lfs      f2, lbl_80519E6C@sda21(r2)
	lfs      f0, 0x5c(r29)
	fmuls    f1, f2, f1
	fmadds   f0, f1, f26, f0
	stfs     f0, 0x5c(r29)
	lfs      f1, 0x5c(r29)
	bl       roundAng__Ff
	stfs     f1, 0x5c(r29)

lbl_802075DC:
	lfs      f3, 0x5c(r29)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802075F4
	fneg     f1, f3

lbl_802075F4:
	lfs      f2, lbl_80519E44@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x2d8(r1)
	lwz      r0, 0x2dc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f5, r31, r0
	bge      lbl_80207648
	lfs      f0, lbl_80519E40@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r0, 0x2d4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80207668

lbl_80207648:
	fmuls    f0, f3, f2
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x2c8(r1)
	lwz      r0, 0x2cc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80207668:
	lfs      f3, lbl_80519D94@sda21(r2)
	addi     r3, r1, 0x80
	lfs      f0, 0x2f0(r1)
	addi     r4, r29, 0x50
	lwz      r6, 0x74(r29)
	addi     r5, r1, 0x74
	fmuls    f1, f3, f0
	lfs      f0, 0x2f4(r1)
	lwz      r6, 0x310(r6)
	fmadds   f0, f2, f0, f1
	lfs      f4, 0x4c(r6)
	fmadds   f0, f5, f23, f0
	fmuls    f2, f2, f0
	fmuls    f1, f3, f0
	fmuls    f0, f5, f0
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	fmuls    f0, f0, f4
	stfs     f2, 0x74(r1)
	stfs     f1, 0x78(r1)
	stfs     f0, 0x7c(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x80(r1)
	stfs     f0, 0x50(r29)
	lfs      f0, 0x84(r1)
	stfs     f0, 0x54(r29)
	lfs      f0, 0x88(r1)
	stfs     f0, 0x58(r29)
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	beq      lbl_802076EC
	lfs      f0, lbl_80519D94@sda21(r2)
	stfs     f0, 0x54(r29)

lbl_802076EC:
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	bne      lbl_80207734
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_80519E88@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x54(r29)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x54(r29)
	lwz      r3, 0x74(r29)
	lfs      f0, 4(r29)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_80207734
	stfs     f1, 4(r29)
	li       r0, 0
	stb      r0, 0xac(r29)

lbl_80207734:
	addi     r3, r29, 0x50
	bl       "length__10Vector3<f>CFv"
	lbz      r0, 0xac(r29)
	fmr      f14, f1
	cmplwi   r0, 2
	beq      lbl_80207788
	fcmpo    cr0, f14, f30
	ble      lbl_80207788
	lfs      f0, lbl_80519DA0@sda21(r2)
	lfs      f1, 0x50(r29)
	fdivs    f0, f0, f14
	fmuls    f2, f0, f30
	fmr      f14, f30
	fmuls    f0, f1, f2
	stfs     f0, 0x50(r29)
	lfs      f0, 0x54(r29)
	fmuls    f0, f0, f2
	stfs     f0, 0x54(r29)
	lfs      f0, 0x58(r29)
	fmuls    f0, f0, f2
	stfs     f0, 0x58(r29)

lbl_80207788:
	lbz      r0, 0xae(r29)
	cmplwi   r0, 0
	beq      lbl_802077FC
	lbz      r0, 0xad(r29)
	cmplwi   r0, 0
	bne      lbl_802077EC
	li       r0, 0
	stb      r0, 0xae(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2dc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2d8(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x2d8(r1)
	lfs      f0, lbl_80519E1C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r3, 0x2d4(r1)
	addi     r0, r3, 0x32
	stb      r0, 0xad(r29)

lbl_802077EC:
	lbz      r3, 0xad(r29)
	addi     r0, r3, -1
	stb      r0, 0xad(r29)
	b        lbl_80207908

lbl_802077FC:
	lbz      r3, 0xad(r29)
	cmplwi   r3, 0
	beq      lbl_80207868
	addi     r0, r3, -1
	stb      r0, 0xad(r29)
	lbz      r0, 0xad(r29)
	cmplwi   r0, 0
	bne      lbl_80207868
	li       r0, 1
	stb      r0, 0xae(r29)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2dc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x2d8(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x2d8(r1)
	lfs      f0, lbl_80519DE0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x2d0(r1)
	lwz      r3, 0x2d4(r1)
	addi     r0, r3, 0xa
	stb      r0, 0xad(r29)

lbl_80207868:
	lfs      f1, lbl_80519D94@sda21(r2)
	fmuls    f2, f25, f26
	lfs      f3, lbl_80519D98@sda21(r2)
	fmuls    f0, f24, f26
	fmuls    f1, f1, f26
	mr       r4, r29
	fmuls    f2, f2, f3
	fmuls    f0, f0, f3
	addi     r3, r1, 0x68
	fmuls    f1, f1, f3
	stfs     f2, 0x5c(r1)
	addi     r5, r1, 0x5c
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x68(r1)
	mr       r4, r29
	addi     r3, r1, 0x50
	addi     r5, r1, 0x44
	stfs     f0, 0(r29)
	lfs      f0, 0x6c(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x70(r1)
	stfs     f0, 8(r29)
	lfs      f2, 0x58(r29)
	lfs      f1, 0x54(r29)
	lfs      f0, 0x50(r29)
	fmuls    f2, f2, f26
	fmuls    f1, f1, f26
	fmuls    f0, f0, f26
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x44(r1)
	stfs     f1, 0x48(r1)
	bl       "__pl__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x50(r1)
	stfs     f0, 0(r29)
	lfs      f0, 0x54(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x58(r1)
	stfs     f0, 8(r29)

lbl_80207908:
	lwz      r6, 0x74(r29)
	mr       r5, r29
	addi     r3, r1, 0x38
	addi     r4, r1, 0x1f4
	lfs      f0, 0x6c(r6)
	stfs     f0, 0x1f4(r1)
	lfs      f0, 0x70(r6)
	stfs     f0, 0x1f8(r1)
	lfs      f0, 0x74(r6)
	stfs     f0, 0x1fc(r1)
	lfs      f15, 0x78(r6)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f2, 0x38(r1)
	addi     r3, r1, 0x1e8
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	stfs     f2, 0x1e8(r1)
	stfs     f1, 0x1ec(r1)
	stfs     f0, 0x1f0(r1)
	bl       "normalise__10Vector3<f>Fv"
	fmr      f17, f1
	lfs      f0, lbl_80519D94@sda21(r2)
	fcmpo    cr0, f17, f0
	ble      lbl_80207A3C
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x1e8(r1)
	lfs      f2, 0x1f0(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_80519DA0@sda21(r2)
	fmuls    f16, f15, f0
	fcmpo    cr0, f17, f16
	ble      lbl_80207A3C
	lfs      f4, 0x1ec(r1)
	addi     r3, r1, 0x2c
	lfs      f0, 0x54(r29)
	addi     r4, r29, 0x50
	lfs      f3, 0x1e8(r1)
	addi     r5, r1, 0x20
	fmuls    f0, f4, f0
	lfs      f1, 0x50(r29)
	lfs      f5, 0x1f0(r1)
	lfs      f2, 0x58(r29)
	fmadds   f0, f3, f1, f0
	fmadds   f0, f5, f2, f0
	fmuls    f2, f3, f0
	fmuls    f1, f4, f0
	fmuls    f0, f5, f0
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x2c(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x1f4
	addi     r5, r1, 8
	stfs     f0, 0x50(r29)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x54(r29)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x58(r29)
	lfs      f2, 0x1e8(r1)
	lfs      f1, 0x1ec(r1)
	lfs      f0, 0x1f0(r1)
	fmuls    f2, f2, f16
	fmuls    f1, f1, f16
	fmuls    f0, f0, f16
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "__mi__FRC10Vector3<f>RC10Vector3<f>"
	lfs      f0, 0x14(r1)
	stfs     f0, 0(r29)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r29)

lbl_80207A3C:
	lwz      r3, 0x74(r29)
	lfs      f1, 4(r29)
	lfs      f2, 0x70(r3)
	fcmpo    cr0, f1, f2
	bge      lbl_80207A6C
	stfs     f2, 4(r29)
	lbz      r0, 0xac(r29)
	cmplwi   r0, 2
	bne      lbl_80207A80
	li       r0, 0
	stb      r0, 0xac(r29)
	b        lbl_80207A80

lbl_80207A6C:
	lfs      f0, lbl_80519E64@sda21(r2)
	fmadds   f0, f0, f15, f2
	fcmpo    cr0, f1, f0
	ble      lbl_80207A80
	stfs     f0, 4(r29)

lbl_80207A80:
	fmr      f1, f14
	mr       r3, r29
	bl       updateScale__Q34Game12ItemUjamushi3UjaFf
	mr       r3, r29
	lwz      r12, 0xc(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80207AA0:
	psq_l    f31, 1064(r1), 0, qr0
	lfd      f31, 0x420(r1)
	psq_l    f30, 1048(r1), 0, qr0
	lfd      f30, 0x410(r1)
	psq_l    f29, 1032(r1), 0, qr0
	lfd      f29, 0x400(r1)
	psq_l    f28, 1016(r1), 0, qr0
	lfd      f28, 0x3f0(r1)
	psq_l    f27, 1000(r1), 0, qr0
	lfd      f27, 0x3e0(r1)
	psq_l    f26, 984(r1), 0, qr0
	lfd      f26, 0x3d0(r1)
	psq_l    f25, 968(r1), 0, qr0
	lfd      f25, 0x3c0(r1)
	psq_l    f24, 952(r1), 0, qr0
	lfd      f24, 0x3b0(r1)
	psq_l    f23, 936(r1), 0, qr0
	lfd      f23, 0x3a0(r1)
	psq_l    f22, 920(r1), 0, qr0
	lfd      f22, 0x390(r1)
	psq_l    f21, 904(r1), 0, qr0
	lfd      f21, 0x380(r1)
	psq_l    f20, 888(r1), 0, qr0
	lfd      f20, 0x370(r1)
	psq_l    f19, 872(r1), 0, qr0
	lfd      f19, 0x360(r1)
	psq_l    f18, 856(r1), 0, qr0
	lfd      f18, 0x350(r1)
	psq_l    f17, 840(r1), 0, qr0
	lfd      f17, 0x340(r1)
	psq_l    f16, 824(r1), 0, qr0
	lfd      f16, 0x330(r1)
	psq_l    f15, 808(r1), 0, qr0
	lfd      f15, 0x320(r1)
	psq_l    f14, 792(r1), 0, qr0
	lfd      f14, 0x310(r1)
	lwz      r31, 0x30c(r1)
	lwz      r30, 0x308(r1)
	lwz      r29, 0x304(r1)
	lwz      r0, 0x434(r1)
	lwz      r28, 0x300(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/**
 * @note Address: 0x80207EA4
 * @note Size: 0x130
 */
UjaMgr::UjaMgr(int count)
{
	mMonoObjectMgr.alloc(count);
	mUpdateMgr = new UpdateMgr();
	mUpdateMgr->create(30);
	_9C            = 0;
	_98            = 0;
	_A0            = 0.0f;
	mBoidParameter = nullptr;
	mUjaParms      = nullptr;
}

/**
 * @note Address: 0x802081E4
 * @note Size: 0x50
 */
void UjaMgr::init(UjaMgrInitArg& initArg)
{
	mBoundSphere   = initArg.mSphere;
	mBoidParameter = initArg.mBoidParameter;
	mUjaParms      = initArg.mUjaParms;
	test_createUjas();
	FORCE_DONT_INLINE;
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void UjaMgr::updateBlend(int p1, int p2, f32 p3)
{
	P2ASSERTLINE(901, (p1 >= 0) <= mBoidParameter->mNode.getChildCount());
	P2ASSERTLINE(902, (p2 >= 0) <= mBoidParameter->mNode.getChildCount());
	_98 = p1;
	_9C = p2;
	_A0 = p3;

	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void UjaMgr::appear()
{
	for (int i = 0; i < getMaxObjects(); i++) {
		Uja* uja = static_cast<Uja*>(getFlock(i));
		if (uja->mState == Uja::STATE_InFloor || uja->mState == Uja::STATE_Disappear) {
			uja->mState        = Uja::STATE_Appear;
			uja->mHeightOffset = 0.0f;
			uja->mPitch        = 0.0f;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void UjaMgr::disappear()
{
	for (int i = 0; i < getMaxObjects(); i++) {
		static_cast<Uja*>(getFlock(i))->mState = Uja::STATE_Disappear;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void UjaMgr::mogure()
{
	for (int i = 0; i < getMaxObjects(); i++) {
		static_cast<Uja*>(getFlock(i))->mState = Uja::STATE_FallOffWorld;
	}
}

/**
 * @note Address: 0x80208278
 * @note Size: 0x418
 */
void UjaMgr::test_createUjas()
{
	Uja* uja;
	if (getMaxObjects() == 0) {
		return;
	}

	f32 factor = TAU / (f32)getMaxObjects();

	for (int i = 0; i < getMaxObjects(); i++) {
		uja = mMonoObjectMgr.birth();
		if (uja) {
			randFloat();
			f32 randAngle = TAU * randFloat();
			Vector3f dir  = getDirection(randAngle, 0.0f); // a fancy way of making a zero vector.
			dir += mBoundSphere.mPosition;

			uja->mFlockMgr    = this;
			*((Vector3f*)uja) = dir;

			uja->mVelocity = Vector3f(0.0f);

			uja->mFaceDirection = TAU * randFloat();
			uja->mPitch         = 0.0f;
			uja->_60            = 0.0f;
			uja->makeMatrix();

			uja->mScale = Vector3f(1.0f);

			uja->mMotionAnimationFactor = TAU * randFloat();
			uja->mPreviousAlignmentDir  = Vector3f(0.0f);
			uja->mPreviousMoveDir       = Vector3f(0.0f);
			uja->mPreviousClosestUjaDir = Vector3f(0.0f);

			uja->mHealth = mUjaParms->mLife();

			uja->mHealth += (0.1f * uja->mHealth * randFloat());
			uja->mUpdateContext.init(mUpdateMgr);
			uja->mState = Uja::STATE_Appear;

			uja->_AD           = (int)(100.0f * randFloat()) + 20;
			uja->_B0           = 0;
			uja->_AE           = 0;
			uja->mHeightOffset = 0.0f;

			f32 angle = factor * (f32)i;

			Vector3f newDir = getDirection(angle, 120.0f);
			newDir += mBoundSphere.mPosition;
			uja->_44 = newDir;
		}
	}
}

/**
 * @note Address: 0x80208690
 * @note Size: 0x24
 */
void UjaMgr::do_update_boundSphere() { mActivationSpherePosition = mBoundSphere; }

/**
 * @note Address: 0x802086B4
 * @note Size: 0x29C
 */
void UjaMgr::do_update()
{
	if (!mIsAgentVisible[0] && !mIsAgentVisible[1]) {
		return;
	}

	mBoidParameter->getParms(_98, _9C, _A0, mBoidParms);

	sys->mTimers->_start("ujaAI", true);

	mUpdateMgr->update();

	int ujaCount       = 0; // r31
	int movingUjaCount = 0; // r30

	mFlockCentre     = Vector3f(0.0f);
	mAverageVelocity = Vector3f(0.0f);

	for (int i = 0; i < getMaxObjects(); i++) {
		if (!isFlagAlive(i)) {
			continue;
		}

		Uja* uja = static_cast<Uja*>(getFlock(i));
		ujaCount++;
		mFlockCentre += *uja;

		if (uja->mState != Uja::STATE_2) {
			movingUjaCount++;
			mAverageVelocity += uja->mVelocity;
		}
	}

	if (ujaCount > 0) {
		mFlockCentre *= 1.0f / (f32)ujaCount; // Find middle of the flock
	}

	if (movingUjaCount > 0) {
		mAverageVelocity *= 1.0f / (f32)movingUjaCount; // Find average velocity of the flock
	}

	for (int i = 0; i < getMaxObjects(); i++) {
		if (!isFlagAlive(i)) {
			continue;
		}

		static_cast<Uja*>(getFlock(i))->update(mBoidParms);
	}

	sys->mTimers->_stop("ujaAI");
}

/**
 * @note Address: 0x80208964
 * @note Size: 0x2E4
 */
void UjaMgr::astonishPikmins()
{
	Vector3f activationCentre = mActivationSpherePosition.mPosition;

	Iterator<Piki> iter(pikiMgr);
	InteractAstonish astonish(nullptr, 500.0f);

	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive()) {
			Vector3f pikiPos = piki->getPosition();
			f32 distance     = (pikiPos - activationCentre).length();

			if (distance <= 500.0f) {
				piki->stimulate(astonish);
			}
		}
	}
}

/**
 * @note Address: 0x80208C48
 * @note Size: 0x134
 */
void FSM::init(Item*)
{
	create(UJAMUSHI_StateCount);
	registerState(new WaitState());
	registerState(new ActiveState());
	registerState(new DigState());
}

/**
 * @note Address: N/A
 * @note Size: 0x134
 */
Item::Item()
    : FSMItem<Item, FSM, State>(OBJTYPE_Ujamushi)
{
	mCollTree               = new CollTree;
	mBoundingSphere.mRadius = 90.0f;
	mDummyShape.mMatrix     = &mBaseTrMatrix;
	mCollTree->createSingleSphere(&mDummyShape, 0, mBoundingSphere, nullptr);
	setCollisionFlick(false);
}

/**
 * @note Address: 0x80208D7C
 * @note Size: 0xC8
 */
void Item::onInit(CreatureInitArg* initArg)
{
	InitArg* ujaArg = static_cast<InitArg*>(initArg);
	P2ASSERTLINE(1071, ujaArg);

	int count = ujaArg->mCount;
	mFlockMgr = new UjaMgr(count);

	setCollisionFlick(false);

	mFsm->start(this, UJAMUSHI_Wait, nullptr);
	setAlive(true);
}

/**
 * @note Address: 0x80208E78
 * @note Size: 0xC0
 */
void Item::onSetPosition()
{
	mBaseTrMatrix.makeT(mPosition);
	f32 rad      = mBoundingSphere.mRadius;
	Vector3f pos = mPosition;
	UjaMgrInitArg initArg(pos, rad, &mgr->mBoidParameter, &mgr->mMgrParms);
	mgr->mBoidParameter.getChildCount();
	mFlockMgr->init(initArg);
	mFlockMgr->astonishPikmins();
	_1E0 = 0;
	_1E4 = 0;

	mBoidCount = mgr->mBoidParameter.mNode.getChildCount();
	_1E8       = 0.0f;
	setBoidTimer();
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void Item::changeBoid()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80208F38
 * @note Size: 0x64
 */
void Item::setBoidTimer()
{
	f32 timer   = 0.2f * randFloat() + 0.5f;
	mBoidTimer1 = timer;
	mBoidTimer2 = timer;
}

/**
 * @note Address: 0x80208F9C
 * @note Size: 0x3C
 */
bool Item::ignoreAtari(Creature* creature) { return !creature->isPiki(); }

/**
 * @note Address: 0x80208FD8
 * @note Size: 0x78
 */
void Item::updateBoundSphere()
{
	mCollTree->mPart->mRadius = mBoundingSphere.mRadius;
	mBoundingSphere.mPosition = mPosition;
	if (isCollisionFlick()) {
		JUT_PANICLINE(1137, "ダメック\n"); // 'damek'
	}
}

/**
 * @note Address: 0x80209058
 * @note Size: 0x374
 */
bool Item::interactFlockAttack(InteractFlockAttack& interaction)
{
	interaction.mIsFlockDead = mFlockMgr->attackFlock(interaction.mFlockIdx, interaction.mDamage);

	interaction.mFlockPosition = mFlockMgr->getPosition(interaction.mFlockIdx);

	if (interaction.mIsFlockDead && randFloat() > (1.0f - UJAMUSHI_DROP_CHANCE)) {
		ItemHoney::Item* drop = ItemHoney::mgr->birth();
		if (drop) {
			f32 randAngle = TAU * randFloat();
			f32 randSpeed = 50.0f + 30.0f * randFloat();  // 50-80
			f32 randYVel  = 200.0f + 10.0f * randFloat(); // 200-210

			Vector3f vel(randSpeed * sinf(randAngle), randYVel, randSpeed * cosf(randAngle));

			int dropType = 3.0f * randFloat();

			if (dropType == HONEY_R && !playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
				dropType = HONEY_Y;
			}

			if (dropType == HONEY_B && !playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
				dropType = HONEY_Y;
			}

			drop->init(nullptr);

			drop->mHoneyType = dropType;

			Vector3f dropPos = interaction.mFlockPosition;
			dropPos.y += 10.0f;

			drop->setPosition(dropPos, false);
			drop->setVelocity(vel);
		}
	}

	return true;
}

/**
 * @note Address: 0x802093CC
 * @note Size: 0x2AC
 */
void Item::doAI()
{
	mFsm->exec(this);
	updateCollTree();

	if (_1E8 < 1.0f) {
		mBoidTimer1 -= sys->mDeltaTime;
		if (mBoidTimer1 <= 0.0f) {
			_1E0        = _1E4;
			f32 randVal = 0.5f + 0.2f * randFloat();
			mBoidTimer1 = randVal;
			mBoidTimer2 = randVal;
			_1E8        = 1.0f;
		} else {
			_1E8 = 1.0f - (mBoidTimer1 / mBoidTimer2);
		}
	} else {
		mBoidTimer1 -= sys->mDeltaTime;
		if (mBoidTimer1 <= 0.0f) {
			_1E4        = (f32)mBoidCount * randFloat();
			f32 randVal = 0.5f + 0.2f * randFloat();
			mBoidTimer1 = randVal;
			mBoidTimer2 = randVal;
			_1E8        = 0.0f;
		}
	}

	mFlockMgr->updateBlend(_1E0, _1E4, _1E8);
	mFlockMgr->update();

	if (mFlockMgr->getNumObjects() == 0) {
		setAlive(false);
	}
}

/**
 * @note Address: 0x80209680
 * @note Size: 0x78
 */
void Item::doSimpleDraw(Viewport* vp)
{
	J3DModelData* model  = mgr->getModelData((!mgr->_8E));
	J3DModelData* data[] = { model };
	mFlockMgr->doSimpleDraw(vp, data, 1);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r5, mgr__Q24Game12ItemUjamushi@sda21(r13)
	lbz      r0, 0x8e(r5)
	mr       r3, r5
	cntlzw   r0, r0
	srwi     r4, r0, 5
	bl       getModelData__Q24Game11BaseItemMgrFi
	lwz      r0, lbl_80520E80@sda21(r2)
	mr       r4, r31
	addi     r5, r1, 8
	li       r6, 1
	stw      r0, 8(r1)
	stw      r3, 8(r1)
	lwz      r3, 0x200(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x802096F8
 * @note Size: 0x310
 */
Mgr::Mgr()
{
	mItemName            = "Ujamushi";
	mObjectPathComponent = "user/Kando/objects/ujamushi";
	setModelSize(2);
	loadArchive("arc.szs");
	loadBmd("ujamushi_poly.bmd", 0, 0x20000);
	loadBmd("ujamushi_bill.bmd", 1, 0x20020000);
	_308                   = 0;
	_304                   = 0;
	_30C                   = 0.0f;
	J3DModelData* polyData = getModelData(0);
	polyData->newSharedDisplayList(0x40000);
	polyData->simpleCalcMaterial(0, *(Mtx*)&j3dDefaultMtx);
	polyData->makeSharedDL();

	J3DModelData* billData = getModelData(1);
	billData->newSharedDisplayList(0x40000);
	billData->simpleCalcMaterial(0, *(Mtx*)&j3dDefaultMtx);
	billData->makeSharedDL();

	_88 = 72.0f;
	_8C = 1;
	_8D = 1;
	_8E = 1;

	_90 = 1.0f;
	_94 = 0.0f;
	_98 = 0.5f;

	JKRArchive* textArc = openTextArc("texts.szs");
	void* resource      = textArc->getResource("parms.txt");
	P2ASSERTLINE(1271, resource);
	RamStream input(resource, -1);
	input.setMode(STREAM_MODE_TEXT, 1);
	mBoidParameter.read(input);

	closeTextArc(textArc);
}

/**
 * @note Address: 0x80209BA8
 * @note Size: 0x200
 */
void Mgr::doSimpleDraw(Viewport* vp)
{
	Iterator<Item> iter(this);
	CI_LOOP(iter) { (*iter)->doSimpleDraw(vp); }
}

/**
 * @note Address: 0x80209DF4
 * @note Size: 0x4
 */
void Mgr::onLoadResources() { }

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
Item* Mgr::birth()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80209DF8
 * @note Size: 0xC
 */
char* Mgr::getCaveName(int) { return "ujamushi"; }

/**
 * @note Address: 0x80209E04
 * @note Size: 0x54
 */
int Mgr::getCaveID(char* name)
{
	if (strncmp("ujamushi", name, strlen("ujamushi")) != 0) {
		return -1;
	}

	return 0;
}

/**
 * @note Address: 0x80209E58
 * @note Size: 0x94
 */
void WaitState::init(Item* item, StateArg* stateArg)
{
	item->mFlockMgr->disappear();
	mTimer = 10.0f;
}

/**
 * @note Address: 0x80209EEC
 * @note Size: 0x58
 */
void WaitState::exec(Item* item)
{
	mTimer -= sys->mDeltaTime;
	if (mTimer < 0.0f) {
		transit(item, UJAMUSHI_Active, nullptr);
	}
}

/**
 * @note Address: 0x80209F74
 * @note Size: 0x4
 */
void WaitState::cleanup(Item*) { }

/**
 * @note Address: 0x80209F78
 * @note Size: 0xC4
 */
void ActiveState::init(Item* item, StateArg* stateArg)
{
	item->mFlockMgr->appear();
	mTimer = 20.0f;
}

/**
 * @note Address: 0x8020A03C
 * @note Size: 0x4
 */
void ActiveState::exec(Item*) { }

/**
 * @note Address: 0x8020A040
 * @note Size: 0x4
 */
void ActiveState::cleanup(Item*) { }

/**
 * @note Address: 0x8020A044
 * @note Size: 0x94
 */
void DigState::init(Item* item, StateArg* stateArg)
{
	item->mFlockMgr->mogure();
	mTimer = 10.0f;
}

/**
 * @note Address: 0x8020A0D8
 * @note Size: 0x58
 */
void DigState::exec(Item* item)
{
	mTimer -= sys->mDeltaTime;
	if (mTimer < 0.0f) {
		transit(item, UJAMUSHI_Wait, nullptr);
	}
}

/**
 * @note Address: 0x8020A130
 * @note Size: 0x4
 */
void DigState::cleanup(Item*) { }

/**
 * @note Address: 0x8020A134
 * @note Size: 0x4C
 */
GenItemParm* Mgr::generatorNewItemParm() { return new GenUjamushiParm(); }

/**
 * @note Address: 0x8020A180
 * @note Size: 0x88
 */
void Mgr::generatorWrite(Stream& output, GenItemParm* genParm)
{
	GenUjamushiParm* ujaParm = static_cast<GenUjamushiParm*>(genParm);
	P2ASSERTLINE(1514, ujaParm);

	output.textWriteTab(output.mTabCount);
	output.writeShort(ujaParm->mCount);
	output.textWriteText("\t#うじゃ王数\r\n"); // 'ujaoh number'
}

/**
 * @note Address: 0x8020A208
 * @note Size: 0x64
 */
void Mgr::generatorRead(Stream& input, GenItemParm* genParm, u32 version)
{
	GenUjamushiParm* ujaParm = static_cast<GenUjamushiParm*>(genParm);
	P2ASSERTLINE(1524, ujaParm);

	ujaParm->mCount = input.readShort();
}

/**
 * @note Address: 0x8020A26C
 * @note Size: 0x1CC
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	GenUjamushiParm* ujaParm = static_cast<GenUjamushiParm*>(genParm);
	P2ASSERTLINE(1531, ujaParm);
	Item* item = new Item;

	entry(item);

	InitArg initArg(ujaParm->mCount);
	item->init(&initArg);
	item->setPosition(pos, false);
	return item;
}

} // namespace ItemUjamushi
} // namespace Game
