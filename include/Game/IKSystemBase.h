#ifndef _GAME_IKSYSTEMBASE_H
#define _GAME_IKSYSTEMBASE_H

#include "Vector3.h"
#include "Matrixf.h"
#include "Dolphin/mtx.h"

struct IKSystemParms {
	u8 _00[0xC];        // _00
	f32 _0C;            // _0C
	f32 m_heightOffset; // _10
};

struct IKSystemBase {
	IKSystemBase();

	void init();
	void setLegJointMatrix(int, Matrixf*);
	void setParameters(IKSystemParms*);

	void startProgramedIK();
	void startMovePosition(Vector3f&);

	void startBlendMotion();
	void finishBlendMotion();
	void checkJointScaleOn();

	void update();

	void makeBendRatio();
	void moveBottomJointPosition();
	bool onGroundPosition();

	bool m_enabled;               // _00
	bool m_blendMotion;           // _01
	bool m_onGround;              // _02
	bool _03;                     // _03
	bool m_scaleJoints;           // _04
	float m_bendRatio;            // _08, aka rotation in radians
	float m_moveRatio;            // _0C
	float m_timer;                // _10
	float m_distance1;            // _14, some distance I'm not sure of
	float m_distance2;            // _18, same as above
	Vector3f m_targetPosition;    // _1C
	Vector3f m_ikPositions[3];    // _28
	Matrixf** m_legJointMatrices; // _4C
	Matrixf _50;                  // _50
	Matrixf m_bottomMtx;          // _54
	IKSystemParms* m_parameters;  // _58
};

#endif
