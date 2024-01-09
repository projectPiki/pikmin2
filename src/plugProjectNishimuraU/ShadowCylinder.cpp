#include "Game/shadowMgr.h"
#include "Game/GameSystem.h"
#include "System.h"
#include "trig.h"
#include "nans.h"
#include "JSystem/JUtility/JUTTexture.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "246-ShadowCylinder";
namespace Game {

// clang-format off
u8 sHighCylinderDL[] = {
	GX_TRIANGLEFAN,   0, 12, 0, 0,  0, 1,  0, 2,  0, 3,  0, 4,  0, 5,  0, 6,  0, 7,  0, 8,  0, 9,  0, 10, 0, 11,
	GX_TRIANGLEFAN,   0, 12, 0, 23, 0, 22, 0, 21, 0, 20, 0, 19, 0, 18, 0, 17, 0, 16, 0, 15, 0, 14, 0, 13, 0, 12,
	GX_TRIANGLESTRIP, 0, 26, 0, 0,  0, 12, 0, 1,  0, 13, 0, 2,  0, 14, 0, 3,  0, 15, 0, 4,  0, 16, 0, 5,  0, 17, 0, 6, 0, 18, 0, 7, 0, 19, 0, 8, 0, 20, 0, 9, 0, 21, 0, 10, 0, 22, 0, 11, 0, 23,
	 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

u8 sMidCylinderDL[] = {
	GX_TRIANGLEFAN,   0, 8, 0, 24, 0, 25, 0, 26, 0, 27,  0, 28,  0, 29,  0, 30,  0, 31,
	GX_TRIANGLEFAN,   0, 8, 0, 39, 0, 38, 0, 37, 0, 36, 0, 35, 0, 34, 0, 33, 0, 32,
	GX_TRIANGLESTRIP, 0, 18, 0, 24, 0, 32, 0, 25, 0, 33, 0, 26, 0, 34, 0, 27, 0, 35, 0, 28, 0, 36, 0, 29, 0, 37, 0, 30, 0, 38, 0, 31, 0, 39, 0, 24, 0, 32, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

u8 sLowCylinderDL[] = {
	GX_TRIANGLEFAN,   0, 4, 0, 40, 0, 41, 0, 42, 0, 43,  
	GX_TRIANGLEFAN,   0, 4, 0, 47, 0, 46, 0, 45, 0, 44,
	GX_TRIANGLESTRIP, 0, 10, 0, 40, 0, 44, 0, 41, 0, 45, 0, 42, 0, 46, 0, 43, 0, 47, 0, 40, 0, 44, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};
// clang-format on

static f32 sCylinderVertPos[30];

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
CylinderList::CylinderList(int index)
{
	mTriangleCount = 0;
	mDLData        = nullptr;
	mSize          = 0;
	switch (index) {
	case 0:
		mTriangleCount = 12;
		mDLData        = sHighCylinderDL;
		mSize          = 141;
		break;
	case 1:
		mTriangleCount = 8;
		mDLData        = sMidCylinderDL;
		mSize          = 109;
		break;
	case 2:
		mTriangleCount = 4;
		mDLData        = sLowCylinderDL;
		mSize          = 77;
		break;
	}
	P2ASSERTBOOLLINE(188, mTriangleCount && mDLData && mSize);
}

/**
 * @note Address: N/A
 * @note Size: 0x210
 */
void CylinderList::createCylinder(int cylinderType, f32 radius)
{
	// THIS NEEDS TO BE AN INLINE!
	int vertexIndex = 0;
	switch (cylinderType) {
	case 1:
		vertexIndex = 72;
		break;
	case 0:
	case 2:
		vertexIndex = 120;
		break;
	default:
		break;
	}

	f32 angleStep = TAU / mTriangleCount;
	for (int i = 0; i < mTriangleCount; i++) {
		f32 currentAngle  = i * angleStep;
		f32 adjustedAngle = currentAngle - (angleStep * 0.5f);

		sCylinderVertPos[vertexIndex]     = radius * cosf(adjustedAngle);
		sCylinderVertPos[vertexIndex + 1] = 0.0f;
		sCylinderVertPos[vertexIndex + 2] = radius * sinf(adjustedAngle);

		int bottomVertexIndex = vertexIndex + (i + mTriangleCount) * 3;

		sCylinderVertPos[bottomVertexIndex]     = radius * cosf(adjustedAngle);
		sCylinderVertPos[bottomVertexIndex + 1] = -1.0f;
		sCylinderVertPos[bottomVertexIndex + 2] = radius * sinf(adjustedAngle);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void CylinderList::draw()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8023DA30
 * @note Size: 0x4DC
 */
CylinderBase::CylinderBase()
{
	mDisplayListObj = new CylinderList*[3];
	for (int i = 0; i < 3; i++) {
		f32 radius = getRadius(i);

		mDisplayListObj[i] = new CylinderList(i);
		mDisplayListObj[i]->createCylinder(i, radius);
	}

	u16 y = sys->getRenderModeObj()->efbHeight;
	u16 x = sys->getRenderModeObj()->fbWidth;

	mScreenBounds.p1.x = 0.0f;
	mScreenBounds.p1.y = 0.0f;
	mScreenBounds.p2.x = x;
	mScreenBounds.p2.y = y;

	for (int i = 0; i < 2; i++) {
		mCamPosition[i]   = Vector3f(0.0f, 0.0f, 1.0f);
		mCamLookAt[i]     = Vector3f(0.0f, 0.0f, 1.0f);
		mCameraSizeMod[i] = 12800.0f;
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stmw     r24, 0x40(r1)
	lis      r4, __vt__Q24Game12CylinderBase@ha
	mr       r24, r3
	addi     r0, r4, __vt__Q24Game12CylinderBase@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	stw      r0, 0(r24)
	lis      r3, lbl_804C1780@ha
	li       r5, 0
	addi     r27, r3, lbl_804C1780@l
	li       r6, 0xc
	addi     r3, r24, 0x20
	li       r7, 2
	bl       __construct_array
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r3, r24, 0x38
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 2
	bl       __construct_array
	li       r3, 0xc
	bl       __nwa__FUl
	lis      r5, sincosTable___5JMath@ha
	lis      r4, sCylinderVertPos__4Game@ha
	stw      r3, 4(r24)
	addi     r30, r5, sincosTable___5JMath@l
	lfd      f29, lbl_8051A638@sda21(r2)
	addi     r31, r4, sCylinderVertPos__4Game@l
	lfs      f30, lbl_8051A620@sda21(r2)
	li       r25, 0
	lfs      f31, lbl_8051A624@sda21(r2)
	li       r26, 0
	lfs      f24, lbl_8051A62C@sda21(r2)
	lis      r29, 0x4330
	lfs      f26, lbl_8051A618@sda21(r2)
	lfd      f27, lbl_8051A630@sda21(r2)
	lfs      f28, lbl_8051A61C@sda21(r2)

lbl_8023DB14:
	cmpwi    r25, 1
	lfs      f25, lbl_8051A640@sda21(r2)
	beq      lbl_8023DB40
	bge      lbl_8023DB30
	cmpwi    r25, 0
	bge      lbl_8023DB4C
	b        lbl_8023DB4C

lbl_8023DB30:
	cmpwi    r25, 3
	bge      lbl_8023DB4C
	b        lbl_8023DB48
	b        lbl_8023DB4C

lbl_8023DB40:
	lfs      f25, lbl_8051A644@sda21(r2)
	b        lbl_8023DB4C

lbl_8023DB48:
	lfs      f25, lbl_8051A648@sda21(r2)

lbl_8023DB4C:
	li       r3, 0xc
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8023DC30
	li       r0, 0
	cmpwi    r25, 1
	stb      r0, 0(r28)
	stw      r0, 4(r28)
	stw      r0, 8(r28)
	beq      lbl_8023DBAC
	bge      lbl_8023DB84
	cmpwi    r25, 0
	bge      lbl_8023DB90
	b        lbl_8023DBE0

lbl_8023DB84:
	cmpwi    r25, 3
	bge      lbl_8023DBE0
	b        lbl_8023DBC8

lbl_8023DB90:
	li       r0, 0xc
	addi     r3, r27, 0x20
	stb      r0, 0(r28)
	li       r0, 0x8d
	stw      r3, 4(r28)
	stw      r0, 8(r28)
	b        lbl_8023DBE0

lbl_8023DBAC:
	li       r0, 8
	addi     r3, r27, 0xc0
	stb      r0, 0(r28)
	li       r0, 0x6d
	stw      r3, 4(r28)
	stw      r0, 8(r28)
	b        lbl_8023DBE0

lbl_8023DBC8:
	li       r0, 4
	addi     r3, r27, 0x140
	stb      r0, 0(r28)
	li       r0, 0x4d
	stw      r3, 4(r28)
	stw      r0, 8(r28)

lbl_8023DBE0:
	lbz      r0, 0(r28)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_8023DC0C
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_8023DC0C
	lwz      r0, 8(r28)
	cmpwi    r0, 0
	beq      lbl_8023DC0C
	li       r3, 1

lbl_8023DC0C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8023DC30
	lis      r3, lbl_80483F78@ha
	lis      r5, lbl_80483F8C@ha
	addi     r3, r3, lbl_80483F78@l
	li       r4, 0xbc
	addi     r5, r5, lbl_80483F8C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023DC30:
	lwz      r3, 4(r24)
	cmpwi    r25, 1
	li       r0, 0
	stwx     r28, r3, r26
	lwz      r3, 4(r24)
	lwzx     r4, r3, r26
	beq      lbl_8023DC6C
	bge      lbl_8023DC5C
	cmpwi    r25, 0
	bge      lbl_8023DC78
	b        lbl_8023DC78

lbl_8023DC5C:
	cmpwi    r25, 3
	bge      lbl_8023DC78
	b        lbl_8023DC74
	b        lbl_8023DC78

lbl_8023DC6C:
	li       r0, 0x48
	b        lbl_8023DC78

lbl_8023DC74:
	li       r0, 0x78

lbl_8023DC78:
	lbz      r7, 0(r4)
	mr       r5, r0
	stw      r29, 8(r1)
	slwi     r6, r0, 2
	li       r3, 0
	stw      r7, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f27
	fdivs    f1, f26, f0
	fmuls    f0, f1, f28
	b        lbl_8023DE0C

lbl_8023DCA4:
	xoris    r7, r3, 0x8000
	stw      r29, 8(r1)
	add      r9, r3, r8
	stw      r7, 0xc(r1)
	lfd      f2, 8(r1)
	fsubs    f2, f2, f29
	fmuls    f4, f2, f1
	fsubs    f3, f4, f0
	fmr      f2, f3
	fcmpo    cr0, f3, f30
	bge      lbl_8023DCD4
	fneg     f2, f3

lbl_8023DCD4:
	fmuls    f2, f2, f31
	add      r10, r31, r6
	fcmpo    cr0, f3, f30
	fctiwz   f2, f2
	stfd     f2, 0x10(r1)
	lwz      r7, 0x14(r1)
	rlwinm   r7, r7, 3, 0x12, 0x1c
	add      r7, r30, r7
	lfs      f2, 4(r7)
	fmuls    f2, f25, f2
	stfs     f2, 0(r10)
	stfs     f30, 4(r10)
	bge      lbl_8023DD34
	lfs      f2, lbl_8051A628@sda21(r2)
	lis      r7, sincosTable___5JMath@ha
	addi     r7, r7, sincosTable___5JMath@l
	fmuls    f2, f3, f2
	fctiwz   f2, f2
	stfd     f2, 0x18(r1)
	lwz      r8, 0x1c(r1)
	rlwinm   r8, r8, 3, 0x12, 0x1c
	lfsx     f2, r7, r8
	fneg     f2, f2
	b        lbl_8023DD54

lbl_8023DD34:
	fmuls    f2, f3, f31
	lis      r7, sincosTable___5JMath@ha
	addi     r7, r7, sincosTable___5JMath@l
	fctiwz   f2, f2
	stfd     f2, 0x20(r1)
	lwz      r8, 0x24(r1)
	rlwinm   r8, r8, 3, 0x12, 0x1c
	lfsx     f2, r7, r8

lbl_8023DD54:
	fmuls    f2, f25, f2
	fmr      f3, f4
	fcmpo    cr0, f4, f30
	stfs     f2, 8(r10)
	bge      lbl_8023DD6C
	fneg     f3, f4

lbl_8023DD6C:
	fmuls    f2, f3, f31
	mulli    r7, r9, 3
	fcmpo    cr0, f4, f30
	fctiwz   f2, f2
	add      r7, r0, r7
	slwi     r7, r7, 2
	add      r9, r31, r7
	stfd     f2, 0x28(r1)
	lwz      r7, 0x2c(r1)
	rlwinm   r7, r7, 3, 0x12, 0x1c
	add      r7, r30, r7
	lfs      f2, 4(r7)
	fmuls    f2, f25, f2
	stfs     f2, 0(r9)
	stfs     f24, 4(r9)
	bge      lbl_8023DDD8
	lfs      f2, lbl_8051A628@sda21(r2)
	lis      r7, sincosTable___5JMath@ha
	addi     r7, r7, sincosTable___5JMath@l
	fmuls    f2, f4, f2
	fctiwz   f2, f2
	stfd     f2, 0x30(r1)
	lwz      r8, 0x34(r1)
	rlwinm   r8, r8, 3, 0x12, 0x1c
	lfsx     f2, r7, r8
	fneg     f2, f2
	b        lbl_8023DDF8

lbl_8023DDD8:
	fmuls    f2, f4, f31
	lis      r7, sincosTable___5JMath@ha
	addi     r7, r7, sincosTable___5JMath@l
	fctiwz   f2, f2
	stfd     f2, 0x38(r1)
	lwz      r8, 0x3c(r1)
	rlwinm   r8, r8, 3, 0x12, 0x1c
	lfsx     f2, r7, r8

lbl_8023DDF8:
	fmuls    f2, f25, f2
	addi     r5, r5, 3
	addi     r6, r6, 0xc
	addi     r3, r3, 1
	stfs     f2, 8(r9)

lbl_8023DE0C:
	lbz      r8, 0(r4)
	cmpw     r3, r8
	blt      lbl_8023DCA4
	addi     r25, r25, 1
	addi     r26, r26, 4
	cmpwi    r25, 3
	blt      lbl_8023DB14
	bl       getRenderModeObj__6SystemFv
	lhz      r25, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f5, lbl_8051A620@sda21(r2)
	mr       r3, r24
	stw      r4, 0x3c(r1)
	lfd      f4, lbl_8051A630@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_8051A640@sda21(r2)
	lfd      f0, 0x38(r1)
	stfs     f5, 0x10(r24)
	fsubs    f3, f0, f4
	lfs      f0, lbl_8051A64C@sda21(r2)
	stfs     f5, 0x14(r24)
	stw      r25, 0x34(r1)
	stw      r0, 0x30(r1)
	lfd      f2, 0x30(r1)
	stfs     f3, 0x18(r24)
	fsubs    f2, f2, f4
	stfs     f2, 0x1c(r24)
	stfs     f5, 0x20(r24)
	stfs     f5, 0x24(r24)
	stfs     f1, 0x28(r24)
	stfs     f5, 0x38(r24)
	stfs     f5, 0x3c(r24)
	stfs     f1, 0x40(r24)
	stfs     f0, 0x50(r24)
	stfs     f5, 0x2c(r24)
	stfs     f5, 0x30(r24)
	stfs     f1, 0x34(r24)
	stfs     f5, 0x44(r24)
	stfs     f5, 0x48(r24)
	stfs     f1, 0x4c(r24)
	stfs     f0, 0x54(r24)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	lmw      r24, 0x40(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8023DF0C
 * @note Size: 0x8
 */
void CylinderBase::setColor(Color4* color) { mColor = color; }

/**
 * @note Address: 0x8023DF14
 * @note Size: 0x24
 */
void CylinderBase::setShadowRect(Rectf& rect) { mScreenBounds = rect; }

/**
 * @note Address: 0x8023DF38
 * @note Size: 0xB4
 */
void CylinderBase::setCameraParms(Camera* camera, int id)
{
	mCamPosition[id]   = camera->getPosition();
	mCamLookAt[id]     = camera->getViewVector();
	mCameraSizeMod[id] = camera->_138;
}

/**
 * @note Address: 0x8023DFEC
 * @note Size: 0xCC
 */
void CylinderBase::makeSRT(Matrixf& mtx, Game::ShadowParam& param)
{
	f32 ybound    = param.mBoundingSphere.mPosition.y;
	f32 x         = param.mPosition.x;
	f32 y         = param.mPosition.y;
	f32 z         = param.mPosition.z;
	f32 radius    = param.mSize;
	f32 boundsize = param.mBoundingSphere.mRadius;

	if (ybound >= 1.0f || ybound <= 0.0f) {
		mtx.mMatrix.mtxView[0][0] = radius;
		mtx.mMatrix.mtxView[1][0] = 0.0f;
		mtx.mMatrix.mtxView[2][0] = 0.0f;
		mtx.mMatrix.mtxView[0][1] = 0.0f;

		mtx.mMatrix.mtxView[1][1] = boundsize;
		mtx.mMatrix.mtxView[2][1] = 0.0f;
		mtx.mMatrix.mtxView[0][2] = 0.0f;
		mtx.mMatrix.mtxView[1][2] = 0.0f;
		mtx.mMatrix.mtxView[2][2] = radius;

		mtx.mMatrix.mtxView[0][3] = x;
		mtx.mMatrix.mtxView[1][3] = y;
		mtx.mMatrix.mtxView[2][3] = z;
		return;
	}

	mtx.mMatrix.mtxView[0][0] = radius;
	mtx.mMatrix.mtxView[1][0] = radius * (-param.mBoundingSphere.mPosition.x / param.mBoundingSphere.mPosition.y);
	mtx.mMatrix.mtxView[2][0] = 0.0f;
	mtx.mMatrix.mtxView[0][1] = 0.0f;

	mtx.mMatrix.mtxView[1][1] = boundsize;
	mtx.mMatrix.mtxView[2][1] = 0.0f;
	mtx.mMatrix.mtxView[0][2] = 0.0f;

	mtx.mMatrix.mtxView[1][2] = radius * (-param.mBoundingSphere.mPosition.z / param.mBoundingSphere.mPosition.y);
	mtx.mMatrix.mtxView[2][2] = radius;
	mtx.mMatrix.mtxView[0][3] = x;
	mtx.mMatrix.mtxView[1][3] = y;
	mtx.mMatrix.mtxView[2][3] = z;
}

/**
 * @note Address: 0x8023E0B8
 * @note Size: 0xA4
 */
int CylinderBase::getCylinderType(Game::ShadowParam& param, int camID)
{
	f32 dist = (mCameraSizeMod[camID] * param.mSize) / mCamLookAt[camID].dot(param.mPosition - mCamPosition[camID]);

	if (dist > mParms->mLodNear()) {
		return 0;
	} else if (dist > mParms->mLodFar()) {
		return 1;
	} else if (dist > 0.0f) {
		return 2;
	} else {
		return 0;
	}
}

/**
 * @note Address: 0x8023E15C
 * @note Size: 0x4
 */
void CylinderBase::setFilterTextureID(int) { }

/**
 * @note Address: 0x8023E160
 * @note Size: 0x4
 */
void CylinderBase::drawInit() { }

/**
 * @note Address: 0x8023E164
 * @note Size: 0x4
 */
void CylinderBase::drawCylinder(Matrixf&, int) { }

/**
 * @note Address: 0x8023E168
 * @note Size: 0x4
 */
void CylinderBase::drawFinish() { }

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void CylinderBase::setupFillGX()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void CylinderBase::setupDrawCylinderGX()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void CylinderBase::setupFilterGX()
{
	GXSetNumTexGens(0);
	GXSetNumIndStages(0);
	__GXSetIndirectMask(0);
	GXSetCurrentMtx(0);
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetNumChans(1);
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void CylinderBase::setOrthoProjection()
{
	Mtx mtx;
	C_MTXOrtho(mtx, mScreenBounds.p1.y, mScreenBounds.p2.y, mScreenBounds.p1.x, mScreenBounds.p2.x, 0.0f, 2.0f);
	GXSetProjection(mtx, GX_ORTHOGRAPHIC);
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void CylinderBase::setOrthoCamera()
{
	Vec b = { 0.0f, 1.0f, 0.0f };
	Vec c = { 0.0f, 0.0f, 0.0f };
	Vec a = { 0.0f, 0.0f, 1.0f };

	Mtx mtx2;
	C_MTXLookAt(mtx2, &a, &b, &c);
	GXLoadPosMtxImm(mtx2, 0);
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void CylinderBase::setScissorViewport()
{
	GXSetScissor(mScreenBounds.p1.x, mScreenBounds.p1.y, mScreenBounds.getWidth(), mScreenBounds.getHeight());
	GXSetViewport(mScreenBounds.p1.x, mScreenBounds.p1.y, mScreenBounds.getWidth(), mScreenBounds.getHeight(), 0.0f, 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void CylinderBase::fillShadowRect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
void CylinderBase::fillRectAlphaZero()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void CylinderBase::drawCylinderList(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8023E16C
 * @note Size: 0x164
 */
ShadowCylinder2::ShadowCylinder2(Game::ShadowParms* parm, Color4* color)
{
	sys->heapStatusStart("Shadow Texture", nullptr);

	u16 y    = sys->getRenderModeObj()->efbHeight;
	u16 x    = sys->getRenderModeObj()->fbWidth;
	int size = GXGetTexBufferSize(x / 2, y / 2, GX_CTF_R8, GX_FALSE, 0);
	if (gameSystem && !gameSystem->isMultiplayerMode()) {
		mTexImg    = new (0x20) ResTIMG*[1];
		mTexImg[0] = (ResTIMG*)(new (0x20) u8[size]);
		mTexObj    = new GXTexObj[1];
	} else {
		mTexImg    = new (0x20) ResTIMG*[2];
		mTexImg[0] = (ResTIMG*)(new (0x20) u8[size]);
		mTexImg[1] = (ResTIMG*)(new (0x20) u8[size]);
		mTexObj    = new GXTexObj[2];
	}
	mParms  = parm;
	mColor  = color;
	mTexIdx = 0;
	sys->heapStatusEnd("Shadow Texture");
}

/**
 * @note Address: 0x8023E2D0
 * @note Size: 0x44
 */
void ShadowCylinder2::setFilterTextureID(int vpID)
{
	if (gameSystem && !gameSystem->isMultiplayerMode()) {
		mTexIdx = 0;
		return;
	}
	mTexIdx = vpID;
}

/**
 * @note Address: 0x8023E314
 * @note Size: 0x350
 */
void ShadowCylinder2::drawInit()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	setupFilterGX();

	GXSetChanMatColor(GX_COLOR0A0, mColor->toGXColor());

	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDstAlpha(GX_TRUE, 0);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);

	GXSetDstAlpha(GX_FALSE, 0);
	GXColor color = { 255, 255, 255, 4 };
	GXSetChanMatColor(GX_COLOR0A0, color);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_INDEX16);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetArray(GX_VA_POS, sCylinderVertPos, 0xc);
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r31, r3
	lis      r3, lbl_80483F58@ha
	lfs      f1, 0x14(r31)
	addi     r30, r3, lbl_80483F58@l
	lfs      f2, 0x1c(r31)
	addi     r3, r1, 0x68
	lfs      f3, 0x10(r31)
	lfs      f4, 0x18(r31)
	lfs      f5, lbl_8051A620@sda21(r2)
	lfs      f6, lbl_8051A650@sda21(r2)
	bl       C_MTXOrtho
	addi     r3, r1, 0x68
	li       r4, 1
	bl       GXSetProjection
	lwz      r29, 0x40(r30)
	addi     r3, r1, 0x38
	lwz      r28, 0x44(r30)
	addi     r4, r1, 0x2c
	lwz      r12, 0x48(r30)
	addi     r5, r1, 0x14
	lwz      r11, 0x4c(r30)
	addi     r6, r1, 0x20
	lwz      r10, 0x50(r30)
	lwz      r9, 0x54(r30)
	lwz      r8, 0x58(r30)
	lwz      r7, 0x5c(r30)
	lwz      r0, 0x60(r30)
	stw      r29, 0x14(r1)
	stw      r28, 0x18(r1)
	stw      r12, 0x1c(r1)
	stw      r11, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r9, 0x28(r1)
	stw      r8, 0x2c(r1)
	stw      r7, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       C_MTXLookAt
	addi     r3, r1, 0x38
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f31, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f30, 0x10(r31)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x18(r31)
	mr       r28, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r30, r3
	bl       __cvt_fp2unsigned
	mr       r4, r30
	mr       r5, r29
	mr       r6, r28
	bl       GXSetScissor
	lfs      f2, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f1, 0x10(r31)
	lfs      f3, 0x18(r31)
	fsubs    f4, f0, f2
	lfs      f5, lbl_8051A620@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f6, lbl_8051A640@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 0
	bl       __GXSetIndirectMask
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	bl       GXSetNumChans
	lwz      r8, 8(r31)
	addi     r4, r1, 0xc
	li       r3, 4
	lbz      r7, 0(r8)
	lbz      r6, 1(r8)
	lbz      r5, 2(r8)
	lbz      r0, 3(r8)
	stb      r7, 8(r1)
	stb      r6, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	li       r3, 0
	li       r4, 1
	li       r5, 1
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 1
	li       r4, 0
	bl       GXSetDstAlpha
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f2, 0x14(r31)
	lis      r5, 0xCC008000@ha
	lfs      f0, 0x10(r31)
	li       r3, 0
	lfs      f1, lbl_8051A620@sda21(r2)
	li       r4, 0
	stfs     f0, 0xCC008000@l(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f2, 0x14(r31)
	lfs      f0, 0x18(r31)
	stfs     f0, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f2, 0x1c(r31)
	lfs      f0, 0x18(r31)
	stfs     f0, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f2, 0x1c(r31)
	lfs      f0, 0x10(r31)
	stfs     f0, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	bl       GXSetDstAlpha
	lwz      r0, lbl_8051A654@sda21(r2)
	addi     r4, r1, 0x10
	li       r3, 4
	stw      r0, 0x10(r1)
	bl       GXSetChanMatColor
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 9
	li       r4, 3
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	lis      r4, sCylinderVertPos__4Game@ha
	li       r3, 9
	addi     r4, r4, sCylinderVertPos__4Game@l
	li       r5, 0xc
	bl       GXSetArray
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8023E664
 * @note Size: 0xC0
 */
void ShadowCylinder2::drawCylinder(Matrixf& mtx, int id)
{
	GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);

	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
	GXSetCullMode(GX_CULL_BACK);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);

	GXSetCullMode(GX_CULL_FRONT);
	GXSetBlendMode(GX_BM_SUBTRACT, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
}

/**
 * @note Address: 0x8023E724
 * @note Size: 0x1E4
 */
void ShadowCylinder2::drawFinish()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetChanMatColor(GX_COLOR0A0, mColor->toGXColor());
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	copyShadowTexture();
	setupTextureFilterGX();
	drawTextureFilter();
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r31, r3
	lis      r3, lbl_80483F58@ha
	lfs      f1, 0x14(r31)
	addi     r30, r3, lbl_80483F58@l
	lfs      f2, 0x1c(r31)
	addi     r3, r1, 0x64
	lfs      f3, 0x10(r31)
	lfs      f4, 0x18(r31)
	lfs      f5, lbl_8051A620@sda21(r2)
	lfs      f6, lbl_8051A650@sda21(r2)
	bl       C_MTXOrtho
	addi     r3, r1, 0x64
	li       r4, 1
	bl       GXSetProjection
	lwz      r29, 0x40(r30)
	addi     r3, r1, 0x34
	lwz      r28, 0x44(r30)
	addi     r4, r1, 0x28
	lwz      r12, 0x48(r30)
	addi     r5, r1, 0x10
	lwz      r11, 0x4c(r30)
	addi     r6, r1, 0x1c
	lwz      r10, 0x50(r30)
	lwz      r9, 0x54(r30)
	lwz      r8, 0x58(r30)
	lwz      r7, 0x5c(r30)
	lwz      r0, 0x60(r30)
	stw      r29, 0x10(r1)
	stw      r28, 0x14(r1)
	stw      r12, 0x18(r1)
	stw      r11, 0x1c(r1)
	stw      r10, 0x20(r1)
	stw      r9, 0x24(r1)
	stw      r8, 0x28(r1)
	stw      r7, 0x2c(r1)
	stw      r0, 0x30(r1)
	bl       C_MTXLookAt
	addi     r3, r1, 0x34
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f31, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f30, 0x10(r31)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x18(r31)
	mr       r28, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r30, r3
	bl       __cvt_fp2unsigned
	mr       r4, r30
	mr       r5, r29
	mr       r6, r28
	bl       GXSetScissor
	lfs      f2, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f1, 0x10(r31)
	lfs      f3, 0x18(r31)
	fsubs    f4, f0, f2
	lfs      f5, lbl_8051A620@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f6, lbl_8051A640@sda21(r2)
	bl       GXSetViewport
	li       r3, 1
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	lwz      r8, 8(r31)
	addi     r4, r1, 0xc
	li       r3, 4
	lbz      r7, 0(r8)
	lbz      r6, 1(r8)
	lbz      r5, 2(r8)
	lbz      r0, 3(r8)
	stb      r7, 8(r1)
	stb      r6, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	mr       r3, r31
	bl       copyShadowTexture__Q24Game15ShadowCylinder2Fv
	mr       r3, r31
	bl       setupTextureFilterGX__Q24Game15ShadowCylinder2Fv
	mr       r3, r31
	bl       drawTextureFilter__Q24Game15ShadowCylinder2Fv
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8023E908
 * @note Size: 0x170
 */
void ShadowCylinder2::copyShadowTexture()
{
	GXSetTexCopySrc(mScreenBounds.p1.x, mScreenBounds.p1.y, mScreenBounds.p2.x, mScreenBounds.p2.y);

	GXSetTexCopyDst(mScreenBounds.getWidth() / 2, mScreenBounds.getHeight() / 2, GX_CTF_R8, GX_TRUE);
	GXCopyTex(mTexImg[mTexIdx], GX_FALSE);
	GXPixModeSync();
	GXInitTexObj(&mTexObj[mTexIdx], mTexImg[mTexIdx], mScreenBounds.getWidth() / 2, mScreenBounds.getHeight() / 2, GX_TF_I8, GX_CLAMP,
	             GX_CLAMP, GX_FALSE);
	GXInitTexObjLOD(&mTexObj[mTexIdx], GX_LINEAR, GX_LINEAR, 0.0, 0.0, 0.0, GX_FALSE, GX_FALSE, GX_ANISO_1);
}

/**
 * @note Address: 0x8023EA78
 * @note Size: 0xFC
 */
void ShadowCylinder2::setupTextureFilterGX()
{
	GXLoadTexObj(&mTexObj[mTexIdx], GX_TEXMAP0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);

	GXColor color = { 255, 255, 255, 0x7f };
	GXSetTevColor(GX_TEVREG0, color);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_TEXA, GX_CC_C1, GX_CC_RASC, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_COMP_R8_GT, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_TEXA, GX_CA_A0, GX_CA_RASA, GX_CA_ZERO);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_COMP_R8_GT, GX_TB_ZERO, GX_CS_SCALE_1, GX_FALSE, GX_TEVPREV);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_NOOP);
}

/**
 * @note Address: 0x8023EB74
 * @note Size: 0x108
 */
void ShadowCylinder2::drawTextureFilter()
{
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 4);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXTexCoord2s8(0, 0);

	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXTexCoord2s8(0x10, 0);

	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXTexCoord2s8(0x10, 0x10);

	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);
	GXTexCoord2s8(0, 0x10);
}

/**
 * @note Address: 0x8023EC7C
 * @note Size: 0x5C
 */
ShadowCylinder3::ShadowCylinder3(ShadowParms* parm, Color4* color)
{
	mParms = parm;
	mColor = color;
}

/**
 * @note Address: 0x8023ECD8
 * @note Size: 0x350
 */
void ShadowCylinder3::drawInit()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	setupFilterGX();

	GXSetChanMatColor(GX_COLOR0A0, mColor->toGXColor());

	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ONE, GX_LO_CLEAR);
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetDstAlpha(GX_TRUE, 0);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, zero);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, zero);
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, zero);

	GXSetDstAlpha(GX_FALSE, 0);
	GXColor color = { 255, 255, 255, 0x7f };
	GXSetChanMatColor(GX_COLOR0A0, color);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_INDEX16);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetArray(GX_VA_POS, sCylinderVertPos, 0xc);

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r31, r3
	lis      r3, lbl_80483F58@ha
	lfs      f1, 0x14(r31)
	addi     r30, r3, lbl_80483F58@l
	lfs      f2, 0x1c(r31)
	addi     r3, r1, 0x68
	lfs      f3, 0x10(r31)
	lfs      f4, 0x18(r31)
	lfs      f5, lbl_8051A620@sda21(r2)
	lfs      f6, lbl_8051A650@sda21(r2)
	bl       C_MTXOrtho
	addi     r3, r1, 0x68
	li       r4, 1
	bl       GXSetProjection
	lwz      r29, 0x40(r30)
	addi     r3, r1, 0x38
	lwz      r28, 0x44(r30)
	addi     r4, r1, 0x2c
	lwz      r12, 0x48(r30)
	addi     r5, r1, 0x14
	lwz      r11, 0x4c(r30)
	addi     r6, r1, 0x20
	lwz      r10, 0x50(r30)
	lwz      r9, 0x54(r30)
	lwz      r8, 0x58(r30)
	lwz      r7, 0x5c(r30)
	lwz      r0, 0x60(r30)
	stw      r29, 0x14(r1)
	stw      r28, 0x18(r1)
	stw      r12, 0x1c(r1)
	stw      r11, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r9, 0x28(r1)
	stw      r8, 0x2c(r1)
	stw      r7, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       C_MTXLookAt
	addi     r3, r1, 0x38
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f31, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f30, 0x10(r31)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x18(r31)
	mr       r28, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r30, r3
	bl       __cvt_fp2unsigned
	mr       r4, r30
	mr       r5, r29
	mr       r6, r28
	bl       GXSetScissor
	lfs      f2, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f1, 0x10(r31)
	lfs      f3, 0x18(r31)
	fsubs    f4, f0, f2
	lfs      f5, lbl_8051A620@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f6, lbl_8051A640@sda21(r2)
	bl       GXSetViewport
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 0
	bl       __GXSetIndirectMask
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	bl       GXSetNumChans
	lwz      r8, 8(r31)
	addi     r4, r1, 0xc
	li       r3, 4
	lbz      r7, 0(r8)
	lbz      r6, 1(r8)
	lbz      r5, 2(r8)
	lbz      r0, 3(r8)
	stb      r7, 8(r1)
	stb      r6, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	li       r3, 0
	li       r4, 1
	li       r5, 1
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 0
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 1
	li       r4, 0
	bl       GXSetDstAlpha
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f2, 0x14(r31)
	lis      r5, 0xCC008000@ha
	lfs      f0, 0x10(r31)
	li       r3, 0
	lfs      f1, lbl_8051A620@sda21(r2)
	li       r4, 0
	stfs     f0, 0xCC008000@l(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f2, 0x14(r31)
	lfs      f0, 0x18(r31)
	stfs     f0, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f2, 0x1c(r31)
	lfs      f0, 0x18(r31)
	stfs     f0, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f2, 0x1c(r31)
	lfs      f0, 0x10(r31)
	stfs     f0, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	bl       GXSetDstAlpha
	lwz      r0, lbl_8051A658@sda21(r2)
	addi     r4, r1, 0x10
	li       r3, 4
	stw      r0, 0x10(r1)
	bl       GXSetChanMatColor
	bl       GXClearVtxDesc
	bl       GXInvalidateVtxCache
	li       r3, 9
	li       r4, 3
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	lis      r4, sCylinderVertPos__4Game@ha
	li       r3, 9
	addi     r4, r4, sCylinderVertPos__4Game@l
	li       r5, 0xc
	bl       GXSetArray
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8023F028
 * @note Size: 0xF8
 */
void ShadowCylinder3::drawCylinder(Matrixf& mtx, int id)
{
	GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);
	GXSetCullMode(GX_CULL_FRONT);
	GXSetZMode(GX_TRUE, GX_GEQUAL, GX_FALSE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
	GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
	GXSetBlendMode(GX_BM_SUBTRACT, GX_BL_ONE, GX_BL_ONE, GX_LO_NOOP);
	GXCallDisplayList(mDisplayListObj[id]->mDLData, mDisplayListObj[id]->mSize & 0xffffffe0);
}

/**
 * @note Address: 0x8023F120
 * @note Size: 0x1D4
 */
void ShadowCylinder3::drawFinish()
{
	setOrthoProjection();
	setOrthoCamera();
	setScissorViewport();

	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_TRUE);
	GXSetChanMatColor(GX_COLOR0A0, mColor->toGXColor());
	GXSetCullMode(GX_CULL_BACK);
	GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
	drawScreenFilter();
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r31, r3
	lis      r3, lbl_80483F58@ha
	lfs      f1, 0x14(r31)
	addi     r30, r3, lbl_80483F58@l
	lfs      f2, 0x1c(r31)
	addi     r3, r1, 0x64
	lfs      f3, 0x10(r31)
	lfs      f4, 0x18(r31)
	lfs      f5, lbl_8051A620@sda21(r2)
	lfs      f6, lbl_8051A650@sda21(r2)
	bl       C_MTXOrtho
	addi     r3, r1, 0x64
	li       r4, 1
	bl       GXSetProjection
	lwz      r29, 0x40(r30)
	addi     r3, r1, 0x34
	lwz      r28, 0x44(r30)
	addi     r4, r1, 0x28
	lwz      r12, 0x48(r30)
	addi     r5, r1, 0x10
	lwz      r11, 0x4c(r30)
	addi     r6, r1, 0x1c
	lwz      r10, 0x50(r30)
	lwz      r9, 0x54(r30)
	lwz      r8, 0x58(r30)
	lwz      r7, 0x5c(r30)
	lwz      r0, 0x60(r30)
	stw      r29, 0x10(r1)
	stw      r28, 0x14(r1)
	stw      r12, 0x18(r1)
	stw      r11, 0x1c(r1)
	stw      r10, 0x20(r1)
	stw      r9, 0x24(r1)
	stw      r8, 0x28(r1)
	stw      r7, 0x2c(r1)
	stw      r0, 0x30(r1)
	bl       C_MTXLookAt
	addi     r3, r1, 0x34
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f31, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f30, 0x10(r31)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x18(r31)
	mr       r28, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r30, r3
	bl       __cvt_fp2unsigned
	mr       r4, r30
	mr       r5, r29
	mr       r6, r28
	bl       GXSetScissor
	lfs      f2, 0x14(r31)
	lfs      f0, 0x1c(r31)
	lfs      f1, 0x10(r31)
	lfs      f3, 0x18(r31)
	fsubs    f4, f0, f2
	lfs      f5, lbl_8051A620@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f6, lbl_8051A640@sda21(r2)
	bl       GXSetViewport
	li       r3, 1
	bl       GXSetColorUpdate
	li       r3, 1
	bl       GXSetAlphaUpdate
	lwz      r8, 8(r31)
	addi     r4, r1, 0xc
	li       r3, 4
	lbz      r7, 0(r8)
	lbz      r6, 1(r8)
	lbz      r5, 2(r8)
	lbz      r0, 3(r8)
	stb      r7, 8(r1)
	stb      r6, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	mr       r3, r31
	bl       drawScreenFilter__Q24Game15ShadowCylinder3Fv
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8023F2F4
 * @note Size: 0xD0
 */
void ShadowCylinder3::drawScreenFilter()
{
	GXSetBlendMode(GX_BM_BLEND, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA, GX_LO_NOOP);
	GXClearVtxDesc();
	GXInvalidateVtxCache();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 one = 1.0f;
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p1.y, one);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p1.y, one);
	GXPosition3f32(mScreenBounds.p2.x, mScreenBounds.p2.y, one);
	GXPosition3f32(mScreenBounds.p1.x, mScreenBounds.p2.y, one);
}

} // namespace Game
