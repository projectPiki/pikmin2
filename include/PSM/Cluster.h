#ifndef _PSM_CLUSTER_H
#define _PSM_CLUSTER_H

#include "PSSystem/ClusterSe.h"
#include "PSM/CreatureObj.h"

namespace PSM {
struct Cluster : public CreatureObj {
	Cluster(Game::Creature*, PSSystem::ClusterSe::Factory&);

	virtual ~Cluster(); // _14 (weak)

	void startClusterSound(u8);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	PSSystem::ClusterSe::Mgr* m_clusterSeMgr; // _70
};

struct ClusterFactory : public PSSystem::ClusterSe::Factory {
	virtual void identifyPart(u8); // _0C (weak)

	void partInit(u8);

	// _00     = VTBL
	// _00-_08 = PSSystem::ClusterSe::Factory
};
} // namespace PSM

#endif
