#include "TexCaster.h"
#include "System.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Dolphin/gx.h"
#include "Game/MapMgr.h"

namespace TexCaster {

static const char unusedName[] = "texCaster";

Mgr* Mgr::sInstance;

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
Caster::Caster()
{
	mTriangleCount    = 0;
	mVertices         = nullptr;
	mDisplayList      = 0;
	mDisplayListSize  = 0;
	mTexturePositions = 0;
	mStatus           = CS_Hidden;
	mColor            = 0.0f;
	mChangeRate       = 0.0f;
}

/**
 * @note Address: 0x8023C95C
 * @note Size: 0x60
 */
Caster::~Caster() { }

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void Caster::show()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8023C9BC
 * @note Size: 0x14
 */
void Caster::hide()
{
	mColor  = 0.0f;
	mStatus = CS_Hidden;
}

/**
 * @note Address: 0x8023C9D0
 * @note Size: 0x80
 */
void Caster::fadein(f32 duration)
{
	P2ASSERTLINE(59, duration > 0.0f);
	mChangeRate = 1.0f / duration;
	mColor      = 0.0f;
	mStatus     = CS_Increasing;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void Caster::fadeout(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void Caster::makeDL()
{
	mDisplayListSize = OSRoundDown32B(mTriangleCount * 12 + 34);
	mDisplayList     = new (0x20) u8[mDisplayListSize];

	int index       = 0;
	mDisplayList[0] = 0x90;
	mDisplayList[1] = 3 * (mTriangleCount >> 16);

	for (int i = 0; i < mTriangleCount; ++i) {
		int j                   = index + 1;
		mDisplayList[index + 3] = (index >> 8) & 0xFF;
		mDisplayList[index + 4] = index & 0xFF;
		mDisplayList[index + 5] = (j >> 8) & 0xFF;
		mDisplayList[index + 6] = j & 0xFF;
		index += 3;
	}

	for (int i = index; i < mDisplayListSize; i += 8) {
		memset(mDisplayList + i, 0, 8);
	}

	DCFlushRange(mDisplayList, mDisplayListSize);
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void Caster::update()
{
	switch (mStatus) {
	case CS_Finished:
		break;
	case CS_Increasing:
		mColor += mChangeRate * sys->mDeltaTime;
		if (mColor >= 1.0f) {
			mColor  = 1.0f;
			mStatus = CS_Finished;
		}
		break;
	case CS_Decreasing:
		mColor -= mChangeRate * sys->mDeltaTime;
		if (mColor <= 0.0f) {
			mColor  = 0.0f;
			mStatus = CS_Hidden;
		}
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x138
 */
void Caster::draw(Graphics& gfx)
{
	update();
	int v = 255.0f * mColor;
	GXColor color;
	color.a = v;
	color.b = v;
	color.g = v;
	color.r = v;
	GXSetTevColor(GX_TEVREG0, color);

	Mgr::sInstance->getTexture(0);
	GXSetArray(GX_VA_POS, mVertices, sizeof(Vector3f));
	GXSetArray(GX_VA_TEX0, mTexturePositions, 8);
	GXCallDisplayList((void*)mDisplayList, mDisplayListSize);
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Caster::drawLine(Graphics&) { }

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
Mgr::Mgr()
    : mTextureCount(0)
    , mTextures(nullptr)
    , mCaster()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
Mgr::~Mgr() { sInstance = nullptr; }

/**
 * @note Address: 0x8023CA50
 * @note Size: 0xA0
 */
void Mgr::globalInstance()
{
	if (!sInstance) {
		sInstance = new Mgr();
		sInstance->loadResource();
	}
}

/**
 * @note Address: 0x8023CAF0
 * @note Size: 0x6C
 */
void Mgr::deleteInstance()
{
	if (sInstance) {
		delete sInstance;
		sInstance = nullptr;
	}
}

/**
 * @note Address: 0x8023CB5C
 * @note Size: 0xE8
 */
void Mgr::loadResource()
{
	JKRArchive* textArc = JKRMountArchive("user/Kando/texCaster/arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(288, textArc);
	mTextureCount = 1;
	mTextures     = new JUTTexture*[mTextureCount];
	ResTIMG* res  = static_cast<ResTIMG*>(JKRFileLoader::getGlbResource("tex.bti", nullptr));
	P2ASSERTLINE(293, res);
	mTextures[0] = new JUTTexture(res);
}

/**
 * @note Address: 0x8023CC44
 * @note Size: 0x550
 */
Caster* Mgr::create(Sys::Sphere& sphere, f32 rotationAngle)
{
	Sys::CreateTriangleArg triArg;
	triArg.mBoundingSphere = sphere;
	triArg.mScale          = 0.22f;
	triArg.mScaleLimit     = 0.5f;
	Game::mapMgr->createTriangles(triArg);

	if (triArg.mCount == 0) {
		triArg.mCount    = 2;
		triArg.mVertices = new Vector3f[6];

		Vector3f spherePos = sphere.mPosition;
		f32 sphereRad      = sphere.mRadius;

		triArg.mVertices[0] = Vector3f(spherePos.x - sphereRad, spherePos.y, spherePos.z - sphereRad);
		triArg.mVertices[1] = Vector3f(spherePos.x + sphereRad, spherePos.y, spherePos.z + sphereRad);
		triArg.mVertices[2] = Vector3f(spherePos.x - sphereRad, spherePos.y, spherePos.z + sphereRad);
		triArg.mVertices[3] = Vector3f(spherePos.x + sphereRad, spherePos.y, spherePos.z - sphereRad);
		triArg.mVertices[4] = Vector3f(spherePos.x - sphereRad, spherePos.y, spherePos.z + sphereRad);
		triArg.mVertices[5] = Vector3f(spherePos.x + sphereRad, spherePos.y, spherePos.z + sphereRad);

		for (int i = 0; i < 6; i++) {
			triArg.mVertices[i].y += triArg.mScale;
		}
	}

	Caster* caster            = new Caster;
	caster->mBoundingSphere   = sphere;
	caster->mVertices         = triArg.mVertices;
	caster->mTriangleCount    = triArg.mCount;
	caster->mTexturePositions = new f32*[caster->mTriangleCount * 6];

	for (int triangleIndex = 0; triangleIndex < caster->mTriangleCount; triangleIndex++) {
		for (int vertexIndex = 0; vertexIndex < 3; vertexIndex++) {
			// Calculate the texture position for each vertex
			Vector3f currentVertex = caster->mVertices[triangleIndex * 3 + vertexIndex];
			f32 deltaZ             = currentVertex.z - sphere.mPosition.z;
			f32 deltaX             = currentVertex.x - sphere.mPosition.x;
			f32 scaleFactor        = (30.0f / sphere.mRadius) * 0.03125f;

			// Rotate the texture coordinates based on some angle rotationAngle
			Vector2f rotationVector(sin(rotationAngle), cos(rotationAngle));

			caster->mTexturePositions[triangleIndex * 3 + vertexIndex] = new f32[2];
			caster->mTexturePositions[triangleIndex * 3 + vertexIndex][0]
			    = 0.5f + ((deltaZ * rotationVector.x + deltaX * rotationVector.y) * scaleFactor);
			caster->mTexturePositions[triangleIndex * 3 + vertexIndex][1]
			    = 0.5f + ((deltaZ * rotationVector.y - deltaX * rotationVector.x) * scaleFactor);
		}
	}

	caster->makeDL();
	mCaster.add(caster);
	return caster;
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stfd     f25, 0xa0(r1)
	psq_st   f25, 168(r1), 0, qr0
	stfd     f24, 0x90(r1)
	psq_st   f24, 152(r1), 0, qr0
	stfd     f23, 0x80(r1)
	psq_st   f23, 136(r1), 0, qr0
	stfd     f22, 0x70(r1)
	psq_st   f22, 120(r1), 0, qr0
	stfd     f21, 0x60(r1)
	psq_st   f21, 104(r1), 0, qr0
	stfd     f20, 0x50(r1)
	psq_st   f20, 88(r1), 0, qr0
	stmw     r23, 0x2c(r1)
	lfs      f0, lbl_8051A5EC@sda21(r2)
	mr       r30, r4
	lfs      f2, lbl_8051A5F0@sda21(r2)
	mr       r29, r3
	stfs     f0, 0x18(r1)
	fmr      f30, f1
	lfs      f0, lbl_8051A5F4@sda21(r2)
	addi     r4, r1, 8
	stfs     f2, 0x1c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f1, 0(r30)
	stfs     f1, 8(r1)
	lfs      f1, 4(r30)
	stfs     f1, 0xc(r1)
	lfs      f1, 8(r30)
	stfs     f1, 0x10(r1)
	lfs      f1, 0xc(r30)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f2, 0x1c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	cmpwi    r0, 0
	bne      lbl_8023CE7C
	li       r0, 2
	li       r3, 0x58
	stw      r0, 0x24(r1)
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	li       r5, 0
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r6, 0xc
	li       r7, 6
	bl       __construct_new_array
	stw      r3, 0x20(r1)
	lfs      f7, lbl_8051A5D8@sda21(r2)
	lfs      f0, 0(r30)
	lfs      f8, 0xc(r30)
	lfs      f1, 4(r30)
	fsubs    f5, f0, f8
	lfs      f2, 8(r30)
	fsubs    f4, f1, f7
	fsubs    f3, f2, f7
	fsubs    f6, f5, f7
	fsubs    f10, f4, f7
	fadds    f9, f0, f8
	stfs     f6, 0(r3)
	fsubs    f11, f3, f8
	fadds    f1, f1, f7
	stfs     f10, 4(r3)
	fadds    f0, f2, f7
	fadds    f2, f5, f7
	stfs     f11, 8(r3)
	fadds    f5, f4, f7
	fadds    f4, f3, f8
	lwz      r3, 0x20(r1)
	fadds    f3, f9, f7
	fadds    f12, f1, f7
	stfs     f2, 0xc(r3)
	fadds    f13, f0, f8
	fsubs    f2, f9, f7
	stfs     f5, 0x10(r3)
	fsubs    f1, f1, f7
	fsubs    f0, f0, f8
	stfs     f4, 0x14(r3)
	lwz      r3, 0x20(r1)
	stfs     f3, 0x18(r3)
	stfs     f12, 0x1c(r3)
	stfs     f13, 0x20(r3)
	lwz      r3, 0x20(r1)
	stfs     f2, 0x24(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	lwz      r3, 0x20(r1)
	stfs     f6, 0x30(r3)
	stfs     f10, 0x34(r3)
	stfs     f11, 0x38(r3)
	lwz      r3, 0x20(r1)
	stfs     f3, 0x3c(r3)
	stfs     f12, 0x40(r3)
	stfs     f13, 0x44(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 4(r3)
	fadds    f0, f1, f0
	stfs     f0, 4(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x10(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x1c(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x28(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x28(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x34(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x34(r3)
	lwz      r3, 0x20(r1)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x40(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x40(r3)

lbl_8023CE7C:
	li       r3, 0x48
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8023CEC4
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29TexCaster6Caster@ha
	li       r0, 0
	addi     r3, r3, __vt__Q29TexCaster6Caster@l
	lfs      f0, lbl_8051A5D8@sda21(r2)
	stw      r3, 0(r31)
	stw      r0, 0x28(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x30(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x38(r31)
	stb      r0, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stfs     f0, 0x44(r31)

lbl_8023CEC4:
	lfs      f0, 0(r30)
	stfs     f0, 0x18(r31)
	lfs      f0, 4(r30)
	stfs     f0, 0x1c(r31)
	lfs      f0, 8(r30)
	stfs     f0, 0x20(r31)
	lfs      f0, 0xc(r30)
	stfs     f0, 0x24(r31)
	lwz      r0, 0x20(r1)
	stw      r0, 0x2c(r31)
	lwz      r0, 0x24(r1)
	stw      r0, 0x28(r31)
	lwz      r0, 0x28(r31)
	mulli    r0, r0, 6
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x38(r31)
	li       r24, 0
	lfs      f29, lbl_8051A5F0@sda21(r2)
	li       r25, 0
	lfs      f27, lbl_8051A5F8@sda21(r2)
	lfs      f28, lbl_8051A5FC@sda21(r2)
	b        lbl_8023CFE0

lbl_8023CF20:
	lfs      f0, 0xc(r30)
	mulli    r27, r25, 0xc
	lfs      f23, 0(r30)
	mr       r26, r25
	fdivs    f0, f28, f0
	lfs      f22, 8(r30)
	slwi     r28, r25, 3
	li       r23, 0
	fmuls    f31, f27, f0

lbl_8023CF44:
	lwz      r0, 0x2c(r31)
	fmr      f1, f30
	add      r3, r0, r27
	lfs      f2, 0(r3)
	lfs      f0, 8(r3)
	fsubs    f21, f2, f23
	fsubs    f20, f0, f22
	bl       sin
	frsp     f26, f1
	fmr      f1, f30
	bl       cos
	frsp     f25, f1
	fmr      f1, f30
	bl       cos
	frsp     f24, f1
	fmr      f1, f30
	bl       sin
	frsp     f2, f1
	addi     r23, r23, 1
	fmuls    f1, f21, f24
	lwz      r3, 0x38(r31)
	fmuls    f0, f21, f26
	cmpwi    r23, 3
	fmadds   f1, f20, f2, f1
	addi     r0, r28, 4
	fmsubs   f2, f20, f25, f0
	addi     r26, r26, 1
	addi     r27, r27, 0xc
	fmuls    f0, f1, f31
	fmuls    f2, f2, f31
	fadds    f1, f29, f0
	fadds    f0, f29, f2
	stfsx    f1, r3, r28
	addi     r28, r28, 8
	lwz      r3, 0x38(r31)
	stfsx    f0, r3, r0
	blt      lbl_8023CF44
	addi     r25, r25, 3
	addi     r24, r24, 1

lbl_8023CFE0:
	lwz      r0, 0x28(r31)
	cmpw     r24, r0
	blt      lbl_8023CF20
	mulli    r3, r0, 0xc
	li       r4, 0x20
	addi     r0, r3, 0x22
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r0, 0x34(r31)
	lwz      r3, 0x34(r31)
	bl       __nwa__FUli
	stw      r3, 0x30(r31)
	li       r4, 0
	li       r0, 0x90
	lwz      r8, 0x30(r31)
	mr       r7, r4
	lwz      r3, 0x34(r31)
	addi     r6, r8, 3
	stb      r0, 0(r8)
	add      r5, r8, r3
	lwz      r0, 0x28(r31)
	mulli    r0, r0, 3
	srawi    r0, r0, 8
	stb      r0, 1(r8)
	lwz      r0, 0x28(r31)
	mulli    r0, r0, 3
	stb      r0, 2(r8)
	b        lbl_8023D09C

lbl_8023D04C:
	rlwinm   r8, r7, 0x18, 0x18, 0x1f
	addi     r3, r7, 1
	stb      r8, 0(r6)
	addi     r0, r7, 2
	rlwinm   r9, r3, 0x18, 0x18, 0x1f
	addi     r4, r4, 1
	stb      r7, 1(r6)
	rlwinm   r10, r0, 0x18, 0x18, 0x1f
	stb      r8, 2(r6)
	stb      r7, 3(r6)
	addi     r7, r7, 3
	stb      r9, 4(r6)
	stb      r3, 5(r6)
	stb      r9, 6(r6)
	stb      r3, 7(r6)
	stb      r10, 8(r6)
	stb      r0, 9(r6)
	stb      r10, 0xa(r6)
	stb      r0, 0xb(r6)
	addi     r6, r6, 0xc

lbl_8023D09C:
	lwz      r0, 0x28(r31)
	cmpw     r4, r0
	blt      lbl_8023D04C
	cmplw    r6, r5
	subf     r3, r6, r5
	li       r4, 0
	bge      lbl_8023D104
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_8023D0F4

lbl_8023D0C4:
	stb      r4, 0(r6)
	stb      r4, 1(r6)
	stb      r4, 2(r6)
	stb      r4, 3(r6)
	stb      r4, 4(r6)
	stb      r4, 5(r6)
	stb      r4, 6(r6)
	stb      r4, 7(r6)
	addi     r6, r6, 8
	bdnz     lbl_8023D0C4
	andi.    r3, r3, 7
	beq      lbl_8023D104

lbl_8023D0F4:
	mtctr    r3

lbl_8023D0F8:
	stb      r4, 0(r6)
	addi     r6, r6, 1
	bdnz     lbl_8023D0F8

lbl_8023D104:
	lwz      r3, 0x30(r31)
	lwz      r4, 0x34(r31)
	bl       DCFlushRange
	mr       r4, r31
	addi     r3, r29, 8
	bl       add__5CNodeFP5CNode
	mr       r3, r31
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	psq_l    f25, 168(r1), 0, qr0
	lfd      f25, 0xa0(r1)
	psq_l    f24, 152(r1), 0, qr0
	lfd      f24, 0x90(r1)
	psq_l    f23, 136(r1), 0, qr0
	lfd      f23, 0x80(r1)
	psq_l    f22, 120(r1), 0, qr0
	lfd      f22, 0x70(r1)
	psq_l    f21, 104(r1), 0, qr0
	lfd      f21, 0x60(r1)
	psq_l    f20, 88(r1), 0, qr0
	lfd      f20, 0x50(r1)
	lmw      r23, 0x2c(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void Mgr::getTexture(int idx)
{
	P2ASSERTLINE(410, mTextureCount > 0);
	mTextures[idx]->load(GX_TEXMAP0);
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void Mgr::drawInit(Graphics& gfx)
{
	GXSetCullMode(GX_CULL_NONE);
	GXClearVtxDesc();
	GXSetNumTexGens(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_C0, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_DIVIDE_2, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_A0, GX_CA_TEXA, GX_CA_ZERO);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetVtxDesc(GX_VA_POS, GX_INDEX16);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX16);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
}

/**
 * @note Address: 0x8023D194
 * @note Size: 0x288
 */
void Mgr::draw(Graphics& gfx)
{
	drawInit(gfx);

	Caster* child = static_cast<Caster*>(mCaster.mChild);
	for (child; child; child = static_cast<Caster*>(child->mNext)) {
		child->draw(gfx);
	}
}

} // namespace TexCaster
