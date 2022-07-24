#ifndef _GAME_CAMERAMGR_H
#define _GAME_CAMERAMGR_H

/*
    __vt__Q24Game9CameraMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9CameraMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct CameraMgr : public CNode {
	virtual ~CameraMgr();   // _08 (inline)
	virtual void _10() = 0; // _10

	CameraMgr();
	void loadResource();
	void setViewport(Viewport*, int);
	void init(int);
	void setCameraAngle(float, int);
	void update();
	void startVibration(int, Vector3<float>&, int);
	void startVibration(int, int);
	void controllerLock(int);
	void controllerUnLock(int);
	void startDemoCamera(int, int);
	void finishDemoCamera(int);
	void changePlayerMode(int, IDelegate1<Game::CameraArg*>*);
	void isChangePlayer();
	void setZukanCamera(LookAtCamera*);
	void isCameraUpdateOn();
	void isStartAndEnd(int*, int);
	void isVibrationStart(int, int);
	void readCameraParms(char*);
	void readParameter(Stream&);
};
} // namespace Game

#endif
