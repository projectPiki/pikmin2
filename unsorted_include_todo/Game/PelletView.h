#ifndef _GAME_PELLETVIEW_H
#define _GAME_PELLETVIEW_H

/*
    __vt__Q24Game10PelletView:
    .4byte 0
    .4byte 0
    .4byte viewGetBaseScale__Q24Game10PelletViewFv
    .4byte 0
    .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
    .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
    .4byte view_start_carrymotion__Q24Game10PelletViewFv
    .4byte view_finish_carrymotion__Q24Game10PelletViewFv
    .4byte viewStartPreCarryMotion__Q24Game10PelletViewFv
    .4byte viewStartCarryMotion__Q24Game10PelletViewFv
    .4byte viewOnPelletKilled__Q24Game10PelletViewFv
    .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
*/

namespace Game {
struct PelletView {
	virtual void viewGetBaseScale();                        // _08
	virtual void _0C() = 0;                                 // _0C
	virtual void viewGetCollTreeJointIndex();               // _10
	virtual void viewGetCollTreeOffset();                   // _14
	virtual void view_start_carrymotion();                  // _18
	virtual void view_finish_carrymotion();                 // _1C
	virtual void viewStartPreCarryMotion();                 // _20
	virtual void viewStartCarryMotion();                    // _24
	virtual void viewOnPelletKilled();                      // _28
	virtual void viewEntryShape(Matrixf&, Vector3<float>&); // _2C

	// _00 VTBL
};
} // namespace Game

#endif
