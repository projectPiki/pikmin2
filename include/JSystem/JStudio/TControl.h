#ifndef _JSTUDIO_TCONTROL_H
#define _JSTUDIO_TCONTROL_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/JStudio/stb.h"
#include "JSystem/JStudio/fvb.h"
#include "JSystem/JStudio/TFactory.h"
#include "types.h"

namespace JStudio {
struct TControl : public stb::TControl {
	struct TTransform_translation_rotation_scaling {
		/** @fabricated */
		Vec& getTranslation() { return mVecs[0]; }
		/** @fabricated */
		Vec& getRotation() { return mVecs[1]; }
		/** @fabricated */
		Vec& getScaling() { return mVecs[2]; }
		/** @fabricated */
		const Vec& getTranslation() const { return mVecs[0]; }
		/** @fabricated */
		const Vec& getRotation() const { return mVecs[1]; }
		/** @fabricated */
		const Vec& getScaling() const { return mVecs[2]; }
		/** @fabricated */
		Vec* getAll() { return mVecs; }
		// Vec mTranslation;
		// Vec mRotation;
		// Vec mScaling;

	private:
		Vec mVecs[3];
	};

	struct TTransform_position {
		Vec mPosition;
	};

	struct TTransform_position_direction {
		Vec mPosition;  // _00
		Vec mDirection; // _0C
	};

	TControl();

	virtual ~TControl(); // _08

	void transformOnSet_setOrigin(const Vec&, f32);
	void transformOnGet_setOrigin(const Vec&, f32);

	// unused/inlined:
	void forward_value(u32);

	void setFactory(TFactory* factory)
	{
		stb::TFactory* stb_factory = factory;
		fvb::TFactory* fvb_factory = factory == nullptr ? nullptr : &factory->mFvbFactory;
		stb::TControl::setFactory(stb_factory);
		mFvbControl.setFactory(fvb_factory);
	}

	fvb::TObject* fvb_getObject(const void* id, u32 length) { return mFvbControl.getObject(id, length); }

	fvb::TObject* fvb_getObject_index(u32 index) { return mFvbControl.getObject_index(index); }

	TFunctionValue* getFunctionValue(const void* id, u32 length)
	{
		fvb::TObject* obj = fvb_getObject(id, length);
		if (obj == nullptr) {
			return nullptr;
		}
		return &obj->referFunctionValue();
	}

	TFunctionValue* getFunctionValue_index(u32 index)
	{
		fvb::TObject* obj = fvb_getObject_index(index);
		if (obj == nullptr) {
			return nullptr;
		}
		return &obj->referFunctionValue();
	}

	inline f32 getOnGetRotY() const { return mTransformOnGet_RotY; }
	inline f32 getOnSetRotY() const { return mTransformOnSet_RotY; }

	f64 getSecondsPerFrame() const { return mSecondsPerFrame; }

	// _00     = VTBL
	// _00-_58 = stb::TControl
	f64 mSecondsPerFrame;       // _58
	fvb::TControl mFvbControl;  // _60 - JStudio::fvb::TControl?
	bool mTransformOnSet;       // _74
	bool mTransformOnGet;       // _75
	Vec mTransformOnSet_Origin; // _78
	Vec mTransformOnGet_Origin; // _84
	f32 mTransformOnSet_RotY;   // _90
	f32 mTransformOnGet_RotY;   // _94
	Mtx mTransformOnSet_Mtx;    // _98
	Mtx mTransformOnGet_Mtx;    // _C8
};
} // namespace JStudio

#endif
