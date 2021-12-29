#ifndef _J3DANMTEXTURESRTKEY_H
#define _J3DANMTEXTURESRTKEY_H

/*
    __vt__19J3DAnmTextureSRTKey:
    .4byte 0
    .4byte 0
    .4byte __dt__19J3DAnmTextureSRTKeyFv
    .4byte getKind__19J3DAnmTextureSRTKeyCFv
*/

struct J3DAnmTextureSRTKey {
	virtual ~J3DAnmTextureSRTKey(); // _00
	virtual void getKind() const;   // _04

	// _00 VTBL
};

#endif
