#ifndef _JSYSTEM_JPA_JPATEXTURE_H
#define _JSYSTEM_JPA_JPATEXTURE_H

#include "JSystem/JUT/JUTTexture.h"
#include "types.h"

struct JKRHeap;

struct JPATexture {
	JPATexture(const uchar*);
	// JPATexture(const uchar*, JKRHeap*);

	virtual ~JPATexture(); // _00

	JUTTexture m_texture; // _04
	const uchar* _44;     // _44
};

#endif
