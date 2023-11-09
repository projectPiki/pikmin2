#include "Game/Entities/ItemUjamushi.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"
#include "JSystem/J3D/J3DTransform.h"
#include "nans.h"

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

#pragma dont_inline on
/*
 * --INFO--
 * Address:	80205DFC
 * Size:	000138
 */
void BoidParms::blendTo(BoidParms& blendParms, BoidParms& outParms, f32 blendFactor)
{
	f32 comp                           = 1.0f - blendFactor;
	outParms.mCohesion.mValue          = comp * mCohesion.mValue + blendFactor * blendParms.mCohesion.mValue;
	outParms.mAlignment.mValue         = comp * mAlignment.mValue + blendFactor * blendParms.mAlignment.mValue;
	outParms.mSeparation.mValue        = comp * mSeparation.mValue + blendFactor * blendParms.mSeparation.mValue;
	outParms.mBounds.mValue            = comp * mBounds.mValue + blendFactor * blendParms.mBounds.mValue;
	outParms.mTarget.mValue            = comp * mTarget.mValue + blendFactor * blendParms.mTarget.mValue;
	outParms.mRandom.mValue            = comp * mRandom.mValue + blendFactor * blendParms.mRandom.mValue;
	outParms.mGoHome.mValue            = comp * mGoHome.mValue + blendFactor * blendParms.mGoHome.mValue;
	outParms.mPiki.mValue              = comp * mPiki.mValue + blendFactor * blendParms.mPiki.mValue;
	outParms.mNavi.mValue              = comp * mNavi.mValue + blendFactor * blendParms.mNavi.mValue;
	outParms.mCollision.mValue         = comp * mCollision.mValue + blendFactor * blendParms.mCollision.mValue;
	outParms.mMaxSpeed.mValue          = comp * mMaxSpeed.mValue + blendFactor * blendParms.mMaxSpeed.mValue;
	outParms.mFov.mValue               = comp * mFov.mValue + blendFactor * blendParms.mFov.mValue;
	outParms.mDistance.mValue          = comp * mDistance.mValue + blendFactor * blendParms.mDistance.mValue;
	outParms.mRotationPerSecond.mValue = comp * mRotationPerSecond.mValue + blendFactor * blendParms.mRotationPerSecond.mValue;
	outParms.mRandomAngle.mValue       = comp * mRandomAngle.mValue + blendFactor * blendParms.mRandomAngle.mValue;
}
#pragma dont_inline reset

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
    , mU001(this, 'u001', "表示スケール", 0.3f, 0.1f, 1.0f)    // 'display scale'
    , mU002(this, 'u002', "謎 Multiply", 1.0f, 0.0f, 200.0f)   // 'mystery multiply' (lmao)
    , mU003(this, 'u003', "ライフ", 0.0f, 0.0f, 600.0f)        // 'life'
    , mU004(this, 'u004', "モーション速度", 0.5f, 0.0f, 10.0f) // 'motion speed'
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
	/*
	li       r6, 0
	lfs      f0, lbl_80519E28@sda21(r2)
	mr       r5, r6
	li       r7, 0
	b        lbl_802062D4

lbl_802062BC:
	lwz      r4, 0xc0(r3)
	addi     r7, r7, 1
	stwx     r5, r4, r6
	lwz      r4, 0xc4(r3)
	stfsx    f0, r4, r6
	addi     r6, r6, 4

lbl_802062D4:
	lwz      r0, 0xbc(r3)
	cmpw     r7, r0
	blt      lbl_802062BC
	blr
	*/
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
	scale *= ((f32*)mFlockMgr->_310)[9];
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
	_70 += (sys->mDeltaTime * factor) * ((f32*)(mFlockMgr->_310))[39];

	if (_70 > TAU) {
		_70 -= TAU;
	}

	_64.x = 0.14f * sinf(_70) + 1.0f;
	_64.z = 0.14f * cosf(_70) + 1.0f;
	_64.y = 0.14f * cosf(_70) + 1.0f;
	/*
	lfs      f0, lbl_80519E38@sda21(r2)
	stwu     r1, -0x30(r1)
	fdivs    f0, f1, f0
	lfs      f1, lbl_80519E34@sda21(r2)
	lwz      r5, sys@sda21(r13)
	lwz      r4, 0x74(r3)
	lfs      f4, lbl_80519E30@sda21(r2)
	lwz      r4, 0x310(r4)
	fmuls    f3, f1, f0
	lfs      f5, 0x54(r5)
	lfs      f2, 0x9c(r4)
	lfs      f1, 0x70(r3)
	fmuls    f3, f4, f3
	lfs      f0, lbl_80519E18@sda21(r2)
	fmuls    f3, f5, f3
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x70(r3)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80206700
	fsubs    f0, f1, f0
	stfs     f0, 0x70(r3)

lbl_80206700:
	lfs      f1, 0x70(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	lfs      f3, lbl_80519E3C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80206740
	lfs      f0, lbl_80519E40@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_80206764

lbl_80206740:
	lfs      f0, lbl_80519E44@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_80206764:
	lfs      f1, lbl_80519DA0@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x64(r3)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80206784
	fneg     f1, f1

lbl_80206784:
	lfs      f0, lbl_80519E44@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	lfs      f2, lbl_80519E3C@sda21(r2)
	fmuls    f3, f1, f0
	addi     r4, r4, 4
	lfs      f1, lbl_80519DA0@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fctiwz   f3, f3
	stfd     f3, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r4, r0
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x6c(r3)
	lfs      f1, 0x70(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802067D0
	fneg     f1, f1

lbl_802067D0:
	lfs      f0, lbl_80519E44@sda21(r2)
	lfs      f2, lbl_80519E3C@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, lbl_80519DA0@sda21(r2)
	fctiwz   f1, f1
	stfd     f1, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x68(r3)
	addi     r1, r1, 0x30
	blr
	*/
}

#pragma dont_inline on
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

	sys->mTimers->_start("AI PIKI", true);
	updateBuffer();
	sys->mTimers->_stop("AI PIKI");

	Vector3f sep;
	sep = mFlockMgr->_7C - *this;
	sep.normalise();

	sys->mTimers->_start("AI ALN", true);
	if (!mUpdateContext.updatable()) {
		sep = _90;
	} else {
		Iterator<Uja> iter(mFlockMgr);
		CI_LOOP(iter) { }
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
#pragma dont_inline reset

/*
 * --INFO--
 * Address:	80207EA4
 * Size:	000130
 */
UjaMgr::UjaMgr(int count)
    : TFlockMgr<Uja>()
    , mBoidParms()
{
	mMonoObjectMgr.alloc(count);
	mUpdateMgr = new UpdateMgr();
	mUpdateMgr->create(30);
	_9C            = 0;
	_98            = 0;
	_A0            = 0.0f;
	mBoidParameter = nullptr;
	_310           = nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r6, 1
	li       r5, -1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, __vt__Q24Game12BaseFlockMgr@ha
	stw      r30, 0x18(r1)
	addi     r0, r3, __vt__Q24Game12BaseFlockMgr@l
	mr       r7, r31
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r7
	addi     r29, r28, 0x20
	stw      r0, 0(r31)
	li       r0, 0
	mr       r3, r29
	stb      r6, 0x1d(r7)
	stb      r6, 0x1c(r7)
	stw      r5, 4(r7)
	stw      r0, 8(r7)
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@ha
	addi     r0, r3, __vt__16GenericContainer@l
	lis      r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@ha
	stw      r0, 0(r29)
	addi     r0, r4, "__vt__36Container<Q34Game12ItemUjamushi3Uja>"@l
	addi     r4, r3, "__vt__Q24Game36TFlockMgr<Q34Game12ItemUjamushi3Uja>"@l
	li       r5, 0
	stw      r0, 0(r29)
	addi     r0, r4, 0x30
	addi     r3, r28, 0x3c
	stb      r5, 0x18(r29)
	stw      r4, 0(r28)
	stw      r0, 0x20(r28)
	bl       "__ct__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fv"
	lis      r4, __vt__Q34Game12ItemUjamushi6UjaMgr@ha
	addi     r3, r31, 0xa8
	addi     r5, r4, __vt__Q34Game12ItemUjamushi6UjaMgr@l
	li       r4, 1
	stw      r5, 0(r31)
	addi     r0, r5, 0x30
	stw      r0, 0x20(r31)
	bl       __ct__Q34Game12ItemUjamushi9BoidParmsFv
	mr       r4, r30
	addi     r3, r31, 0x3c
	bl       "alloc__40MonoObjectMgr<Q34Game12ItemUjamushi3Uja>Fi"
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80207F84
	bl       __ct__Q24Game9UpdateMgrFv
	mr       r0, r3

lbl_80207F84:
	stw      r0, 0x94(r31)
	li       r4, 0x1e
	lwz      r3, 0x94(r31)
	bl       create__Q24Game9UpdateMgrFi
	li       r0, 0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x9c(r31)
	mr       r3, r31
	stw      r0, 0x98(r31)
	stfs     f0, 0xa0(r31)
	stw      r0, 0xa4(r31)
	stw      r0, 0x310(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802081E4
 * Size:	000050
 */
void UjaMgr::init(UjaMgrInitArg&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x6c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x70(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x74(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x78(r3)
	lwz      r0, 0x10(r4)
	stw      r0, 0xa4(r3)
	lwz      r0, 0x14(r4)
	stw      r0, 0x310(r3)
	bl       test_createUjas__Q34Game12ItemUjamushi6UjaMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void UjaMgr::updateBlend(int, int, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void UjaMgr::appear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void UjaMgr::disappear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void UjaMgr::mogure()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208278
 * Size:	000418
 */
void UjaMgr::test_createUjas()
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	beq      lbl_8020866C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	li       r30, 0
	lfd      f2, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_80519E18@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f0, f1
	b        lbl_80208650

lbl_802082F4:
	addi     r3, r29, 0x3c
	lwz      r12, 0x3c(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8020864C
	bl       rand
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80519E18@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f4, f1, f2
	fmr      f3, f4
	fcmpo    cr0, f4, f0
	bge      lbl_80208358
	fneg     f3, f4

lbl_80208358:
	lfs      f1, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f2, lbl_80519D94@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f1
	fcmpo    cr0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f2, f0
	bge      lbl_802083B4
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802083CC

lbl_802083B4:
	fmuls    f0, f4, f1
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802083CC:
	fmuls    f4, f2, f0
	lfs      f2, 0x6c(r29)
	lfs      f0, 0x74(r29)
	lfs      f1, 0x70(r29)
	lfs      f5, lbl_80519D94@sda21(r2)
	fadds    f4, f4, f2
	stw      r29, 0x74(r31)
	fadds    f2, f3, f0
	fadds    f5, f5, f1
	lfs      f0, lbl_80519D94@sda21(r2)
	stfs     f4, 0(r31)
	stfs     f5, 4(r31)
	stfs     f2, 8(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stfs     f0, 0x58(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	mr       r3, r31
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_80519E18@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x5c(r31)
	stfs     f0, 0xb8(r31)
	stfs     f0, 0x60(r31)
	lwz      r12, 0xc(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519DA0@sda21(r2)
	stfs     f0, 0x64(r31)
	stfs     f0, 0x68(r31)
	stfs     f0, 0x6c(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x30(r1)
	lfs      f1, lbl_80519E18@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x70(r31)
	stfs     f0, 0x84(r31)
	stfs     f0, 0x88(r31)
	stfs     f0, 0x8c(r31)
	stfs     f0, 0x90(r31)
	stfs     f0, 0x94(r31)
	stfs     f0, 0x98(r31)
	stfs     f0, 0x9c(r31)
	stfs     f0, 0xa0(r31)
	stfs     f0, 0xa4(r31)
	lwz      r3, 0x310(r29)
	lfs      f0, 0x74(r3)
	stfs     f0, 0xa8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	addi     r3, r31, 0x78
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f1, 0x38(r1)
	lfs      f0, lbl_80519DDC@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, 0xa8(r31)
	fmuls    f0, f0, f1
	fdivs    f2, f3, f2
	fmadds   f0, f0, f2, f1
	stfs     f0, 0xa8(r31)
	lwz      r4, 0x94(r29)
	bl       init__Q24Game13UpdateContextFPQ24Game9UpdateMgr
	li       r0, 0
	stb      r0, 0xac(r31)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x44(r1)
	xoris    r0, r30, 0x8000
	lfd      f4, lbl_80519E20@sda21(r2)
	li       r3, 0
	stw      r4, 0x40(r1)
	lfs      f0, lbl_80519E14@sda21(r2)
	lfd      f1, 0x40(r1)
	lfs      f2, lbl_80519E1C@sda21(r2)
	fsubs    f3, f1, f4
	stw      r0, 0x54(r1)
	lfs      f1, lbl_80519D94@sda21(r2)
	stw      r4, 0x50(r1)
	fdivs    f3, f3, f0
	lfd      f0, 0x50(r1)
	fmuls    f2, f2, f3
	fsubs    f0, f0, f4
	fctiwz   f2, f2
	fmuls    f5, f31, f0
	stfd     f2, 0x48(r1)
	fmr      f3, f5
	lwz      r4, 0x4c(r1)
	fcmpo    cr0, f5, f1
	addi     r0, r4, 0x14
	stb      r0, 0xad(r31)
	stw      r3, 0xb0(r31)
	stb      r3, 0xae(r31)
	stfs     f1, 0xb4(r31)
	bge      lbl_802085A8
	fneg     f3, f5

lbl_802085A8:
	lfs      f2, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f2
	lfs      f3, lbl_80519E8C@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f3, f0
	bge      lbl_80208608
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80208620

lbl_80208608:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80208620:
	fmuls    f3, f3, f0
	lfs      f2, 0x6c(r29)
	lfs      f0, 0x74(r29)
	lfs      f5, lbl_80519D94@sda21(r2)
	lfs      f1, 0x70(r29)
	fadds    f3, f3, f2
	fadds    f0, f4, f0
	fadds    f5, f5, f1
	stfs     f3, 0x44(r31)
	stfs     f5, 0x48(r31)
	stfs     f0, 0x4c(r31)

lbl_8020864C:
	addi     r30, r30, 1

lbl_80208650:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_802082F4

lbl_8020866C:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802086EC
	lbz      r0, 0x1d(r28)
	cmplwi   r0, 0
	beq      lbl_80208930

lbl_802086EC:
	lwz      r3, 0xa4(r28)
	addi     r6, r28, 0xa8
	lwz      r4, 0x98(r28)
	lwz      r5, 0x9c(r28)
	lfs      f1, 0xa0(r28)
	bl
getParms__Q34Game12ItemUjamushi13BoidParameterFiifRQ34Game12ItemUjamushi9BoidParms
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E90@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x94(r28)
	bl       update__Q24Game9UpdateMgrFv
	lfs      f0, lbl_80519D94@sda21(r2)
	li       r31, 0
	li       r30, 0
	li       r29, 0
	stfs     f0, 0x7c(r28)
	stfs     f0, 0x80(r28)
	stfs     f0, 0x84(r28)
	stfs     f0, 0x88(r28)
	stfs     f0, 0x8c(r28)
	stfs     f0, 0x90(r28)
	b        lbl_802087FC

lbl_8020874C:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802087F8
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x7c(r28)
	addi     r31, r31, 1
	lfs      f0, 0(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x7c(r28)
	lfs      f1, 0x80(r28)
	lfs      f0, 4(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x80(r28)
	lfs      f1, 0x84(r28)
	lfs      f0, 8(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x84(r28)
	lbz      r0, 0xac(r3)
	cmplwi   r0, 2
	beq      lbl_802087F8
	lfs      f1, 0x88(r28)
	addi     r30, r30, 1
	lfs      f0, 0x50(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x88(r28)
	lfs      f1, 0x8c(r28)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x8c(r28)
	lfs      f1, 0x90(r28)
	lfs      f0, 0x58(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x90(r28)

lbl_802087F8:
	addi     r29, r29, 1

lbl_802087FC:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_8020874C
	cmpwi    r31, 0
	ble      lbl_80208868
	xoris    r3, r31, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, 0x7c(r28)
	fsubs    f0, f0, f1
	fdivs    f1, f2, f0
	fmuls    f0, f3, f1
	stfs     f0, 0x7c(r28)
	lfs      f0, 0x80(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x80(r28)
	lfs      f0, 0x84(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x84(r28)

lbl_80208868:
	cmpwi    r30, 0
	ble      lbl_802088B8
	xoris    r3, r30, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519DA0@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, 0x88(r28)
	fsubs    f0, f0, f1
	fdivs    f1, f2, f0
	fmuls    f0, f3, f1
	stfs     f0, 0x88(r28)
	lfs      f0, 0x8c(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x8c(r28)
	lfs      f0, 0x90(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x90(r28)

lbl_802088B8:
	li       r29, 0
	b        lbl_80208904

lbl_802088C0:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208900
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r28, 0xa8
	bl       update__Q34Game12ItemUjamushi3UjaFRQ34Game12ItemUjamushi9BoidParms

lbl_80208900:
	addi     r29, r29, 1

lbl_80208904:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_802088C0
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80519E90@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc

lbl_80208930:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208964
 * Size:	0002E4
 */
void UjaMgr::astonishPikmins()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f31, 0xc(r3)
	lfs      f30, 0x10(r3)
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lfs      f29, 0x14(r3)
	li       r5, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r6, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f0, lbl_80519E98@sda21(r2)
	lis      r4, __vt__Q24Game16InteractAstonish@ha
	addi     r6, r6, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game16InteractAstonish@l
	cmplwi   r5, 0
	stw      r6, 0x20(r1)
	stw      r5, 0x2c(r1)
	stw      r5, 0x24(r1)
	stw      r3, 0x28(r1)
	stw      r5, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bne      lbl_802089FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208BFC

lbl_802089FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208A68

lbl_80208A14:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80208BFC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80208A68:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208A14
	b        lbl_80208BFC

lbl_80208A88:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208B40
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f0, f30
	lfs      f1, 8(r1)
	fsubs    f2, f2, f29
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f1, f31
	fmuls    f3, f3, f3
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80208B14
	ble      lbl_80208B18
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80208B18

lbl_80208B14:
	fmr      f1, f0

lbl_80208B18:
	lfs      f0, lbl_80519E98@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80208B40
	mr       r3, r31
	addi     r4, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_80208B40:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80208B6C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208BFC

lbl_80208B6C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80208BE0

lbl_80208B8C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80208BFC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80208BE0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80208B8C

lbl_80208BFC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80208A88
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
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
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80208D7C
 * Size:	0000C8
 */
void Item::onInit(CreatureInitArg* initArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80208DB8
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x42f
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80208DB8:
	lwz      r31, 4(r31)
	li       r3, 0x314
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80208DD8
	mr       r4, r31
	bl       __ct__Q34Game12ItemUjamushi6UjaMgrFi
	mr       r0, r3

lbl_80208DD8:
	stw      r0, 0x200(r30)
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1d8(r30)
	mr       r4, r30
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80208E44
 * Size:	000034
 */
// void start__Q24Game40StateMachine<Item> FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  stw       r0, 0x1DC(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80208E78
 * Size:	0000C0
 */
void Item::onSetPosition()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r31, 0x138
	addi     r4, r31, 0x19c
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lwz      r4, mgr__Q24Game12ItemUjamushi@sda21(r13)
	lfs      f3, 0x1d0(r31)
	lfs      f1, 0x1a0(r31)
	addi     r3, r4, 0x310
	lfs      f2, 0x1a4(r31)
	addi     r0, r4, 0x5a8
	lfs      f0, 0x19c(r31)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f3, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0x310(r4)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x200(r31)
	addi     r4, r1, 8
	bl init__Q34Game12ItemUjamushi6UjaMgrFRQ34Game12ItemUjamushi13UjaMgrInitArg
	lwz      r3, 0x200(r31)
	bl       astonishPikmins__Q34Game12ItemUjamushi6UjaMgrFv
	li       r0, 0
	stw      r0, 0x1e0(r31)
	stw      r0, 0x1e4(r31)
	lwz      r3, mgr__Q24Game12ItemUjamushi@sda21(r13)
	lwzu     r12, 0x328(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1ec(r31)
	mr       r3, r31
	lfs      f0, lbl_80519D94@sda21(r2)
	stfs     f0, 0x1e8(r31)
	bl       setBoidTimer__Q34Game12ItemUjamushi4ItemFv
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x114(r3)
	lfs      f0, 0x1d0(r3)
	lwz      r4, 0(r4)
	stfs     f0, 0x1c(r4)
	lfs      f0, 0x19c(r3)
	stfs     f0, 0x1c4(r3)
	lfs      f0, 0x1a0(r3)
	stfs     f0, 0x1c8(r3)
	lfs      f0, 0x1a4(r3)
	stfs     f0, 0x1cc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80209040
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481E30@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x471
	addi     r5, r5, lbl_80481E30@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80209040:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209050
 * Size:	000008
 */
bool Item::isCollisionFlick() { return false; }

/*
 * --INFO--
 * Address:	80209058
 * Size:	000374
 */
bool Item::interactFlockAttack(InteractFlockAttack& interaction)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r30, r4
	mr       r29, r3
	lwz      r3, 0x200(r3)
	lwz      r4, 8(r4)
	lfs      f1, 0xc(r30)
	bl       attackFlock__Q24Game12BaseFlockMgrFif
	neg      r0, r3
	li       r31, 0
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x10(r30)
	lwz      r28, 8(r30)
	lwz      r29, 0x200(r29)
	cmpwi    r28, 0
	blt      lbl_802090E0
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	bge      lbl_802090E0
	li       r31, 1

lbl_802090E0:
	clrlwi.  r0, r31, 0x18
	bne      lbl_80209104
	lis      r3, lbl_80481E3C@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481E3C@l
	li       r4, 0xab
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80209104:
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r3)
	lfs      f2, 8(r3)
	lfs      f0, 0(r3)
	stfs     f0, 0x14(r30)
	stfs     f1, 0x18(r30)
	stfs     f2, 0x1c(r30)
	lbz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_80209398
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80519EA0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80209398
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80209398
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80519E18@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_80519DE0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519DF0@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f30, f1, f2, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	fmr      f4, f31
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	fcmpo    cr0, f31, f0
	lfd      f0, 0x30(r1)
	lfs      f2, lbl_80519E14@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, lbl_80519D98@sda21(r2)
	lfs      f0, lbl_80519DE4@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f3, f1, f2, f0
	bge      lbl_8020923C
	fneg     f4, f31

lbl_8020923C:
	lfs      f2, lbl_80519E44@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519D94@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f30, f0
	bge      lbl_80209298
	lfs      f0, lbl_80519E40@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802092B0

lbl_80209298:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802092B0:
	fmuls    f0, f30, f0
	stfs     f3, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x14(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f3, lbl_80519E20@sda21(r2)
	stw      r0, 0x50(r1)
	lfs      f1, lbl_80519E14@sda21(r2)
	lfd      f2, 0x50(r1)
	lfs      f0, lbl_80519EA4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r28, 0x5c(r1)
	cmpwi    r28, 1
	bne      lbl_8020931C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020931C
	li       r28, 0

lbl_8020931C:
	cmpwi    r28, 2
	bne      lbl_8020933C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8020933C
	li       r28, 0

lbl_8020933C:
	mr       r3, r31
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	stb      r28, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_80519D98@sda21(r2)
	addi     r4, r1, 8
	lfs      f1, 0x14(r30)
	li       r5, 0
	stfs     f1, 8(r1)
	lfs      f1, 0x18(r30)
	stfs     f1, 0xc(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x1c(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0xc(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	addi     r4, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80209398:
	li       r3, 1
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0x94(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	802093CC
 * Size:	0002AC
 */
void Item::doAI()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r3
	lwz      r3, 0x1d8(r3)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	bl       updateCollTree__Q24Game8BaseItemFv
	lfs      f0, 0x1e8(r28)
	lfs      f3, lbl_80519DA0@sda21(r2)
	fcmpo    cr0, f0, f3
	bge      lbl_802094B0
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x1f0(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x1f0(r28)
	lfs      f1, 0x1f0(r28)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8020949C
	lwz      r0, 0x1e4(r28)
	stw      r0, 0x1e0(r28)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_80519E14@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f2, lbl_80519DD0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_80519E10@sda21(r2)
	lfs      f0, lbl_80519DA0@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x1f0(r28)
	stfs     f1, 0x1f4(r28)
	stfs     f0, 0x1e8(r28)
	b        lbl_80209570

lbl_8020949C:
	lfs      f0, 0x1f4(r28)
	fdivs    f0, f1, f0
	fsubs    f0, f3, f0
	stfs     f0, 0x1e8(r28)
	b        lbl_80209570

lbl_802094B0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x1f0(r28)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80519D94@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x1f0(r28)
	lfs      f1, 0x1f0(r28)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80209570
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	lwz      r0, 0x1ec(r28)
	stw      r4, 8(r1)
	lfd      f2, lbl_80519E20@sda21(r2)
	xoris    r0, r0, 0x8000
	lfd      f1, 8(r1)
	lfs      f0, lbl_80519E14@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x14(r1)
	stw      r4, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 0x1e4(r28)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f1, lbl_80519E20@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f3, lbl_80519E14@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f2, lbl_80519DD0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_80519E10@sda21(r2)
	lfs      f0, lbl_80519D94@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f1, f2, f3, f1
	stfs     f1, 0x1f0(r28)
	stfs     f1, 0x1f4(r28)
	stfs     f0, 0x1e8(r28)

lbl_80209570:
	lwz      r31, 0x200(r28)
	lfs      f31, 0x1e8(r28)
	lwz      r3, 0xa4(r31)
	lwzu     r12, 0x18(r3)
	lwz      r29, 0x1e4(r28)
	lwz      r12, 0xc(r12)
	lwz      r30, 0x1e0(r28)
	mtctr    r12
	bctrl
	srwi     r0, r30, 0x1f
	xori     r0, r0, 1
	clrlwi   r0, r0, 0x18
	cmpw     r0, r3
	ble      lbl_802095C4
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x385
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802095C4:
	lwz      r3, 0xa4(r31)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	srwi     r0, r29, 0x1f
	xori     r0, r0, 1
	clrlwi   r0, r0, 0x18
	cmpw     r0, r3
	ble      lbl_80209608
	lis      r3, lbl_80481DC8@ha
	lis      r5, lbl_80481DDC@ha
	addi     r3, r3, lbl_80481DC8@l
	li       r4, 0x386
	addi     r5, r5, lbl_80481DDC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80209608:
	stw      r30, 0x98(r31)
	stw      r29, 0x9c(r31)
	stfs     f31, 0xa0(r31)
	lwz      r3, 0x200(r28)
	bl       update__Q24Game12BaseFlockMgrFv
	lwz      r3, 0x200(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80209650
	mr       r3, r28
	li       r4, 0
	lwz      r12, 0(r28)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_80209650:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209678
 * Size:	000008
 */
// void getNumObjects__Q24Game36TFlockMgr<Uja> Fv()
// {
// 	/*
// 	lwz      r3, 0x5c(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80209680
 * Size:	000078
 */
void Item::doSimpleDraw(Viewport*)
{
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
void Mgr::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r3, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	beq      lbl_80209BC8
	addi     r3, r3, 0x30

lbl_80209BC8:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemUjamushi4Item>"@l
	stw      r0, 0x14(r1)
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80209C04
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209D74

lbl_80209C04:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209C70

lbl_80209C1C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80209D74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80209C70:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80209C1C
	b        lbl_80209D74

lbl_80209C90:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80209CE4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209D74

lbl_80209CE4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80209D58

lbl_80209D04:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80209D74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80209D58:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80209D04

lbl_80209D74:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80209C90
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209DA8
 * Size:	00004C
 */
// void Iterator<Item>::isDone()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r3, 8(r3)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 4(r31)
// 	subf     r0, r0, r3
// 	cntlzw   r0, r0
// 	srwi     r3, r0, 5
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

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
char* Mgr::getCaveName(int)
{
	/*
	lis      r3, lbl_80481EB0@ha
	addi     r3, r3, lbl_80481EB0@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209E04
 * Size:	000054
 */
int Mgr::getCaveID(char*)
{
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
void WaitState::init(Item*, StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 3
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r29, 0x200(r4)
	b        lbl_80209EA8

lbl_80209E88:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stb      r31, 0xac(r3)
	addi     r30, r30, 1

lbl_80209EA8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_80209E88
	lfs      f0, lbl_80519D98@sda21(r2)
	stfs     f0, 0x10(r28)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209EEC
 * Size:	000058
 */
void WaitState::exec(Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x54(r5)
	fsubs    f1, f2, f1
	stfs     f1, 0x10(r3)
	lfs      f1, 0x10(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80209F34
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80209F34:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80209F44
 * Size:	000030
 */
// void transit__Q24Game36FSMState<Item> FPQ34Game12ItemUjamushi4ItemiPQ24Game8StateArg()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

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
void ActiveState::init(Item*, StateArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	li       r30, 0
	lwz      r29, 0x200(r4)
	lfs      f31, lbl_80519D94@sda21(r2)
	mr       r28, r3
	mr       r31, r30
	b        lbl_80209FF0

lbl_80209FB4:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xac(r3)
	cmplwi   r0, 6
	beq      lbl_80209FE0
	cmplwi   r0, 3
	bne      lbl_80209FEC

lbl_80209FE0:
	stb      r31, 0xac(r3)
	stfs     f31, 0xb4(r3)
	stfs     f31, 0xb8(r3)

lbl_80209FEC:
	addi     r30, r30, 1

lbl_80209FF0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_80209FB4
	lfs      f0, lbl_80519E38@sda21(r2)
	stfs     f0, 0x10(r28)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
void DigState::init(Item*, StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 4
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r29, 0x200(r4)
	b        lbl_8020A094

lbl_8020A074:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stb      r31, 0xac(r3)
	addi     r30, r30, 1

lbl_8020A094:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r30, r3
	blt      lbl_8020A074
	lfs      f0, lbl_80519D98@sda21(r2)
	stfs     f0, 0x10(r28)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A0D8
 * Size:	000058
 */
void DigState::exec(Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_80519D94@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x54(r5)
	fsubs    f1, f2, f1
	stfs     f1, 0x10(r3)
	lfs      f1, 0x10(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8020A120
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8020A120:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
GenItemParm* Mgr::generatorNewItemParm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 8
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8020A170
	lis      r5, __vt__Q24Game11GenItemParm@ha
	lis      r4, __vt__15GenUjamushiParm@ha
	addi     r5, r5, __vt__Q24Game11GenItemParm@l
	li       r0, 0x64
	stw      r5, 0(r3)
	addi     r4, r4, __vt__15GenUjamushiParm@l
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8020A170:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A180
 * Size:	000088
 */
void Mgr::generatorWrite(Stream&, GenItemParm*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_80481D40@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r3, lbl_80481D40@l
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_8020A1C0
	addi     r3, r31, 0x88
	addi     r5, r31, 0x9c
	li       r4, 0x5ea
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8020A1C0:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lwz      r0, 4(r30)
	mr       r3, r29
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0x17c
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8020A208
 * Size:	000064
 */
void Mgr::generatorRead(Stream&, GenItemParm*, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x5F4
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DFC00

	.loc_0x3C:
	  mr        r3, r30
	  bl        0x20A51C
	  extsh     r0, r3
	  stw       r0, 0x4(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8020A26C
 * Size:	0001CC
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1DC8
	  li        r4, 0x5FB
	  addi      r5, r5, 0x1DDC
	  crclr     6, 0x6
	  bl        -0x1DFC70

	.loc_0x48:
	  li        r3, 0x204
	  bl        -0x1E6414
	  mr.       r31, r3
	  beq-      .loc_0x160
	  li        r4, 0x411
	  bl        -0x3E2E0
	  lis       r3, 0x804C
	  li        r0, 0
	  subi      r4, r3, 0xAB0
	  li        r3, 0x1C
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0x1B0
	  stw       r4, 0x178(r31)
	  stw       r0, 0x1D8(r31)
	  stw       r0, 0x1DC(r31)
	  bl        -0x1E644C
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lis       r4, 0x804C
	  lis       r5, 0x804C
	  subi      r0, r4, 0xAC8
	  lis       r4, 0x804C
	  stw       r0, 0x0(r3)
	  li        r6, -0x1
	  subi      r5, r5, 0xAE0
	  subi      r0, r4, 0x804
	  stw       r6, 0x18(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0x0(r3)

	.loc_0xBC:
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  subi      r5, r3, 0xD18
	  lis       r3, 0x804C
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x1B0
	  subi      r4, r4, 0x40DC
	  subi      r0, r3, 0xAF0
	  stw       r5, 0x178(r31)
	  li        r3, 0x8
	  stw       r4, 0x1F8(r31)
	  stw       r0, 0x1F8(r31)
	  bl        -0x1E64D0
	  mr.       r0, r3
	  beq-      .loc_0x11C
	  bl        -0xD6324
	  mr        r0, r3

	.loc_0x11C:
	  stw       r0, 0x114(r31)
	  addi      r0, r31, 0x138
	  lfs       f0, -0x44C4(r2)
	  addi      r4, r31, 0x1F8
	  addi      r6, r31, 0x1C4
	  li        r5, 0
	  stfs      f0, 0x1D0(r31)
	  li        r7, 0
	  stw       r0, 0x1FC(r31)
	  lwz       r3, 0x114(r31)
	  bl        -0xD6300
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  mr        r3, r28
	  mr        r4, r31
	  bl        0x3090
	  lwz       r5, 0x4(r30)
	  lis       r3, 0x804B
	  subi      r0, r3, 0x5D0C
	  lis       r3, 0x804C
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x1094
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  bl        -0xCF438
	  mr        r3, r31
	  mr        r4, r29
	  li        r5, 0
	  bl        -0xCF268
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace ItemUjamushi
} // namespace Game
