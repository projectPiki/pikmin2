#ifndef _SYS_MATBASEANIMATION_H
#define _SYS_MATBASEANIMATION_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMaterialAnm.h"

struct J3DModelData;

namespace Sys {

/**
 * @size{0x8}
 */
struct MatBaseAnimation {
	MatBaseAnimation()
	    : mModelData(nullptr)
	{
	}
	virtual void onAttachResource(void* resource) = 0; // _08
	virtual J3DAnmBase* getAnmBase()              = 0; // _0C
	virtual void set()                            = 0; // _10
	virtual bool remove()                         = 0; // _14

	void attachResource(void* resource, J3DModelData* modelData);
	f32 getFrameMax();

	// _00 = VTBL
	J3DModelData* mModelData; // _04
};

/**
 * @size{0x18}
 */
struct MatTevRegAnimation : public MatBaseAnimation {
	MatTevRegAnimation();

	virtual void onAttachResource(void* resource); // _08
	virtual J3DAnmBase* getAnmBase();              // _0C (weak)
	virtual void set();                            // _10
	virtual bool remove();                         // _14

	J3DAnmTevRegKey* mAnmTevRegKey; // _08
	J3DTevColorAnm* mTevColorAnm;   // _10
	J3DTevKColorAnm* mTevKColorAnm; // _14
};

/**
 * @size{0x10}
 */
struct MatTexAnimation : public MatBaseAnimation {
	MatTexAnimation();

	virtual void onAttachResource(void* resource); // _08
	virtual J3DAnmBase* getAnmBase();              // _0C (weak)
	virtual void set();                            // _10
	virtual bool remove();                         // _14

	J3DAnmTextureSRTKey* mAnmSRT; // _08
	J3DTexMtxAnm* mAnmMtx;        // _0C
};

} // namespace Sys

#endif
