#ifndef _JSYSTEM_J2D_J2DANMLOADER_H
#define _JSYSTEM_J2D_J2DANMLOADER_H

#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/J3D/J3DAnmVisibilityFull.h"
#include "JSystem/J2D/J2DAnm.h"

struct J2DAnmLoaderDataBase {
	static J2DAnmBase* load(const void*);
};

struct J2DAnmDataBlockHeader {
	u32 mType;       // _00
	u32 mNextOffset; // _04
};

struct J2DAnmDataHeader {
	u32 mMagic;                   // _00
	u32 mType;                    // _04
	u8 _08[4];                    // _08
	u32 mCount;                   // _0C
	u8 _10[0x20 - 0x10];          // _10
	J2DAnmDataBlockHeader mFirst; // _20
};

struct J2DAnmLoader {
	virtual J2DAnmBase* load(const void*)              = 0; // _08
	virtual void setResource(J2DAnmBase*, const void*) = 0; // _0C
	virtual ~J2DAnmLoader() { }                             // _10 (weak)

	// _00 = VTBL
	J2DAnmBase* mResource; // _04
};

struct J2DAnmFullLoader_v15 : public J2DAnmLoader {
	J2DAnmFullLoader_v15();

	virtual J2DAnmBase* load(const void*);              // _08
	virtual void setResource(J2DAnmBase*, const void*); // _0C
	virtual ~J2DAnmFullLoader_v15();                    // _10

	void readAnmTransform(const J3DAnmTransformFullData*);
	void setAnmTransform(J2DAnmTransformFull*, const J3DAnmTransformFullData*);
	void readAnmColor(const J3DAnmColorFullData*);
	void setAnmColor(J2DAnmColorFull*, const J3DAnmColorFullData*);
	void readAnmTexPattern(const J3DAnmTexPatternFullData*);
	void setAnmTexPattern(J2DAnmTexPattern*, const J3DAnmTexPatternFullData*);
	void readAnmVisibility(const J3DAnmVisibilityFullData*);
	void setAnmVisibility(J2DAnmVisibilityFull*, const J3DAnmVisibilityFullData*);
	void readAnmVtxColor(const J3DAnmVtxColorFullData*);
	void setAnmVtxColor(J2DAnmVtxColorFull*, const J3DAnmVtxColorFullData*);

	// _00 = VTBL
	// _04 = mAnimation
};

struct J2DAnmKeyLoader_v15 : public J2DAnmLoader {
	J2DAnmKeyLoader_v15();

	virtual J2DAnmBase* load(const void*);              // _08
	virtual void setResource(J2DAnmBase*, const void*); // _0C
	virtual ~J2DAnmKeyLoader_v15();                     // _10

	void readAnmTransform(const J3DAnmTransformKeyData*);
	void setAnmTransform(J2DAnmTransformKey*, const J3DAnmTransformKeyData*);
	void readAnmTextureSRT(const J3DAnmTextureSRTKeyData*);
	void setAnmTextureSRT(J2DAnmTextureSRTKey*, const J3DAnmTextureSRTKeyData*);
	void readAnmColor(const J3DAnmColorKeyData*);
	void setAnmColor(J2DAnmColorKey*, const J3DAnmColorKeyData*);
	void readAnmVtxColor(const J3DAnmVtxColorKeyData*);
	void setAnmVtxColor(J2DAnmVtxColorKey*, const J3DAnmVtxColorKeyData*);
	void readAnmTevReg(const J3DAnmTevRegKeyData*);
	void setAnmTevReg(J2DAnmTevRegKey*, const J3DAnmTevRegKeyData*);

	// _00 = VTBL
	// _04 = mAnimation
};

#endif
