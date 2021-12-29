#ifndef _J3DUMTXCACHEBASE_H
#define _J3DUMTXCACHEBASE_H

/*
    __vt__16J3DUMtxCacheBase:
    .4byte 0
    .4byte 0
    .4byte __dt__16J3DUMtxCacheBaseFv
    .4byte 0
    .4byte 0
*/

struct J3DUMtxCacheBase {
	virtual ~J3DUMtxCacheBase(); // _00
	virtual void _04() = 0;      // _04
	virtual void _08() = 0;      // _08

	// _00 VTBL
};

#endif
