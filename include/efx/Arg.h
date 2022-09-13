#ifndef _EFX_ARG_H
#define _EFX_ARG_H

#include "Game/enemyInfo.h"
#include "types.h"
#include "Vector3.h"

namespace efx {
struct Arg {
	inline Arg()
	    : m_position(Vector3f::zero)
	{
	}

	Arg(const Vector3f& position)
	    : m_position(position)
	{
	}

	/**
	 * @reifiedAddress{80108200}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _08 (weak)
	{
		return "Arg";
	}

	Vector3f m_position; // _04
};

struct ArgEnemyType : public Arg {
	ArgEnemyType(Vector3f position, Game::EnemyTypeID::EEnemyTypeID typeID, float p3)
	    : Arg(position)
	    , m_typeID(typeID)
	{
		_14 = p3;
	};
	ArgEnemyType(Vector3f position)
	    : Arg(position) {};

	/**
	 * @reifiedAddress{801081F4}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _08 (weak)
	{
		return "ArgEnemyType";
	}

	Game::EnemyTypeID::EEnemyTypeID m_typeID;
	float _14;
};

struct ArgScale : public Arg {
	ArgScale(Vector3f position, float scale)
	    : m_scale(scale)
	    , Arg(position)
	{
	}
	/**
	 * @reifiedAddress{80107C44}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _08 (weak)
	{
		return "ArgScale";
	}

	float m_scale; // _10
};

struct ArgChou : public Arg {
	ArgChou(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgChou";
	}
};

struct ArgCursor : public Arg {
	ArgCursor(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgCursor";
	}
};

struct ArgDenkiHiba : public Arg {
	ArgDenkiHiba(Vector3f& position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDenkiHiba";
	}
};

struct ArgDir : public Arg {
	ArgDir(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDir";
	}
};

struct ArgDopingSmoke : public Arg {
	ArgDopingSmoke(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDopingSmoke";
	}
};

struct ArgGasuHiba : public Arg {
	ArgGasuHiba(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgGasuHiba";
	}
};

struct ArgImoEat : public Arg {
	ArgImoEat(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgImoEat";
	}
};

struct ArgKchYodare : public Arg {
	ArgKchYodare(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgKchYodare";
	}
};

struct ArgKouhai : public Arg {
	ArgKouhai(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgKouhai";
	}
};

struct ArgPelType : public Arg {
	ArgPelType(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgPelType";
	}
};

struct ArgPosPos : public Arg {
	ArgPosPos(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgPosPos";
	}
};

struct ArgPrmColor : public Arg {
	ArgPrmColor(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgPrmColor";
	}
};

struct ArgRotY : public Arg {
	ArgRotY(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgRotY";
	}
};

struct ArgRotYScale : public Arg {
	ArgRotYScale(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgRotYScale";
	}
};

struct ArgType : public Arg {
	ArgType(Vector3f position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgType";
	}
};
} // namespace efx

#endif
