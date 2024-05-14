#ifndef _JSYSTEM_J3D_J3DSKINDEFORM_H
#define _JSYSTEM_J3D_J3DSKINDEFORM_H

#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DCluster.h"

struct J3DAnmCluster;

enum J3DSkinDeformFlags {
	J3DSKIN_Unk1 = 0x1,
	J3DSKIN_Unk2 = 0x2,
};

struct J3DDeformData {
	J3DDeformData();

	void deform(J3DModel*);
	void deform(J3DVertexBuffer*);

	inline J3DCluster* getClusterPointer(u16 i) { return &mClusters[i]; }
	inline J3DClusterKey* getClusterKeyPointer(u16 i) { return &mClusterKeys[i]; }
	inline void* getVtxPos() { return mVtxPos; }
	inline void* getVtxNrm() { return mVtxNorm; }

	u16 mClusterNum;             // _00
	u16 mClusterKeyNum;          // _02
	u16 _04;                     // _04
	J3DCluster* mClusters;       // _08
	J3DClusterKey* mClusterKeys; // _0C
	int _10;                     // _10
	u16 _14;                     // _14
	u16 _16;                     // _16
	void* mVtxPos;               // _18, check type
	void* mVtxNorm;              // _1C, check type
	int _20;                     // _20
	int _24;                     // _24
};

struct J3DDeformer {

	enum flags { UseNrm = 1, Active = 2 };

	J3DDeformer(J3DDeformData*);

	void deform(J3DVertexBuffer*, u16, f32*);
	void deform(J3DVertexBuffer*, u16);
	void deform_VtxPosF32(J3DVertexBuffer*, J3DCluster*, J3DClusterKey*, f32*);
	void deform_VtxNrmF32(J3DVertexBuffer*, J3DCluster*, J3DClusterKey*, f32*);
	void normalizeWeight(int, f32*);

	inline BOOL checkFlag(u32 flag) { return mFlags & flag; }
	inline void normalize(f32* vertex) { PSVECNormalize((const Vec*)vertex, (Vec*)vertex); }

	J3DDeformData* mDeformData; // _00
	J3DAnmCluster* mAnmCluster; // _04
	f32* mWeightList;           // _08
	f32* _0C;                   // _0C
	u32 mFlags;                 // _10
};

struct J3DSkinDeform {
	J3DSkinDeform();

	virtual void deform(J3DVertexBuffer*, J3DMtxBuffer*); // _08
	virtual ~J3DSkinDeform() { }                          // _0C

	void deform(J3DModel* model);

	void setFlag(u32 flag) { mFlags.typeView |= flag; }
	void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	bool checkFlag(u32 flag) const { return mFlags.typeView & flag; }

	// _00 VTBL
	void* mPosData;      // _04
	BitFlag<u32> _08;    // _08 /* bitfield of some sort */
	unknown _0C;         // _0C
	unknown _10;         // _10
	BitFlag<u32> mFlags; // _14
};

#endif
