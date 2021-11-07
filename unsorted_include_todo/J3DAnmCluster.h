#ifndef _J3DANMCLUSTER_H
#define _J3DANMCLUSTER_H

struct J3DAnmCluster {
	virtual ~J3DAnmCluster();                     // _00
	virtual void getKind() const;                 // _04
	virtual void getWeight(unsigned short) const; // _08

	// _00 VTBL
};

#endif
