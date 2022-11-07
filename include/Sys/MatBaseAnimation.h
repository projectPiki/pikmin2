#ifndef _SYS_MATBASEANIMATION_H
#define _SYS_MATBASEANIMATION_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DTevColorAnm.h"

struct J3DModelData;

namespace Sys {

/**
 * @size{0x8}
 */
struct MatBaseAnimation {
	virtual void onAttachResource(void*) = 0; // _08
	virtual J3DAnmBase* getAnmBase()     = 0; // _0C
	virtual void set()                   = 0; // _10
	virtual bool remove()                = 0; // _14

	void attachResource(void*, J3DModelData*);
	f32 getFrameMax();

	// _00 = VTBL
	J3DModelData* m_modelData; // _04
};

/**
 * @size{0x18}
 */
struct MatTevRegAnimation : public MatBaseAnimation {
	MatTevRegAnimation();

	virtual void onAttachResource(void*); // _08
	virtual J3DAnmBase* getAnmBase();     // _0C (weak)
	virtual void set();                   // _10
	virtual bool remove();                // _14

	J3DAnmTevRegKey* m_anmTevRegKey; // _08
	J3DTevColorAnm* m_tevColorAnm;   // _10
	J3DTevKColorAnm* m_tevKColorAnm; // _14
};

/**
 * @size{0x10}
 */
struct MatTexAnimation : public MatBaseAnimation {
	MatTexAnimation();

	virtual void onAttachResource(void*); // _08
	virtual J3DAnmBase* getAnmBase();     // _0C (weak)
	virtual void set();                   // _10
	virtual bool remove();                // _14

	J3DAnmTextureSRTKey* _08; // _08
	u32 _0C;                  // _0C
};

} // namespace Sys

#endif
