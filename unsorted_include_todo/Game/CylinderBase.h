#ifndef _GAME_CYLINDERBASE_H
#define _GAME_CYLINDERBASE_H

/*
    __vt__Q24Game12CylinderBase:
    .4byte 0
    .4byte 0
    .4byte setFilterTextureID__Q24Game12CylinderBaseFi
    .4byte drawInit__Q24Game12CylinderBaseFv
    .4byte drawCylinder__Q24Game12CylinderBaseFR7Matrixfi
    .4byte drawFinish__Q24Game12CylinderBaseFv
*/

namespace Game {
struct CylinderBase {
	virtual void setFilterTextureID(int);     // _08
	virtual void drawInit();                  // _0C
	virtual void drawCylinder(Matrixf&, int); // _10
	virtual void drawFinish();                // _14

	CylinderBase();
	void setColor(Color4*);
	void setShadowRect(Rect<float>&);
	void setCameraParms(Camera*, int);
	void makeSRT(Matrixf&, Game::ShadowParam&);
	void getCylinderType(Game::ShadowParam&, int);
};
} // namespace Game

#endif
