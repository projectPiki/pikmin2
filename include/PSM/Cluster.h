#ifndef _PSM_CLUSTER_H
#define _PSM_CLUSTER_H

#include "PSSystem/ClusterSe.h"
#include "PSM/CreatureObj.h"

namespace PSM {
struct Cluster : public CreatureObj {
	Cluster(Game::Creature*, PSSystem::ClusterSe::Factory&);

	virtual ~Cluster() { } // _14 (weak)

	void startClusterSound(u8);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	PSSystem::ClusterSe::Mgr* mClusterSeMgr; // _70
};

struct ClusterFactory : public PSSystem::ClusterSe::Factory {
	inline ClusterFactory()
	    : PSSystem::ClusterSe::Factory(3)
	    , mType(0)
	{
	}

	virtual PSSystem::ClusterSe::PartInitArg identifyPart(u8 a1) { return partInit(a1); } // _0C (weak)

	PSSystem::ClusterSe::PartInitArg partInit(u8);

	// _00     = VTBL
	// _00-_08 = PSSystem::ClusterSe::Factory
	u32 mType; // _0C
};
} // namespace PSM

PSM::Cluster* newPSCluster_SijimiChou(Game::Creature*);

#endif
