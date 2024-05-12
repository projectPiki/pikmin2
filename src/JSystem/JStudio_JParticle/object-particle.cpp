#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JStudio_JParticle.h"
#include "JSystem/JStudio_JStage.h"
#include "math.h"
#include "float.h"
#include "types.h"

/**
 * @note Address: 0x800056C0
 * @note Size: 0xE8
 */
JStudio_JParticle::TAdaptor_particle::TAdaptor_particle(JPAEmitterManager* emitterManager, const JStage::TSystem* system)
    : mEmitterManager(emitterManager)
    , mEmitter(nullptr)
    , mCallback(this)
    , _188(-1)
    , _18C(0)
    , _190(0)
    , _194(0)
    , mSystem(system)
    , _19C(nullptr)
    , _1A0(0xFFFFFFFF)
    , _1A4(0)
{
}

/**
 * @note Address: 0x80005820
 * @note Size: 0x98
 * __dt__Q217JStudio_JParticle17TAdaptor_particleFv
 */
JStudio_JParticle::TAdaptor_particle::~TAdaptor_particle()
{
	if (mEmitter != nullptr) {
		mEmitterManager->forceDeleteEmitter(mEmitter);
	}
}

/**
 * @note Address: 0x800058B8
 * @note Size: 0x144
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_prepare(const JStudio::TObject* p1)
{
	static TSetVariableValue_immediate aoData[18] = {
		TSetVariableValue_immediate(0, 0.0f),    TSetVariableValue_immediate(1, 0.0f),    TSetVariableValue_immediate(2, 0.0f),
		TSetVariableValue_immediate(3, 0.0f),    TSetVariableValue_immediate(4, 0.0f),    TSetVariableValue_immediate(5, 0.0f),
		TSetVariableValue_immediate(6, 1.0f),    TSetVariableValue_immediate(7, 1.0f),    TSetVariableValue_immediate(8, 1.0f),
		TSetVariableValue_immediate(9, 255.0f),  TSetVariableValue_immediate(10, 255.0f), TSetVariableValue_immediate(11, 255.0f),
		TSetVariableValue_immediate(12, 255.0f), TSetVariableValue_immediate(13, 255.0f), TSetVariableValue_immediate(14, 255.0f),
		TSetVariableValue_immediate(15, 255.0f), TSetVariableValue_immediate(16, 255.0f), TSetVariableValue_immediate(0xFFFFFFFF, NAN)
	};
	adaptor_setVariableValue_immediate(aoData);
	mCallback.mObject = p1;
}

/**
 * @note Address: 0x800059FC
 * @note Size: 0x4
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_end(const JStudio::TObject*) { }

/**
 * @note Address: 0x80005A00
 * @note Size: 0xB0
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_update(const JStudio::TObject* p1, u32 p2)
{
	if (_190 == 0) {
		return;
	}
	if (_194 >= _190) {
		return;
	}
	_194 += p2;
	if (_194 < _190) {
		return;
	}
	switch (_18C) {
	case 1:
		_18C = 2;
		break;
	case 3:
		mEmitterManager->forceDeleteEmitter(mEmitter);
		mEmitter = nullptr;
		_18C     = 0;
	}
	_190 = 0;
	_194 = 0;
}

/**
 * @note Address: 0x80005AB0
 * @note Size: 0x30
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_BEGIN(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_01:
		beginParticle_fadeIn_(0);
		break;
	}
}

/**
 * @note Address: 0x80005AE0
 * @note Size: 0x48
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		beginParticle_fadeIn_(*(f32*)p2);
		break;
	}
}

/**
 * @note Address: 0x80005B28
 * @note Size: 0x2C
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_END(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	if (operation != JStudio::data::TEOD_Unknown_01) {
		return;
	}

	JPABaseEmitter* emitter = mEmitter;
	if (emitter == nullptr) {
		return;
	}

	emitter->setFlag(JPAEMIT_StopEmitting);
	emitter->mMaxFrame = 1;
}

/**
 * @note Address: 0x80005B54
 * @note Size: 0x48
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		endParticle_fadeOut_(*(f32*)p2);
		break;
	}
}

/**
 * @note Address: 0x80005B9C
 * @note Size: 0x14
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARTICLE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_19:
		_188 = *(int*)p2;
		break;
	}
}

/**
 * @note Address: 0x80005BB0
 * @note Size: 0x68
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		_19C = nullptr;
		JStage::TObject* object;
		if (mSystem->JSGFindObject(&object, (const char*)p2, JStage::TEO_Unknown_0) == 0) {
			_19C = object;
		}
		break;
	}
}

/**
 * @note Address: 0x80005C18
 * @note Size: 0x80
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_18:
		if (_19C != nullptr) {
			_1A0 = _19C->JSGFindNodeID((const char*)p2);
			if (_1A0 == 0xFFFFFFFF) {
				return;
			}
		}
		break;
	case JStudio::data::TEOD_Unknown_19:
		_1A0 = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x80005C98
 * @note Size: 0x20
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData operation, const void* p2, u32 p3)
{
	switch (operation) {
	case JStudio::data::TEOD_Unknown_02:
		_1A4 = *(u32*)p2;
		break;
	}
}

/**
 * @note Address: 0x80005CB8
 * @note Size: 0x35C
 */
void JStudio_JParticle::TAdaptor_particle::TJPACallback_::execute(JPABaseEmitter* emitter)
{
	bool check = false;
	if (emitter->isFlag(JPAEMIT_EnableDeleteEmitter) && (emitter->mAlivePtclBase.getNum() + emitter->mAlivePtclChld.getNum()) == 0) {
		check = true;
	}

	if (check) {
		mAdaptor->mEmitterManager->forceDeleteEmitter(emitter);
		mAdaptor->mEmitter = nullptr;
		mAdaptor->_18C     = 0;
		mAdaptor->_190     = 0;
		mAdaptor->_194     = 0;
		return;
	}

	f64 val1 = mAdaptor->_190; // u32 stored as f64
	f64 val2 = mAdaptor->_194; // u32 stored as f64

	f64 alpha = 1.0;
	switch (mAdaptor->_18C) {
	case 1:
		alpha = val2 / val1;
		break;
	case 3:
		alpha = (val1 - val2) / val1;
		break;
	}

	JStudio::TControl* ctrl = static_cast<JStudio::TControl*>(mObject->mControl); // r28

	Vec srts[3]; // 0x64
	mAdaptor->adaptor_getVariableValue_Vec(&srts[2], sauVariableValue_3_TRANSLATION_XYZ);
	mAdaptor->adaptor_getVariableValue_Vec(&srts[1], sauVariableValue_3_ROTATION_XYZ);
	mAdaptor->adaptor_getVariableValue_Vec(&srts[0], sauVariableValue_3_SCALING_XYZ);

	Vec* pos; // r29

	if (!mAdaptor->_1A4) {
		if (!ctrl->mTransformOnSet) {
			pos = srts;
		} else {
			Vec outVec[3];
			PSMTXMultVec(ctrl->mTransformOnSet_Mtx, &srts[2], &outVec[0]);
			outVec[1].x = srts[1].x;
			outVec[1].y = ctrl->mTransformOnSet_RotY + srts[1].y;
			outVec[1].z = srts[1].z;
			pos         = outVec;
		}
		emitter->mGlobalTrs = ((JGeometry::TVec3f*)pos)[0];

		JPAGetXYZRotateMtx(65536.0 * (pos[1].x / 360.0), 65536.0 * (pos[1].y / 360.0), 65536.0 * (pos[1].z / 360.0), emitter->mGlobalRot);
		JGeometry::TVec3f scaleVec(((JGeometry::TVec3f*)pos)[2]);
		emitter->setScale(scaleVec);
	} else {
		Mtx mtx;
		if (!JStudio_JStage::transform_toGlobalFromLocal(mtx, *(JStudio::TControl::TTransform_position*)(&srts[0]), mAdaptor->_19C,
		                                                 mAdaptor->_1A0)) {
			if (emitter) {
				emitter->setFlag(JPAEMIT_StopDraw);
			}
			return;
		}

		JPASetRMtxSTVecfromMtx(mtx, emitter->mGlobalRot, &emitter->mGlobalScl, &emitter->mGlobalTrs);
		emitter->setGlobalScale(emitter->mGlobalScl.x, emitter->mGlobalScl.y);
	}

	GXColor color;
	mAdaptor->adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	emitter->setGlobalPrmColor(color.r, color.g, color.b);

	u8 emitAlpha = 255;
	alpha *= (f64)color.a;
	if (alpha < 255.0) {
		emitAlpha = (u8)alpha;
	}

	emitter->mGlobalPrmClr.a = emitAlpha;

	mAdaptor->adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR1_RGBA);
	emitter->setGlobalEnvColor(color.r, color.g, color.b);
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lwz       r0, 0xF4(r4)
	  mr        r31, r4
	  mr        r30, r3
	  li        r4, 0
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x50
	  lwz       r3, 0xD0(r31)
	  lwz       r0, 0xDC(r31)
	  add.      r0, r3, r0
	  bne-      .loc_0x50
	  li        r4, 0x1

	.loc_0x50:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x4(r30)
	  mr        r4, r31
	  lwz       r3, 0x174(r3)
	  bl        0x8AFE4
	  lwz       r3, 0x4(r30)
	  li        r0, 0
	  stw       r0, 0x178(r3)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x18C(r3)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x190(r3)
	  lwz       r3, 0x4(r30)
	  stw       r0, 0x194(r3)
	  b         .loc_0x334

	.loc_0x90:
	  lwz       r5, 0x4(r30)
	  lis       r4, 0x4330
	  stw       r4, 0x88(r1)
	  lwz       r0, 0x190(r5)
	  lwz       r3, 0x194(r5)
	  stw       r0, 0x8C(r1)
	  lwz       r0, 0x18C(r5)
	  stw       r3, 0x94(r1)
	  lfd       f2, -0x7FD0(r2)
	  cmpwi     r0, 0x2
	  stw       r4, 0x90(r1)
	  lfd       f1, 0x88(r1)
	  lfd       f0, 0x90(r1)
	  fsub      f1, f1, f2
	  lfd       f31, -0x7FF0(r2)
	  fsub      f0, f0, f2
	  beq-      .loc_0x100
	  bge-      .loc_0xE4
	  cmpwi     r0, 0x1
	  bge-      .loc_0xF0
	  b         .loc_0x100

	.loc_0xE4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x100
	  b         .loc_0xF8

	.loc_0xF0:
	  fdiv      f31, f0, f1
	  b         .loc_0x100

	.loc_0xF8:
	  fsub      f0, f1, f0
	  fdiv      f31, f0, f1

	.loc_0x100:
	  lwz       r4, 0x8(r30)
	  lis       r3, 0x8047
	  addi      r5, r3, 0x33F8
	  stw       r31, 0xC(r1)
	  lwz       r28, 0x14(r4)
	  addi      r4, r1, 0x64
	  lwz       r3, 0x4(r30)
	  bl        0x7558
	  lis       r3, 0x8047
	  addi      r4, r1, 0x70
	  addi      r5, r3, 0x3404
	  lwz       r3, 0x4(r30)
	  bl        0x7544
	  lis       r4, 0x8047
	  lwz       r3, 0x4(r30)
	  addi      r5, r4, 0x3410
	  addi      r4, r1, 0x7C
	  bl        0x7530
	  lwz       r4, 0x4(r30)
	  lbz       r0, 0x1A4(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x234
	  lbz       r0, 0x74(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x16C
	  addi      r29, r1, 0x64
	  b         .loc_0x1A0

	.loc_0x16C:
	  addi      r3, r28, 0x98
	  addi      r4, r1, 0x64
	  addi      r5, r1, 0x40
	  bl        0xE4DA8
	  lfs       f0, 0x70(r1)
	  addi      r29, r1, 0x40
	  lfs       f2, 0x74(r1)
	  stfs      f0, 0x4C(r1)
	  lfs       f0, 0x78(r1)
	  lfs       f1, 0x90(r28)
	  fadds     f1, f2, f1
	  stfs      f0, 0x54(r1)
	  stfs      f1, 0x50(r1)

	.loc_0x1A0:
	  lfs       f1, 0x4(r29)
	  addi      r6, r31, 0x68
	  lfs       f2, 0x8(r29)
	  lfs       f0, 0x0(r29)
	  lfd       f3, -0x7FE0(r2)
	  stfs      f0, 0xA4(r31)
	  lfd       f4, -0x7FE8(r2)
	  stfs      f1, 0xA8(r31)
	  stfs      f2, 0xAC(r31)
	  lfs       f2, 0xC(r29)
	  lfs       f1, 0x10(r29)
	  lfs       f0, 0x14(r29)
	  fdiv      f2, f2, f3
	  fdiv      f1, f1, f3
	  fdiv      f0, f0, f3
	  fmul      f2, f4, f2
	  fmul      f1, f4, f1
	  fmul      f0, f4, f0
	  fctiwz    f2, f2
	  fctiwz    f1, f1
	  fctiwz    f0, f0
	  stfd      f2, 0x90(r1)
	  stfd      f1, 0x88(r1)
	  lwz       r3, 0x94(r1)
	  stfd      f0, 0x98(r1)
	  lwz       r4, 0x8C(r1)
	  lwz       r5, 0x9C(r1)
	  bl        0x8DD94
	  lfs       f0, 0x18(r29)
	  lfs       f1, 0x1C(r29)
	  lfs       f2, 0x20(r29)
	  stfs      f0, 0x98(r31)
	  stfs      f1, 0x9C(r31)
	  stfs      f2, 0xA0(r31)
	  stfs      f0, 0xB0(r31)
	  stfs      f1, 0xB4(r31)
	  b         .loc_0x28C

	.loc_0x234:
	  lwz       r5, 0x19C(r4)
	  addi      r3, r1, 0x10
	  lwz       r6, 0x1A0(r4)
	  addi      r4, r1, 0x64
	  bl        0xBED0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  mr.       r3, r31
	  beq-      .loc_0x334
	  lwz       r0, 0xF4(r3)
	  ori       r0, r0, 0x4
	  stw       r0, 0xF4(r3)
	  b         .loc_0x334

	.loc_0x268:
	  addi      r3, r1, 0x10
	  addi      r4, r31, 0x68
	  addi      r5, r31, 0x98
	  addi      r6, r31, 0xA4
	  bl        0x8DE14
	  lfs       f1, 0x9C(r31)
	  lfs       f0, 0x98(r31)
	  stfs      f0, 0xB0(r31)
	  stfs      f1, 0xB4(r31)

	.loc_0x28C:
	  lis       r4, 0x8047
	  lwz       r3, 0x4(r30)
	  addi      r5, r4, 0x3428
	  addi      r4, r1, 0x8
	  bl        0x74F0
	  lbz       r5, 0xA(r1)
	  lis       r0, 0x4330
	  lbz       r4, 0x9(r1)
	  li        r6, 0xFF
	  lbz       r3, 0x8(r1)
	  stw       r0, 0x98(r1)
	  lfd       f2, -0x7FD0(r2)
	  stb       r3, 0xB8(r31)
	  lfd       f0, -0x7FD8(r2)
	  stb       r4, 0xB9(r31)
	  stb       r5, 0xBA(r31)
	  lbz       r0, 0xB(r1)
	  stw       r0, 0x9C(r1)
	  lfd       f1, 0x98(r1)
	  fsub      f1, f1, f2
	  fmul      f31, f31, f1
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x2F4
	  fctiwz    f0, f31
	  stfd      f0, 0x90(r1)
	  lwz       r6, 0x94(r1)

	.loc_0x2F4:
	  stb       r6, 0xBB(r31)
	  lis       r3, 0x8047
	  addi      r5, r3, 0x3444
	  addi      r4, r1, 0x8
	  lwz       r3, 0x4(r30)
	  bl        0x7484
	  lbz       r5, 0xA(r1)
	  li        r3, 0
	  lbz       r4, 0x9(r1)
	  lbz       r0, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stb       r0, 0xBC(r31)
	  stb       r4, 0xBD(r31)
	  stb       r5, 0xBE(r31)
	  b         .loc_0x334
	  stw       r0, 0xF4(r3)

	.loc_0x334:
	  psq_l     f31,0xB8(r1),0,0
	  lwz       r0, 0xC4(r1)
	  lfd       f31, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/**
 * @note Address: 0x80006014
 * @note Size: 0xE4
 */
void JStudio_JParticle::TAdaptor_particle::beginParticle_fadeIn_(u32 p1)
{
	if (mEmitter) {
		mEmitterManager->forceDeleteEmitter(mEmitter);
	}

	// maybe JGeometry::TVec3f::Zero() inline?

	JGeometry::TVec3f vec2;
	JGeometry::TVec3f vec = { 0.0f, 0.0f, 0.0f };
	vec2                  = vec;

	mEmitter = mEmitterManager->createSimpleEmitterID(vec2, _188, _188 >> 24, _188 >> 16, &mCallback,
	                                                  nullptr); // instruction order swap

	if (mEmitter) {
		mEmitter->setFlag(JPAEMIT_Immortal);
		_18C = 1;

		if (!p1) {
			_18C = 2;
		}

		_190 = p1;
		_194 = 0;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r4, 0x178(r3)
	cmplwi   r4, 0
	beq      lbl_80006044
	lwz      r3, 0x174(r30)
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_80006044:
	lis      r3, lbl_804732E0@ha
	addi     r4, r1, 0x14
	addi     r6, r3, lbl_804732E0@l
	addi     r8, r30, 0x17c
	lwz      r5, 0(r6)
	li       r9, 0
	lwz      r3, 4(r6)
	lwz      r0, 8(r6)
	stw      r5, 8(r1)
	stw      r3, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r0, 0x188(r30)
	lwz      r3, 0x174(r30)
	srwi     r6, r0, 0x18
	clrlwi   r5, r0, 0x10
	rlwinm   r7, r0, 0x10, 0x18, 0x1f
	bl
"createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
	stw      r3, 0x178(r30)
	lwz      r4, 0x178(r30)
	cmplwi   r4, 0
	beq      lbl_800060E0
	lwz      r3, 0xf4(r4)
	cmplwi   r31, 0
	li       r0, 1
	ori      r3, r3, 0x40
	stw      r3, 0xf4(r4)
	stw      r0, 0x18c(r30)
	bne      lbl_800060D4
	li       r0, 2
	stw      r0, 0x18c(r30)

lbl_800060D4:
	stw      r31, 0x190(r30)
	li       r0, 0
	stw      r0, 0x194(r30)

lbl_800060E0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x800060F8
 * @note Size: 0x118
 */
void JStudio_JParticle::TAdaptor_particle::endParticle_fadeOut_(u32 p1)
{
	if (mEmitter == nullptr) {
		return;
	}
	if (p1 == 0) {
		mEmitterManager->forceDeleteEmitter(mEmitter);
		mEmitter = nullptr;
		_18C     = 0;
		_190     = 0;
		_194     = 0;
		return;
	}
	u32 v1 = _18C;
	_18C   = 3;
	if (_194 == 0) {
		_190 = p1;
		return;
	}
	u32 v2 = 0;
	switch (v1) {
	case 1:
		v2 = _194;
		break;
	case 3:
		v2 = _190 - _194;
		break;
	}
	_190 = (f64)p1 * (f64)_190 / (f64)v2;
	_194 = _190 - p1;
}
