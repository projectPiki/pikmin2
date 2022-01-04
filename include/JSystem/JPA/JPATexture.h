#ifndef _JSYSTEM_JPA_JPATEXTURE_H
#define _JSYSTEM_JPA_JPATEXTURE_H

#include "JSystem/JUT/JUTTexture.h"
#include "types.h"

struct JKRHeap;

struct JPATexture {
	JPATexture(const u8*);
	// JPATexture(const u8*, JKRHeap*);

	virtual ~JPATexture(); // _00

	JUTTexture m_texture; // _04
	const u8* _44;        // _44
};

#endif
