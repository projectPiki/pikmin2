#ifndef _TEXCASTER_H
#define _TEXCASTER_H

#include "CNode.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "Graphics.h"
#include "types.h"

namespace TexCaster {
// size: 0x48
struct Caster : public CNode {
	Caster();

	virtual ~Caster(); // _08

	void hide();
	void fadein(f32);

	// unused/inlined:
	void show();
	void fadeout(f32);
	void makeDL();
	void update();
	void draw(Graphics&);
	void drawLine(Graphics&);

	// _00      = VTABLE
	// _04-_18  = CNode
	Sys::Sphere _18; // _18
	u32 _28;         // _28
	Vector3f* _2C;   // _2C
	u8* _30;         // _30
	int _34;         // _34
	f32** _38;       // _38, array of floats of size _28 * 6
	u8 _3C;          // _3C
	f32 _40;         // _40
	f32 _44;         // _44
};

// size: 0x50
struct Mgr {
	Mgr();

	~Mgr();

	Caster* create(Sys::Sphere&, f32);
	void draw(Graphics&);

	static void globalInstance();
	static void deleteInstance();
	void loadResource();

	// unused/inlined:
	void getTexture(int);
	void drawInit(Graphics&);

	static Mgr* sInstance;

	int mTextureCount;      // _00
	JUTTexture** mTextures; // _04
	Caster mCaster;         // _08
};

} // namespace TexCaster

#endif
