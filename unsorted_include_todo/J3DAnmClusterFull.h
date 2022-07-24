#ifndef _J3DANMCLUSTERFULL_H
#define _J3DANMCLUSTERFULL_H

/*
    __vt__17J3DAnmClusterFull:
    .4byte 0
    .4byte 0
    .4byte __dt__17J3DAnmClusterFullFv
    .4byte getKind__17J3DAnmClusterFullCFv
    .4byte getWeight__17J3DAnmClusterFullCFUs
*/

struct J3DAnmClusterFull {
	virtual ~J3DAnmClusterFull();                 // _08 (inline)
	virtual void getKind() const;                 // _0C (inline)
	virtual void getWeight(unsigned short) const; // _10
};

#endif
