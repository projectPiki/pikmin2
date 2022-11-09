#ifndef _JSTUDIO_TCONTROL_H
#define _JSTUDIO_TCONTROL_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JStudio/stb.h"
#include "JSystem/fvb/fvb.h"
#include "types.h"

namespace JStudio {
struct TControl : stb::TControl {
	struct TTransform_translation_rotation_scaling {
		/** @fabricated */
		Vec& getTranslation() { return m_vecs[0]; }
		/** @fabricated */
		Vec& getRotation() { return m_vecs[1]; }
		/** @fabricated */
		Vec& getScaling() { return m_vecs[2]; }
		/** @fabricated */
		const Vec& getTranslation() const { return m_vecs[0]; }
		/** @fabricated */
		const Vec& getRotation() const { return m_vecs[1]; }
		/** @fabricated */
		const Vec& getScaling() const { return m_vecs[2]; }
		/** @fabricated */
		Vec* getAll() { return m_vecs; }
		// Vec m_translation;
		// Vec m_rotation;
		// Vec m_scaling;

	private:
		Vec m_vecs[3];
	};

	struct TTransform_position {
		Vec m_position;
	};

	TControl();

	virtual ~TControl(); // _08

	void transformOnSet_setOrigin(const Vec&, float);
	void transformOnGet_setOrigin(const Vec&, float);

	// unused/inlined:
	void forward_value(u32);

	f64 _58;           // _58
	fvb::TControl _60; // _60 - JStudio::fvb::TControl?
	u8 _74;            // _74
	u8 _75;            // _75
	Vec _78;           // _78
	Vec _84;           // _84
	f32 _90;           // _90
	f32 _94;           // _94
	Mtx _98;           // _98
	Mtx _C8;           // _C8
};
} // namespace JStudio

#endif
