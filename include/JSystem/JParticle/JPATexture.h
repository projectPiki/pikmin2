#ifndef _JSYSTEM_JPA_JPATEXTURE_H
#define _JSYSTEM_JPA_JPATEXTURE_H

#include "JSystem/JUtility/JUTTexture.h"
#include "types.h"

struct JKRHeap;

struct JPATextureData {
	// Probably magic / size / flags up top here, but they're unused.
	/* 0x00 */ char _00[0x0C];
	/* 0x0C */ char mName[0x14];
	/* 0x20 */ ResTIMG mResTIMG;
};

struct JPATexture {
	JPATexture(const u8*);
	// JPATexture(const u8*, JKRHeap*);

	virtual ~JPATexture(); // _00

	void load(GXTexMapID texMapID) { mTexture.load(texMapID); }
	JUTTexture* getJUTTexture() { return &mTexture; }
	const char* getName() const { return mData->mName; }

	JUTTexture mTexture;         // _04
	const JPATextureData* mData; // _44
};

#endif
