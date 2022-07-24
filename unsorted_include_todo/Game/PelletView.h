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
	virtual void viewGetBaseScale();                        // _08 (inline)
	virtual void _0C() = 0;                                 // _0C
	virtual void viewGetCollTreeJointIndex();               // _10 (inline)
	virtual void viewGetCollTreeOffset();                   // _14 (inline)
	virtual void view_start_carrymotion();                  // _18 (inline)
	virtual void view_finish_carrymotion();                 // _1C (inline)
	virtual void viewStartPreCarryMotion();                 // _20 (inline)
	virtual void viewStartCarryMotion();                    // _24 (inline)
	virtual void viewOnPelletKilled();                      // _28 (inline)
	virtual void viewEntryShape(Matrixf&, Vector3<float>&); // _2C (inline)

	void becomePellet(Game::PelletViewArg*);
	void viewMakeMatrix(Matrixf&);
};
} // namespace Game

#endif
