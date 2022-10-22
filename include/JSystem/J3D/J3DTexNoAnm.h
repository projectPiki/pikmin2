#ifndef _JSYSTEM_J3D_J3DTEXNOANM_H
#define _JSYSTEM_J3D_J3DTEXNOANM_H

#include "types.h"
#include "JSystem/J3D/J3DAnmTexPattern.h"

struct J3DTexNoAnm {
	J3DTexNoAnm();

	virtual void calc(unsigned short*) const; // _08 (weak)

	~J3DTexNoAnm();

	u16 _04;                 // _04
	u16 _06;                 // _06
	J3DAnmTexPattern* m_anm; // _08
};

#endif
