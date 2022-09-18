#ifndef _J3DFRAMECTRL_H
#define _J3DFRAMECTRL_H

#include "types.h"

struct J3DFrameCtrl {
	virtual ~J3DFrameCtrl(); // _08 (weak)

	void init(short);
	void update();

	// _00 VTBL
	u8 m_attr; // _04
	u8 _05;    // _05
	// TODO: Rename to m_startFrame
	short _06; // _06
	// TODO: Rename to m_endFrame
	short _08; // _08
	short _0A; // _0A
	float _0C; // _0C
	float _10; // _10
};

#endif
