#ifndef _JSYSTEM_J3D_J3DANMCLUSTER_H
#define _JSYSTEM_J3D_J3DANMCLUSTER_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"

struct J3DAnmCluster : public J3DAnmBase {
	inline J3DAnmCluster()
	    : mWeights(nullptr)
	{
	}

	virtual ~J3DAnmCluster() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_Cluster; } // _0C (weak)
	virtual f32 getWeight(u16) const { return 1.0f; }                 // _10 (weak)

	// _00     = VTBL
	// _00-_0C = J3DAnmBase
	f32* mWeights; // _0C
};

struct J3DAnmClusterFullTable {
	u16 mMaxFrame; // _00
	u16 mOffset;   // _02
};

/**
 * @size{0x14}
 */
struct J3DAnmClusterFull : public J3DAnmCluster {
	inline J3DAnmClusterFull()
	    : mTables(nullptr)
	{
	}

	virtual ~J3DAnmClusterFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ClusterFull; } // _0C (weak)
	virtual f32 getWeight(u16) const;                                     // _10

	inline J3DAnmClusterFullTable* getTable(int index) const { return &mTables[index]; }

	// _00     = VTBL
	// _00-_10 = J3DAnmCluster
	J3DAnmClusterFullTable* mTables; // _10
};

struct J3DAnmClusterFullData : J3DAnmFullData {
	void* mTablesOffset;  // _10
	void* mWeightsOffset; // _14
};

struct J3DAnmClusterKeyTable : public J3DAnmKeyTableBase {
	// // _00-_06 = J3DAnmKeyTableBase
	// u16 _06; // _06
	// u16 _08; // _08
};

/**
 * @size{0x14}
 */
struct J3DAnmClusterKey : public J3DAnmCluster {
	inline J3DAnmClusterKey()
	    : mTables(nullptr)
	{
	}

	virtual ~J3DAnmClusterKey() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ClusterKey; } // _0C (weak)
	virtual f32 getWeight(u16) const;                                    // _10

	inline J3DAnmClusterKeyTable* getTable(int index) const { return &mTables[index]; }

	J3DAnmClusterKeyTable* mTables; // _10
};

struct J3DAnmClusterKeyData : public J3DFileBlockBase {
	u8 mAttribute;        // _08
	s16 mTotalFrameCount; // _0A
	u8 _0C[4];            // _0C - unknown/filler
	void* mTableOffset;   // _10
	void* mWeightsOffset; // _14
};

#endif
