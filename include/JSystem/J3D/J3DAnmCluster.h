#ifndef _JSYSTEM_J3D_J3DANMCLUSTER_H
#define _JSYSTEM_J3D_J3DANMCLUSTER_H

#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "types.h"

struct J3DAnmClusterFullTable;
struct J3DAnmClusterKeyTable;

struct J3DAnmCluster : public J3DAnmBase {
	inline J3DAnmCluster()
	    : _0C(nullptr)
	{
	}

	virtual ~J3DAnmCluster() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_Cluster; } // _0C (weak)
	virtual float getWeight(unsigned short) const;                    // _10 (weak)

	f32* _0C; // _0C
};

/**
 * @size{0x14}
 */
struct J3DAnmClusterFull : public J3DAnmCluster {
	inline J3DAnmClusterFull()
	    : _10(nullptr)
	{
	}

	virtual ~J3DAnmClusterFull() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ClusterFull; } // _0C (weak)
	virtual float getWeight(unsigned short) const;                        // _10

	J3DAnmClusterFullTable* _10; // _10
};

struct J3DAnmClusterFullData : J3DAnmFullData {
	void* _10; // _10
	void* _14; // _14
};
struct J3DAnmClusterFullTable {
};

/**
 * @size{0x14}
 */
struct J3DAnmClusterKey : public J3DAnmCluster {
	inline J3DAnmClusterKey()
	    : _10(nullptr)
	{
	}

	virtual ~J3DAnmClusterKey() { }                                      // _08 (weak)
	virtual J3DAnmKind getKind() const { return J3DAnmKind_ClusterKey; } // _0C (weak)
	virtual float getWeight(unsigned short) const;                       // _10

	J3DAnmClusterKeyTable* _10; // _10
};

struct J3DAnmClusterKeyData : J3DFileBlockBase {
	u8 _08;    // _08
	s16 _0A;   // _0A
	u8 _0C[4]; // _0C - unknown/filler
	void* _10; // _10
	void* _14; // _14
};
struct J3DAnmClusterKeyTable : J3DAnmKeyTableBase {
};

#endif
