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

	TControl();

	virtual ~TControl(); // _08

	void transformOnSet_setOrigin(const Vec&, f32);
	void transformOnGet_setOrigin(const Vec&, f32);

	// unused/inlined:
	void forward_value(u32);

	inline void create(JStudio::stb::TFactory* factory, JStudio::fvb::TFactory* fvb)
	{
		mFactory             = factory;
		mFvbControl.mFactory = fvb;
	}

	void setFactory(JStudio::TFactory* factory)
	{
		stb::TFactory* stb_factory = factory;
		fvb::TFactory* fvb_factory = factory == nullptr ? nullptr : &factory->mFvbFactory;
		stb::TControl::setFactory(stb_factory);
		mFvbControl.setFactory(fvb_factory);
	}

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
