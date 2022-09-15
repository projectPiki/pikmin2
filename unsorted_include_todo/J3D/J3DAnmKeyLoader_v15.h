#ifndef _J3DANMKEYLOADER_V15_H
#define _J3DANMKEYLOADER_V15_H

/*
    __vt__19J3DAnmKeyLoader_v15:
    .4byte 0
    .4byte 0
    .4byte load__19J3DAnmKeyLoader_v15FPCv
    .4byte setResource__19J3DAnmKeyLoader_v15FP10J3DAnmBasePCv
    .4byte __dt__19J3DAnmKeyLoader_v15Fv
*/

struct J3DAnmKeyLoader_v15 {
	virtual void load(const void*);                     // _08
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
