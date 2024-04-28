#ifndef _EBI_E3DGRAPH_H
#define _EBI_E3DGRAPH_H

#include "types.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "P2Macros.h"
#include "System.h"

namespace ebi {
struct E3DAnimRes {
	E3DAnimRes() { }

	void load(J3DModelData* modelData, JKRArchive* archive, char* resourcePath);

	J3DAnmTransform* mAnimTransform; // _00
	J3DMtxCalcAnmBase* mAnmCalcMtx;  // _04
	f32 mStartFrame;                 // _08
	f32 mStopFrame;                  // _0C
	f32 mLoopStart;                  // _10
	f32 mLoopEnd;                    // _14
	f32 mTimeScale;                  // _18
	int mMode;                       // _1C
};

struct E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(s32) = 0; // _08
};

struct E3DAnimCtrl {

	void setAnimFolder(ebi::E3DAnimFolderBase* animFolder);
	void init(s32 id, f32 timeStep);
	void setStartFrame(); // UNUSED
	void play();
	void playStopEnd();
	void stop(); // UNUSED

	f32 mAnimStartTime;             // _00
	f32 mTimeStep;                  // _04
	int mState;                     // _08
	E3DAnimRes* mAnimRes;           // _0C
	E3DAnimFolderBase* mAnimFolder; // _10
};

} // namespace ebi

#endif
