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
	virtual ~J3DUMtxCacheBase(); // _08 (inline)
	virtual void _0C() = 0;      // _0C
	virtual void _10() = 0;      // _10
};

#endif
