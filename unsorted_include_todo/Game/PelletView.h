#ifndef _GAME_PELLETVIEW_H
#define _GAME_PELLETVIEW_H

namespace Game {
struct PelletView {
	virtual void viewGetBaseScale();                        // _00
	virtual void _04() = 0;                                 // _04
	virtual void viewGetCollTreeJointIndex();               // _08
	virtual void viewGetCollTreeOffset();                   // _0C
	virtual void view_start_carrymotion();                  // _10
	virtual void view_finish_carrymotion();                 // _14
	virtual void viewStartPreCarryMotion();                 // _18
	virtual void viewStartCarryMotion();                    // _1C
	virtual void viewOnPelletKilled();                      // _20
	virtual void viewEntryShape(Matrixf&, Vector3<float>&); // _24

	// _00 VTBL
};
} // namespace Game

#endif
