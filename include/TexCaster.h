#ifndef _TEXCASTER_H
#define _TEXCASTER_H

#include "CNode.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "JSystem/JUT/JUTTexture.h"
#include "types.h"

namespace TexCaster {
struct Caster : public CNode {
	virtual ~Caster(); // _08

	void hide();
	void fadein(float);

	// _00      = VTABLE
	// _04-_18  = CNode
	Sys::Sphere _18; // _18
	u8 _28[0x4];     // _28 - unknown
	Vector3f* _2C;   // _2C
	u32 _30;         // _30
	u32 _34;         // _34
	u32 _38;         // _38
	u8 _3C;          // _3C
	u8 _3D[0x3];     // _3D - unknown, maybe padding
	float _40;       // _40
	float _44;       // _44
};

struct Mgr {
	Caster* create(Sys::Sphere&, float);

	static Mgr* sInstance;

	int m_textureCount;      // _00
	JUTTexture** m_textures; // _04
	Caster m_caster;         // _08
};

} // namespace TexCaster

#endif
