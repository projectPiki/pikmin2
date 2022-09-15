#ifndef _J3DANMFULLLOADER_V15_H
#define _J3DANMFULLLOADER_V15_H

/*
    __vt__20J3DAnmFullLoader_v15:
    .4byte 0
    .4byte 0
    .4byte load__20J3DAnmFullLoader_v15FPCv
    .4byte setResource__20J3DAnmFullLoader_v15FP10J3DAnmBasePCv
    .4byte __dt__20J3DAnmFullLoader_v15Fv
*/

struct J3DAnmFullLoader_v15 {
	virtual void load(const void*);                     // _08
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

#endif
