#ifndef _JSYSTEM_J3D_J3DANMLOADER_H
#define _JSYSTEM_J3D_J3DANMLOADER_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DAnmCluster.h"
#include "JSystem/J3D/J3DAnmColor.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVisibilityFull.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "types.h"

namespace J3DAnmLoaderDataBase {
J3DAnmBase* load(const void*);
}

J3DMtxCalcAnmBase* J3DNewMtxCalcAnm(unsigned long, J3DAnmTransform*);

struct J3DAnmLoader {
	virtual J3DAnmBase* load(const void*)              = 0; // _08
	virtual void setResource(J3DAnmBase*, const void*) = 0; // _0C
	virtual ~J3DAnmLoader();                                // _10 (weak)

	// _00 VTBL
	J3DAnmBase* m_animation; // _04
};

struct J3DAnmFullLoader_v15 : public J3DAnmLoader {
	virtual J3DAnmBase* load(const void*);              // _08
	virtual void setResource(J3DAnmBase*, const void*); // _0C
	virtual ~J3DAnmFullLoader_v15();                    // _10

	J3DAnmFullLoader_v15();
	void readAnmTransform(const J3DAnmTransformFullData*);
	void setAnmTransform(J3DAnmTransformFull*, const J3DAnmTransformFullData*);
	void readAnmColor(const J3DAnmColorFullData*);
	void setAnmColor(J3DAnmColorFull*, const J3DAnmColorFullData*);
	void readAnmTexPattern(const J3DAnmTexPatternFullData*);
	void setAnmTexPattern(J3DAnmTexPattern*, const J3DAnmTexPatternFullData*);
	void readAnmVisibility(const J3DAnmVisibilityFullData*);
	void setAnmVisibility(J3DAnmVisibilityFull*, const J3DAnmVisibilityFullData*);
	void readAnmCluster(const J3DAnmClusterFullData*);
	void setAnmCluster(J3DAnmClusterFull*, const J3DAnmClusterFullData*);
	void readAnmVtxColor(const J3DAnmVtxColorFullData*);
	void setAnmVtxColor(J3DAnmVtxColorFull*, const J3DAnmVtxColorFullData*);
};

struct J3DAnmKeyLoader_v15 : J3DAnmLoader {
	virtual J3DAnmBase* load(const void*);              // _08
	virtual void setResource(J3DAnmBase*, const void*); // _0C
	virtual ~J3DAnmKeyLoader_v15();                     // _10

	J3DAnmKeyLoader_v15();
	void readAnmTransform(const J3DAnmTransformKeyData*);
	void setAnmTransform(J3DAnmTransformKey*, const J3DAnmTransformKeyData*);
	void readAnmTextureSRT(const J3DAnmTextureSRTKeyData*);
	void setAnmTextureSRT(J3DAnmTextureSRTKey*, const J3DAnmTextureSRTKeyData*);
	void readAnmColor(const J3DAnmColorKeyData*);
	void setAnmColor(J3DAnmColorKey*, const J3DAnmColorKeyData*);
	void readAnmCluster(const J3DAnmClusterKeyData*);
	void setAnmCluster(J3DAnmClusterKey*, const J3DAnmClusterKeyData*);
	void readAnmTevReg(const J3DAnmTevRegKeyData*);
	void setAnmTevReg(J3DAnmTevRegKey*, const J3DAnmTevRegKeyData*);
	void readAnmVtxColor(const J3DAnmVtxColorKeyData*);
	void setAnmVtxColor(J3DAnmVtxColorKey*, const J3DAnmVtxColorKeyData*);
};

#endif
