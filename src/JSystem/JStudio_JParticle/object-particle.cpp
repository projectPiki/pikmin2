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
	const static TSetVariableValue_immediate aoData[] = {
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
void JStudio_JParticle::TAdaptor_particle::adaptor_do_end(const JStudio::TObject*)
{
}

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
	if (emitter->isEnableDeleteEmitter()) {
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

	const JStudio::TObject* object = adaptor_getObject();
	JStudio::TControl* ctrl        = object->getControl();

	TJPAEmitter_stopDrawParticle_ stopper(emitter);
	JStudio::TControl::TTransform_translation_rotation_scaling srts;
	JStudio::TControl::TTransform_translation_rotation_scaling outVec;

	mAdaptor->adaptor_getVariableValue_Vec(&srts.getTranslation(), sauVariableValue_3_TRANSLATION_XYZ);
	mAdaptor->adaptor_getVariableValue_Vec(&srts.getRotation(), sauVariableValue_3_ROTATION_XYZ);
	mAdaptor->adaptor_getVariableValue_Vec(&srts.getScaling(), sauVariableValue_3_SCALING_XYZ);

	if (!mAdaptor->_1A4) {
		const JStudio::TControl::TTransform_translation_rotation_scaling& useSRT = ctrl->transformOnSet_transform_ifEnabled(srts, outVec);

		// emitter->setGlobalTranslation(static_cast<JGeometry::TVec3f>(useSRT.getTranslation()));

		s16 rotx = 65536.0 * (useSRT.getRotation().x / 360.0);
		s16 roty = 65536.0 * (useSRT.getRotation().y / 360.0);
		s16 rotz = 65536.0 * (useSRT.getRotation().z / 360.0);
		emitter->setGlobalRotation(rotx, roty, rotz);

		// this is not cooperating
		// emitter->setGlobalScale(static_cast<JGeometry::TVec3f>(useSRT.getScaling()));
	} else {
		Mtx mtx;
		if (!JStudio_JStage::transform_toGlobalFromLocal(mtx, srts, mAdaptor->_19C, mAdaptor->_1A0)) {
			return;
		}
		emitter->setGlobalSRTMatrix(mtx);
	}

	GXColor color;
	mAdaptor->adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR_RGBA);
	emitter->setGlobalPrmColor(color.r, color.g, color.b);

	u8 emitAlpha = 255;
	alpha *= (f64)color.a;
	if (alpha < 255.0) {
		emitAlpha = alpha;
	}
	emitter->setGlobalAlpha(emitAlpha);

	mAdaptor->adaptor_getVariableValue_GXColor(&color, sauVariableValue_4_COLOR1_RGBA);
	emitter->setGlobalEnvColor(color.r, color.g, color.b);
	stopper.set(nullptr);
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

	JGeometry::TVec3f zeroVec;// = (Vec) { 0.0, 0.0, 0.0 };

	mEmitter = mEmitterManager->createSimpleEmitterID(zeroVec, _188, _188 >> 24, _188 >> 16, &mCallback,
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
