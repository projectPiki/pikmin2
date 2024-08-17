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

TParticle2dMgr* particle2dMgr;
TParticle2dMgr* TParticle2dMgr::_instance;

static void strippedFunc_1()
{
	OSReport("\0\0\0\0\0\0\0\0\0\0\0");
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* name, ...) { OSReport("particle2dMgr"); }

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

	// don't even ASK me about these.
	int b, a;
	a = u1;
	b = u2;

	sys->heapStatusStart("TParticle2dMgr::createMgr", nullptr);
	JKRHeap* backup = JKRGetCurrentHeap();
	mSolidHeap->becomeCurrentHeap();
	const void* file = JKRDvdToMainRam(path, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	JUT_ASSERTLINE(94, file, "ParticleResource (%s) not found\n", path);

	backup->becomeCurrentHeap();

	mResourceManager = new (mSolidHeap, 0) JPAResourceManager(file, mSolidHeap);
	mActiveEmitter   = new (mSolidHeap, 0) JPAEmitterManager(a, b, mSolidHeap, 8, 2);

	mActiveEmitter->entryResourceManager(mResourceManager, 0);
	mSolidHeap->adjustSize();
	sys->heapStatusEnd("TParticle2dMgr::createMgr");
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
JPABaseEmitter* TParticle2dMgr::create(u16 id, Vector2<f32>& p2, u8 group, u8 resMgrId)
{
	JGeometry::TVec3f vec;
	vec.set(p2.x, p2.y, 0.0f);
	return mActiveEmitter->createSimpleEmitterID(vec, id, group, resMgrId, nullptr, nullptr);
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
		emitter->setFlag(JPAEMIT_StopEmitting);
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

static void strippedFunc_2()
{
	OSReport("IP2_dummy");
}
/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TParticle2dMgr::showInfo(s32, s32, s32, s32)
{
	// UNUSED FUNCTION
}
