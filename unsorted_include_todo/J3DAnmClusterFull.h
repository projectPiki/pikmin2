#ifndef _J3DANMCLUSTERFULL_H
#define _J3DANMCLUSTERFULL_H

struct J3DAnmClusterFull {
	virtual ~J3DAnmClusterFull();                 // _00
	virtual void getKind() const;                 // _04
	virtual void getWeight(unsigned short) const; // _08

	// _00 VTBL
};

#endif
