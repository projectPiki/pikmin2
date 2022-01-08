#ifndef _PSGAME_ENVSE_H
#define _PSGAME_ENVSE_H

#include "Dolphin/vec.h"
#include "PSSystem/EnvSeBase.h"
#include "types.h"
#include "Vector3.h"

struct J3DAnmBase;

namespace PSGame {
/**
 * @size{0x48}
 */
struct EnvSe_Perspective : public PSSystem::EnvSeBase {
	EnvSe_Perspective(unsigned long, float, Vec);

	virtual void play(); // _04

	Vec _3C; // _3C
};

/**
 * @size{0x48}
 */
struct EnvSe_Pan : public PSSystem::EnvSeBase {
	virtual void setPanAndDolby(JAISound*); // _0C

	Vec _3C; // _3C
};

struct EnvSe_AutoPan : public EnvSe_Pan {
	EnvSe_AutoPan(unsigned long, float, float, float, float, float);

	virtual void setPanAndDolby(JAISound*); // _0C

	void setDirection(bool, bool);

	float _48; // _48
	u8 _4C;    // _4C
	u8 _4D;    // _4D
};

} // namespace PSGame

#endif
