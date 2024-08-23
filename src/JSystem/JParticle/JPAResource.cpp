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
	JPAExtraShape* exShape          = mExtraShape;
	const JPABaseShapeData* shpData = mBaseShape->mData;

	u32 shpFlags    = shpData->mFlags;
	u8 clrFlag      = shpData->mClrFlg;
	u8 texFlag      = shpData->mTexFlg;
	u8 isGlblClrAnm = shpFlags & 0x1000;
	u8 isGlblTexAnm = shpFlags & 0x4000;
	u8 isTexCrdAnm  = shpFlags & 0x1000000;
	u8 isPrjTex     = shpFlags & 0x100000;

	bool exShapeSet1 = false;
	if (exShape && exShape->mData->mFlags & 1) {
		exShapeSet1 = true;
	}

	bool exShapeSet2 = false;
	if (exShape && exShape->mData->mFlags & 0x10000) {
		exShapeSet2 = true;
	}

	bool exShapeSet3 = false;
	if (exShape && (exShape->mData->mFlags & 0x10000) && (exShape->mData->mFlags & 0x20000)) {
		exShapeSet3 = true;
	}

	bool exShapeSet4 = false;
	if (exShape && exShape->mData->mFlags & 0x1000000) {
		exShapeSet4 = true;
	}

	bool exShapeSet5 = false;
	if (exShapeSet4 || (mChildShape && mChildShape->mData->mFlags & 0x1000000)) {
		exShapeSet5 = true;
	}

	u8 shpType = shpFlags & 0xf;
	bool test  = true;
	if (shpType != 5 && shpType != 6) {
		test = false;
	}
	// skipping some dumb stuff for now

	if (isGlblTexAnm && (texFlag & 1)) {
		mCalcEmitterFuncListNum++;
	}
	if (isGlblClrAnm) {
		if (clrFlag & 2) {
			mCalcEmitterFuncListNum++;
		}
		if (clrFlag & 8) {
			mCalcEmitterFuncListNum++;
		}
		if ((clrFlag & 2) || (clrFlag & 8)) {
			mCalcEmitterFuncListNum++;
		}
	}
	if (mCalcParticleFuncListNum) {
		mCalcEmitterFuncList = (JPAFunctionA**)heap->alloc(mCalcParticleChildFuncListNum * 4, 4);
	}

	int idx = 0;
	if (isGlblTexAnm && (texFlag & 1)) {
		switch (mBaseShape->getTexAnmType()) {
		case 0:
			mCalcEmitterFuncList[0] = JPACalcTexIdxNormal;
			break;
		case 1:
			mCalcEmitterFuncList[0] = JPACalcTexIdxRepeat;
			break;
		case 2:
			mCalcEmitterFuncList[0] = JPACalcTexIdxReverse;
			break;
		case 3:
			mCalcEmitterFuncList[0] = JPACalcTexIdxMerge;
			break;
		case 4:
			mCalcEmitterFuncList[0] = JPACalcTexIdxRandom;
			break;
		}
		idx = 1;
	}

	if (isGlblClrAnm) {
		int i = idx;
		if (clrFlag & 2) {
			i                               = idx + 1;
			mCalcParticleChildFuncList[idx] = JPACalcPrm;
		}
		idx = i;
		if (clrFlag & 8) {
			idx                             = i + 1;
			mCalcParticleChildFuncList[idx] = JPACalcEnv;
		}
		if ((clrFlag & 2) || (clrFlag & 8)) {
			switch (mBaseShape->getTexAnmType()) {
			case 0:
				mCalcEmitterFuncList[idx] = JPACalcTexIdxNormal;
				break;
			case 1:
				mCalcEmitterFuncList[idx] = JPACalcTexIdxRepeat;
				break;
			case 2:
				mCalcEmitterFuncList[idx] = JPACalcTexIdxReverse;
				break;
			case 3:
				mCalcEmitterFuncList[idx] = JPACalcTexIdxMerge;
				break;
			case 4:
				mCalcEmitterFuncList[idx] = JPACalcTexIdxRandom;
				break;
			}
		}
	}

	// determin number of particle callbacks
	if (!isGlblTexAnm && (texFlag & 1)) {
		mCalcParticleFuncListNum++;
	}
	if ((!test) && (exShapeSet2 || exShapeSet3)) {
		mCalcParticleFuncListNum++;
	}
	if (isGlblClrAnm) {
		if (clrFlag & 2) {
			mCalcParticleFuncListNum++;
		}
		if (clrFlag & 8) {
			mCalcParticleFuncListNum++;
		}
		if (clrFlag & 2 || clrFlag & 8) {
			mCalcParticleFuncListNum++;
		}
	} else {
		mCalcParticleFuncListNum++;
	}
	if (exShapeSet1) {
		if (mBaseShape->getType() != 0) {
			u32 type = mBaseShape->getType();
			if (!(type & 2)) {
				mCalcParticleFuncListNum++;
			} else if (!(type >> 8 & 3) && !(type >> 10 & 3)) {
				mCalcParticleFuncListNum++;
			} else {
				mCalcParticleFuncListNum++;
				mCalcParticleFuncListNum++;
			}
		}
		mCalcParticleFuncListNum++;
		mCalcParticleFuncListNum++;
	}
	// allocate particle callbacks
	if (mCalcParticleChildFuncListNum != 0) {
		mCalcParticleFuncList = (JPAFunctionB**)heap->alloc(mCalcParticleFuncListNum * 4, 4);
	}

	// set particle callback functions
	idx = 0;
	if (!isGlblTexAnm && (texFlag & 1)) {
		switch (mBaseShape->getTexAnmType()) {
		case 0:
			mCalcParticleFuncList[0] = JPACalcTexIdxNormal;
			break;
		case 1:
			mCalcParticleFuncList[0] = JPACalcTexIdxRepeat;
			break;
		case 2:
			mCalcParticleFuncList[0] = JPACalcTexIdxReverse;
			break;
		case 3:
			mCalcParticleFuncList[0] = JPACalcTexIdxMerge;
			break;
		case 4:
			mCalcParticleFuncList[0] = JPACalcTexIdxRandom;
			break;
		}
		idx = 1;
	}

	{
		int i = idx;
		if (!test && (exShapeSet2 || exShapeSet3)) {
			if (exShapeSet3) {
				i                          = idx + 1;
				mCalcParticleFuncList[idx] = JPACalcAlphaFlickAnm;
			} else {
				idx                        = i + 1;
				mCalcParticleFuncList[idx] = JPACalcAlphaAnm;
			}
		}

		if (!isGlblClrAnm) {
			int i = idx;
			if (clrFlag & 2) {
				i                          = idx + 1;
				mCalcParticleFuncList[idx] = JPACalcPrm;
			}
			idx = i;
			if (clrFlag & 8) {
				idx                        = i + 1;
				mCalcParticleFuncList[idx] = JPACalcEnv;
			}
			if ((clrFlag & 2) || (clrFlag & 8)) {
				switch (mBaseShape->getTexAnmType()) {
				case 0:
					mCalcParticleFuncList[idx] = JPACalcClrIdxNormal;
					break;
				case 1:
					mCalcParticleFuncList[idx] = JPACalcClrIdxRepeat;
					break;
				case 2:
					mCalcParticleFuncList[idx] = JPACalcClrIdxReverse;
					break;
				case 3:
					mCalcParticleFuncList[idx] = JPACalcClrIdxMerge;
					break;
				case 4:
					mCalcParticleFuncList[idx] = JPACalcClrIdxRandom;
					break;
				}
			}
		} else {
			mCalcParticleFuncList[idx] = JPACalcColorCopy;
		}
	}

	if (exShapeSet1) {
		if (mBaseShape->getType()) {
			if (mBaseShape->mData->mFlags & 2) {
				mCalcParticleFuncList[idx] = JPACalcScaleY;
				switch (mBaseShape->getTexAnmType()) {
				case 0:
					mCalcParticleFuncList[idx] = JPACalcScaleAnmNormal;
					break;
				case 1:
					mCalcParticleFuncList[idx] = JPACalcScaleAnmRepeatY;
					break;
				case 2:
					mCalcParticleFuncList[idx] = JPACalcScaleAnmReverseY;
					break;
				}
			} else {
				mCalcParticleFuncList[idx] = JPACalcScaleCopy;
			}
			idx += 2;
		}
		mCalcParticleFuncList[idx] = JPACalcScaleX;
		switch (mBaseShape->getTexAnmType()) {
		case 0:
			mCalcParticleFuncList[idx] = JPACalcScaleAnmNormal;
			break;
		case 1:
			mCalcParticleFuncList[idx] = JPACalcScaleAnmRepeatX;
			break;
		case 2:
			mCalcParticleFuncList[idx] = JPACalcScaleAnmReverseX;
			break;
		}
	}

	if (mChildShape && mChildShape->mData->mFlags & 0x40000) {
		mCalcParticleChildFuncListNum++;
	}
	if (mChildShape && mChildShape->mData->mFlags & 0x80000) {
		mCalcParticleChildFuncListNum++;
	}
	if (mCalcParticleChildFuncListNum) {
		mCalcParticleChildFuncList = (JPAFunctionB**)heap->alloc(mCalcParticleChildFuncListNum * 4, 4);
	}
	idx = 0;
	if (mChildShape && mChildShape->mData->mFlags & 0x40000) {
		idx                           = 1;
		mCalcParticleChildFuncList[0] = JPACalcChildScaleOut;
	}
	if (mChildShape && mChildShape->mData->mFlags & 0x80000) {
		idx                           = 1;
		mCalcParticleChildFuncList[0] = JPACalcChildAlphaOut;
	}

	if (test) {
		mDrawEmitterFuncListNum++;
	}
	mDrawEmitterFuncListNum++;
	if (mExTexShape) {
		mDrawEmitterFuncListNum++;
	}
	if (isGlblTexAnm || !(texFlag & 1)) {
		mDrawEmitterFuncListNum++;
	}
	mDrawEmitterFuncListNum++;
	if (!test) {
		mDrawEmitterFuncListNum++;
		if (!exShapeSet1) {
			mDrawEmitterFuncListNum++;
		}
	}
	if (isGlblClrAnm || (!(clrFlag & 2) && !exShapeSet2) || !(clrFlag & 8)) {
		mDrawEmitterFuncListNum++;
	}
	if (mDrawEmitterFuncListNum) {
		mDrawEmitterFuncList = (JPAFunctionA**)heap->alloc(mDrawEmitterFuncListNum * 4, 4);
	}

	if (test) {
		if (mBaseShape->getType() == 5) {
			idx                     = 1;
			mDrawEmitterFuncList[0] = JPADrawStripe;
		} else {
			idx                     = 1;
			mDrawEmitterFuncList[0] = JPADrawStripeX;
		}
	}
	mDrawEmitterFuncList[0] = JPADrawEmitterCallBackB;
	if (mExTexShape) {
		mDrawEmitterFuncList[idx + 1] = JPALoadExTex;
	}
	if (!(texFlag & 1)) {
		mDrawEmitterFuncList[idx + 1] = JPALoadTex;
	} else if (isGlblTexAnm) {
		mDrawEmitterFuncList[idx + 1] = JPALoadTexAnm;
	}

	if (!test) {
		mDrawEmitterFuncList[idx] = JPAGenTexCrdMtxIdt;
	} else if (isPrjTex) {
		mDrawEmitterFuncList[idx] = JPAGenTexCrdMtxPrj;
	} else if (test) {
		mDrawEmitterFuncList[idx] = JPAGenCalcTexCrdMtxAnm;
	} else if (isTexCrdAnm) {
		mDrawEmitterFuncList[idx] = JPAGenTexCrdMtxAnm;
	} else {
		mDrawEmitterFuncList[idx] = JPAGenTexCrdMtxIdt;
	}

	if (!test) {
		mDrawEmitterFuncList[idx + 1] = JPALoadPosMtxCam;
		if (!exShapeSet1) {
			if (exShapeSet2) {
				mDrawEmitterFuncList[idx] = JPASetPointSize;
			} else {
				mDrawEmitterFuncList[idx] = JPASetLineWidth;
			}
		}
	}

	if (!test) {
		mDrawEmitterFuncList[idx + 1] = JPALoadPosMtxCam;
		if (!exShapeSet1) {
			if (exShapeSet2) {
				mDrawEmitterFuncList[idx] = JPASetPointSize;
			} else {
				mDrawEmitterFuncList[idx] = JPASetLineWidth;
			}
		}
	}

	if (isGlblClrAnm == 0) {
		if ((clrFlag & 2) || exShapeSet2) {
			if (!(clrFlag & 8)) {
				mDrawEmitterFuncList[idx] = JPARegistEnv;
			}
		} else if (!(clrFlag & 8)) {
			mDrawEmitterFuncList[idx] = JPARegistPrmEnv;
		} else {
			mDrawEmitterFuncList[idx] = JPARegistPrm;
		}
	} else if (test || !exShapeSet2) {
		mDrawEmitterFuncList[idx] = JPARegistPrmEnv;
	} else if (exShapeSet2) {
		mDrawEmitterFuncList[idx] = JPARegistEnv;
	}

	if (shpFlags && test) {
		mDrawEmitterChildFuncListNum++;
	}
	mDrawEmitterChildFuncListNum++;
	if (test) {
		mDrawEmitterChildFuncListNum++;
	}
	if (mChildShape && !(mChildShape->mData->mFlags & 0x80000) && !(mChildShape->mData->mFlags & 0x20000)
	    && !(mChildShape->mData->mFlags & 0x40000)) {
		mDrawEmitterChildFuncListNum++;
	}
	if (mDrawEmitterChildFuncListNum) {
		mDrawEmitterChildFuncList = (JPAFunctionA**)heap->alloc(mDrawEmitterChildFuncListNum * 4, 4);
	}
	idx = 0;
	if (shpFlags && test) {
		if ((mChildShape->mData->mFlags & 0xf) == 5) {
			idx                          = 1;
			mDrawEmitterChildFuncList[0] = JPADrawStripe;
		} else {
			idx                          = 1;
			mDrawEmitterChildFuncList[0] = JPADrawStripeX;
		}
	}
	mDrawEmitterChildFuncList[idx] = JPADrawEmitterCallBackB;
	if (test) {
		mDrawEmitterChildFuncList[idx] = JPALoadPosMtxCam;
	}
	if (mChildShape && !(mChildShape->mData->mFlags & 0x800000) && !(mChildShape->mData->mFlags & 0x200000)
	    && !(mChildShape->mData->mFlags & 0x400000)) {
		mDrawEmitterChildFuncList[idx] = JPARegistChildPrmEnv;
	}

	if (test) {
		mDrawParticleFuncListNum++;
	}
	mDrawParticleFuncListNum++;
	if (!isGlblTexAnm && (texFlag & 1)) {
		mDrawParticleFuncListNum++;
	}
	if ((!test && exShapeSet1) || (isTexCrdAnm && !isPrjTex)) {
		mDrawParticleFuncListNum++;
	}
	if (!isGlblClrAnm && (clrFlag & 2) || (clrFlag & 8) || exShapeSet2 || (isGlblClrAnm && exShapeSet2) && !test) {
		mDrawParticleFuncListNum++;
	}
	if (mDrawParticleFuncListNum) {
		mDrawParticleFuncList = (JPAFunctionB**)heap->alloc(mDrawParticleFuncListNum * 4, 4);
	}
	if (test) {
		switch (mBaseShape->getType()) {
		case 0:
			mDrawParticleFuncList[0] = JPADrawPoint;
			break;
		case 1:
			mDrawParticleFuncList[0] = JPADrawLine;
			break;
		case 2:
			if (exShapeSet4)
				mDrawParticleFuncList[0] = JPADrawRotBillboard;
			else
				mDrawParticleFuncList[0] = JPADrawBillboard;
			break;
		case 3:
		case 4:
			if (exShapeSet4) {
				mDrawParticleFuncList[0] = JPADrawRotDirection;
			} else {
				mDrawParticleFuncList[0] = JPADrawDirection;
			}
			break;
		case 7:
		case 8:
			mDrawParticleFuncList[0] = JPADrawRotation;
			break;
		case 9:
			mDrawParticleFuncList[0] = JPADrawDBillboard;
			break;
		case 10:
			if (exShapeSet4) {
				mDrawParticleFuncList[0] = JPADrawRotYBillboard;
			} else {
				mDrawParticleFuncList[0] = JPADrawYBillboard;
			}
			break;
		}
	}
	mDrawParticleFuncList[idx] = JPADrawParticleCallBack;
	if (!isGlblTexAnm && (texFlag & 1)) {
		mDrawParticleFuncList[idx] = JPALoadTexAnm;
	}
	if ((test) || (!exShapeSet1)) {
		if ((isTexCrdAnm != 0) && (isPrjTex == 0)) {
			mDrawParticleFuncList[idx] = JPALoadCalcTexCrdMtxAnm;
		}
	} else if (test == 0) {
		mDrawParticleFuncList[idx] = JPASetLineWidth;
	} else {
		mDrawParticleFuncList[idx] = JPASetPointSize;
	}

	if (!isGlblClrAnm) {
		if (!(clrFlag & 2)) {
			if (exShapeSet2) {
				if (!(clrFlag & 8)) {
					mDrawParticleFuncList[idx] = JPARegistAlpha;
				} else {
					mDrawParticleFuncList[idx] = JPARegistAlphaEnv;
				}
			} else if (clrFlag & 8) {
				mDrawParticleFuncList[idx] = JPARegistEnv;
			}
		} else if (!(clrFlag & 8)) {
			mDrawParticleFuncList[idx] = JPARegistPrmAlpha;
		} else {
			mDrawParticleFuncList[idx] = JPARegistPrmAlphaEnv;
		}
	} else if (exShapeSet2 && !test) {
		mDrawParticleFuncList[idx] = JPARegistAlpha;
	}

	if (shpFlags && mChildShape && !test) {
		mDrawParticleChildFuncListNum++;
	}
	mDrawParticleChildFuncListNum++;
	if (test) {
		mDrawParticleChildFuncListNum++;
	}
	if (mChildShape && !(mChildShape->mData->mFlags & 0x800000) && !(mChildShape->mData->mFlags & 0x200000)
	    && !(mChildShape->mData->mFlags & 0x400000)) {
		mDrawParticleChildFuncListNum++;
	}
	if (mDrawParticleChildFuncListNum) {
		mDrawParticleChildFuncList = (JPAFunctionB**)heap->alloc(mDrawParticleChildFuncListNum * 4, 4);
	}
	// my sanity is all gone by this point
	if (shpFlags && mChildShape && !test) {
		switch (mBaseShape->getType()) {
		case 0:
			mDrawParticleChildFuncList[0] = JPADrawPoint;
			break;
		case 1:
			mDrawParticleChildFuncList[0] = JPADrawLine;
			break;
		case 2:
			if (exShapeSet4)
				mDrawParticleChildFuncList[0] = JPADrawRotBillboard;
			else
				mDrawParticleChildFuncList[0] = JPADrawBillboard;
			break;
		case 3:
		case 4:
			if (exShapeSet4) {
				mDrawParticleChildFuncList[0] = JPADrawRotDirection;
			} else {
				mDrawParticleChildFuncList[0] = JPADrawDirection;
			}
			break;
		case 7:
		case 8:
			mDrawParticleChildFuncList[0] = JPADrawRotation;
			break;
		case 9:
			mDrawParticleChildFuncList[0] = JPADrawDBillboard;
			break;
		case 10:
			if (exShapeSet4) {
				mDrawParticleChildFuncList[0] = JPADrawRotYBillboard;
			} else {
				mDrawParticleChildFuncList[0] = JPADrawYBillboard;
			}
			break;
		}
		idx = 1;
	}

	mDrawParticleChildFuncList[idx] = JPADrawParticleCallBack;
	if (test) {
		mDrawParticleChildFuncList[idx] = JPASetPointSize;
	} else {
		mDrawParticleChildFuncList[idx] = JPASetLineWidth;
	}
	if (mChildShape && !(mChildShape->mData->mFlags & 0x800000) && !(mChildShape->mData->mFlags & 0x200000)
	    && (mChildShape->mData->mFlags & 0x400000)) {
		mDrawParticleChildFuncList[idx] = JPARegistPrmAlphaEnv;
	}

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x64(r1)
	stmw     r14, 0x18(r1)
	mr       r16, r4
	mr       r15, r3
	lwz      r4, 0x1c(r3)
	lwz      r3, 0x20(r3)
	lwz      r4, 0(r4)
	cmplwi   r3, 0
	lwz      r0, 8(r4)
	lbz      r6, 0x21(r4)
	lbz      r4, 0x1e(r4)
	rlwinm   r31, r0, 0, 0x13, 0x13
	rlwinm   r27, r0, 0, 0x11, 0x11
	rlwinm   r30, r6, 0, 0x1e, 0x1e
	clrlwi   r28, r4, 0x1f
	rlwinm   r4, r0, 0, 7, 7
	stw      r4, 0x14(r1)
	rlwinm   r4, r0, 0, 0xb, 0xb
	rlwinm   r29, r6, 0, 0x1c, 0x1c
	stw      r4, 0x10(r1)
	beq      lbl_800956D0
	lwz      r4, 0(r3)
	lwz      r4, 8(r4)
	clrlwi.  r4, r4, 0x1f
	beq      lbl_800956D0
	li       r5, 1

lbl_800956D0:
	cmplwi   r3, 0
	clrlwi   r26, r5, 0x18
	li       r5, 0
	beq      lbl_800956F4
	lwz      r4, 0(r3)
	lwz      r4, 8(r4)
	rlwinm.  r4, r4, 0, 0xf, 0xf
	beq      lbl_800956F4
	li       r5, 1

lbl_800956F4:
	cmplwi   r3, 0
	clrlwi   r25, r5, 0x18
	li       r6, 0
	beq      lbl_80095720
	lwz      r4, 0(r3)
	lwz      r5, 8(r4)
	rlwinm.  r4, r5, 0, 0xf, 0xf
	beq      lbl_80095720
	rlwinm.  r4, r5, 0, 0xe, 0xe
	beq      lbl_80095720
	li       r6, 1

lbl_80095720:
	cmplwi   r3, 0
	clrlwi   r14, r6, 0x18
	li       r4, 0
	beq      lbl_80095744
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 7, 7
	beq      lbl_80095744
	li       r4, 1

lbl_80095744:
	clrlwi.  r24, r4, 0x18
	li       r4, 0
	bne      lbl_8009576C
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_80095770
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 7, 7
	beq      lbl_80095770

lbl_8009576C:
	li       r4, 1

lbl_80095770:
	clrlwi   r5, r0, 0x1c
	clrlwi   r23, r4, 0x18
	cmplwi   r5, 5
	li       r6, 1
	beq      lbl_80095790
	cmplwi   r5, 6
	beq      lbl_80095790
	li       r6, 0

lbl_80095790:
	subfic   r3, r5, 1
	li       r7, 1
	orc      r4, r7, r5
	cntlzw   r5, r5
	srwi     r3, r3, 1
	clrlwi   r22, r6, 0x18
	subf     r3, r3, r4
	rlwinm.  r4, r3, 1, 0x1f, 0x1f
	rlwinm   r3, r5, 0x1b, 0x18, 0x1f
	stw      r3, 0xc(r1)
	bne      lbl_800957C0
	li       r7, 0

lbl_800957C0:
	lwz      r3, 0x24(r15)
	clrlwi   r21, r7, 0x18
	li       r5, 0
	cmplwi   r3, 0
	beq      lbl_80095804
	lwz      r4, 0(r3)
	li       r6, 1
	lwz      r4, 8(r4)
	clrlwi   r4, r4, 0x1c
	cmplwi   r4, 5
	beq      lbl_800957F8
	cmplwi   r4, 6
	beq      lbl_800957F8
	mr       r6, r5

lbl_800957F8:
	clrlwi.  r4, r6, 0x18
	beq      lbl_80095804
	li       r5, 1

lbl_80095804:
	cmplwi   r3, 0
	clrlwi   r20, r5, 0x18
	li       r5, 0
	beq      lbl_80095828
	lwz      r4, 0(r3)
	lwz      r4, 8(r4)
	clrlwi.  r4, r4, 0x1c
	bne      lbl_80095828
	li       r5, 1

lbl_80095828:
	clrlwi   r4, r5, 0x18
	cmplwi   r3, 0
	stw      r4, 8(r1)
	li       r4, 0
	beq      lbl_80095868
	lwz      r3, 0(r3)
	li       r5, 1
	lwz      r3, 8(r3)
	clrlwi.  r3, r3, 0x1c
	beq      lbl_8009585C
	cmplwi   r3, 1
	beq      lbl_8009585C
	mr       r5, r4

lbl_8009585C:
	clrlwi.  r3, r5, 0x18
	beq      lbl_80095868
	li       r4, 1

lbl_80095868:
	rlwinm   r3, r0, 5, 0x1f, 0x1f
	rlwinm   r0, r0, 4, 0x1f, 0x1f
	cntlzw   r3, r3
	cmpwi    r27, 0
	cntlzw   r0, r0
	clrlwi   r19, r4, 0x18
	rlwinm   r18, r3, 0x1b, 0x18, 0x1f
	rlwinm   r17, r0, 0x1b, 0x18, 0x1f
	beq      lbl_800958A0
	cmpwi    r28, 0
	beq      lbl_800958A0
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958A0:
	cmpwi    r31, 0
	beq      lbl_800958EC
	cmpwi    r30, 0
	beq      lbl_800958BC
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958BC:
	cmpwi    r29, 0
	beq      lbl_800958D0
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958D0:
	cmpwi    r30, 0
	bne      lbl_800958E0
	cmpwi    r29, 0
	beq      lbl_800958EC

lbl_800958E0:
	lbz      r3, 0x41(r15)
	addi     r0, r3, 1
	stb      r0, 0x41(r15)

lbl_800958EC:
	lbz      r0, 0x41(r15)
	cmplwi   r0, 0
	beq      lbl_8009590C
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0(r15)

lbl_8009590C:
	cmpwi    r27, 0
	li       r3, 0
	beq      lbl_800959C0
	cmpwi    r28, 0
	beq      lbl_800959C0
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lbz      r0, 0x1e(r3)
	rlwinm   r0, r0, 0x1e, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095984
	bge      lbl_8009594C
	cmpwi    r0, 0
	beq      lbl_8009595C
	bge      lbl_80095970
	b        lbl_800959BC

lbl_8009594C:
	cmpwi    r0, 4
	beq      lbl_800959AC
	bge      lbl_800959BC
	b        lbl_80095998

lbl_8009595C:
	lis      r4, JPACalcTexIdxNormal__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxNormal__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_80095970:
	lis      r4, JPACalcTexIdxRepeat__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxRepeat__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_80095984:
	lis      r4, JPACalcTexIdxReverse__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxReverse__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_80095998:
	lis      r4, JPACalcTexIdxMerge__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxMerge__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)
	b        lbl_800959BC

lbl_800959AC:
	lis      r4, JPACalcTexIdxRandom__FP18JPAEmitterWorkData@ha
	lwz      r3, 0(r15)
	addi     r0, r4, JPACalcTexIdxRandom__FP18JPAEmitterWorkData@l
	stw      r0, 0(r3)

lbl_800959BC:
	li       r3, 1

lbl_800959C0:
	cmpwi    r31, 0
	beq      lbl_80095AC8
	cmpwi    r30, 0
	beq      lbl_800959E8
	lis      r5, JPACalcPrm__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcPrm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_800959E8:
	cmpwi    r29, 0
	beq      lbl_80095A08
	lis      r5, JPACalcEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcEnv__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80095A08:
	cmpwi    r30, 0
	bne      lbl_80095A18
	cmpwi    r29, 0
	beq      lbl_80095AC8

lbl_80095A18:
	lwz      r4, 0x1c(r15)
	lwz      r4, 0(r4)
	lbz      r0, 0x21(r4)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095A84
	bge      lbl_80095A44
	cmpwi    r0, 0
	beq      lbl_80095A54
	bge      lbl_80095A6C
	b        lbl_80095AC8

lbl_80095A44:
	cmpwi    r0, 4
	beq      lbl_80095AB4
	bge      lbl_80095AC8
	b        lbl_80095A9C

lbl_80095A54:
	lis      r5, JPACalcClrIdxNormal__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxNormal__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095A6C:
	lis      r5, JPACalcClrIdxRepeat__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxRepeat__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095A84:
	lis      r5, JPACalcClrIdxReverse__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxReverse__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095A9C:
	lis      r5, JPACalcClrIdxMerge__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxMerge__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80095AC8

lbl_80095AB4:
	lis      r5, JPACalcClrIdxRandom__FP18JPAEmitterWorkData@ha
	lwz      r4, 0(r15)
	addi     r5, r5, JPACalcClrIdxRandom__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_80095AC8:
	cmpwi    r27, 0
	bne      lbl_80095AE4
	cmpwi    r28, 0
	beq      lbl_80095AE4
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095AE4:
	cmpwi    r22, 0
	bne      lbl_80095B08
	cmpwi    r25, 0
	bne      lbl_80095AFC
	cmpwi    r14, 0
	beq      lbl_80095B08

lbl_80095AFC:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B08:
	cmpwi    r31, 0
	bne      lbl_80095B58
	cmpwi    r30, 0
	beq      lbl_80095B24
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B24:
	cmpwi    r29, 0
	beq      lbl_80095B38
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B38:
	cmpwi    r30, 0
	bne      lbl_80095B48
	cmpwi    r29, 0
	beq      lbl_80095B64

lbl_80095B48:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	b        lbl_80095B64

lbl_80095B58:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095B64:
	cmpwi    r26, 0
	beq      lbl_80095BF4
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1c
	beq      lbl_80095BDC
	lwz      r3, 0x20(r15)
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80095BD0
	rlwinm.  r0, r3, 0x18, 0x1e, 0x1f
	bne      lbl_80095BB4
	rlwinm.  r0, r3, 0x16, 0x1e, 0x1f
	bne      lbl_80095BB4
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	b        lbl_80095BDC

lbl_80095BB4:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	b        lbl_80095BDC

lbl_80095BD0:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095BDC:
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)
	lbz      r3, 0x44(r15)
	addi     r0, r3, 1
	stb      r0, 0x44(r15)

lbl_80095BF4:
	lbz      r0, 0x44(r15)
	cmplwi   r0, 0
	beq      lbl_80095C14
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0xc(r15)

lbl_80095C14:
	cmpwi    r27, 0
	li       r3, 0
	bne      lbl_80095CC8
	cmpwi    r28, 0
	beq      lbl_80095CC8
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lbz      r0, 0x1e(r3)
	rlwinm   r0, r0, 0x1e, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095C8C
	bge      lbl_80095C54
	cmpwi    r0, 0
	beq      lbl_80095C64
	bge      lbl_80095C78
	b        lbl_80095CC4

lbl_80095C54:
	cmpwi    r0, 4
	beq      lbl_80095CB4
	bge      lbl_80095CC4
	b        lbl_80095CA0

lbl_80095C64:
	lis      r4,
JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095C78:
	lis      r4,
JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095C8C:
	lis      r4,
JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095CA0:
	lis      r4, JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0xc(r15)
	addi     r0, r4,
JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80095CC4

lbl_80095CB4:
	lis      r4,
JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r0, r4,
JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3)

lbl_80095CC4:
	li       r3, 1

lbl_80095CC8:
	cmpwi    r22, 0
	bne      lbl_80095D1C
	cmpwi    r25, 0
	bne      lbl_80095CE0
	cmpwi    r14, 0
	beq      lbl_80095D1C

lbl_80095CE0:
	cmpwi    r14, 0
	beq      lbl_80095D04
	lis      r5,
JPACalcAlphaFlickAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) slwi     r0, r3, 2 addi     r3, r3, 1 addi     r5, r5,
JPACalcAlphaFlickAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5,
r4, r0 b        lbl_80095D1C

lbl_80095D04:
	lis      r5, JPACalcAlphaAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcAlphaAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80095D1C:
	cmpwi    r31, 0
	bne      lbl_80095E2C
	cmpwi    r30, 0
	beq      lbl_80095D44
	lis      r5, JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80095D44:
	cmpwi    r29, 0
	beq      lbl_80095D64
	lis      r5, JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80095D64:
	cmpwi    r30, 0
	bne      lbl_80095D74
	cmpwi    r29, 0
	beq      lbl_80095E44

lbl_80095D74:
	lwz      r4, 0x1c(r15)
	lwz      r4, 0(r4)
	lbz      r0, 0x21(r4)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	cmpwi    r0, 2
	beq      lbl_80095DE0
	bge      lbl_80095DA0
	cmpwi    r0, 0
	beq      lbl_80095DB0
	bge      lbl_80095DC8
	b        lbl_80095E24

lbl_80095DA0:
	cmpwi    r0, 4
	beq      lbl_80095E10
	bge      lbl_80095E24
	b        lbl_80095DF8

lbl_80095DB0:
	lis      r5,
JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095DC8:
	lis      r5,
JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095DE0:
	lis      r5,
JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095DF8:
	lis      r5, JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	addi     r5, r5,
JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0 b        lbl_80095E24

lbl_80095E10:
	lis      r5,
JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3,
2 stwx     r5, r4, r0

lbl_80095E24:
	addi     r3, r3, 1
	b        lbl_80095E44

lbl_80095E2C:
	lis      r5, JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5,
JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5, r4, r0

lbl_80095E44:
	cmpwi    r26, 0
	beq      lbl_80095FC8
	lwz      r4, 0x1c(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	clrlwi.  r0, r0, 0x1c
	beq      lbl_80095F30
	lwz      r4, 0x20(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80095F18
	lis      r5, JPACalcScaleY__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPACalcScaleY__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0
	lwz      r4, 0x20(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r4, r0, 0x16, 0x1e, 0x1f
	bne      lbl_80095EA8
	rlwinm.  r0, r0, 0x18, 0x1e, 0x1f
	beq      lbl_80095F30

lbl_80095EA8:
	cmpwi    r4, 1
	beq      lbl_80095EE4
	bge      lbl_80095EC0
	cmpwi    r4, 0
	bge      lbl_80095ECC
	b        lbl_80095F10

lbl_80095EC0:
	cmpwi    r4, 3
	bge      lbl_80095F10
	b        lbl_80095EFC

lbl_80095ECC:
	lis      r5,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_80095F10

lbl_80095EE4:
	lis      r5,
JPACalcScaleAnmRepeatY__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0xc(r15) addi     r5, r5,
JPACalcScaleAnmRepeatY__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_80095F10

lbl_80095EFC:
	lis      r5,
JPACalcScaleAnmReverseY__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0xc(r15) addi     r5, r5,
JPACalcScaleAnmReverseY__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0

lbl_80095F10:
	addi     r3, r3, 1
	b        lbl_80095F30

lbl_80095F18:
	lis      r5, JPACalcScaleCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5,
JPACalcScaleCopy__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5, r4, r0

lbl_80095F30:
	lis      r5, JPACalcScaleX__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0xc(r15)
	addi     r5, r5, JPACalcScaleX__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	lwz      r4, 0x20(r15)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x18, 0x1e, 0x1f
	cmpwi    r0, 1
	beq      lbl_80095F94
	bge      lbl_80095F6C
	cmpwi    r0, 0
	bge      lbl_80095F78
	b        lbl_80095FC8

lbl_80095F6C:
	cmpwi    r0, 3
	bge      lbl_80095FC8
	b        lbl_80095FB0

lbl_80095F78:
	addi     r0, r3, 1
	lis      r4,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r4, r4,
JPACalcScaleAnmNormal__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0 b        lbl_80095FC8

lbl_80095F94:
	addi     r0, r3, 1
	lis      r4,
JPACalcScaleAnmRepeatX__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0xc(r15) addi     r4, r4,
JPACalcScaleAnmRepeatX__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0 b        lbl_80095FC8

lbl_80095FB0:
	addi     r0, r3, 1
	lis      r4,
JPACalcScaleAnmReverseX__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r3,
0xc(r15) addi     r4, r4,
JPACalcScaleAnmReverseX__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0

lbl_80095FC8:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_80095FF0
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 9, 9
	beq      lbl_80095FF0
	lbz      r3, 0x46(r15)
	addi     r0, r3, 1
	stb      r0, 0x46(r15)

lbl_80095FF0:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_80096018
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 8, 8
	beq      lbl_80096018
	lbz      r3, 0x46(r15)
	addi     r0, r3, 1
	stb      r0, 0x46(r15)

lbl_80096018:
	lbz      r0, 0x46(r15)
	cmplwi   r0, 0
	beq      lbl_80096038
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x14(r15)

lbl_80096038:
	lwz      r3, 0x24(r15)
	li       r0, 0
	cmplwi   r3, 0
	beq      lbl_8009606C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 9, 9
	beq      lbl_8009606C
	lis      r4,
JPACalcChildScaleOut__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x14(r15) addi     r4, r4,
JPACalcChildScaleOut__FP18JPAEmitterWorkDataP15JPABaseParticle@l li       r0, 1
	stw      r4, 0(r3)

lbl_8009606C:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_8009609C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r3, r3, 0, 8, 8
	beq      lbl_8009609C
	lis      r4,
JPACalcChildAlphaOut__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x14(r15) addi     r4, r4,
JPACalcChildAlphaOut__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r0, 2 stwx     r4, r3, r0

lbl_8009609C:
	cmpwi    r18, 0
	beq      lbl_800960B8
	cmpwi    r22, 0
	beq      lbl_800960B8
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_800960B8:
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)
	lwz      r0, 0x28(r15)
	cmplwi   r0, 0
	beq      lbl_800960DC
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_800960DC:
	cmpwi    r27, 0
	bne      lbl_800960EC
	cmpwi    r28, 0
	bne      lbl_800960F8

lbl_800960EC:
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_800960F8:
	lbz      r3, 0x42(r15)
	cmpwi    r21, 0
	addi     r0, r3, 1
	stb      r0, 0x42(r15)
	beq      lbl_80096118
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_80096118:
	cmpwi    r21, 0
	beq      lbl_80096134
	cmpwi    r26, 0
	bne      lbl_80096134
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_80096134:
	cmpwi    r31, 0
	bne      lbl_80096154
	cmpwi    r30, 0
	bne      lbl_8009614C
	cmpwi    r25, 0
	beq      lbl_80096154

lbl_8009614C:
	cmpwi    r29, 0
	bne      lbl_80096160

lbl_80096154:
	lbz      r3, 0x42(r15)
	addi     r0, r3, 1
	stb      r0, 0x42(r15)

lbl_80096160:
	lbz      r0, 0x42(r15)
	cmplwi   r0, 0
	beq      lbl_80096180
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 4(r15)

lbl_80096180:
	cmpwi    r18, 0
	li       r3, 0
	beq      lbl_800961D8
	cmpwi    r22, 0
	beq      lbl_800961D8
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 5
	bne      lbl_800961C4
	lis      r3, JPADrawStripe__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r0, r3, JPADrawStripe__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)
	b        lbl_800961D8

lbl_800961C4:
	lis      r3, JPADrawStripeX__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r0, r3, JPADrawStripeX__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)

lbl_800961D8:
	lis      r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	lwz      r0, 0x28(r15)
	cmplwi   r0, 0
	beq      lbl_80096214
	lis      r5, JPALoadExTex__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadExTex__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096214:
	cmpwi    r28, 0
	bne      lbl_80096238
	lis      r5, JPALoadTex__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadTex__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096258

lbl_80096238:
	cmpwi    r27, 0
	beq      lbl_80096258
	lis      r5, JPALoadTexAnm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadTexAnm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096258:
	cmpwi    r21, 0
	beq      lbl_8009627C
	lis      r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_8009627C:
	lwz      r0, 0x10(r1)
	cmpwi    r0, 0
	beq      lbl_800962A4
	lis      r5, JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_800962A4:
	lwz      r0, 0x14(r1)
	cmpwi    r0, 0
	beq      lbl_800962F0
	cmpwi    r22, 0
	beq      lbl_800962D4
	lis      r5, JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_800962D4:
	lis      r5, JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096308

lbl_800962F0:
	lis      r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096308:
	cmpwi    r21, 0
	beq      lbl_80096328
	lis      r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096328:
	cmpwi    r21, 0
	beq      lbl_80096378
	cmpwi    r26, 0
	bne      lbl_80096378
	lwz      r0, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_80096360
	lis      r5, JPASetPointSize__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetPointSize__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0
	b        lbl_80096378

lbl_80096360:
	lis      r5, JPASetLineWidth__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetLineWidth__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_80096378:
	cmpwi    r31, 0
	beq      lbl_800963C4
	cmpwi    r22, 0
	bne      lbl_80096390
	cmpwi    r25, 0
	bne      lbl_800963A8

lbl_80096390:
	lis      r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_800963A8:
	beq      lbl_80096428
	lis      r5, JPARegistEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_800963C4:
	cmpwi    r30, 0
	bne      lbl_8009640C
	cmpwi    r25, 0
	bne      lbl_8009640C
	cmpwi    r29, 0
	bne      lbl_800963F4
	lis      r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistPrmEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_800963F4:
	lis      r5, JPARegistPrm__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistPrm__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_80096428

lbl_8009640C:
	cmpwi    r29, 0
	bne      lbl_80096428
	lis      r5, JPARegistEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 4(r15)
	addi     r5, r5, JPARegistEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_80096428:
	cmpwi    r17, 0
	beq      lbl_80096444
	cmpwi    r20, 0
	beq      lbl_80096444
	lbz      r3, 0x43(r15)
	addi     r0, r3, 1
	stb      r0, 0x43(r15)

lbl_80096444:
	lbz      r3, 0x43(r15)
	cmpwi    r19, 0
	addi     r0, r3, 1
	stb      r0, 0x43(r15)
	beq      lbl_80096464
	lbz      r3, 0x43(r15)
	addi     r0, r3, 1
	stb      r0, 0x43(r15)

lbl_80096464:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_8009649C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 8, 8
	bne      lbl_8009649C
	rlwinm.  r0, r3, 0, 0xe, 0xe
	bne      lbl_8009649C
	rlwinm.  r0, r3, 0, 0xd, 0xd
	bne      lbl_8009649C
	lbz      r3, 0x43(r15)
	addi     r0, r3, 1
	stb      r0, 0x43(r15)

lbl_8009649C:
	lbz      r0, 0x43(r15)
	cmplwi   r0, 0
	beq      lbl_800964BC
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 8(r15)

lbl_800964BC:
	cmpwi    r17, 0
	li       r3, 0
	beq      lbl_80096514
	cmpwi    r20, 0
	beq      lbl_80096514
	lwz      r3, 0x24(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 5
	bne      lbl_80096500
	lis      r3, JPADrawStripe__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	addi     r0, r3, JPADrawStripe__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)
	b        lbl_80096514

lbl_80096500:
	lis      r3, JPADrawStripeX__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	addi     r0, r3, JPADrawStripeX__FP18JPAEmitterWorkData@l
	li       r3, 1
	stw      r0, 0(r4)

lbl_80096514:
	lis      r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	slwi     r0, r3, 2
	cmpwi    r19, 0
	addi     r5, r5, JPADrawEmitterCallBackB__FP18JPAEmitterWorkData@l
	addi     r3, r3, 1
	stwx     r5, r4, r0
	beq      lbl_8009654C
	lis      r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadPosMtxCam__FP18JPAEmitterWorkData@l
	stwx     r5, r4, r0

lbl_8009654C:
	lwz      r4, 0x24(r15)
	cmplwi   r4, 0
	beq      lbl_8009658C
	lwz      r4, 0(r4)
	lwz      r4, 8(r4)
	rlwinm.  r0, r4, 0, 8, 8
	bne      lbl_8009658C
	rlwinm.  r0, r4, 0, 0xe, 0xe
	bne      lbl_8009658C
	rlwinm.  r0, r4, 0, 0xd, 0xd
	bne      lbl_8009658C
	lis      r5, JPARegistChildPrmEnv__FP18JPAEmitterWorkData@ha
	lwz      r4, 8(r15)
	addi     r5, r5, JPARegistChildPrmEnv__FP18JPAEmitterWorkData@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_8009658C:
	cmpwi    r18, 0
	beq      lbl_800965A8
	cmpwi    r22, 0
	bne      lbl_800965A8
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_800965A8:
	lbz      r3, 0x45(r15)
	cmpwi    r27, 0
	addi     r0, r3, 1
	stb      r0, 0x45(r15)
	bne      lbl_800965D0
	cmpwi    r28, 0
	beq      lbl_800965D0
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_800965D0:
	cmpwi    r21, 0
	beq      lbl_800965E0
	cmpwi    r26, 0
	bne      lbl_800965F8

lbl_800965E0:
	lwz      r0, 0x14(r1)
	cmpwi    r0, 0
	beq      lbl_80096604
	lwz      r0, 0x10(r1)
	cmpwi    r0, 0
	bne      lbl_80096604

lbl_800965F8:
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_80096604:
	cmpwi    r31, 0
	bne      lbl_80096624
	cmpwi    r30, 0
	bne      lbl_8009663C
	cmpwi    r29, 0
	bne      lbl_8009663C
	cmpwi    r25, 0
	bne      lbl_8009663C

lbl_80096624:
	cmpwi    r31, 0
	beq      lbl_80096648
	cmpwi    r25, 0
	beq      lbl_80096648
	cmpwi    r22, 0
	bne      lbl_80096648

lbl_8009663C:
	lbz      r3, 0x45(r15)
	addi     r0, r3, 1
	stb      r0, 0x45(r15)

lbl_80096648:
	lbz      r0, 0x45(r15)
	cmplwi   r0, 0
	beq      lbl_80096668
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x10(r15)

lbl_80096668:
	cmpwi    r18, 0
	li       r3, 0
	beq      lbl_8009678C
	cmpwi    r22, 0
	bne      lbl_8009678C
	lwz      r3, 0x1c(r15)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 0xa
	bgt      lbl_80096788
	lis      r3, lbl_804A352C@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A352C@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_800966AC

lbl_800966AC:
	cmpwi    r24, 0
	beq      lbl_800966C8
	lis      r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x10(r15) addi     r0, r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096788

lbl_800966C8:
	lis      r4, JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_800966DC

lbl_800966DC:
	cmpwi    r24, 0
	beq      lbl_800966F8
	lis      r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x10(r15) addi     r0, r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096788

lbl_800966F8:
	lis      r4, JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_8009670C

lbl_8009670C:
	cmpwi    r24, 0
	beq      lbl_80096728
	lis      r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x10(r15) addi     r0, r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096788

lbl_80096728:
	lis      r4, JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_8009673C

lbl_8009673C:
	lis      r4, JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4,
JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_80096750

lbl_80096750:
	lis      r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_80096764

lbl_80096764:
	lis      r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096788
	.global  lbl_80096778

lbl_80096778:
	lis      r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x10(r15)
	addi     r0, r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	.global  lbl_80096788

lbl_80096788:
	li       r3, 1

lbl_8009678C:
	lis      r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0x10(r15) slwi     r0, r3, 2 cmpwi    r27, 0 addi     r5, r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@l addi     r3,
r3, 1 stwx     r5, r4, r0 bne      lbl_800967CC cmpwi    r28, 0 beq lbl_800967CC
	lis      r5, JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_800967CC:
	cmpwi    r21, 0
	beq      lbl_80096820
	cmpwi    r26, 0
	beq      lbl_80096820
	lwz      r0, 0xc(r1)
	cmpwi    r0, 0
	beq      lbl_80096804
	lis      r5, JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0
	b        lbl_80096850

lbl_80096804:
	lis      r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0
	b        lbl_80096850

lbl_80096820:
	lwz      r0, 0x14(r1)
	cmpwi    r0, 0
	beq      lbl_80096850
	lwz      r0, 0x10(r1)
	cmpwi    r0, 0
	bne      lbl_80096850
	lis      r5,
JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0x10(r15) slwi     r0, r3, 2 addi     r3, r3, 1 addi     r5, r5,
JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5,
r4, r0

lbl_80096850:
	cmpwi    r31, 0
	bne      lbl_800968F8
	cmpwi    r30, 0
	beq      lbl_80096898
	cmpwi    r29, 0
	beq      lbl_80096880
	lis      r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0x10(r15) addi     r5, r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0 b        lbl_8009691C

lbl_80096880:
	lis      r5, JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5,
JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_80096898:
	cmpwi    r25, 0
	beq      lbl_800968D8
	cmpwi    r29, 0
	beq      lbl_800968C0
	lis      r5, JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5,
JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_800968C0:
	lis      r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_800968D8:
	cmpwi    r29, 0
	beq      lbl_8009691C
	lis      r5, JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5, JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0
	b        lbl_8009691C

lbl_800968F8:
	cmpwi    r25, 0
	beq      lbl_8009691C
	cmpwi    r22, 0
	bne      lbl_8009691C
	lis      r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x10(r15)
	addi     r5, r5, JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	slwi     r0, r3, 2
	stwx     r5, r4, r0

lbl_8009691C:
	cmpwi    r17, 0
	beq      lbl_80096944
	lwz      r0, 0x24(r15)
	cmplwi   r0, 0
	beq      lbl_80096944
	cmpwi    r20, 0
	bne      lbl_80096944
	lbz      r3, 0x47(r15)
	addi     r0, r3, 1
	stb      r0, 0x47(r15)

lbl_80096944:
	lbz      r3, 0x47(r15)
	cmpwi    r19, 0
	addi     r0, r3, 1
	stb      r0, 0x47(r15)
	beq      lbl_80096964
	lbz      r3, 0x47(r15)
	addi     r0, r3, 1
	stb      r0, 0x47(r15)

lbl_80096964:
	lwz      r3, 0x24(r15)
	cmplwi   r3, 0
	beq      lbl_8009699C
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 8, 8
	bne      lbl_80096990
	rlwinm.  r0, r3, 0, 0xe, 0xe
	bne      lbl_80096990
	rlwinm.  r0, r3, 0, 0xd, 0xd
	beq      lbl_8009699C

lbl_80096990:
	lbz      r3, 0x47(r15)
	addi     r0, r3, 1
	stb      r0, 0x47(r15)

lbl_8009699C:
	lbz      r0, 0x47(r15)
	cmplwi   r0, 0
	beq      lbl_800969BC
	mr       r5, r16
	rlwinm   r3, r0, 2, 0x16, 0x1d
	li       r4, 4
	bl       alloc__7JKRHeapFUliP7JKRHeap
	stw      r3, 0x18(r15)

lbl_800969BC:
	cmpwi    r17, 0
	li       r3, 0
	beq      lbl_80096AE8
	lwz      r4, 0x24(r15)
	cmplwi   r4, 0
	beq      lbl_80096AE8
	cmpwi    r20, 0
	bne      lbl_80096AE8
	lwz      r3, 0(r4)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 0xa
	bgt      lbl_80096AE4
	lis      r3, lbl_804A3500@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804A3500@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80096A08

lbl_80096A08:
	cmpwi    r23, 0
	beq      lbl_80096A24
	lis      r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x18(r15) addi     r0, r4,
JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096AE4

lbl_80096A24:
	lis      r4, JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096A38

lbl_80096A38:
	cmpwi    r23, 0
	beq      lbl_80096A54
	lis      r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x18(r15) addi     r0, r4,
JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096AE4

lbl_80096A54:
	lis      r4, JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096A68

lbl_80096A68:
	cmpwi    r23, 0
	beq      lbl_80096A84
	lis      r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r3,
0x18(r15) addi     r0, r4,
JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0,
0(r3) b        lbl_80096AE4

lbl_80096A84:
	lis      r4, JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096A98

lbl_80096A98:
	lis      r4, JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4,
JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle@l stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096AAC

lbl_80096AAC:
	lis      r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4, JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096AC0

lbl_80096AC0:
	lis      r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4, JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	b        lbl_80096AE4
	.global  lbl_80096AD4

lbl_80096AD4:
	lis      r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r3, 0x18(r15)
	addi     r0, r4, JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stw      r0, 0(r3)
	.global  lbl_80096AE4

lbl_80096AE4:
	li       r3, 1

lbl_80096AE8:
	lis      r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz r4,
0x18(r15) slwi     r0, r3, 2 cmpwi    r19, 0 addi     r5, r5,
JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle@l addi     r3,
r3, 1 stwx     r5, r4, r0 beq      lbl_80096B48 lwz      r0, 8(r1) cmpwi    r0,
0 beq      lbl_80096B30 lis      r5,
JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0x18(r15) slwi     r0, r3, 2 addi     r3, r3, 1 addi     r5, r5,
JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle@l stwx     r5, r4, r0
	b        lbl_80096B48

lbl_80096B30:
	lis      r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@ha
	lwz      r4, 0x18(r15)
	slwi     r0, r3, 2
	addi     r3, r3, 1
	addi     r5, r5, JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle@l
	stwx     r5, r4, r0

lbl_80096B48:
	lwz      r4, 0x24(r15)
	cmplwi   r4, 0
	beq      lbl_80096B88
	lwz      r4, 0(r4)
	lwz      r4, 8(r4)
	rlwinm.  r0, r4, 0, 8, 8
	bne      lbl_80096B74
	rlwinm.  r0, r4, 0, 0xe, 0xe
	bne      lbl_80096B74
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_80096B88

lbl_80096B74:
	lis      r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@ha lwz      r4,
0x18(r15) addi     r5, r5,
JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle@l slwi     r0,
r3, 2 stwx     r5, r4, r0

lbl_80096B88:
	lmw      r14, 0x18(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80096B9C
 * @note Size: 0x55C
 */
bool JPAResource::calc(JPAEmitterWorkData* data, JPABaseEmitter* emitter)
{
	data->mEmitter      = emitter;
	data->mResource     = this;
	data->mCreateNumber = 0;

	if (emitter->processTillStartFrame()) {
		return false;
	}

	if (emitter->processTermination()) {
		return false;
	}

	if (emitter->isFlag(JPAEMIT_StopCalc)) {
		JPAEmitterCallBack* cback = emitter->mEmitterCallback;
		if (cback) {
			return false;
		}

		cback->execute(emitter);
		if (emitter->isFlag(JPAEMIT_ForceDelete)) {
			return true;
		}

		emitter->mEmitterCallback->executeAfter(emitter);
		if (emitter->isFlag(JPAEMIT_ForceDelete)) {
			return true;
		}

		return false;
	}

	calcKey(data);

	for (int i = mFieldBlockNum - 1; 0 <= i; i--) {
		JPAFieldBlock* field = mFieldBlocks[i];
		field->mOffset       = field->mData->mOffset;
		field->mVelocity     = field->mData->mVelocity;
		field->mSpeed        = field->mData->mAmplitude;
	}

	if (emitter->mEmitterCallback) {
		emitter->mEmitterCallback->execute(emitter);
		if (emitter->isFlag(JPAEMIT_ForceDelete)) {
			return true;
		}
	}

	calcWorkData_c(data);

	for (int i = mCalcEmitterFuncListNum - 1; 0 <= i; i--) {
		mCalcEmitterFuncList[i](data);
	}

	for (int i = mFieldBlockNum - 1; 0 <= i; i--) {
		mFieldBlocks[i]->mField->prepare(data, mFieldBlocks[i]);
	}

	if (emitter->isFlag(JPAEMIT_EnableDeleteEmitter)) {
		mDynamicsBlock->create(data);
	}

	if (emitter->mEmitterCallback) {
		emitter->mEmitterCallback->executeAfter(emitter);
		if (emitter->isFlag(JPAEMIT_ForceDelete)) {
			return true;
		}
	}

	FOREACH_NODE(JPANode<JPABaseParticle>, data->mEmitter->mAlivePtclBase.getLast(), node)
	{
		if (node->getObject()->calc_p(data)) {
			// something like this
			emitter->mAlivePtclBase.push_back(node);
			emitter->mAlivePtclBase.pop_front();
		}
	}

	FOREACH_NODE(JPANode<JPABaseParticle>, data->mEmitter->mAlivePtclChld.getLast(), node)
	{
		if (node->getObject()->calc_c(data)) {
			emitter->mAlivePtclChld.push_back(node);
			emitter->mAlivePtclChld.pop_front();
		}
	}

	emitter->mCurrentFrame++;
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r27, 0xc(r1)
	mr       r29, r5
	mr       r30, r3
	mr       r28, r4
	mr       r3, r29
	stw      r29, 0(r4)
	stw      r30, 4(r4)
	stw      r0, 0x40(r4)
	bl       processTillStartFrame__14JPABaseEmitterFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80096BE0
	li       r3, 0
	b        lbl_800970E4

lbl_80096BE0:
	mr       r3, r29
	bl       processTermination__14JPABaseEmitterFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80096BF8
	li       r3, 1
	b        lbl_800970E4

lbl_80096BF8:
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80096C64
	lwz      r3, 0xec(r29)
	cmplwi   r3, 0
	beq      lbl_800970E0
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80096C38
	li       r3, 1
	b        lbl_800970E4

lbl_80096C38:
	lwz      r3, 0xec(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_800970E0
	li       r3, 1
	b        lbl_800970E4

lbl_80096C64:
	mr       r3, r30
	mr       r4, r28
	bl       calcKey__11JPAResourceFP18JPAEmitterWorkData
	lbz      r3, 0x3e(r30)
	addic.   r3, r3, -1
	slwi     r6, r3, 2
	addi     r3, r3, 1
	blt      lbl_80096D94
	rlwinm.  r0, r3, 0x1f, 1, 0x1f
	mtctr    r0
	beq      lbl_80096D3C

lbl_80096C90:
	lwz      r4, 0x30(r30)
	lwzx     r5, r4, r6
	addi     r6, r6, -4
	lwz      r4, 0(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x18(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x24(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x28(r5)
	lwz      r4, 0x30(r30)
	lwzx     r5, r4, r6
	addi     r6, r6, -4
	lwz      r4, 0(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x18(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x24(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x28(r5)
	bdnz     lbl_80096C90
	andi.    r3, r3, 1
	beq      lbl_80096D94

lbl_80096D3C:
	mtctr    r3

lbl_80096D40:
	lwz      r4, 0x30(r30)
	lwzx     r5, r4, r6
	addi     r6, r6, -4
	lwz      r4, 0(r5)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x14(r5)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x18(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x18(r4)
	stfs     f0, 0x1c(r5)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0x20(r5)
	lfs      f0, 0x20(r4)
	stfs     f0, 0x24(r5)
	lwz      r4, 0(r5)
	lfs      f0, 0x24(r4)
	stfs     f0, 0x28(r5)
	bdnz     lbl_80096D40

lbl_80096D94:
	lwz      r3, 0xec(r29)
	cmplwi   r3, 0
	beq      lbl_80096DC8
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80096DC8
	li       r3, 1
	b        lbl_800970E4

lbl_80096DC8:
	mr       r3, r30
	mr       r4, r28
	bl       calcWorkData_c__11JPAResourceFP18JPAEmitterWorkData
	lbz      r3, 0x41(r30)
	addi     r27, r3, -1
	slwi     r31, r27, 2
	b        lbl_80096E00

lbl_80096DE4:
	lwz      r4, 0(r30)
	mr       r3, r28
	lwzx     r12, r4, r31
	mtctr    r12
	bctrl
	addi     r31, r31, -4
	addi     r27, r27, -1

lbl_80096E00:
	cmpwi    r27, 0
	bge      lbl_80096DE4
	lbz      r3, 0x3e(r30)
	addi     r27, r3, -1
	slwi     r31, r27, 2
	b        lbl_80096E40

lbl_80096E18:
	lwz      r3, 0x30(r30)
	mr       r4, r28
	lwzx     r5, r3, r31
	lwz      r3, 4(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, -4
	addi     r27, r27, -1

lbl_80096E40:
	cmpwi    r27, 0
	bge      lbl_80096E18
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_80096E60
	lwz      r3, 0x2c(r30)
	mr       r4, r28
	bl       create__16JPADynamicsBlockFP18JPAEmitterWorkData

lbl_80096E60:
	lwz      r3, 0xec(r29)
	cmplwi   r3, 0
	beq      lbl_80096E94
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xf4(r29)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80096E94
	li       r3, 1
	b        lbl_800970E4

lbl_80096E94:
	lwz      r30, 0xc8(r29)
	b        lbl_80096FAC

lbl_80096E9C:
	lwz      r31, 4(r30)
	mr       r4, r28
	addi     r3, r30, 8
	bl       calc_p__15JPABaseParticleFP18JPAEmitterWorkData
	clrlwi.  r0, r3, 0x18
	beq      lbl_80096FA8
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_80096EEC
	lwz      r4, 0(r30)
	cmplwi   r4, 0
	beq      lbl_80096EEC
	stw      r3, 4(r4)
	lwz      r0, 0(r30)
	lwz      r3, 4(r30)
	stw      r0, 0(r3)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)
	b        lbl_80096F58

lbl_80096EEC:
	cmplwi   r3, 0
	beq      lbl_80096F14
	li       r0, 0
	stw      r0, 0(r3)
	lwz      r0, 4(r30)
	stw      r0, 0xc8(r29)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)
	b        lbl_80096F58

lbl_80096F14:
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80096F40
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r0, 0(r30)
	stw      r0, 0xcc(r29)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)
	b        lbl_80096F58

lbl_80096F40:
	li       r0, 0
	stw      r0, 0xcc(r29)
	stw      r0, 0xc8(r29)
	lwz      r3, 0xd0(r29)
	addi     r0, r3, -1
	stw      r0, 0xd0(r29)

lbl_80096F58:
	lwz      r4, 0xe0(r29)
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_80096F88
	li       r0, 0
	stw      r0, 0(r30)
	lwz      r0, 0(r4)
	stw      r0, 4(r30)
	lwz      r3, 0(r4)
	stw      r30, 0(r3)
	stw      r30, 0(r4)
	b        lbl_80096F9C

lbl_80096F88:
	stw      r30, 4(r4)
	li       r0, 0
	stw      r30, 0(r4)
	stw      r0, 0(r30)
	stw      r0, 4(r30)

lbl_80096F9C:
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)

lbl_80096FA8:
	mr       r30, r31

lbl_80096FAC:
	cmplwi   r30, 0
	bne      lbl_80096E9C
	lwz      r30, 0xd4(r29)
	b        lbl_800970CC

lbl_80096FBC:
	lwz      r31, 4(r30)
	mr       r4, r28
	addi     r3, r30, 8
	bl       calc_c__15JPABaseParticleFP18JPAEmitterWorkData
	clrlwi.  r0, r3, 0x18
	beq      lbl_800970C8
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	beq      lbl_8009700C
	lwz      r4, 0(r30)
	cmplwi   r4, 0
	beq      lbl_8009700C
	stw      r3, 4(r4)
	lwz      r0, 0(r30)
	lwz      r3, 4(r30)
	stw      r0, 0(r3)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)
	b        lbl_80097078

lbl_8009700C:
	cmplwi   r3, 0
	beq      lbl_80097034
	li       r0, 0
	stw      r0, 0(r3)
	lwz      r0, 4(r30)
	stw      r0, 0xd4(r29)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)
	b        lbl_80097078

lbl_80097034:
	lwz      r3, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80097060
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r0, 0(r30)
	stw      r0, 0xd8(r29)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)
	b        lbl_80097078

lbl_80097060:
	li       r0, 0
	stw      r0, 0xd8(r29)
	stw      r0, 0xd4(r29)
	lwz      r3, 0xdc(r29)
	addi     r0, r3, -1
	stw      r0, 0xdc(r29)

lbl_80097078:
	lwz      r4, 0xe0(r29)
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	beq      lbl_800970A8
	li       r0, 0
	stw      r0, 0(r30)
	lwz      r0, 0(r4)
	stw      r0, 4(r30)
	lwz      r3, 0(r4)
	stw      r30, 0(r3)
	stw      r30, 0(r4)
	b        lbl_800970BC

lbl_800970A8:
	stw      r30, 4(r4)
	li       r0, 0
	stw      r30, 0(r4)
	stw      r0, 0(r30)
	stw      r0, 4(r30)

lbl_800970BC:
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)

lbl_800970C8:
	mr       r30, r31

lbl_800970CC:
	cmplwi   r30, 0
	bne      lbl_80096FBC
	lwz      r3, 0x100(r29)
	addi     r0, r3, 1
	stw      r0, 0x100(r29)

lbl_800970E0:
	li       r3, 0

lbl_800970E4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
void JPAResource::drawP(JPAEmitterWorkData* data)
{
	data->mEmitter->resetFlag(JPAEMIT_DrawChild);
	data->mGlobalPtclScl.x = data->mEmitter->mGlobalPScl.x * mBaseShape->mData->mBaseSizeX;
	data->mGlobalPtclScl.y = data->mEmitter->mGlobalPScl.y * mBaseShape->mData->mBaseSizeY;
	u32 flag               = mBaseShape->getType();
	if (flag == 0) {
		data->mGlobalPtclScl.x *= 1.02f;
	} else if (flag == 1) {
		data->mGlobalPtclScl.x *= 1.02f;
		data->mGlobalPtclScl.y *= 0.4f;
	}

	if (mExtraShape && mExtraShape->isEnableScaleAnm()) {
		data->mPivot.x = (mExtraShape->mData->mFlags >> 0xc & 3) - 1.0f;
		data->mPivot.y = (mExtraShape->mData->mFlags >> 0xe & 3) - 1.0f;
	} else {
		data->mPivot.y = 0.0f;
		data->mPivot.x = 0.0f;
	}
	bool test      = true;
	data->mDirType = mBaseShape->getDirType();
	data->mRotType = mBaseShape->getRotType();

	flag = mBaseShape->mData->mFlags & 15;
	if (flag != 4 && flag != 8) {
		test = false;
	}
	data->mDLType    = test;
	data->mPlaneType = ((u32)data->mDLType) ? 2 : mBaseShape->getBasePlaneType();
	// int projType;
	// if (mBaseShape->isPrjTex()) {
	// 	projType = mBaseShape->getProjType() + 1;
	// } else {
	// 	projType = 0;
	// }
	// data->mProjectionType = projType;
	data->mProjectionType = (!mBaseShape->isPrjTex()) ? 0 : mBaseShape->getProjType(); // need this to not optimise
	data->mpAlivePtcl     = &data->mEmitter->mAlivePtclBase;
	setPTev();

	for (int i = mDrawEmitterFuncListNum - 1; 0 <= i; i--) {
		mDrawEmitterFuncList[i](data);
	}

	if (mBaseShape->mData->mFlags & 0x200000) {
		for (JPANode<JPABaseParticle>* node = data->mEmitter->mAlivePtclBase.getLast(); node; node = node->getPrev()) {
			data->mpCurNode = node;
			if (mDrawParticleFuncList) {
				for (int i = mDrawParticleFuncListNum - 1; 0 <= i; i--) {
					mDrawParticleFuncList[i](data, node->getObject());
				}
			}
		}
	} else {
		FOREACH_NODE(JPANode<JPABaseParticle>, data->mEmitter->mAlivePtclBase.getFirst(), node)
		{
			data->mpCurNode = node;
			if (mDrawParticleFuncList) {
				for (int i = mDrawParticleFuncListNum - 1; 0 <= i; i--) {
					mDrawParticleFuncList[i](data, node->getObject());
				}
			}
		}
	}
	GXSetMisc(GX_MT_XF_FLUSH, 0);
	if (data->mEmitter->mEmitterCallback) {
		data->mEmitter->mEmitterCallback->drawAfter(data->mEmitter);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0(r4)
	lwz      r0, 0xf4(r3)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0xf4(r3)
	lwz      r3, 0x1c(r30)
	lwz      r4, 0(r4)
	lwz      r3, 0(r3)
	lfs      f1, 0xb0(r4)
	lfs      f0, 0x10(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	lwz      r3, 0x1c(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0(r3)
	lfs      f1, 0xb4(r4)
	lfs      f0, 0x14(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1c
	bne      lbl_80097270
	lfs      f1, 0x144(r31)
	lfs      f0, lbl_80516C58@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0x144(r31)
	b        lbl_80097298

lbl_80097270:
	cmplwi   r0, 1
	bne      lbl_80097298
	lfs      f2, 0x144(r31)
	lfs      f1, lbl_80516C58@sda21(r2)
	lfs      f0, lbl_80516C5C@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x144(r31)
	lfs      f1, 0x148(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)

lbl_80097298:
	lwz      r3, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_80097308
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80097308
	lis      r0, 0x4330
	rlwinm   r3, r3, 0x14, 0x1e, 0x1f
	stw      r3, 0xc(r1)
	lfd      f2, lbl_80516C68@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80516C60@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x10(r1)
	fsubs    f0, f0, f2
	fsubs    f0, f0, f1
	stfs     f0, 0x14c(r31)
	lwz      r3, 0x20(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x12, 0x1e, 0x1f
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fsubs    f0, f0, f1
	stfs     f0, 0x150(r31)
	b        lbl_80097314

lbl_80097308:
	lfs      f0, lbl_80516C64@sda21(r2)
	stfs     f0, 0x150(r31)
	stfs     f0, 0x14c(r31)

lbl_80097314:
	lwz      r3, 0x1c(r30)
	li       r4, 1
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x1c, 0x1d, 0x1f
	stw      r0, 0x200(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x19, 0x1d, 0x1f
	stw      r0, 0x204(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi   r0, r0, 0x1c
	cmplwi   r0, 4
	beq      lbl_80097364
	cmplwi   r0, 8
	beq      lbl_80097364
	li       r4, 0

lbl_80097364:
	clrlwi   r0, r4, 0x18
	stw      r0, 0x20c(r31)
	lwz      r0, 0x20c(r31)
	cmplwi   r0, 0
	beq      lbl_80097380
	li       r0, 2
	b        lbl_80097390

lbl_80097380:
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x16, 0x1f, 0x1f

lbl_80097390:
	stw      r0, 0x208(r31)
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r3, 8(r3)
	rlwinm.  r0, r3, 0, 0xb, 0xb
	beq      lbl_800973B4
	rlwinm   r3, r3, 8, 0x1f, 0x1f
	addi     r0, r3, 1
	b        lbl_800973B8

lbl_800973B4:
	li       r0, 0

lbl_800973B8:
	stw      r0, 0x210(r31)
	mr       r3, r30
	lwz      r4, 0(r31)
	addi     r0, r4, 0xc8
	stw      r0, 0x1e4(r31)
	bl       setPTev__11JPAResourceFv
	lbz      r3, 0x42(r30)
	addi     r28, r3, -1
	slwi     r29, r28, 2
	b        lbl_800973FC

lbl_800973E0:
	lwz      r4, 4(r30)
	mr       r3, r31
	lwzx     r12, r4, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r28, r28, -1

lbl_800973FC:
	cmpwi    r28, 0
	bge      lbl_800973E0
	lwz      r3, 0x1c(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_8009747C
	lwz      r3, 0(r31)
	lwz      r28, 0xcc(r3)
	b        lbl_80097470

lbl_80097424:
	stw      r28, 0x1e8(r31)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8009746C
	lbz      r3, 0x45(r30)
	addi     r27, r3, -1
	slwi     r29, r27, 2
	b        lbl_80097464

lbl_80097444:
	lwz      r5, 0x10(r30)
	mr       r3, r31
	addi     r4, r28, 8
	lwzx     r12, r5, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r27, r27, -1

lbl_80097464:
	cmpwi    r27, 0
	bge      lbl_80097444

lbl_8009746C:
	lwz      r28, 0(r28)

lbl_80097470:
	cmplwi   r28, 0
	bne      lbl_80097424
	b        lbl_800974DC

lbl_8009747C:
	lwz      r3, 0(r31)
	lwz      r27, 0xc8(r3)
	b        lbl_800974D4

lbl_80097488:
	stw      r27, 0x1e8(r31)
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_800974D0
	lbz      r3, 0x45(r30)
	addi     r28, r3, -1
	slwi     r29, r28, 2
	b        lbl_800974C8

lbl_800974A8:
	lwz      r5, 0x10(r30)
	mr       r3, r31
	addi     r4, r27, 8
	lwzx     r12, r5, r29
	mtctr    r12
	bctrl
	addi     r29, r29, -4
	addi     r28, r28, -1

lbl_800974C8:
	cmpwi    r28, 0
	bge      lbl_800974A8

lbl_800974D0:
	lwz      r27, 4(r27)

lbl_800974D4:
	cmplwi   r27, 0
	bne      lbl_80097488

lbl_800974DC:
	li       r3, 1
	li       r4, 0
	bl       GXSetMisc
	lwz      r4, 0(r31)
	lwz      r3, 0xec(r4)
	cmplwi   r3, 0
	beq      lbl_80097508
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80097508:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	u8 nStages         = 1;
	u8 flag            = 1;
	GXTexCoordID coord = GX_TEXCOORD1;
	u8 nIndStages      = 1;
	u8 nTexGens        = 0;

	u32 childflag = mChildShape->mData->mFlags & 0xf;
	if (childflag != 3 && childflag != 7) {
		flag = 0;
	}

	int offs;
	if (mExtraShape) {
		u32 shpflag = mExtraShape->mData->mFlags & 0xf;
		offs        = ((shpflag >> 0xc & 3) + (shpflag >> 0xe & 3) * 3) * 0xc;
	} else {
		offs = 0x30;
	} // some nonsense here
	GXSetArray(GX_VA_POS, &jpa_pos[offs + flag], 3);
	GXSetArray(GX_VA_TEX0, &jpa_crd[offs], 2);

	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);

	if (mExTexShape) {
		if (mExTexShape->mData->mFlags & 0x1) {
			nIndStages = 1;
		}

		if (nIndStages) {
			GXSetIndTexOrder(GX_IND_TEX_STAGE_0, GX_TEXCOORD1, GX_TEXMAP2);
			GXSetIndTexCoordScale(GX_IND_TEX_STAGE_0, GX_ITS_1, GX_ITS_1);
			const JPAExTexShapeData* data = mExTexShape->mData;
			GXSetIndTexMtx(GX_ITM_0, data->mIndTexMtx, data->mExpScale);
			GXSetTevIndirect(GX_TEVSTAGE0, GX_IND_TEX_STAGE_0, GX_ITF_8, GX_ITB_STU, GX_ITM_0, GX_ITW_OFF, GX_ITW_OFF, GX_FALSE, GX_FALSE,
			                 GX_ITBA_OFF);
			coord      = GX_TEXCOORD2;
			nIndStages = 1;
			nTexGens   = 2;
		}

		if ((mExTexShape->mData->mFlags & 0x100) != 0) {
			GXSetTevOrder(GX_TEVSTAGE1, coord, GX_TEXMAP3, GX_COLOR_NULL);
			GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_TEXC, GX_CC_CPREV, GX_CC_ZERO);
			GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_TEXA, GX_CA_APREV, GX_CA_ZERO);
			GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
			GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
			nStages = 2;
			nTexGens += 1;
		}
	}
	GXSetNumTevStages(nStages);
	GXSetNumIndStages(nIndStages);

	if (mBaseShape->mData->mFlags & 0x800000) {
		GXSetMisc(GX_MT_XF_FLUSH, 8);
		GXSetClipMode(GX_CLIP_ENABLE);
	} else {
		GXSetClipMode(GX_CLIP_DISABLE);
	}
	GXSetNumTexGens(nTexGens);

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 1
	stmw     r26, 0x18(r1)
	mr       r26, r3
	li       r30, 1
	li       r29, 1
	li       r28, 1
	li       r27, 0
	lwz      r3, 0x1c(r3)
	lwz      r3, 0(r3)
	lwz      r31, 8(r3)
	clrlwi   r3, r31, 0x1c
	cmplwi   r3, 3
	beq      lbl_80097858
	cmplwi   r3, 7
	beq      lbl_80097858
	li       r0, 0

lbl_80097858:
	clrlwi   r4, r0, 0x18
	lwz      r5, 0x20(r26)
	neg      r3, r4
	rlwinm   r0, r31, 0x16, 0x1f, 0x1f
	or       r3, r3, r4
	cmplwi   r5, 0
	srawi    r3, r3, 0x1f
	and      r4, r0, r3
	beq      lbl_8009789C
	lwz      r3, 0(r5)
	lwz      r3, 8(r3)
	rlwinm   r0, r3, 0x12, 0x1e, 0x1f
	rlwinm   r3, r3, 0x14, 0x1e, 0x1f
	mulli    r0, r0, 3
	add      r0, r3, r0
	mulli    r6, r0, 0xc
	b        lbl_800978A0

lbl_8009789C:
	li       r6, 0x30

lbl_800978A0:
	mulli    r5, r4, 0x6c
	lis      r4, jpa_pos@ha
	li       r3, 9
	addi     r0, r4, jpa_pos@l
	add      r4, r6, r5
	li       r5, 3
	add      r4, r4, r0
	bl       GXSetArray
	rlwinm   r3, r31, 7, 0x1f, 0x1f
	rlwinm   r0, r31, 7, 0x1e, 0x1e
	add      r0, r3, r0
	li       r5, 2
	lis      r3, jpa_crd@ha
	slwi     r4, r0, 3
	addi     r0, r3, jpa_crd@l
	li       r3, 0xd
	add      r4, r0, r4
	bl       GXSetArray
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	lwz      r3, 0x28(r26)
	cmplwi   r3, 0
	beq      lbl_80097A24
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8009798C
	li       r3, 0
	li       r4, 1
	li       r5, 2
	bl       GXSetIndTexOrder
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	lwz      r4, 0x28(r26)
	li       r3, 1
	lwz      r4, 0(r4)
	lbz      r5, 0x24(r4)
	addi     r4, r4, 0xc
	bl       GXSetIndTexMtx
	li       r0, 0
	li       r3, 0
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 7
	stw      r0, 0xc(r1)
	li       r7, 1
	li       r8, 0
	li       r9, 0
	li       r10, 0
	bl       GXSetTevIndirect
	li       r30, 2
	li       r27, 1
	li       r28, 2

lbl_8009798C:
	lwz      r3, 0x28(r26)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80097A24
	mr       r4, r30
	li       r3, 1
	li       r5, 3
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 1
	li       r4, 0xf
	li       r5, 8
	li       r6, 0
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 1
	li       r4, 7
	li       r5, 4
	li       r6, 0
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r29, 2
	addi     r28, r28, 1

lbl_80097A24:
	mr       r3, r29
	bl       GXSetNumTevStages
	mr       r3, r27
	bl       GXSetNumIndStages
	lwz      r3, 0x1c(r26)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 8, 8
	beq      lbl_80097A60
	li       r3, 1
	li       r4, 8
	bl       GXSetMisc
	li       r3, 0
	bl       GXSetClipMode
	b        lbl_80097A68

lbl_80097A60:
	li       r3, 1
	bl       GXSetClipMode

lbl_80097A68:
	mr       r3, r28
	bl       GXSetNumTexGens
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80097A84
 * @note Size: 0x164
 */
void JPAResource::setCTev(JPAEmitterWorkData* data)
{
	u32 flag = mChildShape->mData->mFlags & 0xf;
	bool set = true;
	if (flag != 3 && flag != 7) {
		set = false;
	}
	// some nonsense here
	GXSetArray(GX_VA_POS, &jpa_pos[flag >> 10 & 1 & (set != false)], 3);

	GXSetArray(GX_VA_TEX0, jpa_crd, 2);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetTexCoordGen2(GX_TEXCOORD_NULL, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
	GXSetTevDirect(GX_TEVSTAGE0);
	GXSetNumTevStages(1);
	GXSetNumIndStages(0);

	if (mChildShape->mData->mFlags & 0x100000) {
		GXSetMisc(GX_MT_XF_FLUSH, 8);
		GXSetClipMode(GX_CLIP_ENABLE);
	} else {
		GXSetClipMode(GX_CLIP_DISABLE);
	}
	GXSetNumTexGens(1);

	data->mResourceMgr->mTextures[data->mResource->mTextureIDList[mChildShape->mData->mTexIdx]]->load(GX_TEXMAP1);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x24(r3)
	lwz      r3, 0(r3)
	lwz      r4, 8(r3)
	clrlwi   r3, r4, 0x1c
	cmplwi   r3, 3
	beq      lbl_80097AC8
	cmplwi   r3, 7
	beq      lbl_80097AC8
	li       r0, 0

lbl_80097AC8:
	clrlwi   r5, r0, 0x18
	lis      r3, jpa_pos@ha
	neg      r0, r5
	rlwinm   r4, r4, 0x16, 0x1f, 0x1f
	or       r5, r0, r5
	addi     r0, r3, jpa_pos@l
	srawi    r5, r5, 0x1f
	li       r3, 9
	and      r4, r4, r5
	li       r5, 3
	mulli    r4, r4, 0x6c
	add      r4, r4, r0
	addi     r4, r4, 0x30
	bl       GXSetArray
	lis      r4, jpa_crd@ha
	li       r3, 0xd
	addi     r4, r4, jpa_crd@l
	li       r5, 2
	bl       GXSetArray
	li       r3, 0
	li       r4, 0
	li       r5, 1
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 0
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	bl       GXSetNumIndStages
	lwz      r3, 0x24(r30)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0xb, 0xb
	beq      lbl_80097B88
	li       r3, 1
	li       r4, 8
	bl       GXSetMisc
	li       r3, 0
	bl       GXSetClipMode
	b        lbl_80097B90

lbl_80097B88:
	li       r3, 1
	bl       GXSetClipMode

lbl_80097B90:
	li       r3, 1
	bl       GXSetNumTexGens
	lwz      r3, 0x24(r30)
	li       r4, 1
	lwz      r5, 4(r31)
	lwz      r3, 0(r3)
	lwz      r6, 8(r31)
	lbz      r0, 0x45(r3)
	lwz      r3, 0x38(r5)
	slwi     r0, r0, 1
	lwz      r5, 8(r6)
	lhzx     r0, r3, r0
	slwi     r0, r0, 2
	lwzx     r3, r5, r0
	addi     r3, r3, 4
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
