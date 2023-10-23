#include "JSystem/JGeometry.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/ResTIMG.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "Graphics.h"
#include "P2Macros.h"
#include "System.h"
#include "TParticle2dMgr.h"
#include "nans.h"

static const char idk[] = "\0\0\0\0\0\0\0\0\0";
TParticle2dMgr* particle2dMgr;
TParticle2dMgr* TParticle2dMgr::_instance;

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("particle2dMgr"); }

/*
 * --INFO--
 * Address:	803B9064
 * Size:	000084
 */
TParticle2dMgr::~TParticle2dMgr()
{
	_instance     = nullptr;
	particle2dMgr = nullptr;
}

/*
 * --INFO--
 * Address:	803B90E8
 * Size:	000024
 */
void TParticle2dMgr::globalInstance() { particle2dMgr = Instance(); }

/*
 * --INFO--
 * Address:	803B910C
 * Size:	000048
 */
TParticle2dMgr* TParticle2dMgr::Instance()
{
	if (_instance == nullptr) {
		_instance = new TParticle2dMgr();
	}
	return _instance;
}

/*
 * --INFO--
 * Address:	803B9154
 * Size:	000050
 */
void TParticle2dMgr::deleteInstance()
{
	if (_instance) {
		delete _instance;
		_instance = nullptr;
	}
	particle2dMgr = nullptr;
}

/*
 * --INFO--
 * Address:	803B91A4
 * Size:	000088
 */
TParticle2dMgr::TParticle2dMgr()
    : CNode("TParticle2dMgr")
    , JKRDisposer()
    , mSolidHeap(nullptr)
{
	_30              = nullptr;
	mResourceManager = nullptr;
	mEmitterManager  = nullptr;
}

/*
 * --INFO--
 * Address:	803B922C
 * Size:	000094
 */
void TParticle2dMgr::createHeap(u32 p1)
{
	sys->heapStatusStart("TParticle2dMgr::createHeap", nullptr);
	P2ASSERTLINE(73, mSolidHeap == nullptr);
	mSolidHeap = JKRSolidHeap::create(p1, JKRHeap::sCurrentHeap, true);
	sys->heapStatusEnd("TParticle2dMgr::createHeap");
}

/*
 * --INFO--
 * Address:	803B92C0
 * Size:	000154
 */
void TParticle2dMgr::createMgr(char* path, u32 u1, u32 u2, u32 u3)
{
	JUT_ASSERTLINE(83, mSolidHeap, "effect heap not allocated !\n");

	sys->heapStatusStart("TParticle2dMgr::createMgr", nullptr);
	JKRHeap* backup = JKRGetCurrentHeap();
	mSolidHeap->becomeCurrentHeap();
	void* file = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	JUT_ASSERTLINE(94, file, "ParticleResource (%s) not found\n", path);
	backup->becomeCurrentHeap();

	mResourceManager = new (mSolidHeap, 0) JPAResourceManager(file, mSolidHeap);
	mEmitterManager  = new (mSolidHeap, 0) JPAEmitterManager(u1, u2, mSolidHeap, 8, 2);

	mEmitterManager->entryResourceManager(mResourceManager, 0);
	mSolidHeap->adjustSize();
	sys->heapStatusEnd("TParticle2dMgr::createMgr");

	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  mr        r25, r4
	  mr        r26, r5
	  mr        r27, r6
	  addi      r30, r3, 0x5A70
	  lwz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x48
	  addi      r3, r30, 0x48
	  addi      r5, r30, 0x68
	  li        r4, 0x53
	  crclr     6, 0x6
	  bl        -0x38ECC4

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x88
	  li        r5, 0
	  bl        0x6A048
	  lwz       r29, -0x77D4(r13)
	  lwz       r3, 0x38(r31)
	  bl        -0x395D7C
	  li        r0, 0
	  mr        r3, r25
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  bl        -0x39A1C4
	  mr.       r28, r3
	  bne-      .loc_0xB0
	  mr        r6, r25
	  addi      r3, r30, 0x48
	  addi      r5, r30, 0xA4
	  li        r4, 0x5E
	  crclr     6, 0x6
	  bl        -0x38ED2C

	.loc_0xB0:
	  mr        r3, r29
	  bl        -0x395DD0
	  lwz       r4, 0x38(r31)
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x395444
	  mr.       r0, r3
	  beq-      .loc_0xE0
	  lwz       r5, 0x38(r31)
	  mr        r4, r28
	  bl        -0x320EC8
	  mr        r0, r3

	.loc_0xE0:
	  stw       r0, 0x34(r31)
	  li        r3, 0x30
	  li        r5, 0
	  lwz       r4, 0x38(r31)
	  bl        -0x395470
	  mr.       r0, r3
	  beq-      .loc_0x118
	  lwz       r6, 0x38(r31)
	  mr        r4, r26
	  mr        r5, r27
	  li        r7, 0x8
	  li        r8, 0x2
	  bl        -0x328E98
	  mr        r0, r3

	.loc_0x118:
	  stw       r0, 0x30(r31)
	  li        r5, 0
	  lwz       r3, 0x30(r31)
	  lwz       r4, 0x34(r31)
	  bl        -0x32867C
	  lwz       r3, 0x38(r31)
	  bl        -0x3944A8
	  lwz       r3, -0x6514(r13)
	  addi      r4, r30, 0x88
	  bl        0x69F68
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticle2dMgr::exitMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TParticle2dMgr::destroyHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B9414
 * Size:	0000AC
 */
void TParticle2dMgr::setSceneEmitterAndResourceManager(JPAEmitterManager* emitterManager, JPAResourceManager* resourceManager)
{
	P2ASSERTLINE(132, mEmitterManager == nullptr);
	mEmitterManager = _30;
	_30             = emitterManager;
	_30->clearResourceManager(0);
	_30->entryResourceManager(mResourceManager, 0);
	_30->clearResourceManager(1);
	_30->entryResourceManager(resourceManager, 1);
}

/*
 * --INFO--
 * Address:	803B94C0
 * Size:	000078
 */
void TParticle2dMgr::clearSceneEmitterAndResourceManager()
{
	_30->clearResourceManager(1);
	_30->clearResourceManager(0);
	P2ASSERTLINE(149, mEmitterManager);
	_30             = mEmitterManager;
	mEmitterManager = nullptr;
}

/*
 * --INFO--
 * Address:	803B9538
 * Size:	000050
 */
void TParticle2dMgr::setSceneResourceManager(JPAResourceManager* resourceManager)
{
	_30->clearResourceManager(1);
	_30->entryResourceManager(resourceManager, 1);
}

/*
 * --INFO--
 * Address:	803B9588
 * Size:	000028
 */
void TParticle2dMgr::clearSceneResourceManager() { _30->clearResourceManager(1); }

/*
 * --INFO--
 * Address:	803B95B0
 * Size:	000024
 */
void TParticle2dMgr::update() { _30->calc(); }

/*
 * --INFO--
 * Address:	803B95D4
 * Size:	000148
 */
void TParticle2dMgr::draw(u8 a, u16 flag)
{
	if (flag == 1) {
		JPADrawInfo info;
		PSMTXIdentity(info.mtx1);
		u16 width  = System::getRenderModeObj()->fbWidth;
		u16 height = System::getRenderModeObj()->efbHeight;
		PSMTXCopy(info.mtx1, info.mtx2);
		C_MTXLightOrtho(info.mtx2, 0.0f, height, 0.0f, width, 0.5f, 0.5f, 0.5f, 0.5f);
		mEmitterManager->draw(&info, a);
	} else {
		Graphics* gfx = sys->mGfx;
		JPADrawInfo info;
		u16 height = System::getRenderModeObj()->efbHeight;
		u16 width  = System::getRenderModeObj()->fbWidth;
		f32 fov    = gfx->mPerspGraph.mFovY;
		PSMTXCopy(gfx->mPerspGraph.mPosMtx, info.mtx2);
		C_MTXLightPerspective(info.mtx2, fov, (f32)width / (f32)height, 0.5f, -0.5f, 0.5f, 0.5f);
		mEmitterManager->draw(&info, a);
	}
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stmw     r27, 0x10c(r1)
	clrlwi   r0, r5, 0x10
	mr       r27, r3
	cmplwi   r0, 1
	mr       r28, r4
	bne      lbl_803B9680
	addi     r3, r1, 8
	bl       PSMTXIdentity
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	addi     r3, r1, 8
	addi     r4, r1, 0x98
	bl       PSMTXCopy
	lis      r0, 0x4330
	lfs      f5, lbl_8051F6C4@sda21(r2)
	stw      r30, 0xfc(r1)
	addi     r3, r1, 0xc8
	lfs      f1, lbl_8051F6C0@sda21(r2)
	fmr      f6, f5
	stw      r0, 0xf8(r1)
	fmr      f7, f5
	lfd      f4, lbl_8051F6D0@sda21(r2)
	fmr      f3, f1
	lfd      f0, 0xf8(r1)
	stw      r31, 0x104(r1)
	fmr      f8, f5
	fsubs    f2, f0, f4
	stw      r0, 0x100(r1)
	lfd      f0, 0x100(r1)
	fsubs    f4, f0, f4
	bl       C_MTXLightOrtho
	lwz      r3, 0x30(r27)
	addi     r4, r1, 0x98
	clrlwi   r5, r28, 0x18
	bl       draw__17JPAEmitterManagerFPC11JPADrawInfoUc
	b        lbl_803B9700

lbl_803B9680:
	lwz      r3, sys@sda21(r13)
	lwz      r31, 0x24(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 4(r3)
	addi     r3, r31, 0x210
	lfs      f31, 0x24c(r31)
	addi     r4, r1, 0x38
	bl       PSMTXCopy
	lis      r0, 0x4330
	lfs      f3, lbl_8051F6C4@sda21(r2)
	stw      r29, 0x104(r1)
	fmr      f1, f31
	lfd      f7, lbl_8051F6D0@sda21(r2)
	fmr      f5, f3
	stw      r0, 0x100(r1)
	fmr      f6, f3
	lfs      f4, lbl_8051F6C8@sda21(r2)
	lfd      f0, 0x100(r1)
	addi     r3, r1, 0x68
	stw      r30, 0xfc(r1)
	fsubs    f2, f0, f7
	stw      r0, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	fsubs    f0, f0, f7
	fdivs    f2, f2, f0
	bl       C_MTXLightPerspective
	lwz      r3, 0x30(r27)
	addi     r4, r1, 0x38
	clrlwi   r5, r28, 0x18
	bl       draw__17JPAEmitterManagerFPC11JPADrawInfoUc

lbl_803B9700:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	lmw      r27, 0x10c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void TParticle2dMgr::setXfb(const ResTIMG*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803B971C
 * Size:	00004C
 */
JPABaseEmitter* TParticle2dMgr::create(u16 p1, Vector2<f32>& p2, u8 p3, u8 p4)
{
	JGeometry::TVec3f vec(p2.x, p2.y, 0.0f);
	return _30->createSimpleEmitterID(vec, p1, p3, p4, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	803B9768
 * Size:	00002C
 */
void TParticle2dMgr::kill(JPABaseEmitter* emitter)
{
	if (emitter) {
		_30->forceDeleteEmitter(emitter);
	}
}

/*
 * --INFO--
 * Address:	803B9794
 * Size:	000020
 */
void TParticle2dMgr::fade(JPABaseEmitter* emitter)
{
	if (emitter) {
		emitter->mFlags |= 1;
		emitter->mMaxFrame = 1;
	}
}

/*
 * --INFO--
 * Address:	803B97B4
 * Size:	000024
 */
void TParticle2dMgr::killAll() { _30->forceDeleteAllEmitter(); }

/*
 * --INFO--
 * Address:	803B97D8
 * Size:	000028
 */
void TParticle2dMgr::killGroup(u8 p1) { _30->forceDeleteGroupEmitter((int)p1); }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TParticle2dMgr::showInfo(long, long, long, long)
{
	// UNUSED FUNCTION
}
