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
void _Print(char* name, ...) { OSReport("particleMgr"); }

ParticleMgr* particleMgr;
bool ParticleMgr::disableCulling;
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
void ParticleMgr::Instance_TPkEffectMgr() { efx::TPkEffectMgr::globalInstance(); }

/**
 * @note Address: 0x803BB6A8
 * @note Size: 0x20
 */
void ParticleMgr::deleteInstance_TPkEffectMgr() { efx::TPkEffectMgr::deleteInstance(); }

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
void ParticleMgr::endEntryModelEffect() { mModelEffectHeap->becomeCurrentHeap(); }

/**
 * @note Address: 0x803BB718
 * @note Size: 0x24
 */
void ParticleMgr::start() { pkEffectMgr->startMgr(); }

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
void ParticleMgr::killAll() { mEmitterManager->forceDeleteAllEmitter(); }

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
void ParticleMgr::setXfb(const ResTIMG* tex) { mResourceManager->swapTexture(tex, "IP2_dummy"); }

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

	Game::GameLightMgr* mgr = getLightMgr();
	if (!mgr)
		return;

	if (!(flag & 2))
		return;

	LightObj* obj = mgr->getMainLight();

	GXColor color2;
	color2.r = mgr->mAmbientLight.mColor.r;
	color2.g = mgr->mAmbientLight.mColor.g;
	color2.b = mgr->mAmbientLight.mColor.b;

	GXColor color1;
	color1.r = obj->mColor.r;
	color1.g = obj->mColor.g;
	color1.b = obj->mColor.b;

	int red = (color1.r + color2.r) * 2;
	if (red > 255) {
		red = 255;
	}
	u8 red2 = red;

	int green = (color1.g + color2.g) * 2;
	if (green > 255) {
		green = 255;
	}
	u8 green2 = green;

	int blue = (color1.b + color2.b) * 2;
	if (blue > 255) {
		blue = 255;
	}
	u8 blue2 = blue;

	emit->setColorRGB(red2, green2, blue2);
	emit->setGlobalEnvColor(red2, green2, blue2);

	/*
	cmplwi   r4, 0
	beqlr
	lwz      r5, 0xe8(r4)
	lwz      r7, 0x18(r3)
	lwz      r3, 0x2c(r5)
	cmplwi   r7, 0
	lwz      r3, 0(r3)
	lwz      r0, 0xc(r3)
	beqlr
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beqlr
	lwz      r5, 0x50(r7)
	lbz      r0, 0x30(r7)
	lbz      r3, 0x34(r5)
	lbz      r6, 0x31(r7)
	add      r0, r3, r0
	lbz      r3, 0x32(r7)
	slwi     r7, r0, 1
	lbz      r0, 0x35(r5)
	cmpwi    r7, 0xff
	lbz      r5, 0x36(r5)
	ble      lbl_803BBA34
	li       r7, 0xff

lbl_803BBA34:
	add      r0, r0, r6
	clrlwi   r6, r7, 0x18
	slwi     r7, r0, 1
	cmpwi    r7, 0xff
	ble      lbl_803BBA4C
	li       r7, 0xff

lbl_803BBA4C:
	add      r0, r5, r3
	clrlwi   r3, r7, 0x18
	slwi     r0, r0, 1
	cmpwi    r0, 0xff
	ble      lbl_803BBA64
	li       r0, 0xff

lbl_803BBA64:
	stb      r6, 0xb8(r4)
	stb      r3, 0xb9(r4)
	stb      r0, 0xba(r4)
	stb      r6, 0xbc(r4)
	stb      r3, 0xbd(r4)
	stb      r0, 0xbe(r4)
	blr
	*/
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
void ParticleMgr::setDemoResourceManager(JPAResourceManager* mgr) { mEmitterManager->entryResourceManager(mgr, 7); }

/**
 * @note Address: 0x803BBB00
 * @note Size: 0x28
 */
void ParticleMgr::clearDemoResourceManager() { mEmitterManager->clearResourceManager(7); }

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

	Vector3f pos(emit->mGlobalTrs.x, emit->mGlobalTrs.y, emit->mGlobalTrs.z);
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, disableCulling__11ParticleMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803BBD10
	li       r3, 0
	b        lbl_803BBE48

lbl_803BBD10:
	lwz      r3, 0xe8(r31)
	lwz      r3, 0x2c(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0xc(r3)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_803BBD40
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_803BBD38
	lfs      f3, mClipRadiusL__11ParticleMgr@sda21(r13)
	b        lbl_803BBD58

lbl_803BBD38:
	lfs      f3, mClipRadiusM__11ParticleMgr@sda21(r13)
	b        lbl_803BBD58

lbl_803BBD40:
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_803BBD50
	lfs      f3, mClipRadiusS__11ParticleMgr@sda21(r13)
	b        lbl_803BBD58

lbl_803BBD50:
	li       r3, 0
	b        lbl_803BBE48

lbl_803BBD58:
	lbz      r0, disableCulling__11ParticleMgr@sda21(r13)
	lfs      f2, 0xa4(r31)
	lfs      f1, 0xa8(r31)
	cmplwi   r0, 0
	lfs      f0, 0xac(r31)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f3, 0x14(r1)
	beq      lbl_803BBD94
	li       r0, 0
	b        lbl_803BBDF4

lbl_803BBD94:
	li       r28, 0
	mr       r26, r30
	mr       r29, r28
	b        lbl_803BBDDC

lbl_803BBDA4:
	lwz      r3, 0x84(r26)
	lwz      r27, 0x44(r3)
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBDD4
	mr       r3, r27
	addi     r4, r1, 8
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBDD4
	li       r28, 1
	b        lbl_803BBDE8

lbl_803BBDD4:
	addi     r26, r26, 4
	addi     r29, r29, 1

lbl_803BBDDC:
	lwz      r0, 0x80(r30)
	cmpw     r29, r0
	blt      lbl_803BBDA4

lbl_803BBDE8:
	clrlwi   r0, r28, 0x18
	cntlzw   r0, r0
	srwi     r0, r0, 5

lbl_803BBDF4:
	clrlwi   r0, r0, 0x18
	cntlzw   r3, r0
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r3, r3, 5
	beq      lbl_803BBE24
	lwz      r0, 0xf4(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xf4(r31)
	lwz      r0, 0xf4(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0xf4(r31)
	b        lbl_803BBE3C

lbl_803BBE24:
	lwz      r0, 0xf4(r31)
	ori      r0, r0, 4
	stw      r0, 0xf4(r31)
	lwz      r0, 0xf4(r31)
	ori      r0, r0, 1
	stw      r0, 0xf4(r31)

lbl_803BBE3C:
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_803BBE48:
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
