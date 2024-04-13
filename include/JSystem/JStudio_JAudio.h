#ifndef _JSTUDIO_JAUDIO_H
#define _JSTUDIO_JAUDIO_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JSystem/JStudio/data.h"
#include "JSystem/JStudio/TAdaptor.h"
#include "JSystem/JStudio/TCreateObject.h"
#include "JSystem/JStage/TSystem.h"

struct JAIBasic;
struct JAISound;

typedef void (JAISound::*TVVOSoundSetFunc)(f32, u32); // e.g. JAISound::setDirectVolume, JAISound::setDirectPitch

namespace JStudio_JAudio {
typedef JStudio::TObject* (*JStudioAudioCreateFunc)(const JStudio::stb::data::TParse_TBlock_object&, JAIBasic*, const JStage::TSystem*);

struct TAdaptor_sound : public JStudio::TAdaptor_sound {

	struct TVVOSetValue_ : public JStudio::TVariableValue::TOutput {
		TVVOSetValue_(u32 idx, TVVOSoundSetFunc func)
		{
			mValueIndex = idx;
			mSetFunc    = func;
		}

		virtual void operator()(f32, JStudio::TAdaptor*) const; // _08
		virtual ~TVVOSetValue_() { }                            // _0C (weak)

		// _00 = VTBL
		int mValueIndex;           // _04
		TVVOSoundSetFunc mSetFunc; // _08
	};

	TAdaptor_sound(JAIBasic*, const JStage::TSystem*);

	virtual ~TAdaptor_sound();                                                               // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                // _0C
	virtual void adaptor_do_end(const JStudio::TObject*);                                    // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                            // _18
	virtual void adaptor_do_SOUND(JStudio::data::TEOperationData, const void*, u32);         // _20
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, u32);         // _24
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, u32); // _28
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*, u32);           // _2C
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, u32);  // _30
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32);        // _34
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32);   // _38
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32); // _3C
	virtual void adaptor_do_LOCATED(JStudio::data::TEOperationData, const void*, u32);       // _40

	void beginSound_fadeIn_(u32);
	void endSound_fadeOut_(u32);

	static const TVVOSetValue_ saoVVOSetValue_[6];

	// _00     = VTBL
	// _00-_0C = JStudio::TAdaptor
	JAIBasic* mSoundMgr;            // _D4
	JAISound* mSound;               // _D8
	u32 mFlags;                     // _DC
	int mState;                     // _E0
	u32 mFadeFlag;                  // _E4
	Vec* mPosition;                 // _E8
	Vec _EC;                        // _EC, same as above
	const JStage::TSystem* mSystem; // _F8
	JStage::TObject* mObject;       // _FC
	u32 _100;                       // _100
	bool _104;                      // _104
};

struct TCreateObject : public JStudio::TCreateObject {
	TCreateObject(JAIBasic* jai, const JStage::TSystem* system)
	{
		mSound  = jai;
		mSystem = system;
	}
	virtual ~TCreateObject();                                                                                // _08
	virtual bool create(JStudio::TObject** newObject, const JStudio::stb::data::TParse_TBlock_object& data); // _0C

	// _00     = VTBL
	// _00-_0C = JStudio::TCreateObject
	JAIBasic* mSound;               // _04
	const JStage::TSystem* mSystem; // _08
};
} // namespace JStudio_JAudio

#endif
