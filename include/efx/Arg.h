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
	virtual const char* getName() // _00
	{
		return "Arg";
	}

	Vector3f m_position; // _04
};

struct ArgEnemyType : public Arg {
	ArgEnemyType(Vector3f& position, Game::EnemyTypeID::EEnemyTypeID typeID, float p3)
	    : Arg(position)
	    , m_typeID(typeID)
	{
		_14 = p3;
	};
	ArgEnemyType(Vector3f& position)
	    : Arg(position) {};

	/**
	 * @reifiedAddress{801081F4}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ArgEnemyType";
	}

	Game::EnemyTypeID::EEnemyTypeID m_typeID;
	float _14;
};

struct ArgScale : public Arg {
	ArgScale(Vector3f& position, float scale)
	    : m_scale(scale)
	    , Arg(position)
	{
	}
	/**
	 * @reifiedAddress{80107C44}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ArgScale";
	}

	float m_scale; // _10
};
} // namespace efx

#endif
