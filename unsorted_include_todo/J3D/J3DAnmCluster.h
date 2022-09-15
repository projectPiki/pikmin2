#ifndef _J3DANMCLUSTER_H
#define _J3DANMCLUSTER_H

/*
    __vt__13J3DAnmCluster:
    .4byte 0
    .4byte 0
    .4byte __dt__13J3DAnmClusterFv
    .4byte getKind__13J3DAnmClusterCFv
    .4byte getWeight__13J3DAnmClusterCFUs
*/

struct J3DAnmCluster {
	virtual ~J3DAnmCluster();                     // _08 (weak)
	virtual void getKind() const;                 // _0C (weak)
	virtual void getWeight(unsigned short) const; // _10 (weak)
};

#endif
