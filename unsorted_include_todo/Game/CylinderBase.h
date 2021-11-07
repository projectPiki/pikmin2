#ifndef _GAME_CYLINDERBASE_H
#define _GAME_CYLINDERBASE_H

namespace Game {
struct CylinderBase {
	virtual void setFilterTextureID(int);     // _00
	virtual void drawInit();                  // _04
	virtual void drawCylinder(Matrixf&, int); // _08
	virtual void drawFinish();                // _0C

	// _00 VTBL
};
} // namespace Game

#endif
