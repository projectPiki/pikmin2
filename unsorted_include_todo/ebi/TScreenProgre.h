#ifndef _EBI_TSCREENPROGRE_H
#define _EBI_TSCREENPROGRE_H

/*
    __vt__Q23ebi13TScreenProgre:
    .4byte 0
    .4byte 0
    .4byte setArchive__Q23ebi13TScreenProgreFP10JKRArchive
    .4byte 0
*/

namespace ebi {
struct TScreenProgre {
	virtual void setArchive(JKRArchive*); // _08
	virtual void _0C() = 0;               // _0C

	void loadResource();
	void startScreen(long, unsigned long);
	void fadeout(unsigned long);
	void isFinish();
	void startState(ebi::TScreenProgre::enumState, unsigned long);
	void update();
	void draw();
	void setDecide();
	TScreenProgre();
};
} // namespace ebi

#endif
