#include "JSystem/JStudio_JAudio.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JStudio_JStage.h"
#include "stl/math.h"

namespace JStudio_JAudio {

/**
 * @note Address: 0x80014FD8
 * @note Size: 0xC8
 */
TAdaptor_sound::TAdaptor_sound(JAIBasic* mgr, const JStage::TSystem* system)
    : mSoundMgr(mgr)
    , mSound(nullptr)
    , mFlags(-1)
    , mState(0)
    , mFadeFlag(0)
    , mPosition(nullptr)
    , mSystem(system)
    , mObject(nullptr)
    , _100(-1)
    , _104(0)
{
}

/**
 * @note Address: 0x800150A0
 * @note Size: 0x84
 */
TAdaptor_sound::~TAdaptor_sound()
{
	if (mSound)
		mSound->stop(0);
}

/**
 * @note Address: 0x80015124
 * @note Size: 0xCC
 */
void TAdaptor_sound::adaptor_do_prepare(const JStudio::TObject* p1)
{
	static TSetVariableValue_immediate aoData[4] = { TSetVariableValue_immediate(0, 0.0f), TSetVariableValue_immediate(1, 0.0f),
		                                             TSetVariableValue_immediate(2, 0.0f), TSetVariableValue_immediate(-1, NAN) };
	adaptor_setVariableValue_immediate(aoData);

	for (const JStudio_JAudio::TAdaptor_sound::TVVOSetValue_* output = saoVVOSetValue_; output->mValueIndex != -1; output++) {
		mVariableValues[output->mValueIndex].setOutput(output);
	}
}

/**
 * @note Address: 0x800151F0
 * @note Size: 0x58
 */
void TAdaptor_sound::adaptor_do_end(const JStudio::TObject* object)
{
	if (!(mFlags & 0xc0000c00) && mState == 3 && mSound) {
		mSound->getFadeCounter();
	}
}

/**
 * @note Address: 0x80015248
 * @note Size: 0x14C
 */
void TAdaptor_sound::adaptor_do_update(const JStudio::TObject* object, u32)
{
	JStudio::TControl* control = (JStudio::TControl*)object->getControl();
	JStudio::TControl::TTransform_position pos;
	Vec* result;
	Vec temp;
	adaptor_getVariableValue_Vec(&pos.mPosition, sauVariableValue_3_POSITION_XYZ);
	if (!_104) {
		Vec* tempPtr;
		if (!control->mTransformOnSet) {
			tempPtr = &pos.mPosition;

		} else {
			PSMTXMultVec(control->mTransformOnSet_Mtx, &pos.mPosition, &temp);
			tempPtr = &temp;
		}
		result = tempPtr;
	} else {
		Mtx test;

		bool stop;
		bool check = JStudio_JStage::transform_toGlobalFromLocal(test, pos, mObject, _100);
		result     = &pos.mPosition;
		if (!check) {
			stop = false;
		} else {
			temp.x = test[0][3];
			temp.y = test[1][3];
			temp.z = test[2][3];
			stop   = true;
		}
		if (!stop) {
			return;
		}
		result = &temp;
	}
	_EC = *result;

	if (!(mFlags & 0xc0000c00)) {
		if (mState == 3 && !mSound) {
			mState = 0;
		}
		if (mState) {
			mSoundMgr->startSoundVecT(mFlags, &mSound, mPosition, mFadeFlag, 0, 4);
			mFadeFlag = 0;
		}
	}
}

/**
 * @note Address: 0x80015394
 * @note Size: 0xA4
 */
void TAdaptor_sound::adaptor_do_SOUND(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_19:
		mFlags = *(int*)data;
		if (mFlags & 0xc0000000) {
			if (mSound) {
				mSound->stop(0);
				mState = 0;
			}
			mSoundMgr->prepareSoundVecT(mFlags, &mSound, mPosition, 0, 0, 4);
			if (mSound) {
				mState = 1;
			}
		}
	}
}

/**
 * @note Address: 0x80015438
 * @note Size: 0x30
 */
void TAdaptor_sound::adaptor_do_BEGIN(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_01:
		beginSound_fadeIn_(0);
		break;
	}
}

/**
 * @note Address: 0x80015468
 * @note Size: 0x48
 */
void TAdaptor_sound::adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		beginSound_fadeIn_(*(f32*)data);
		break;
	}
}

/**
 * @note Address: 0x800154B0
 * @note Size: 0x30
 */
void TAdaptor_sound::adaptor_do_END(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_01:
		endSound_fadeOut_(0);
		break;
	}
}

/**
 * @note Address: 0x800154E0
 * @note Size: 0x48
 */
void TAdaptor_sound::adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		endSound_fadeOut_(*(f32*)data);
		break;
	}
}

/**
 * @note Address: 0x80015528
 * @note Size: 0x68
 */
void TAdaptor_sound::adaptor_do_PARENT(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_18:
		mObject = nullptr;

		JStage::TObject* obj;
		if (!mSystem->JSGFindObject(&obj, (const char*)data, JStage::TEO_Unknown_0)) {
			mObject = obj;
		}
		break;
	}
}

/**
 * @note Address: 0x80015590
 * @note Size: 0x80
 */
void TAdaptor_sound::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_18:

		JStage::TObject* obj = mObject;
		if (obj) {
			_100 = obj->JSGFindNodeID((char*)data);
			if (_100 == -1) {
				return;
			}
		}
		break;
	case JStudio::data::TEOD_Unknown_19:
		_100 = *(int*)data;
	}
}

/**
 * @note Address: 0x80015610
 * @note Size: 0x20
 */
void TAdaptor_sound::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		_104 = *(int*)data;
		break;
	}
}

/**
 * @note Address: 0x80015630
 * @note Size: 0x28
 */
void TAdaptor_sound::adaptor_do_LOCATED(JStudio::data::TEOperationData op, const void* data, u32 flag)
{
	switch (op) {
	case JStudio::data::TEOD_Unknown_02:
		Vec* pos  = *(Vec**)data;
		mPosition = nullptr;
		if (!pos)
			return;
		mPosition = &_EC;
		break;
	}
}

/**
 * @note Address: 0x80015658
 * @note Size: 0x40
 */
void TAdaptor_sound::TVVOSetValue_::operator()(f32 value, JStudio::TAdaptor* adaptor) const
{
	JAISound* sound = ((JStudio_JAudio::TAdaptor_sound*)adaptor)->mSound;
	if (sound) {
		(sound->*(this->mSetFunc))(value, 0);
	}
}

/**
 * @note Address: 0x80015698
 * @note Size: 0xD8
 */
void TAdaptor_sound::beginSound_fadeIn_(u32 flag)
{
	mFadeFlag = flag;
	if (mFlags & 0xc0000000) {
		if (mSound) {
			mSound->start(flag);
			mState = 2;
		}
		return;
	}

	if (mSound) {
		mSound->stop(0);
		mState = 0;
	}

	if (mFlags & 0xc0000c00) {
		mSoundMgr->startSoundVecT(mFlags, &mSound, mPosition, flag, 0, 4);
		if (!mSound) {
			return;
		}
	}

	mState = 2;
}

/**
 * @note Address: 0x80015770
 * @note Size: 0x50
 */
void TAdaptor_sound::endSound_fadeOut_(u32 flag)
{
	mFadeFlag = flag;
	if (mSound) {
		mSound->stop(flag);
		mState = 3;
	}
}

const TAdaptor_sound::TVVOSetValue_ TAdaptor_sound::saoVVOSetValue_[6] = {
	TAdaptor_sound::TVVOSetValue_(5, JAISound::setDemoVolume), TAdaptor_sound::TVVOSetValue_(6, JAISound::setDemoPan),
	TAdaptor_sound::TVVOSetValue_(7, JAISound::setDemoPitch),  TAdaptor_sound::TVVOSetValue_(8, JAISound::setTempoProportion),
	TAdaptor_sound::TVVOSetValue_(9, JAISound::setDemoFxmix),  TAdaptor_sound::TVVOSetValue_(-1, nullptr),
};

} // namespace JStudio_JAudio
