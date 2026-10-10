#include "Game/Entities/ItemUjamushi.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"
#include "JSystem/J3D/J3DTransform.h"
#include "nans.h"

#define UJAMUSHI_DROP_THRESHOLD (0.4f)

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
    , mDisplayScale(this, 'u001', "表示スケール", 0.3f, 0.1f, 1.0f)     // 'display scale'
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

	f32 speed;
	f32 frameLength = sys->getDeltaTime();
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
	speed     = parms.mMaxSpeed();

	Vector3f moveDir(0.0f); // 0x2f4, 0x2f0

	sys->mTimers->_start("AI PIKI", true);
	updateBuffer();
	sys->mTimers->_stop("AI PIKI");

	Vector3f separationVec; // 0x2B4
	separationVec = mFlockMgr->mFlockCentre - *this;
	separationVec.normalise();

	// To avoid collisions, we have an arbitrary size (representing the Uja) to keep away from other Uja
	// While calculating the alignment vector.
	f32 alignmentThreshold = 1280.0f;

	// AI Alignment
	sys->mTimers->_start("AI ALN", true);

	Vector3f alignmentVec; // f22, f21, f20
	if (!mUpdateContext.updatable()) {
		alignmentVec  = mPreviousAlignmentDir;
		separationVec = mPreviousMoveDir;
	} else {
		alignmentThreshold = scale + scale; // f28

		int visibleUjaCount = 0; // r28
		alignmentVec        = Vector3f(0.0f);
		separationVec       = Vector3f(0.0f);

		f32 distanceThreshold = scale + parms.mDistance(); // f14

		Iterator<Uja> flockList(mFlockMgr);

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
					separationVec += *i;

					Vector3f newVec = i->mVelocity;
					newVec.normalise();

					visibleUjaCount++;
					alignmentVec += i->mVelocity;
				}

				if (dist < alignmentThreshold) {
					alignmentThreshold = dist;
					f32 doubleScale    = 2.0f * scale;
					avoidanceVector    = Vector2f(directionFromUjaToThis.x, directionFromUjaToThis.z) * (doubleScale - dist);
				}
			}
		}

		// If we could see any other Uja, we cache the move direction
		if (visibleUjaCount > 0) {
			f32 norm = 1.0f / (f32)visibleUjaCount;
			alignmentVec *= norm;
			mPreviousAlignmentDir = alignmentVec;

			separationVec *= norm;
			separationVec = separationVec - *this;
			separationVec.normalise();

			mPreviousMoveDir = separationVec;
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

	Vector3f centre = mFlockMgr->mBoundSphere.mPosition;
	Vector3f result = 0.0f;
	f32 radius      = mFlockMgr->mBoundSphere.mRadius;
	Vector3f pos    = centre - *this;
	f32 diff        = pos.normalise();
	if (diff > 0.0f) {
		f32 angle = JMAAtan2Radian(pos.x, pos.z);
		if (diff > radius * (0.2f * sinf(8.0f * angle) + 0.8f)) {
			result = pos;
		}
	}

	f32 randRange = TORADIANS(parms.mRandomAngle());
	f32 randAngle = randRange * (randFloat() - 0.5f) + mFaceDirection;
	f32 randCos   = cosf(randAngle);
	f32 randSin   = sinf(randAngle);

	Vector3f naviResult = Vector3f(0.0f);
	Iterator<Navi> naviIt(naviMgr);
	naviIt.first();
	scale = 6.0f + (6.0f + scale);
	for (; !naviIt.isDone(); naviIt.next()) {
		Navi* navi = *naviIt;
		if (navi->isAlive()) {
			Vector3f posDiff = navi->getPosition() - *this;
			f32 dist         = posDiff.normalise();
			if (dist < scale) {
				if (dist < alignmentThreshold) {
					alignmentThreshold = dist;
					avoidanceVector    = Vector2f(posDiff.x, posDiff.z) * (-1.0f * (scale - dist));
				}
			} else if (!(dist > 40.0f)) {
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
		if (dist < scale) {
			if (dist < alignmentThreshold) {
				alignmentThreshold = dist;
				avoidanceVector    = Vector2f(posDiff.x, posDiff.z) * (-1.0f * (scale - dist));
			}
		} else if (!(dist > 40.0f)) {
			pikiResult = posDiff;
			if (mState == 0 && dist < 30.0f) {
				mState = 2;
				f32 xz = randFloat() * 10.0f + 60.0f;
				Vector3f offs(pikiResult.x * xz, randFloat() * 10.0f + 72.0f, pikiResult.z * xz);
				mVelocity = mVelocity + offs;
				if (randFloat() > 0.99f) {
					InteractGas act(nullptr, 0.0f);
					mClosePikiBuffer[0]->stimulate(act);
				}
			}
		}
	}

	Vector3f randomDirection(randSin, 0.0f, randCos);
	if (mState != 2) {
		moveDir = separationVec * (speed * parms.mCohesion()) + alignmentVec * parms.mAlignment()
		        + closestUjaDirection * (speed * parms.mSeparation()) + result * (speed * parms.mBounds())
		        + pikiResult * (speed * parms.mPiki()) + center * (speed * parms.mGoHome()) + naviResult * (speed * parms.mNavi())
		        + randomDirection * (speed * parms.mRandom()) + directionTo_44 * (speed * parms.mTarget());
	}

	if (moveDir.z != 0.0f) {
		f32 angle = JMAAtan2Radian(moveDir.x, moveDir.z);
		f32 turn  = angDist(roundAng(angle), mFaceDirection) * 8.0f;
		mFaceDirection += turn * frameLength;
		mFaceDirection = roundAng(mFaceDirection);
	}
	Vector3f faceDir = Vector3f(sinf(mFaceDirection), 0.0f, cosf(mFaceDirection));
	f32 projection   = faceDir.dot(moveDir);
	Vector3f accel   = faceDir * projection;
	mVelocity        = mVelocity + accel * mFlockMgr->mUjaParms->mMysteryMultiply();

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
	if (mState != 2 && vel > speed) {
		mVelocity *= (1.0f / vel) * speed;
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
		Vector3f avoidance(avoidanceVector.x, 0.0f, avoidanceVector.y);
		static_cast<Vector3f&>(*this) = *this + avoidance * frameLength * 10.0f;

		static_cast<Vector3f&>(*this) = *this + mVelocity * frameLength;
	}

	Vector3f boundPos  = mFlockMgr->mBoundSphere.mPosition;
	f32 radius2        = mFlockMgr->mBoundSphere.mRadius;
	Vector3f boundDiff = boundPos - *this;
	f32 boundDist      = boundDiff.normalise();
	if (boundDist > 0.0f) {
		f32 angle = JMAAtan2Radian(boundDiff.x, boundDiff.z);
		// This boundary keeps the angular modulation disabled.
		f32 boundaryRadius = radius2 * (0.0f * sinf(angle) + 1.0f);
		if (boundDist > boundaryRadius) {
			f32 projection = boundDiff.dot(mVelocity);
			mVelocity      = mVelocity - boundDiff * projection;

			static_cast<Vector3f&>(*this) = boundPos - (boundDiff * boundaryRadius);
		}
	}

	f32 minY = mFlockMgr->mBoundSphere.mPosition.y;
	if (this->y < minY) {
		this->y = minY;
		if (mState == 2) {
			mState = 0;
		}
	} else {
		f32 maxY = minY + radius2 * 2.0f;
		if (this->y > maxY) {
			this->y = maxY;
		}
	}

	updateScale(vel);
	makeMatrix();

	FORCE_DONT_INLINE;
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
void UjaMgr::do_update_boundSphere()
{
	mActivationSpherePosition = mBoundSphere;
}

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
bool Item::ignoreAtari(Creature* creature)
{
	return !creature->isPiki();
}

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

	if (interaction.mIsFlockDead && randFloat() > UJAMUSHI_DROP_THRESHOLD) {
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
	FSMItem::doAI();
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
	J3DModelData* model  = mgr->getModelData(mgr->_8E ? 0 : 1);
	J3DModelData* data[] = { model };
	mFlockMgr->doSimpleDraw(vp, data, 1);
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
	loadBmd("ujamushi_poly.bmd", 0, J3DMODEL_CreateNewDL);
	loadBmd("ujamushi_bill.bmd", 1, J3DMODEL_Unk30 | J3DMODEL_CreateNewDL);
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

	_88 = 0.35f;
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
	CI_LOOP(iter)
	{
		(*iter)->doSimpleDraw(vp);
	}
}

/**
 * @note Address: 0x80209DF4
 * @note Size: 0x4
 */
void Mgr::onLoadResources()
{
}

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
char* Mgr::getCaveName(int)
{
	return "ujamushi";
}

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
void WaitState::cleanup(Item*)
{
}

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
void ActiveState::exec(Item*)
{
}

/**
 * @note Address: 0x8020A040
 * @note Size: 0x4
 */
void ActiveState::cleanup(Item*)
{
}

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
void DigState::cleanup(Item*)
{
}

/**
 * @note Address: 0x8020A134
 * @note Size: 0x4C
 */
GenItemParm* Mgr::generatorNewItemParm()
{
	return new GenUjamushiParm();
}

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
