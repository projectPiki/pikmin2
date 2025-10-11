#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAMath.h"
#include "JSystem/JParticle/JPAShape.h"
#include "JSystem/JParticle/JPAField.h"
#include "CNode.h"
#include "Matrixf.h"

// this might be a group of smaller arrays
u8 jpa_pos[]
    = { 00,   00,   00,   0x32, 00,   00,   0x32, 0xCE, 00,   00,   0xCE, 00,   0xE7, 00,   00,   0x19, 00,   00,   0x19, 0xCE, 00,   0xE7,
	    0xCE, 00,   0xCE, 00,   00,   00,   00,   00,   00,   0xCE, 00,   0xCE, 0xCE, 00,   00,   0x19, 00,   0x32, 0x19, 00,   0x32, 0xE7,
	    00,   00,   0xE7, 00,   0xE7, 0x19, 00,   0x19, 0x19, 00,   0x19, 0xE7, 00,   0xE7, 0xE7, 00,   0xCE, 0x19, 00,   00,   0x19, 00,
	    00,   0xE7, 00,   0xCE, 0xE7, 00,   00,   0x32, 00,   0x32, 0x32, 00,   0x32, 00,   00,   00,   00,   00,   0xE7, 0x32, 00,   0x19,
	    0x32, 00,   0x19, 00,   00,   0xE7, 00,   00,   0xCE, 0x32, 00,   00,   0x32, 00,   00,   00,   00,   0xCE, 00,   00,   00,   00,
	    00,   0x32, 00,   00,   0x32, 00,   0x32, 00,   00,   0x32, 0xE7, 00,   00,   0x19, 00,   00,   0x19, 00,   0x32, 0xE7, 00,   0x32,
	    0xCE, 00,   00,   00,   00,   00,   00,   00,   0x32, 0xCE, 00,   0x32, 00,   00,   0xE7, 0x32, 00,   0xE7, 0x32, 00,   0x19, 00,
	    00,   0x19, 0xE7, 00,   0xE7, 0x19, 00,   0xE7, 0x19, 00,   0x19, 0xE7, 00,   0x19, 0xCE, 00,   0xE7, 00,   00,   0xE7, 00,   00,
	    0x19, 0xCE, 00,   0x19, 00,   00,   0xCE, 0x32, 00,   0xCE, 0x32, 00,   00,   00,   00,   00,   0xE7, 00,   0xCE, 0x19, 00,   0xCE,
	    0x19, 00,   00,   0xE7, 00,   00,   0xCE, 00,   0xCE, 00,   00,   0xCE, 00,   00,   00,   0xCE, 00,   00,   00,   00,   00,   00,
	    00,   0x32, 00,   0xCE, 0x32, 00,   0xCE, 00,   00,   00,   0xE7, 00,   00,   0x19, 00,   0xCE, 0x19, 00,   0xCE, 0xE7, 00,   00,
	    0xCE, 00,   00,   00,   00,   0xCE, 00,   00,   0xCE, 0xCE, 00,   0x19, 00,   00,   0x19, 0x32, 00,   0xE7, 0x32, 00,   0xE7, 00,
	    00,   0x19, 0xE7, 00,   0x19, 0x19, 00,   0xE7, 0x19, 00,   0xE7, 0xE7, 00,   0x19, 0xCE, 00,   0x19, 00,   00,   0xE7, 00,   00,
	    0xE7, 0xCE, 00,   0x32, 00,   00,   0x32, 0x32, 00,   00,   0x32, 00,   00,   00,   00,   0x32, 0xE7, 00,   0x32, 0x19, 00,   00,
	    0x19, 00,   00,   0xE7, 00,   0x32, 0xCE, 00,   0x32, 00,   00,   00,   00,   00,   00,   0xCE, 00,   00,   00,   00,   00,   00,
	    00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00,   00 };

u8 jpa_crd[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 2, 0, 2, 1, 0, 1, 0, 0, 1, 0, 1, 2, 0, 2, 0, 0, 2, 0, 2, 2, 0, 2 };

/**
 * @note Address: 0x800955EC
 * @note Size: 0x70
 */
JPAResource::JPAResource()
{
	mDrawEmitterChildFuncList     = nullptr;
	mDrawEmitterFuncList          = nullptr;
	mCalcEmitterFuncList          = nullptr;
	mDrawParticleChildFuncList    = nullptr;
	mCalcParticleChildFuncList    = nullptr;
	mDrawParticleFuncList         = nullptr;
	mCalcParticleFuncList         = nullptr;
	mBaseShape                    = nullptr;
	mExtraShape                   = nullptr;
	mChildShape                   = nullptr;
	mExTexShape                   = nullptr;
	mDynamicsBlock                = nullptr;
	mFieldBlocks                  = nullptr;
	mKeyBlocks                    = nullptr;
	mTextureIDList                = nullptr;
	mDrawParticleChildFuncListNum = 0;
	mCalcParticleChildFuncListNum = 0;
	mDrawParticleFuncListNum      = 0;
	mCalcParticleFuncListNum      = 0;
	mDrawEmitterChildFuncListNum  = 0;
	mDrawEmitterFuncListNum       = 0;
	mCalcEmitterFuncListNum       = 0;
	mTDB1Num                      = 0;
	mKeyBlockNum                  = 0;
	mFieldBlockNum                = 0;
	mUsrIdx                       = 0;
}

/**
 * @note Address: 0x8009565C
 * @note Size: 0x1540
 */
void JPAResource::init(JKRHeap* heap)
{
	BOOL is_glbl_clr_anm       = mBaseShape->isGlblClrAnm();
	BOOL is_glbl_tex_anm       = mBaseShape->isGlblTexAnm();
	BOOL is_prm_anm            = mBaseShape->isPrmAnm();
	BOOL is_env_anm            = mBaseShape->isEnvAnm();
	BOOL is_tex_anm            = mBaseShape->isTexAnm();
	BOOL is_tex_crd_anm        = mBaseShape->isTexCrdAnm();
	BOOL is_prj_tex            = mBaseShape->isPrjTex();
	BOOL is_enable_scale_anm   = mExtraShape && mExtraShape->isEnableScaleAnm();
	BOOL is_enable_alpha_anm   = mExtraShape && mExtraShape->isEnableAlphaAnm();
	BOOL is_enable_alpha_flick = mExtraShape && mExtraShape->isEnableAlphaAnm() && mExtraShape->isEnableAlphaFlick();
	BOOL is_enable_rotate_anm  = mExtraShape && mExtraShape->isEnableRotateAnm();
	BOOL is_rotate_on          = is_enable_rotate_anm || (mChildShape && mChildShape->isRotateOn());
	BOOL base_type_5_6         = mBaseShape->getType() == 5 || mBaseShape->getType() == 6;
	BOOL base_type_0           = mBaseShape->getType() == 0;
	BOOL base_type_0_1         = mBaseShape->getType() == 0 || mBaseShape->getType() == 1;
	BOOL child_type_5_6        = mChildShape && (mChildShape->getType() == 5 || mChildShape->getType() == 6);
	BOOL child_type_0          = mChildShape && mChildShape->getType() == 0;
	BOOL child_type_0_1        = mChildShape && (mChildShape->getType() == 0 || mChildShape->getType() == 1);
	BOOL is_draw_parent        = !mBaseShape->isNoDrawParent();
	BOOL is_draw_child         = !mBaseShape->isNoDrawChild();

	if (is_glbl_tex_anm && is_tex_anm) {
		mCalcEmitterFuncListNum++;
	}

	if (is_glbl_clr_anm) {
		if (is_prm_anm) {
			mCalcEmitterFuncListNum++;
		}
		if (is_env_anm) {
			mCalcEmitterFuncListNum++;
		}
		if (is_prm_anm || is_env_anm) {
			mCalcEmitterFuncListNum++;
		}
	}

	if (mCalcEmitterFuncListNum != 0) {
		mCalcEmitterFuncList = (JPAFunctionA**)JKRAllocFromHeap(heap, mCalcEmitterFuncListNum * 4, 4);
	}

	int func_no = 0;

	if (is_glbl_tex_anm && is_tex_anm) {
		switch (mBaseShape->getTexAnmType()) {
		case 0:
			mCalcEmitterFuncList[func_no] = &JPACalcTexIdxNormal;
			break;
		case 1:
			mCalcEmitterFuncList[func_no] = &JPACalcTexIdxRepeat;
			break;
		case 2:
			mCalcEmitterFuncList[func_no] = &JPACalcTexIdxReverse;
			break;
		case 3:
			mCalcEmitterFuncList[func_no] = &JPACalcTexIdxMerge;
			break;
		case 4:
			mCalcEmitterFuncList[func_no] = &JPACalcTexIdxRandom;
			break;
		}
		func_no++;
	}

	if (is_glbl_clr_anm) {
		if (is_prm_anm) {
			mCalcEmitterFuncList[func_no] = &JPACalcPrm;
			func_no++;
		}
		if (is_env_anm) {
			mCalcEmitterFuncList[func_no] = &JPACalcEnv;
			func_no++;
		}
		if (is_prm_anm || is_env_anm) {
			switch (mBaseShape->getClrAnmType()) {
			case 0:
				mCalcEmitterFuncList[func_no] = &JPACalcClrIdxNormal;
				break;
			case 1:
				mCalcEmitterFuncList[func_no] = &JPACalcClrIdxRepeat;
				break;
			case 2:
				mCalcEmitterFuncList[func_no] = &JPACalcClrIdxReverse;
				break;
			case 3:
				mCalcEmitterFuncList[func_no] = &JPACalcClrIdxMerge;
				break;
			case 4:
				mCalcEmitterFuncList[func_no] = &JPACalcClrIdxRandom;
				break;
			}
		}
	}

	if (!is_glbl_tex_anm && is_tex_anm) {
		mCalcParticleFuncListNum++;
	}

	if (!base_type_5_6 && (is_enable_alpha_anm || is_enable_alpha_flick)) {
		mCalcParticleFuncListNum++;
	}

	if (!is_glbl_clr_anm) {
		if (is_prm_anm) {
			mCalcParticleFuncListNum++;
		}
		if (is_env_anm) {
			mCalcParticleFuncListNum++;
		}
		if (is_prm_anm || is_env_anm) {
			mCalcParticleFuncListNum++;
		}
	} else {
		mCalcParticleFuncListNum++;
	}

	if (is_enable_scale_anm) {
		if (mBaseShape->getType() != 0) {
			if (mExtraShape->isScaleXYDiff()) {
				if (mExtraShape->getScaleAnmTypeX() == 0 && mExtraShape->getScaleAnmTypeY() == 0) {
					mCalcParticleFuncListNum++;
				} else {
					mCalcParticleFuncListNum++;
					mCalcParticleFuncListNum++;
				}
			} else {
				mCalcParticleFuncListNum++;
			}
		}
		mCalcParticleFuncListNum++;
		mCalcParticleFuncListNum++;
	}

	if (mCalcParticleFuncListNum != 0) {
		mCalcParticleFuncList = (JPAFunctionB**)JKRAllocFromHeap(heap, mCalcParticleFuncListNum * 4, 4);
	}

	func_no = 0;

	if (!is_glbl_tex_anm && is_tex_anm) {
		switch (mBaseShape->getTexAnmType()) {
		case 0:
			mCalcParticleFuncList[func_no] = &JPACalcTexIdxNormal;
			break;
		case 1:
			mCalcParticleFuncList[func_no] = &JPACalcTexIdxRepeat;
			break;
		case 2:
			mCalcParticleFuncList[func_no] = &JPACalcTexIdxReverse;
			break;
		case 3:
			mCalcParticleFuncList[func_no] = &JPACalcTexIdxMerge;
			break;
		case 4:
			mCalcParticleFuncList[func_no] = &JPACalcTexIdxRandom;
			break;
		}
		func_no++;
	}

	if (!base_type_5_6 && (is_enable_alpha_anm || is_enable_alpha_flick)) {
		if (is_enable_alpha_flick) {
			mCalcParticleFuncList[func_no] = &JPACalcAlphaFlickAnm;
			func_no++;
		} else {
			mCalcParticleFuncList[func_no] = &JPACalcAlphaAnm;
			func_no++;
		}
	}

	if (!is_glbl_clr_anm) {
		if (is_prm_anm) {
			mCalcParticleFuncList[func_no] = &JPACalcPrm;
			func_no++;
		}
		if (is_env_anm) {
			mCalcParticleFuncList[func_no] = &JPACalcEnv;
			func_no++;
		}
		if (is_prm_anm || is_env_anm) {
			switch (mBaseShape->getClrAnmType()) {
			case 0:
				mCalcParticleFuncList[func_no] = &JPACalcClrIdxNormal;
				break;
			case 1:
				mCalcParticleFuncList[func_no] = &JPACalcClrIdxRepeat;
				break;
			case 2:
				mCalcParticleFuncList[func_no] = &JPACalcClrIdxReverse;
				break;
			case 3:
				mCalcParticleFuncList[func_no] = &JPACalcClrIdxMerge;
				break;
			case 4:
				mCalcParticleFuncList[func_no] = &JPACalcClrIdxRandom;
				break;
			}
			func_no++;
		}
	} else {
		mCalcParticleFuncList[func_no] = &JPACalcColorCopy;
		func_no++;
	}

	if (is_enable_scale_anm) {
		if (mBaseShape->getType() != 0) {
			if (mExtraShape->isScaleXYDiff()) {
				mCalcParticleFuncList[func_no] = &JPACalcScaleY;
				func_no++;
				if (mExtraShape->getScaleAnmTypeY() != 0 || mExtraShape->getScaleAnmTypeX() != 0) {
					switch (mExtraShape->getScaleAnmTypeY()) {
					case 0:
						mCalcParticleFuncList[func_no] = &JPACalcScaleAnmNormal;
						break;
					case 1:
						mCalcParticleFuncList[func_no] = &JPACalcScaleAnmRepeatY;
						break;
					case 2:
						mCalcParticleFuncList[func_no] = &JPACalcScaleAnmReverseY;
						break;
					}
					func_no++;
				}
			} else {
				mCalcParticleFuncList[func_no] = &JPACalcScaleCopy;
				func_no++;
			}
		}
		mCalcParticleFuncList[func_no] = &JPACalcScaleX;
		func_no++;
		switch (mExtraShape->getScaleAnmTypeX()) {
		case 0:
			mCalcParticleFuncList[func_no] = &JPACalcScaleAnmNormal;
			break;
		case 1:
			mCalcParticleFuncList[func_no] = &JPACalcScaleAnmRepeatX;
			break;
		case 2:
			mCalcParticleFuncList[func_no] = &JPACalcScaleAnmReverseX;
			break;
		}
	}

	if (mChildShape != NULL && mChildShape->isScaleOutOn()) {
		mCalcParticleChildFuncListNum++;
	}

	if (mChildShape != NULL && mChildShape->isAlphaOutOn()) {
		mCalcParticleChildFuncListNum++;
	}

	if (mCalcParticleChildFuncListNum != 0) {
		mCalcParticleChildFuncList = (JPAFunctionB**)JKRAllocFromHeap(heap, mCalcParticleChildFuncListNum * 4, 4);
	}

	func_no = 0;

	if (mChildShape != NULL && mChildShape->isScaleOutOn()) {
		mCalcParticleChildFuncList[func_no] = &JPACalcChildScaleOut;
		func_no++;
	}

	if (mChildShape != NULL && mChildShape->isAlphaOutOn()) {
		mCalcParticleChildFuncList[func_no] = &JPACalcChildAlphaOut;
	}

	if (is_draw_parent && base_type_5_6) {
		mDrawEmitterFuncListNum++;
	}

	mDrawEmitterFuncListNum++;

	if (mExTexShape != NULL) {
		mDrawEmitterFuncListNum++;
	}

	if (is_glbl_tex_anm || !is_tex_anm) {
		mDrawEmitterFuncListNum++;
	}

	mDrawEmitterFuncListNum++;

	if (base_type_0_1) {
		mDrawEmitterFuncListNum++;
	}

	if (base_type_0_1 && !is_enable_scale_anm) {
		mDrawEmitterFuncListNum++;
	}

	if (is_glbl_clr_anm || (!is_prm_anm && !is_enable_alpha_anm) || !is_env_anm) {
		mDrawEmitterFuncListNum++;
	}

	if (mDrawEmitterFuncListNum != 0) {
		mDrawEmitterFuncList = (JPAFunctionA**)JKRAllocFromHeap(heap, mDrawEmitterFuncListNum * 4, 4);
	}

	func_no = 0;

	if (is_draw_parent && base_type_5_6) {
		if (mBaseShape->getType() == 5) {
			mDrawEmitterFuncList[func_no] = &JPADrawStripe;
			func_no++;
		} else {
			mDrawEmitterFuncList[func_no] = &JPADrawStripeX;
			func_no++;
		}
	}

	mDrawEmitterFuncList[func_no] = &JPADrawEmitterCallBackB;
	func_no++;

	if (mExTexShape != NULL) {
		mDrawEmitterFuncList[func_no] = &JPALoadExTex;
		func_no++;
	}

	if (!is_tex_anm) {
		mDrawEmitterFuncList[func_no] = &JPALoadTex;
		func_no++;
	} else if (is_glbl_tex_anm) {
		mDrawEmitterFuncList[func_no] = &JPALoadTexAnm;
		func_no++;
	}

	if (base_type_0_1) {
		mDrawEmitterFuncList[func_no] = &JPAGenTexCrdMtxIdt;
		func_no++;
	} else if (is_prj_tex) {
		mDrawEmitterFuncList[func_no] = &JPAGenTexCrdMtxPrj;
		func_no++;
	} else if (is_tex_crd_anm) {
		if (base_type_5_6) {
			mDrawEmitterFuncList[func_no] = &JPAGenCalcTexCrdMtxAnm;
			func_no++;
		} else {
			mDrawEmitterFuncList[func_no] = &JPAGenTexCrdMtxAnm;
			func_no++;
		}
	} else {
		mDrawEmitterFuncList[func_no] = &JPAGenTexCrdMtxIdt;
		func_no++;
	}

	if (base_type_0_1) {
		mDrawEmitterFuncList[func_no] = &JPALoadPosMtxCam;
		func_no++;
	}

	if (base_type_0_1 && !is_enable_scale_anm) {
		if (base_type_0) {
			mDrawEmitterFuncList[func_no] = &JPASetPointSize;
			func_no++;
		} else {
			mDrawEmitterFuncList[func_no] = &JPASetLineWidth;
			func_no++;
		}
	}

	if (is_glbl_clr_anm) {
		if (base_type_5_6 || !is_enable_alpha_anm) {
			mDrawEmitterFuncList[func_no] = &JPARegistPrmEnv;
		} else if (is_enable_alpha_anm) {
			mDrawEmitterFuncList[func_no] = &JPARegistEnv;
		}
	} else if (!is_prm_anm && !is_enable_alpha_anm) {
		if (!is_env_anm) {
			mDrawEmitterFuncList[func_no] = &JPARegistPrmEnv;
		} else {
			mDrawEmitterFuncList[func_no] = &JPARegistPrm;
		}
	} else if (!is_env_anm) {
		mDrawEmitterFuncList[func_no] = &JPARegistEnv;
	}

	if (is_draw_child && child_type_5_6) {
		mDrawEmitterChildFuncListNum++;
	}

	mDrawEmitterChildFuncListNum++;

	if (child_type_0_1) {
		mDrawEmitterChildFuncListNum++;
	}

	if (mChildShape != NULL && !mChildShape->isAlphaOutOn() && !mChildShape->isAlphaInherited() && !mChildShape->isColorInherited()) {
		mDrawEmitterChildFuncListNum++;
	}

	if (mDrawEmitterChildFuncListNum != 0) {
		mDrawEmitterChildFuncList = (JPAFunctionA**)JKRAllocFromHeap(heap, mDrawEmitterChildFuncListNum * 4, 4);
	}

	func_no = 0;

	if (is_draw_child && child_type_5_6) {
		if (mChildShape->getType() == 5) {
			mDrawEmitterChildFuncList[func_no] = &JPADrawStripe;
			func_no++;
		} else {
			mDrawEmitterChildFuncList[func_no] = &JPADrawStripeX;
			func_no++;
		}
	}

	mDrawEmitterChildFuncList[func_no] = &JPADrawEmitterCallBackB;
	func_no++;

	if (child_type_0_1) {
		mDrawEmitterChildFuncList[func_no] = &JPALoadPosMtxCam;
		func_no++;
	}

	if (mChildShape != NULL && !mChildShape->isAlphaOutOn() && !mChildShape->isAlphaInherited() && !mChildShape->isColorInherited()) {
		mDrawEmitterChildFuncList[func_no] = &JPARegistChildPrmEnv;
	}

	if (is_draw_parent && !base_type_5_6) {
		mDrawParticleFuncListNum++;
	}

	mDrawParticleFuncListNum++;

	if (!is_glbl_tex_anm && is_tex_anm) {
		mDrawParticleFuncListNum++;
	}

	if ((base_type_0_1 && is_enable_scale_anm) || (is_tex_crd_anm && !is_prj_tex)) {
		mDrawParticleFuncListNum++;
	}

	if ((!is_glbl_clr_anm && (is_prm_anm || is_env_anm || is_enable_alpha_anm))
	    || (is_glbl_clr_anm && is_enable_alpha_anm && !base_type_5_6)) {
		mDrawParticleFuncListNum++;
	}

	if (mDrawParticleFuncListNum != 0) {
		mDrawParticleFuncList = (JPAFunctionB**)JKRAllocFromHeap(heap, mDrawParticleFuncListNum * 4, 4);
	}

	func_no = 0;

	if (is_draw_parent && !base_type_5_6) {
		switch (mBaseShape->getType()) {
		case 2:
			if (is_enable_rotate_anm) {
				mDrawParticleFuncList[func_no] = &JPADrawRotBillboard;
			} else {
				mDrawParticleFuncList[func_no] = &JPADrawBillboard;
			}
			break;
		case 10:
			if (is_enable_rotate_anm) {
				mDrawParticleFuncList[func_no] = &JPADrawRotYBillboard;
			} else {
				mDrawParticleFuncList[func_no] = &JPADrawYBillboard;
			}
			break;
		case 3:
		case 4:
			if (is_enable_rotate_anm) {
				mDrawParticleFuncList[func_no] = &JPADrawRotDirection;
			} else {
				mDrawParticleFuncList[func_no] = &JPADrawDirection;
			}
			break;
		case 9:
			mDrawParticleFuncList[func_no] = &JPADrawDBillboard;
			break;
		case 7:
		case 8:
			mDrawParticleFuncList[func_no] = &JPADrawRotation;
			break;
		case 0:
			mDrawParticleFuncList[func_no] = &JPADrawPoint;
			break;
		case 1:
			mDrawParticleFuncList[func_no] = &JPADrawLine;
			break;
		}
		func_no++;
	}

	mDrawParticleFuncList[func_no] = &JPADrawParticleCallBack;
	func_no++;

	if (!is_glbl_tex_anm && is_tex_anm) {
		mDrawParticleFuncList[func_no] = &JPALoadTexAnm;
		func_no++;
	}

	if (base_type_0_1 && is_enable_scale_anm) {
		if (base_type_0) {
			mDrawParticleFuncList[func_no] = &JPASetPointSize;
			func_no++;
		} else {
			mDrawParticleFuncList[func_no] = &JPASetLineWidth;
			func_no++;
		}
	} else if (is_tex_crd_anm && !is_prj_tex) {
		mDrawParticleFuncList[func_no] = &JPALoadCalcTexCrdMtxAnm;
		func_no++;
	}

	if (!is_glbl_clr_anm) {
		if (is_prm_anm) {
			if (is_env_anm) {
				mDrawParticleFuncList[func_no] = &JPARegistPrmAlphaEnv;
			} else {
				mDrawParticleFuncList[func_no] = &JPARegistPrmAlpha;
			}
		} else if (is_enable_alpha_anm) {
			if (is_env_anm) {
				mDrawParticleFuncList[func_no] = &JPARegistAlphaEnv;
			} else {
				mDrawParticleFuncList[func_no] = &JPARegistAlpha;
			}
		} else if (is_env_anm) {
			mDrawParticleFuncList[func_no] = &JPARegistEnv;
		}
	} else if (is_enable_alpha_anm && !base_type_5_6) {
		mDrawParticleFuncList[func_no] = &JPARegistAlpha;
	}

	if (is_draw_child && mChildShape != NULL && !child_type_5_6) {
		mDrawParticleChildFuncListNum++;
	}

	mDrawParticleChildFuncListNum++;

	if (child_type_0_1) {
		mDrawParticleChildFuncListNum++;
	}

	if (mChildShape != NULL && (mChildShape->isAlphaOutOn() || mChildShape->isAlphaInherited() || mChildShape->isColorInherited())) {
		mDrawParticleChildFuncListNum++;
	}

	if (mDrawParticleChildFuncListNum != 0) {
		mDrawParticleChildFuncList = (JPAFunctionB**)JKRAllocFromHeap(heap, mDrawParticleChildFuncListNum * 4, 4);
	}

	func_no = 0;

	if (is_draw_child && mChildShape != NULL && !child_type_5_6) {
		switch (mChildShape->getType()) {
		case 2:
			if (is_rotate_on) {
				mDrawParticleChildFuncList[func_no] = &JPADrawRotBillboard;
			} else {
				mDrawParticleChildFuncList[func_no] = &JPADrawBillboard;
			}
			break;
		case 10:
			if (is_rotate_on) {
				mDrawParticleChildFuncList[func_no] = &JPADrawRotYBillboard;
			} else {
				mDrawParticleChildFuncList[func_no] = &JPADrawYBillboard;
			}
			break;
		case 3:
		case 4:
			if (is_rotate_on) {
				mDrawParticleChildFuncList[func_no] = &JPADrawRotDirection;
			} else {
				mDrawParticleChildFuncList[func_no] = &JPADrawDirection;
			}
			break;
		case 9:
			mDrawParticleChildFuncList[func_no] = &JPADrawDBillboard;
			break;
		case 7:
		case 8:
			mDrawParticleChildFuncList[func_no] = &JPADrawRotation;
			break;
		case 0:
			mDrawParticleChildFuncList[func_no] = &JPADrawPoint;
			break;
		case 1:
			mDrawParticleChildFuncList[func_no] = &JPADrawLine;
			break;
		}
		func_no++;
	}

	mDrawParticleChildFuncList[func_no] = &JPADrawParticleCallBack;
	func_no++;

	if (child_type_0_1) {
		if (child_type_0) {
			mDrawParticleChildFuncList[func_no] = &JPASetPointSize;
			func_no++;
		} else {
			mDrawParticleChildFuncList[func_no] = &JPASetLineWidth;
			func_no++;
		}
	}

	if (mChildShape != NULL && (mChildShape->isAlphaOutOn() || mChildShape->isAlphaInherited() || mChildShape->isColorInherited())) {
		mDrawParticleChildFuncList[func_no] = &JPARegistPrmAlphaEnv;
	}
}

/**
 * @note Address: 0x80096B9C
 * @note Size: 0x55C
 */
bool JPAResource::calc(JPAEmitterWorkData* work, JPABaseEmitter* emitter)
{
	work->mEmitter      = emitter;
	work->mResource     = this;
	work->mCreateNumber = 0;

	if (!emitter->processTillStartFrame()) {
		return false;
	}

	if (emitter->processTermination()) {
		return true;
	}

	if (emitter->isFlag(2)) {
		if (emitter->mEmitterCallback != NULL) {
			emitter->mEmitterCallback->execute(emitter);
			if (emitter->isFlag(0x100)) {
				return true;
			}
			emitter->mEmitterCallback->executeAfter(emitter);
			if (emitter->isFlag(0x100)) {
				return true;
			}
		}

	} else {
		calcKey(work);

		for (int i = mFieldBlockNum - 1; i >= 0; i--) {
			mFieldBlocks[i]->initOpParam();
		}

		if (emitter->mEmitterCallback != NULL) {
			emitter->mEmitterCallback->execute(emitter);
			if (emitter->isFlag(0x100)) {
				return true;
			}
		}

		calcWorkData_c(work);

		for (int i = mCalcEmitterFuncListNum - 1; i >= 0; i--) {
			(*mCalcEmitterFuncList[i])(work);
		}

		for (int i = mFieldBlockNum - 1; i >= 0; i--) {
			mFieldBlocks[i]->prepare(work);
		}

		if (!emitter->isFlag(8)) {
			mDynamicsBlock->create(work);
		}

		if (emitter->mEmitterCallback != NULL) {
			emitter->mEmitterCallback->executeAfter(emitter);
			if (emitter->isFlag(0x100)) {
				return true;
			}
		}

		JPANode<JPABaseParticle>* node = emitter->mAlivePtclBase.getFirst();
		JPANode<JPABaseParticle>* next;
		while (node != emitter->mAlivePtclBase.getEnd()) {
			next = node->getNext();
			if (node->getObject()->calc_p(work)) {
				emitter->mPtclPool->push_front(emitter->mAlivePtclBase.erase(node));
			}
			node = next;
		}

		node = emitter->mAlivePtclChld.getFirst();
		while (node != emitter->mAlivePtclChld.getEnd()) {
			next = node->getNext();
			if (node->getObject()->calc_c(work)) {
				emitter->mPtclPool->push_front(emitter->mAlivePtclChld.erase(node));
			}
			node = next;
		}

		emitter->mCurrentFrame++;
	}

	return false;
}

/**
 * @note Address: 0x800970F8
 * @note Size: 0xF0
 */
void JPAResource::draw(JPAEmitterWorkData* work, JPABaseEmitter* emtr)
{
	work->mEmitter   = emtr;
	work->mResource  = this;
	work->mDrawCount = 0;
	calcWorkData_d(work);
	mBaseShape->setGX(work);
	for (s32 i = 1; i <= emtr->getDrawTimes(); i++) {
		work->mDrawCount++;
		if (getBsp()->isDrawPrntAhead() && mChildShape != nullptr)
			drawC(work);
		drawP(work);
		if (!getBsp()->isDrawPrntAhead() && mChildShape != nullptr)
			drawC(work);
	}
}

/**
 * @note Address: 0x800971E8
 * @note Size: 0x334
 */
void JPAResource::drawP(JPAEmitterWorkData* work)
{
	work->mEmitter->resetFlag(0x80);

	work->mGlobalPtclScl.x = work->mEmitter->mGlobalPScl.x * mBaseShape->getBaseSizeX();
	work->mGlobalPtclScl.y = work->mEmitter->mGlobalPScl.y * mBaseShape->getBaseSizeY();

	if (mBaseShape->getType() == 0) {
		work->mGlobalPtclScl.x *= 1.02f;
	} else if (mBaseShape->getType() == 1) {
		work->mGlobalPtclScl.x *= 1.02f;
		work->mGlobalPtclScl.y *= 0.4f;
	}

	if (mExtraShape != NULL && mExtraShape->isEnableScaleAnm()) {
		work->mPivot.x = mExtraShape->getScaleCenterX() - 1.0f;
		work->mPivot.y = mExtraShape->getScaleCenterY() - 1.0f;
	} else {
		work->mPivot.x = work->mPivot.y = 0.0f;
	}

	work->mDirType        = mBaseShape->getDirType();
	work->mRotType        = mBaseShape->getRotType();
	work->mDLType         = mBaseShape->getType() == 4 || mBaseShape->getType() == 8;
	work->mPlaneType      = work->mDLType ? 2 : mBaseShape->getBasePlaneType();
	work->mProjectionType = mBaseShape->isPrjTex() ? (mBaseShape->isTexCrdAnm() ? 2 : 1) : 0;

	work->mpAlivePtcl = &work->mEmitter->mAlivePtclBase;
	setPTev();

	for (int i = mDrawEmitterFuncListNum - 1; i >= 0; i--) {
		(*mDrawEmitterFuncList[i])(work);
	}

	if (mBaseShape->isDrawFwdAhead()) {
		JPANode<JPABaseParticle>* node = work->mEmitter->mAlivePtclBase.getLast();
		for (; node != work->mEmitter->mAlivePtclBase.getEnd(); node = node->getPrev()) {
			work->mpCurNode = node;
			if (mDrawParticleFuncList != NULL) {
				for (int i = mDrawParticleFuncListNum - 1; i >= 0; i--) {
					(*mDrawParticleFuncList[i])(work, node->getObject());
				}
			}
		}
	} else {
		JPANode<JPABaseParticle>* node = work->mEmitter->mAlivePtclBase.getFirst();
		for (; node != work->mEmitter->mAlivePtclBase.getEnd(); node = node->getNext()) {
			work->mpCurNode = node;
			if (mDrawParticleFuncList != NULL) {
				for (int i = mDrawParticleFuncListNum - 1; i >= 0; i--) {
					(*mDrawParticleFuncList[i])(work, node->getObject());
				}
			}
		}
	}

	GXSetMisc(GX_MT_XF_FLUSH, 0);

	if (work->mEmitter->mEmitterCallback != NULL) {
		work->mEmitter->mEmitterCallback->drawAfter(work->mEmitter);
	}
}

/**
 * @note Address: 0x8009751C
 * @note Size: 0x2F0
 */
void JPAResource::drawC(JPAEmitterWorkData* data)
{
	data->mEmitter->setFlag(JPAEMIT_DrawChild);
	if (mChildShape->isScaleInherited()) {
		data->mGlobalPtclScl.x = data->mEmitter->mGlobalPScl.x * mBaseShape->mData->mBaseSizeX;
		data->mGlobalPtclScl.y = data->mEmitter->mGlobalPScl.y * mBaseShape->mData->mBaseSizeY;
	} else {
		data->mGlobalPtclScl.x = data->mEmitter->mGlobalPScl.x * mChildShape->mData->mScaleX;
		data->mGlobalPtclScl.y = data->mEmitter->mGlobalPScl.y * mChildShape->mData->mScaleY;
	}

	u32 flag = mChildShape->mData->mFlags & 0xf;
	if (flag == 0) {
		data->mGlobalPtclScl.x *= 1.02f;
	} else if (flag == 1) {
		data->mGlobalPtclScl.x *= 1.02f;
		data->mGlobalPtclScl.y *= 0.4f;
	}

	bool test      = true;
	data->mPivot.y = 0.0f;
	data->mPivot.x = 0.0f;
	data->mDirType = mChildShape->mData->mFlags >> 4 & 7;
	data->mRotType = mChildShape->mData->mFlags >> 7 & 7;

	flag = mChildShape->mData->mFlags & 15;
	if (flag != 4 && flag != 8) {
		test = false;
	}
	data->mDLType         = test;
	data->mPlaneType      = ((u32)data->mDLType) ? 2 : mChildShape->mData->mFlags >> 10 & 1;
	data->mProjectionType = 0;
	data->mpAlivePtcl     = &data->mEmitter->mAlivePtclChld;
	setCTev(data);

	for (int i = mDrawEmitterChildFuncListNum - 1; 0 <= i; i--) {
		mDrawEmitterChildFuncList[i](data);
	}

	if (mBaseShape->mData->mFlags & 0x200000) {
		for (JPANode<JPABaseParticle>* node = data->mEmitter->mAlivePtclChld.getLast(); node; node = node->getPrev()) {
			data->mpCurNode = node;
			if (mDrawParticleChildFuncList) {
				for (int i = mDrawParticleChildFuncListNum - 1; 0 <= i; i--) {
					mDrawParticleChildFuncList[i](data, node->getObject());
				}
			}
		}
	} else {
		FOREACH_NODE(JPANode<JPABaseParticle>, data->mEmitter->mAlivePtclChld.getFirst(), node)
		{
			data->mpCurNode = node;
			if (mDrawParticleChildFuncList) {
				for (int i = mDrawParticleChildFuncListNum - 1; 0 <= i; i--) {
					mDrawParticleChildFuncList[i](data, node->getObject());
				}
			}
		}
	}
	GXSetMisc(GX_MT_XF_FLUSH, 0);
	if (data->mEmitter->mEmitterCallback) {
		data->mEmitter->mEmitterCallback->drawAfter(data->mEmitter);
	}
}

/**
 * @note Address: 0x8009780C
 * @note Size: 0x278
 */
void JPAResource::setPTev()
{
	GXTexCoordID tex_coord = GX_TEXCOORD1;
	u8 tev_stages          = 1;
	u8 tex_gens            = 1;
	u8 ind_stages          = 0;

	int base_plane_type = (mBaseShape->getType() == 3 || mBaseShape->getType() == 7) ? mBaseShape->getBasePlaneType() : 0;
	int center_offset;
	if (mExtraShape) {
		center_offset = (mExtraShape->getScaleCenterX() + 3 * mExtraShape->getScaleCenterY()) * 0xC;
	} else {
		center_offset = 0x30;
	}
	int pos_offset = center_offset + base_plane_type * 0x6C;
	int crd_offset = (mBaseShape->getTilingS() + 2 * mBaseShape->getTilingT()) * 8;
	GXSetArray(GX_VA_POS, jpa_pos + pos_offset, 3);
	GXSetArray(GX_VA_TEX0, jpa_crd + crd_offset, 2);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);

	if (mExTexShape) {
		if (mExTexShape->isUseIndirect()) {
			GXSetIndTexOrder(GX_IND_TEX_STAGE_0, GX_TEXCOORD1, GX_TEXMAP2);
			GXSetIndTexCoordScale(GX_IND_TEX_STAGE_0, GX_ITS_1, GX_ITS_1);
			GXSetIndTexMtx(GX_ITM_0, (f32(*)[3])mExTexShape->getIndTexMtx(), mExTexShape->getExpScale());

			GXSetTevIndirect(GX_TEVSTAGE0, GX_IND_TEX_STAGE_0, GX_ITF_8, GX_ITB_STU, GX_ITM_0, GX_ITW_OFF, GX_ITW_OFF, 0, 0, GX_ITBA_OFF);
			ind_stages++;
			tex_gens++;
			tex_coord = GX_TEXCOORD2;
		}
		if (mExTexShape->isUseSecTex()) {
			GXSetTevOrder(GX_TEVSTAGE1, tex_coord, GX_TEXMAP3, GX_COLOR_NULL);
			GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_CPREV, GX_CC_ZERO);
			GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_TEXA, GX_CA_APREV, GX_CA_ZERO);
			GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
			GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
			tev_stages++;
			tex_gens++;
		}
	}

	GXSetNumTevStages(tev_stages);
	GXSetNumIndStages(ind_stages);
	if (mBaseShape->isClipOn()) {
		GXSetMisc(GX_MT_XF_FLUSH, 8);
		GXSetClipMode(GX_CLIP_ENABLE);
	} else {
		GXSetClipMode(GX_CLIP_DISABLE);
	}
	GXSetNumTexGens(tex_gens);
}

/**
 * @note Address: 0x80097A84
 * @note Size: 0x164
 */
void JPAResource::setCTev(JPAEmitterWorkData* work)
{
	int base_plane_type = (mChildShape->getType() == 3 || mChildShape->getType() == 7) ? mChildShape->getBasePlaneType() : 0;
	int pos_offset      = 0x30 + base_plane_type * 0x6C;
	GXSetArray(GX_VA_POS, jpa_pos + pos_offset, 3);
	GXSetArray(GX_VA_TEX0, jpa_crd, 2);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP1, GX_COLOR_NULL);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3C, GX_FALSE, 0x7d);
	GXSetTevDirect(GX_TEVSTAGE0);
	GXSetNumTevStages(1);
	GXSetNumIndStages(0);
	if (mChildShape->isClipOn()) {
		GXSetMisc(GX_MT_XF_FLUSH, 8);
		GXSetClipMode(GX_CLIP_ENABLE);
	} else {
		GXSetClipMode(GX_CLIP_DISABLE);
	}
	GXSetNumTexGens(1);
	work->mResourceMgr->load(work->mResource->getTexIdx(mChildShape->getTexIdx()), GX_TEXMAP1);
}

/**
 * @note Address: 0x80097BE8
 * @note Size: 0x74
 */
void JPAResource::calc_p(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if (mCalcParticleFuncList == nullptr) {
		return;
	}
	for (int i = mCalcParticleFuncListNum - 1; 0 <= i; i--) {
		mCalcParticleFuncList[i](workData, particle);
	}
}

/**
 * @note Address: 0x80097C5C
 * @note Size: 0x74
 */
void JPAResource::calc_c(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if (!mCalcParticleChildFuncList) {
		return;
	}

	for (int i = mCalcParticleChildFuncListNum - 1; 0 <= i; i--) {
		mCalcParticleChildFuncList[i](workData, particle);
	}
}

/**
 * @note Address: 0x80097CD0
 * @note Size: 0x74
 */
void JPAResource::calcField(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	for (int i = mFieldBlockNum - 1; 0 <= i; i--) {
		mFieldBlocks[i]->mField->calc(workData, mFieldBlocks[i], particle);
	}
}

/**
 * @note Address: 0x80097D44
 * @note Size: 0x138
 */
void JPAResource::calcKey(JPAEmitterWorkData* data)
{
	for (int i = mKeyBlockNum - 1; i >= 0; i--) {
		f32 calc = mKeyBlocks[i]->calc(data->mEmitter->mCurrentFrame);

		switch (mKeyBlocks[i]->mDataStart->mFlag) {
		case 0:
			data->mEmitter->setRate(calc);
			break;
		case 1:
			data->mEmitter->setVolumeSize(calc);
			break;
		case 3:
			data->mEmitter->mVolumeMinRad = calc;
			break;
		case 4:
			data->mEmitter->setLifeTime(calc);
			break;
		case 6:
			data->mEmitter->mAwayFromCenterSpeed = calc;
			break;
		case 7:
			data->mEmitter->mAwayFromAxisSpeed = calc;
			break;
		case 8:
			data->mEmitter->mDirSpeed = calc;
			break;
		case 9:
			data->mEmitter->mSpread = calc;
			break;
		case 10:
			data->mEmitter->mScaleOut = calc;
			break;
		}
	}
}

/**
 * @note Address: 0x80097E7C
 * @note Size: 0x1DC
 */
void JPAResource::calcWorkData_c(JPAEmitterWorkData* data)
{
	data->mVolumeSize     = data->mEmitter->mVolumeSize;
	data->mVolumeMinRad   = data->mEmitter->mVolumeMinRad;
	data->mVolumeSweep    = data->mEmitter->mVolumeSweep;
	data->mVolumeX        = 0;
	data->mVolumeAngleNum = 0;
	data->mVolumeAngleMax = 1;
	data->mDivNumber      = mDynamicsBlock->mData->mDivNumber * 2 + 1;

	Mtx mtx, mtx2;
	Matrixf mtx3;
	PSMTXScale(mtx, data->mEmitter->mLocalScl.x, data->mEmitter->mLocalScl.y, data->mEmitter->mLocalScl.z);
	JPAGetXYZRotateMtx(data->mEmitter->mLocalRot.x * 182, data->mEmitter->mLocalRot.y * 182, data->mEmitter->mLocalRot.z * 182, mtx2);
	PSMTXScale(mtx3.mMatrix.mtxView, data->mEmitter->mGlobalScl.x, data->mEmitter->mGlobalScl.y, data->mEmitter->mGlobalScl.z);
	PSMTXConcat(data->mEmitter->mGlobalRot, mtx3.mMatrix.mtxView, mtx3.mMatrix.mtxView);
	mtx3.mMatrix.structView.tx = data->mEmitter->mGlobalTrs.x;
	mtx3.mMatrix.structView.ty = data->mEmitter->mGlobalTrs.y;
	mtx3.mMatrix.structView.tz = data->mEmitter->mGlobalTrs.z;
	PSMTXCopy(data->mEmitter->mGlobalRot, data->mRotationMtx);
	PSMTXConcat(data->mRotationMtx, mtx2, data->mGlobalRot);
	PSMTXConcat(data->mGlobalRot, mtx, data->mGlobalSR);
	data->mEmitterPos = data->mEmitter->mLocalTrs;

	JPABaseEmitter* emit = data->mEmitter;
	data->mGlobalScl.x   = emit->mGlobalScl.x * emit->mLocalScl.x;
	data->mGlobalScl.y   = emit->mGlobalScl.y * emit->mLocalScl.y;
	data->mGlobalScl.z   = emit->mGlobalScl.z * emit->mLocalScl.z;

	JPAGetDirMtx(data->mEmitter->mLocalDir, data->mDirectionMtx);
	data->mPublicScale = data->mEmitter->mGlobalScl;
	PSMTXMultVec(mtx3.mMatrix.mtxView, (Vec*)&data->mEmitter->mLocalTrs, (Vec*)&data->mGlobalPos);
}

/**
 * @note Address: 0x80098058
 * @note Size: 0x80
 */
void JPAResource::calcWorkData_d(JPAEmitterWorkData* work)
{
	Mtx mtx;
	JPAGetXYZRotateMtx(work->mEmitter->mLocalRot.x * 0xB6, work->mEmitter->mLocalRot.y * 0xB6, work->mEmitter->mLocalRot.z * 0xB6, mtx);
	PSMTXConcat(work->mEmitter->mGlobalRot, mtx, work->mGlobalRot);
	PSMTXMultVecSR(work->mGlobalRot, (Vec*)&work->mEmitter->mLocalDir, (Vec*)&work->mGlobalEmtrDir);
}
