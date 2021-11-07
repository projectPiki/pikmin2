#ifndef _GAME_SHADOWCYLINDER2_H
#define _GAME_SHADOWCYLINDER2_H

namespace Game {
struct ShadowCylinder2 {
	virtual void setFilterTextureID(int);     // _00
	virtual void drawInit();                  // _04
	virtual void drawCylinder(Matrixf&, int); // _08
	virtual void drawFinish();                // _0C

	// _00 VTBL
};
} // namespace Game

#endif
