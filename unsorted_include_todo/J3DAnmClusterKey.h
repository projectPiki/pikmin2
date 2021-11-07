#ifndef _J3DANMCLUSTERKEY_H
#define _J3DANMCLUSTERKEY_H

struct J3DAnmClusterKey {
	virtual ~J3DAnmClusterKey();                  // _00
	virtual void getKind() const;                 // _04
	virtual void getWeight(unsigned short) const; // _08

	// _00 VTBL
};

#endif
