#ifndef _J3DANMCLUSTERKEY_H
#define _J3DANMCLUSTERKEY_H

/*
    __vt__16J3DAnmClusterKey:
    .4byte 0
    .4byte 0
    .4byte __dt__16J3DAnmClusterKeyFv
    .4byte getKind__16J3DAnmClusterKeyCFv
    .4byte getWeight__16J3DAnmClusterKeyCFUs
*/

struct J3DAnmClusterKey {
	virtual ~J3DAnmClusterKey();                  // _08 (inline)
	virtual void getKind() const;                 // _0C (inline)
	virtual void getWeight(unsigned short) const; // _10
};

#endif
