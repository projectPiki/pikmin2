#ifndef _JAINTER_OBJECT_H
#define _JAINTER_OBJECT_H

#include "JAInter/ObjectBase.h"
#include "Vector3.h"

struct Vec;
struct JKRHeap;

namespace JAInter {
struct Object : public ObjectBase {
	virtual ~Object();                 // _08
	virtual void startSound(u32, u32); // _0C
	virtual void disable();            // _24
	virtual void loop();               // _38

	Object(Vec*, JKRHeap*, u8);

	Vector3f _28;
	float _34;
	float _38;
	float _3C;
};
} // namespace JAInter

#endif
