#include "Game/Entities/ItemUjamushi.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "JSystem/J3D/J3DTransform.h"
#include "nans.h"

#define UJAMUSHI_DROP_CHANCE (0.6f)

namespace Game {
namespace ItemUjamushi {

static const int unusedArray[]         = { 0, 0, 0 };
static const char unusedUjamushiName[] = "itemUjamushi";

Mgr* mgr;

/*
 * --INFO--
 * Address:	80205A28
 * Size:	0003D4
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

/*
 * --INFO--
 * Address:	80205DFC
 * Size:	000138
 */
void BoidParms::blendTo(BoidParms& blendParms, BoidParms& outParms, f32 blendFactor)
{
	f32 comp                      = 1.0f - blendFactor;
	outParms.mCohesion()          = comp * mCohesion() + blendFactor * blendParms.mCohesion();
	outParms.mAlignment()         = comp * mAlignment() + blendFactor * blendParms.mAlignment();
	outParms.mSeparation()        = comp * mSeparation() + blendFactor * blendParms.mSeparation();
	outParms.mBounds()            = comp * mBounds() + blendFactor * blendParms.mBounds();
	outParms.mTarget()            = comp * mTarget() + blendFactor * blendParms.mTarget();
	outParms.mRandom()            = comp * mRandom() + blendFactor * blendParms.mRandom();
	outParms.mGoHome()            = comp * mGoHome() + blendFactor * blendParms.mGoHome();
	outParms.mPiki()              = comp * mPiki() + blendFactor * blendParms.mPiki();
	outParms.mNavi()              = comp * mNavi() + blendFactor * blendParms.mNavi();
	outParms.mCollision()         = comp * mCollision() + blendFactor * blendParms.mCollision();
	outParms.mMaxSpeed()          = comp * mMaxSpeed() + blendFactor * blendParms.mMaxSpeed();
	outParms.mFov()               = comp * mFov() + blendFactor * blendParms.mFov();
	outParms.mDistance()          = comp * mDistance() + blendFactor * blendParms.mDistance();
	outParms.mRotationPerSecond() = comp * mRotationPerSecond() + blendFactor * blendParms.mRotationPerSecond();
	outParms.mRandomAngle()       = comp * mRandomAngle() + blendFactor * blendParms.mRandomAngle();
}

/*
 * --INFO--
 * Address:	80205F34
 * Size:	00004C
 */
BoidParameter::BoidParameter()
    : CNode()
    , mNode()
{
	newParms();
}

/*
 * --INFO--
 * Address:	80206028
 * Size:	0000C0
 */
void BoidParameter::getParms(int blendIdx1, int blendIdx2, f32 blendFactor, BoidParms& outParms)
{
	TNode* blendNode1 = static_cast<TNode*>(mNode.getChildAt(blendIdx1));
	TNode* blendNode2 = static_cast<TNode*>(mNode.getChildAt(blendIdx2));
	bool check        = false;
	if (blendNode1 && blendNode2) {
		check = true;
	}

	P2ASSERTLINE(143, check);

	blendNode1->mParms.blendTo(blendNode2->mParms, outParms, blendFactor);
}

/*
 * --INFO--
 * Address:	802060E8
 * Size:	000048
 */
void BoidParameter::newParms()
{
	TNode* node = new TNode();
	mNode.add(node);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void BoidParameter::write(Stream& output)
{
	output.textWriteText("\t# num parms\r\n");
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80206130
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
UjaParms::UjaParms()
    : Parameters(nullptr, "UjaParms")
    , mDisplayScale(this, 'u001', "表\示スケール", 0.3f, 0.1f, 1.0f)    // 'display scale'
    , mMysteryMultiply(this, 'u002', "謎 Multiply", 1.0f, 0.0f, 200.0f) // 'mystery multiply' (lmao)
    , mLife(this, 'u003', "ライフ", 0.0f, 0.0f, 600.0f)                 // 'life'
    , mMotionSpeed(this, 'u004', "モーション速度", 0.5f, 0.0f, 10.0f)   // 'motion speed'
{
}

/*
 * --INFO--
 * Address:	802061D8
 * Size:	0000A8
 */
Uja::Uja()
    : TFlock()
    , mUpdateContext()
{
	(Vector3f)(*this) = Vector3f(0.0f);
	_50               = 0.0f;
	mFlockMgr         = nullptr;
	mBufferSlotCount  = 4;
	mPikiBuffer       = new Piki*[mBufferSlotCount];
	mPikiDistBuffer   = new f32[mBufferSlotCount];
	clearBuffer();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void Uja::init(Mgr* mgr, Vector3f& pos)
{
	// this is wrong but it's a placeholder for floats
	_70 = TAU * randFloat();
	_84 = Vector3f(0.0f);
	_90 = Vector3f(0.0f);
	_9C = Vector3f(0.0f);

	_AC = 0;

	_AD = (int)(100.0f * randFloat()) + 20;
	_B0 = 0;
	_AE = 0;
	_B4 = 0.0f;
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80206280
 * Size:	000028
 */
bool Uja::damaged(f32 damage)
{
	_A8 -= damage;
	return _A8 <= 0.0f;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Uja::setPosition(Vector3f& pos)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802062A8
 * Size:	00003C
 */
void Uja::clearBuffer()
{
	for (int i = 0; i < mBufferSlotCount; i++) {
		mPikiBuffer[i]     = nullptr;
		mPikiDistBuffer[i] = 12800.0f;
	}
}

/*
 * --INFO--
 * Address:	802062E4
 * Size:	000318
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
						Piki* bufferPiki = mPikiBuffer[i];
						if (!bufferPiki || !bufferPiki->isAlive() || mPikiDistBuffer[i] > dist) {
							mPikiBuffer[i]     = piki;
							mPikiDistBuffer[i] = dist;
						}
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802065FC
 * Size:	0000AC
 */
void Uja::makeMatrix()
{
	Vector3f rot(_B8, _5C, 0.0f);
	Vector3f scale = _64;
	scale *= mFlockMgr->mUjaParms->mDisplayScale();
	Vector3f translation = (Vector3f)(*this);
	translation.y += _B4;
	_10.makeSRT(scale, rot, translation);
}

/*
 * --INFO--
 * Address:	802066A8
 * Size:	00015C
 */
void Uja::updateScale(f32 scale)
{
	f32 factor = 4.0f * (PI * (scale / 20.0f));
	_70 += (sys->mDeltaTime * factor) * mFlockMgr->mUjaParms->mMotionSpeed();

	if (_70 > TAU) {
		_70 -= TAU;
	}

	_64.x = 0.14f * sinf(_70) + 1.0f;
	_64.z = 0.14f * cosf(_70) + 1.0f;
	_64.y = 0.14f * cosf(_70) + 1.0f;
}

/*
 * --INFO--
 * Address:	80206804
 * Size:	00134C
 */
void Uja::update(BoidParms& parms)
{
	if (_AC == 6) {
		return;
	}

	f32 frameLength = sys->mDeltaTime;
	if (_AC == 4) {
		if (_B8 < HALF_PI) {
			_B8 += 4.0f * (HALF_PI * frameLength);
		} else {
			_B4 -= 10.0f * frameLength;
		}

		makeMatrix();
		updateScale(100.0f);

		if (_B4 < -15.0f) {
			_B4 = -15.0f;
			_AC = 6;
			return;
		} else {
			return;
		}
		return;
	}

	Vector2f unkVec(0.0f); // f24, f25 (f23?)

	f32 scale = 10.0f * mFlockMgr->mUjaParms->mDisplayScale(); // f29
	f32 speed = parms.mMaxSpeed();                             // f30

	f32 unk1 = 0.0f; // 0x2f4
	f32 unk2 = 0.0f; // 0x2f0

	sys->mTimers->_start("AI PIKI", true);
	updateBuffer();
	sys->mTimers->_stop("AI PIKI");

	Vector3f sep; // 0x2B4
	sep = mFlockMgr->_7C - *this;
	sep.normalise();

	f32 scale2 = 1280.0f;

	sys->mTimers->_start("AI ALN", true);

	Vector3f vec; // f22, f21, f20
	if (!mUpdateContext.updatable()) {
		vec = _84;
		sep = _90;
	} else {
		scale2      = scale + scale; // f28
		int counter = 0;             // r28
		vec         = Vector3f(0.0f);
		sep         = Vector3f(0.0f);

		f32 val2 = scale + parms.mDistance(); // f14
		Iterator<Uja> iter(mFlockMgr);

		f32 val3 = 2.0f * scale; // f15

		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;       // 0x298
				f32 dist        = ujaSep.normalise(); // f16
				f32 fov         = parms.mFov();       // f17
				if (dist < val2) {
					if (dist > 0.0f) {
						f32 angleDist = angDist(roundAng(JMAAtan2Radian(ujaSep.x, ujaSep.z)), _5C);
						if (absF(angleDist) > TORADIANS(fov)) {
							continue;
						}
					}
					sep += *uja;

					Vector3f newVec = _50;
					newVec.normalise();

					counter++;
					vec += uja->_50;
				}

				if (dist < scale2) {
					scale2 = dist;
					unkVec = Vector2f(ujaSep.x, ujaSep.z) * (val3 - dist);
				}
			}
		}

		if (counter > 0) {
			f32 norm = 1.0f / (f32)counter;
			_84      = vec * norm;
			sep *= norm;

			sep -= *this;
			sep.normalise();
			_90 = sep;
		}
	}

	sys->mTimers->_stop("AI ALN");

	Vector3f sep2(0.0f); // 0x280
	sep2 = _44 - *this;

	sep2.normalise();

	Vector3f unkVec2(0.0f); // f31, f19, f18

	if (mUpdateContext.updatable()) {
		f32 minDist = 2.0f * scale; // f14
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja; // 0x264
				f32 dist        = ujaSep.normalise();

				if (dist < minDist) {
					minDist = dist;
					unkVec2 = ujaSep;
					_9C     = ujaSep;
				}
			}
		}
	} else {
		unkVec2 = _9C;
	}

	// EVERYTHING PAST HERE IS FAKE
	// remove these later, these are just to force inline off for stuff to make it easier to match this shit

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				*this - *uja;
				f32 dist = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}

	{
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter)
		{
			Uja* uja = *iter;
			if (uja != this && uja->_AC != 2) {
				Vector3f ujaSep = *this - *uja;
				f32 dist        = ujaSep.normalise();
			}
		}
	}
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

/*
 * --INFO--
 * Address:	80207EA4
 * Size:	000130
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

/*
 * --INFO--
 * Address:	802081E4
 * Size:	000050
 */
void UjaMgr::init(UjaMgrInitArg& initArg)
{
	mBoundSphere   = initArg.mSphere;
	mBoidParameter = initArg.mBoidParameter;
	mUjaParms      = initArg.mUjaParms;
	test_createUjas();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void UjaMgr::appear()
{
	for (int i = 0; i < getMaxObjects(); i++) {
		Uja* uja = static_cast<Uja*>(getFlock(i));
		if (uja->_AC == 6 || uja->_AC == 3) {
			uja->_AC = 0;
			uja->_B4 = 0.0f;
			uja->_B8 = 0.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void UjaMgr::disappear()
{
	for (int i = 0; i < getMaxObjects(); i++) {
		static_cast<Uja*>(getFlock(i))->_AC = 3;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void UjaMgr::mogure()
{
	for (int i = 0; i < getMaxObjects(); i++) {
		static_cast<Uja*>(getFlock(i))->_AC = 4;
	}
}

/*
 * --INFO--
 * Address:	80208278
 * Size:	000418
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

			uja->_50 = Vector3f(0.0f);

			uja->_5C = TAU * randFloat();
			uja->_B8 = 0.0f;
			uja->_60 = 0.0f;
			uja->makeMatrix();

			uja->_64 = Vector3f(1.0f);

			uja->_70 = TAU * randFloat();
			uja->_84 = Vector3f(0.0f);
			uja->_90 = Vector3f(0.0f);
			uja->_9C = Vector3f(0.0f);

			uja->_A8 = mUjaParms->mLife();

			uja->_A8 += (0.1f * uja->_A8 * randFloat());
			uja->mUpdateContext.init(mUpdateMgr);
			uja->_AC = 0;

			uja->_AD = (int)(100.0f * randFloat()) + 20;
			uja->_B0 = 0;
			uja->_AE = 0;
			uja->_B4 = 0.0f;

			f32 angle = factor * (f32)i;

			Vector3f newDir = getDirection(angle, 120.0f);
			newDir += mBoundSphere.mPosition;
			uja->_44 = newDir;
		}
	}
}

/*
 * --INFO--
 * Address:	80208690
 * Size:	000024
 */
void UjaMgr::do_update_boundSphere() { _0C = mBoundSphere; }

/*
 * --INFO--
 * Address:	802086B4
 * Size:	00029C
 */
void UjaMgr::do_update()
{
	if (!mIsAgentVisible[0] && !mIsAgentVisible[1]) {
		return;
	}

	mBoidParameter->getParms(_98, _9C, _A0, mBoidParms);

	sys->mTimers->_start("ujaAI", true);

	mUpdateMgr->update();

	int counter1 = 0; // r31
	int counter2 = 0; // r30

	_7C = Vector3f(0.0f);
	_88 = Vector3f(0.0f);

	for (int i = 0; i < getMaxObjects(); i++) {
		if (!isFlagAlive(i)) {
			continue;
		}

		Uja* uja = static_cast<Uja*>(getFlock(i));
		counter1++;
		_7C += *uja;

		if (uja->_AC != 2) {
			counter2++;
			_88 += uja->_50;
		}
	}

	if (counter1 > 0) {
		_7C *= 1.0f / (f32)counter1;
	}

	if (counter2 > 0) {
		_88 *= 1.0f / (f32)counter2;
	}

	for (int i = 0; i < getMaxObjects(); i++) {
		if (!isFlagAlive(i)) {
			continue;
		}

		static_cast<Uja*>(getFlock(i))->update(mBoidParms);
	}

	sys->mTimers->_stop("ujaAI");
}

/*
 * --INFO--
 * Address:	80208964
 * Size:	0002E4
 */
void UjaMgr::astonishPikmins()
{
	Vector3f pos = _0C.mPosition;
	Iterator<Piki> iter(pikiMgr);
	InteractAstonish astonish(nullptr, 500.0f);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		if (piki->isAlive()) {
			Vector3f pikiPos = piki->getPosition();
			Vector3f sep     = pikiPos - pos;
			if (sep.length() <= 500.0f) {
				piki->stimulate(astonish);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80208C48
 * Size:	000134
 */
void FSM::init(Item*)
{
	create(UJAMUSHI_StateCount);
	registerState(new WaitState());
	registerState(new ActiveState());
	registerState(new DigState());
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
Item::Item()
    : FSMItem<Item, FSM, State>(OBJTYPE_Ujamushi)
{
	mCollTree               = new CollTree; // why
	mBoundingSphere.mRadius = 90.0f;
	mDummyShape.mMatrix     = &mBaseTrMatrix;
	mCollTree->createSingleSphere(&mDummyShape, 0, mBoundingSphere, nullptr);
	setCollisionFlick(false);
}

/*
 * --INFO--
 * Address:	80208D7C
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	80208E78
 * Size:	0000C0
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

	_1EC = mgr->mBoidParameter.mNode.getChildCount();
	_1E8 = 0.0f;
	setBoidTimer();
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Item::changeBoid()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208F38
 * Size:	000064
 */
void Item::setBoidTimer()
{
	f32 timer = 0.2f * randFloat() + 0.5f;
	_1F0      = timer;
	_1F4      = timer;
}

/*
 * --INFO--
 * Address:	80208F9C
 * Size:	00003C
 */
bool Item::ignoreAtari(Creature* creature) { return !creature->isPiki(); }

/*
 * --INFO--
 * Address:	80208FD8
 * Size:	000078
 */
void Item::updateBoundSphere()
{
	mCollTree->mPart->mRadius = mBoundingSphere.mRadius;
	mBoundingSphere.mPosition = mPosition;
	if (isCollisionFlick()) {
		JUT_PANICLINE(1137, "ダメック\n"); // 'damek'
	}
}

/*
 * --INFO--
 * Address:	80209058
 * Size:	000374
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

/*
 * --INFO--
 * Address:	802093CC
 * Size:	0002AC
 */
void Item::doAI()
{
	mFsm->exec(this);
	updateCollTree();

	if (_1E8 < 1.0f) {
		_1F0 -= sys->mDeltaTime;
		if (_1F0 <= 0.0f) {
			_1E0        = _1E4;
			f32 randVal = 0.5f + 0.2f * randFloat();
			_1F0        = randVal;
			_1F4        = randVal;
			_1E8        = 1.0f;
		} else {
			_1E8 = 1.0f - (_1F0 / _1F4);
		}
	} else {
		_1F0 -= sys->mDeltaTime;
		if (_1F0 <= 0.0f) {
			_1E4        = (f32)_1EC * randFloat();
			f32 randVal = 0.5f + 0.2f * randFloat();
			_1F0        = randVal;
			_1F4        = randVal;
			_1E8        = 0.0f;
		}
	}

	mFlockMgr->updateBlend(_1E0, _1E4, _1E8);
	mFlockMgr->update();

	if (mFlockMgr->getNumObjects() == 0) {
		setAlive(false);
	}
}

/*
 * --INFO--
 * Address:	80209680
 * Size:	000078
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

/*
 * --INFO--
 * Address:	802096F8
 * Size:	000310
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
	polyData->simpleCalcMaterial(0, j3dDefaultMtx);
	polyData->makeSharedDL();

	J3DModelData* billData = getModelData(1);
	billData->newSharedDisplayList(0x40000);
	billData->simpleCalcMaterial(0, j3dDefaultMtx);
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
	input.resetPosition(true, 1);
	mBoidParameter.read(input);

	closeTextArc(textArc);
}

/*
 * --INFO--
 * Address:	80209BA8
 * Size:	000200
 */
void Mgr::doSimpleDraw(Viewport* vp)
{
	Iterator<Item> iter(this);
	CI_LOOP(iter) { (*iter)->doSimpleDraw(vp); }
}

/*
 * --INFO--
 * Address:	80209DF4
 * Size:	000004
 */
void Mgr::onLoadResources() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
Item* Mgr::birth()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80209DF8
 * Size:	00000C
 */
char* Mgr::getCaveName(int) { return "ujamushi"; }

/*
 * --INFO--
 * Address:	80209E04
 * Size:	000054
 */
int Mgr::getCaveID(char* name)
{
	return (bool)(strncmp("ujamushi", name, strlen("ujamushi")));
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_80481EB0@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, lbl_80481EB0@l
	stw      r31, 0xc(r1)
	mr       r31, r4
	bl       strlen
	lis      r4, lbl_80481EB0@ha
	mr       r5, r3
	addi     r3, r4, lbl_80481EB0@l
	mr       r4, r31
	bl       strncmp
	neg      r0, r3
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209E58
 * Size:	000094
 */
void WaitState::init(Item* item, StateArg* stateArg)
{
	item->mFlockMgr->disappear();
	mTimer = 10.0f;
}

/*
 * --INFO--
 * Address:	80209EEC
 * Size:	000058
 */
void WaitState::exec(Item* item)
{
	mTimer -= sys->mDeltaTime;
	if (mTimer < 0.0f) {
		transit(item, UJAMUSHI_Active, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80209F74
 * Size:	000004
 */
void WaitState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	80209F78
 * Size:	0000C4
 */
void ActiveState::init(Item* item, StateArg* stateArg)
{
	item->mFlockMgr->appear();
	mTimer = 20.0f;
}

/*
 * --INFO--
 * Address:	8020A03C
 * Size:	000004
 */
void ActiveState::exec(Item*) { }

/*
 * --INFO--
 * Address:	8020A040
 * Size:	000004
 */
void ActiveState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	8020A044
 * Size:	000094
 */
void DigState::init(Item* item, StateArg* stateArg)
{
	item->mFlockMgr->mogure();
	mTimer = 10.0f;
}

/*
 * --INFO--
 * Address:	8020A0D8
 * Size:	000058
 */
void DigState::exec(Item* item)
{
	mTimer -= sys->mDeltaTime;
	if (mTimer < 0.0f) {
		transit(item, UJAMUSHI_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8020A130
 * Size:	000004
 */
void DigState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	8020A134
 * Size:	00004C
 */
GenItemParm* Mgr::generatorNewItemParm() { return new GenUjamushiParm(); }

/*
 * --INFO--
 * Address:	8020A180
 * Size:	000088
 */
void Mgr::generatorWrite(Stream& output, GenItemParm* genParm)
{
	GenUjamushiParm* ujaParm = static_cast<GenUjamushiParm*>(genParm);
	P2ASSERTLINE(1514, ujaParm);

	output.textWriteTab(output.mTabCount);
	output.writeShort(ujaParm->mCount);
	output.textWriteText("\t#うじゃ王数\r\n"); // 'ujaoh number'
}

/*
 * --INFO--
 * Address:	8020A208
 * Size:	000064
 */
void Mgr::generatorRead(Stream& input, GenItemParm* genParm, u32 version)
{
	GenUjamushiParm* ujaParm = static_cast<GenUjamushiParm*>(genParm);
	P2ASSERTLINE(1524, ujaParm);

	ujaParm->mCount = input.readShort();
}

/*
 * --INFO--
 * Address:	8020A26C
 * Size:	0001CC
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
