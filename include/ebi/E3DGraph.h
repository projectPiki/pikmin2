#ifndef _EBI_E3DGRAPH_H
#define _EBI_E3DGRAPH_H

#include "types.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"

namespace ebi {
struct E3DAnimRes {
	J3DAnmTransform* pAnmTransform_0x0;
	J3DMtxCalcAnmBase* pMtxCalcAnm_0x4;
	f32 float_0x8;
	f32 float_0xC;
	f32 float_0x10;
	f32 float_0x14;
	f32 float_0x18;
	int int_0x1C;

	void load(J3DModelData*, JKRArchive*, char*);
};

struct E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(long) = 0; // _08
};

struct E3DAnimCtrl {
	f32 _00;
	f32 _04;
	int _08;
	E3DAnimRes* _0C; // basically confirmed? - Epoch
	E3DAnimFolderBase* pAnimFolder_0x10;

	void setAnimFolder(ebi::E3DAnimFolderBase*);
	void init(long, float);
	void setStartFrame(void); // UNUSED
	void play(void);
	void playStopEnd(void);
	void stop(void); // UNUSED
};

} // namespace ebi

#endif
