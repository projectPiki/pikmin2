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

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void _Print(char* name, ...) { OSReport("particle2dMgr"); }

/**
 * @note Address: 0x803B9064
 * @note Size: 0x84
 */
TParticle2dMgr::~TParticle2dMgr()
{
	_instance     = nullptr;
	particle2dMgr = nullptr;
}

/**
 * @note Address: 0x803B90E8
 * @note Size: 0x24
 */
void TParticle2dMgr::globalInstance() { particle2dMgr = Instance(); }

/**
 * @note Address: 0x803B910C
 * @note Size: 0x48
 */
TParticle2dMgr* TParticle2dMgr::Instance()
{
	if (_instance == nullptr) {
		_instance = new TParticle2dMgr();
	}
	return _instance;
}

/**
 * @note Address: 0x803B9154
 * @note Size: 0x50
 */
void TParticle2dMgr::deleteInstance()
{
	if (_instance) {
		delete _instance;
		_instance = nullptr;
	}
	particle2dMgr = nullptr;
}

/**
 * @note Address: 0x803B91A4
 * @note Size: 0x88
 */
TParticle2dMgr::TParticle2dMgr()
    : CNode("TParticle2dMgr")
    , mSolidHeap(nullptr)
{
	mActiveEmitter   = nullptr;
	mResourceManager = nullptr;
	mEmitterBackup   = nullptr;
}

/**
 * @note Address: 0x803B922C
 * @note Size: 0x94
 */
void TParticle2dMgr::createHeap(u32 p1)
{
	sys->heapStatusStart("TParticle2dMgr::createHeap", nullptr);
	P2ASSERTLINE(73, mSolidHeap == nullptr);
	mSolidHeap = JKRSolidHeap::create(p1, JKRHeap::sCurrentHeap, true);
	sys->heapStatusEnd("TParticle2dMgr::createHeap");
}

/**
 * @note Address: 0x803B92C0
 * @note Size: 0x154
 */
void TParticle2dMgr::createMgr(char* path, u32 u1, u32 u2, u32 u3)
{
	JUT_ASSERTLINE(83, mSolidHeap, "effect heap not allocated !\n");

	sys->heapStatusStart("TParticle2dMgr::createMgr", nullptr);
	JKRHeap* backup = JKRGetCurrentHeap();
	mSolidHeap->becomeCurrentHeap();
	const void* file = JKRDvdToMainRam(path, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	JUT_ASSERTLINE(94, file, "ParticleResource (%s) not found\n", path);
	backup->becomeCurrentHeap();

	mResourceManager = new (mSolidHeap, 0) JPAResourceManager(file, mSolidHeap);
	mActiveEmitter   = new (mSolidHeap, 0) JPAEmitterManager((u8)u1, u2, mSolidHeap, 8, 2); // AAAAAAAAAAAAAAAAAAAAA

	mActiveEmitter->entryResourceManager(mResourceManager, 0);
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

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TParticle2dMgr::exitMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void TParticle2dMgr::destroyHeap()
{
	mSolidHeap->destroy();
	mSolidHeap = nullptr;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B9414
 * @note Size: 0xAC
 */
void TParticle2dMgr::setSceneEmitterAndResourceManager(JPAEmitterManager* emitterManager, JPAResourceManager* resourceManager)
{
	P2ASSERTLINE(132, mEmitterBackup == nullptr);
	mEmitterBackup = mActiveEmitter;

	mActiveEmitter = emitterManager;
	mActiveEmitter->clearResourceManager(0);
	mActiveEmitter->entryResourceManager(mResourceManager, 0);
	mActiveEmitter->clearResourceManager(1);
	mActiveEmitter->entryResourceManager(resourceManager, 1);
}

/**
 * @note Address: 0x803B94C0
 * @note Size: 0x78
 */
void TParticle2dMgr::clearSceneEmitterAndResourceManager()
{
	mActiveEmitter->clearResourceManager(1);
	mActiveEmitter->clearResourceManager(0);

	P2ASSERTLINE(149, mEmitterBackup);
	mActiveEmitter = mEmitterBackup;
	mEmitterBackup = nullptr;
}

/**
 * @note Address: 0x803B9538
 * @note Size: 0x50
 */
void TParticle2dMgr::setSceneResourceManager(JPAResourceManager* resourceManager)
{
	mActiveEmitter->clearResourceManager(1);
	mActiveEmitter->entryResourceManager(resourceManager, 1);
}

/**
 * @note Address: 0x803B9588
 * @note Size: 0x28
 */
void TParticle2dMgr::clearSceneResourceManager() { mActiveEmitter->clearResourceManager(1); }

/**
 * @note Address: 0x803B95B0
 * @note Size: 0x24
 */
void TParticle2dMgr::update() { mActiveEmitter->calc(); }

/**
 * @note Address: 0x803B95D4
 * @note Size: 0x148
 */
void TParticle2dMgr::draw(u8 a, u16 flag)
{
	if (flag == 1) {
		JPADrawInfo info;
		Mtx iden;
		PSMTXIdentity(iden);
		u16 width  = System::getRenderModeObj()->fbWidth;
		u16 height = System::getRenderModeObj()->efbHeight;
		PSMTXCopy(iden, info.mtx1);
		C_MTXLightOrtho(info.mtx2, 0.0f, height, 0.0f, width, 0.5f, 0.5f, 0.5f, 0.5f);
		mActiveEmitter->draw(&info, (u8)a);
	} else {
		Graphics* gfx = sys->getGfx();
		u16 height    = System::getRenderModeObj()->efbHeight;
		u16 width     = System::getRenderModeObj()->fbWidth;
		f32 fov       = gfx->mPerspGraph.getFovY();

		JPADrawInfo info;
		PSMTXCopy(gfx->mPerspGraph.mPosMtx, info.mtx1);
		C_MTXLightPerspective(info.mtx2, fov, (f32)width / (f32)height, 0.5f, -0.5f, 0.5f, 0.5f);
		mActiveEmitter->draw(&info, (u8)a);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void TParticle2dMgr::setXfb(const ResTIMG*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B971C
 * @note Size: 0x4C
 */
JPABaseEmitter* TParticle2dMgr::create(u16 p1, Vector2<f32>& p2, u8 p3, u8 p4)
{
	JGeometry::TVec3f vec(p2.x, p2.y, 0.0f);
	return mActiveEmitter->createSimpleEmitterID(vec, p1, p3, p4, nullptr, nullptr);
}

/**
 * @note Address: 0x803B9768
 * @note Size: 0x2C
 */
void TParticle2dMgr::kill(JPABaseEmitter* emitter)
{
	if (emitter) {
		mActiveEmitter->forceDeleteEmitter(emitter);
	}
}

/**
 * @note Address: 0x803B9794
 * @note Size: 0x20
 */
void TParticle2dMgr::fade(JPABaseEmitter* emitter)
{
	if (emitter) {
		emitter->mFlags |= 1;
		emitter->mMaxFrame = 1;
	}
}

/**
 * @note Address: 0x803B97B4
 * @note Size: 0x24
 */
void TParticle2dMgr::killAll() { mActiveEmitter->forceDeleteAllEmitter(); }

/**
 * @note Address: 0x803B97D8
 * @note Size: 0x28
 */
void TParticle2dMgr::killGroup(u8 p1) { mActiveEmitter->forceDeleteGroupEmitter((int)p1); }

static const char* dummy = "IP2_dummy";

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TParticle2dMgr::showInfo(s32, s32, s32, s32)
{
	// UNUSED FUNCTION
}