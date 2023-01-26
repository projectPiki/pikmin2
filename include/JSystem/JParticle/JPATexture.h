#ifndef _JSYSTEM_JPA_JPATEXTURE_H
#define _JSYSTEM_JPA_JPATEXTURE_H

#include "JSystem/JUtility/JUTTexture.h"
#include "types.h"

struct JKRHeap;

struct JPATexture {
	JPATexture(const u8*);
	// JPATexture(const u8*, JKRHeap*);

	virtual ~JPATexture(); // _00

	JUTTexture mTexture; // _04
	const u8* _44;       // _44
};

#endif
