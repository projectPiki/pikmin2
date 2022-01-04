#ifndef _JAINTER_OBJECT_H
#define _JAINTER_OBJECT_H

#include "JAInter/ObjectBase.h"
#include "Vector3.h"

namespace JAInter {
struct Object : public ObjectBase {
	virtual ~Object();                     // _00
	virtual void startSound(u32, u32); // _04
	virtual void disable();                // _1C
	virtual void loop();                   // _30

	Vector3f _28;
	float _34;
	float _38;
	float _3C;
};
} // namespace JAInter

#endif
