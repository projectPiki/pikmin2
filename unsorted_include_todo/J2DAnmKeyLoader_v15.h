#ifndef _J2DANMKEYLOADER_V15_H
#define _J2DANMKEYLOADER_V15_H

/*
    __vt__19J2DAnmKeyLoader_v15:
    .4byte 0
    .4byte 0
    .4byte load__19J2DAnmKeyLoader_v15FPCv
    .4byte setResource__19J2DAnmKeyLoader_v15FP10J2DAnmBasePCv
    .4byte __dt__19J2DAnmKeyLoader_v15Fv
*/

struct J2DAnmKeyLoader_v15 {
	virtual void load(const void*);                     // _08
	virtual void setResource(J2DAnmBase*, const void*); // _0C
	virtual ~J2DAnmKeyLoader_v15();                     // _10

	J2DAnmKeyLoader_v15();
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
};

#endif
