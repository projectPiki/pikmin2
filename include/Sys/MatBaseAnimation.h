#ifndef _SYS_MATBASEANIMATION_H
#define _SYS_MATBASEANIMATION_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DTevColorAnm.h"

namespace Sys {
struct MatBaseAnimation {
	virtual void onAttachResource(void*) = 0; // _00
	virtual J3DAnmBase* getAnmBase()     = 0; // _04
	virtual void set()                   = 0; // _08
	virtual bool remove()                = 0; // _0C

	// virtual void _10() = 0; // _10

	void attachResource(void*, struct J3DModelData*);
	void getFrameMax();

	// VTBL _00
	J3DModelData* m_modelData; // _04
};

/**
 * @size{0x14}
 */
struct MatTevRegAnimation : MatBaseAnimation {
	MatTevRegAnimation();

	virtual void onAttachResource(void*); // _00
	virtual J3DAnmBase* getAnmBase();     // _04
	virtual void set();                   // _08
	virtual bool remove();                // _0C

	J3DAnmTevRegKey* m_anmTevRegKey; // _08
	J3DTevColorAnm* m_tevColorAnm;   // _10
	J3DTevKColorAnm* m_tevKColorAnm; // _14
};

/**
 * @size{0x10}
 */
struct MatTexAnimation : MatBaseAnimation {
	MatTexAnimation();

	virtual void onAttachResource(void*); // _00
	virtual J3DAnmBase* getAnmBase();     // _04
	virtual void set();                   // _08
	virtual bool remove();                // _0C

	J3DAnmTextureSRTKey* _08; // _08
	u32 _0C;
};
} // namespace Sys

#endif
