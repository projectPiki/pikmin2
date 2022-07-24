#ifndef _GAME_SHADOWCYLINDER3_H
#define _GAME_SHADOWCYLINDER3_H

/*
    __vt__Q24Game15ShadowCylinder3:
    .4byte 0
    .4byte 0
    .4byte setFilterTextureID__Q24Game15ShadowCylinder3Fi
    .4byte drawInit__Q24Game15ShadowCylinder3Fv
    .4byte drawCylinder__Q24Game15ShadowCylinder3FR7Matrixfi
    .4byte drawFinish__Q24Game15ShadowCylinder3Fv
*/

namespace Game {
struct ShadowCylinder3 {
	virtual void setFilterTextureID(int);     // _08
	virtual void drawInit();                  // _0C
	virtual void drawCylinder(Matrixf&, int); // _10
	virtual void drawFinish();                // _14

	// _00 VTBL
};
} // namespace Game

#endif
