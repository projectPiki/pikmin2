#include "ParticleMgr.h"
#include "System.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "efx/TPk.h"
#include "Camera.h"
#include "JSystem/JParticle/JPABlock.h"
#include "Light.h"
#include "Game/GameLight.h"
#include "Game/cellPyramid.h"
#include "nans.h"

static const u32 padding[] = { 0, 0, 0 };

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* name, ...)
{
	OSReport("particleMgr");
}

ParticleMgr* particleMgr;
volatile bool ParticleMgr::disableCulling;
f32 ParticleMgr::mClipRadiusS = 10.0f;
f32 ParticleMgr::mClipRadiusM = 30.0f;
f32 ParticleMgr::mClipRadiusL = 100.0f;

/**
 * @note Address: 0x803BAF70
 * @note Size: 0x44
 */
void ParticleMgr::globalInstance()
{
	if (!particleMgr) {
		particleMgr = new ParticleMgr;
	}
}

/**
 * @note Address: 0x803BAFB4
 * @note Size: 0x48
 */
void ParticleMgr::deleteInstance()
{
	if (particleMgr) {
		delete particleMgr;
		particleMgr = nullptr;
	}
}

/**
 * @note Address: 0x803BAFFC
 * @note Size: 0x114
 */
ParticleMgr::ParticleMgr()
{
	mName                    = "ParticleMgr";
	mHeap                    = nullptr;
	mEmitterManager          = nullptr;
	mResourceManager         = nullptr;
	mReferencedViewportCount = 0;
	mUnusedVal               = 200;
	mLightMgr                = nullptr;
}

/**
 * @note Address: 0x803BB3A0
 * @note Size: 0x12C
 */
ParticleMgr::~ParticleMgr()
{
	mLightMgr = nullptr;
	mHeap     = nullptr;
}

/**
 * @note Address: 0x803BB4CC
 * @note Size: 0x70
 */
void ParticleMgr::createHeap(u32 size)
{
	P2ASSERTLINE(202, !mHeap);
	mHeap = JKRSolidHeap::create(size, JKRGetCurrentHeap(), true);
}

/**
 * @note Address: 0x803BB53C
 * @note Size: 0x14C
 */
void ParticleMgr::createMgr(char* path, u32 flag1, u32 flag2, u32)
{
	JUT_ASSERTLINE(209, mHeap, "effect heap not allocated !\n");

	// don't even ASK me about these.
	int b, a;
	a = flag1;
	b = flag2;

	sys->heapStatusStart("particleMgr", mHeap);
	JKRHeap* oldheap = JKRGetCurrentHeap();
	mHeap->becomeCurrentHeap();

	void* file = JKRDvdToMainRam(path, nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	JUT_ASSERTLINE(223, file, "ParticleResource (%s) not found\n", path);
	oldheap->becomeCurrentHeap();

	mResourceManager = new (mHeap, 0) JPAResourceManager(file, mHeap);
	mEmitterManager  = new (mHeap, 0) JPAEmitterManager(a, b, mHeap, 9, 8);
	mEmitterManager->entryResourceManager(mResourceManager, 0);

	sys->heapStatusEnd("particleMgr");
}

/**
 * @note Address: 0x803BB688
 * @note Size: 0x20
 */
void ParticleMgr::Instance_TPkEffectMgr()
{
	efx::TPkEffectMgr::globalInstance();
}

/**
 * @note Address: 0x803BB6A8
 * @note Size: 0x20
 */
void ParticleMgr::deleteInstance_TPkEffectMgr()
{
	efx::TPkEffectMgr::deleteInstance();
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void ParticleMgr::destroyHeap()
{
	mHeap->destroy();
	mHeap = nullptr;
	// unused, probably something like this
}

/**
 * @note Address: 0x803BB6C8
 * @note Size: 0x2C
 */
void ParticleMgr::beginEntryModelEffect()
{
	mModelEffectHeap = JKRGetCurrentHeap();
	mHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x803BB6F4
 * @note Size: 0x24
 */
void ParticleMgr::endEntryModelEffect()
{
	mModelEffectHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x803BB718
 * @note Size: 0x24
 */
void ParticleMgr::start()
{
	pkEffectMgr->startMgr();
}

/**
 * @note Address: 0x803BB73C
 * @note Size: 0x58
 */
void ParticleMgr::reset()
{
	if (pkEffectMgr) {
		pkEffectMgr->exitMgr();
	}
	mModelEffectMgr.resetMgr();
	mLightMgr = nullptr;
}

/**
 * @note Address: 0x803BB794
 * @note Size: 0x24
 */
void ParticleMgr::killAll()
{
	mEmitterManager->forceDeleteAllEmitter();
}

/**
 * @note Address: 0x803BB7B8
 * @note Size: 0x2C
 */
void ParticleMgr::update()
{
	mEmitterManager->calc();
	pkEffectMgr->resetContextS();
}

/**
 * @note Address: 0x803BB7E4
 * @note Size: 0x2C
 */
void ParticleMgr::setXfb(const ResTIMG* tex)
{
	mResourceManager->swapTexture(tex, "IP2_dummy");
}

/**
 * @note Address: 0x803BB810
 * @note Size: 0xA4
 */
void ParticleMgr::draw(Viewport* vp, u8 flag)
{
	f32 x, y;
	y = vp->mCamera->mAspectRatio;
	x = vp->mCamera->mViewAngle;
	JPADrawInfo info;
	PSMTXCopy(vp->getMatrix(1)->mMatrix.mtxView, info.mtx1);
	C_MTXLightPerspective(info.mtx2, x, y, 0.5f, -0.5f, 0.5f, 0.5f);
	mEmitterManager->draw(&info, flag);
}

/**
 * @note Address: 0x803BB8B4
 * @note Size: 0xC8
 */
JPABaseEmitter* ParticleMgr::create(u16 id, Vector3f& position, u8 flag)
{
	u32 res = (u32)mResourceManager->getResUserWork(id);
	u8 type;
	if (res & 4) {
		type = 0;
	} else if (res & 1) {
		type = 1;
	} else {
		type = 2;
	}
	if (type == 0 && mActiveViewportCount >= 2) {
		return nullptr;
	} else {
		JPABaseEmitter* emit = mEmitterManager->createSimpleEmitterID((JGeometry::TVec3f&)position, id, type, flag, nullptr, nullptr);
		setGlobalColor(emit);
		return emit;
	}
}

/**
 * @note Address: 0x803BB97C
 * @note Size: 0x5C
 */
JPABaseEmitter* ParticleMgr::createDemo(u16 id, Vector3f& position, u8 flag1, u8 flag2)
{
	JPABaseEmitter* emit = mEmitterManager->createSimpleEmitterID((JGeometry::TVec3f&)position, id, flag1, flag2, nullptr, nullptr);
	setGlobalColor(emit);
	return emit;
}

/**
 * @note Address: 0x803BB9D8
 * @note Size: 0xA8
 */
void ParticleMgr::setGlobalColor(JPABaseEmitter* emit)
{
	if (!emit)
		return;
	u32 flag = emit->mResource->getDyn()->getResUserWork();

	Game::GameLightMgr* mgr = mLightMgr;
	if (!mgr)
		return;

	if (!(flag & 2))
		return;

	LightObj* obj = mgr->getMainLight();

	Color4 c2 = mgr->mAmbientLight.mColor;
	Color4 c1 = obj->mColor;

	int red = (c1.r + c2.r) * 2;
	if (red > 255) {
		red = 255;
	}
	u8 red2 = red;

	int green = (c1.g + c2.g) * 2;
	if (green > 255) {
		green = 255;
	}
	u8 green2 = green;

	int blue = (c1.b + c2.b) * 2;
	if (blue > 255) {
		blue = 255;
	}
	u8 blue2 = blue;

	emit->setColorRGB(red2, green2, blue2);
	emit->setGlobalEnvColor(red2, green2, blue2);
}

/**
 * @note Address: 0x803BBA80
 * @note Size: 0x2C
 */
void ParticleMgr::forceKill(JPABaseEmitter* emit)
{
	if (emit) {
		mEmitterManager->forceDeleteEmitter(emit);
	}
}

/**
 * @note Address: 0x803BBAAC
 * @note Size: 0x2C
 */
void ParticleMgr::fade(JPABaseEmitter* emit)
{
	if (!emit)
		return;

	emit->mFlags |= 1;
	emit->mMaxFrame = 1;
	emit->mFlags &= ~0x40;
}

/**
 * @note Address: 0x803BBAD8
 * @note Size: 0x28
 */
void ParticleMgr::setDemoResourceManager(JPAResourceManager* mgr)
{
	mEmitterManager->entryResourceManager(mgr, 7);
}

/**
 * @note Address: 0x803BBB00
 * @note Size: 0x28
 */
void ParticleMgr::clearDemoResourceManager()
{
	mEmitterManager->clearResourceManager(7);
}

/**
 * @note Address: 0x803BBB28
 * @note Size: 0xA8
 */
void ParticleMgr::setViewport(Graphics& gfx)
{
	int max = gfx.getViewportNum();
	P2ASSERTBOUNDSLINE(504, 0, max, 4);

	mReferencedViewportCount = max;

	for (int i = 0; i < max; i++) {
		mViewports[i] = gfx.getViewport(i);
	}
	mActiveViewportCount = gfx.getNumActiveViewports();
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
bool ParticleMgr::cull(Sys::Sphere& bound)
{
	if (disableCulling)
		return false;

	bool culled = false;
	for (int i = 0; i < mReferencedViewportCount; i++) {
		CullPlane* plane = mViewports[i]->getCamera();
		if (mViewports[i]->viewable() && plane->isVisible(bound)) {
			culled = true;
			break;
		}
	}
	return !culled;
}

/**
 * @note Address: 0x803BBBD0
 * @note Size: 0x114
 */
bool ParticleMgr::cullByResFlg(Vector3f& pos, u16 id)
{
	if (disableCulling)
		return false;

	Sys::Sphere bound;
	u32 flag = (u32)mResourceManager->getResUserWork(id);
	f32 radius;
	if (flag & 0x20) {
		if (flag & 0x10) {
			radius = mClipRadiusL;
		} else {
			radius = mClipRadiusM;
		}
	} else if (flag & 0x10) {
		radius = mClipRadiusS;
	} else {
		return false;
	}

	bound.mPosition = pos;
	bound.mRadius   = radius;
	return cull(bound);
}

/**
 * @note Address: 0x803BBCE4
 * @note Size: 0x178
 */
bool ParticleMgr::cullByResFlg(JPABaseEmitter* emit)
{
	if (disableCulling)
		return false;

	u32 flag = emit->mResource->mDynamicsBlock->getResUserWork();
	f32 radius;
	if (flag & 0x20) {
		if (flag & 0x10) {
			radius = mClipRadiusL;
		} else {
			radius = mClipRadiusM;
		}
	} else if (flag & 0x10) {
		radius = mClipRadiusS;
	} else {
		return false;
	}

	// It is a crime against humanity that this code matches lolol
	Vector3f pos;
	pos.x            = emit->mGlobalTrs.x;
	pos.y            = emit->mGlobalTrs.y;
	pos.z            = emit->mGlobalTrs.z;
	Vector3f* posPtr = &pos;
	Sys::Sphere bound(pos, radius);

	bool culled = !cull(bound);
	if (culled) {
		emit->mFlags &= ~4;
		emit->mFlags &= ~1;
	} else {
		emit->mFlags |= 4;
		emit->mFlags |= 1;
	}

	return !culled;
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void ParticleMgr::cullCylinder(Sys::Cylinder&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void ParticleMgr::draw2d()
{
	// UNUSED FUNCTION
}
