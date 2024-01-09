#ifndef _EFX_ARG_H
#define _EFX_ARG_H

#include "Color4.h"
#include "Game/enemyInfo.h"
#include "types.h"
#include "Vector3.h"

namespace Game {
struct EnemyBase;
struct BaseItem;
struct Onyon;
} // namespace Game

namespace efx {
struct Arg {
	inline Arg()
	    : mPosition(Vector3f::zero)
	{
	}

	Arg(const Vector3f& position)
	    : mPosition(position)
	{
	}

	inline Arg(f32 x, f32 y, f32 z)
	    : mPosition(x, y, z)
	{
	}

	inline Arg(Game::EnemyBase*); // defined in Game/EnemyBase.h header to avoid include loops

	inline Arg(Game::BaseItem*); // defined in Game/BaseItem.h header to avoid include loops

	/**
	 * @reifiedAddress{80108200}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _08 (weak)
	{
		return "Arg";
	}

	Vector3f mPosition; // _04
};

struct ArgEnemyType : public Arg {
	ArgEnemyType(Vector3f position, Game::EnemyTypeID::EEnemyTypeID typeID, f32 scale)
	    : Arg(position)
	    , mTypeID(typeID)
	{
		mScale = scale;
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

	Game::EnemyTypeID::EEnemyTypeID mTypeID;
	f32 mScale;
};

struct ArgScale : public Arg {
	ArgScale(Vector3f position, f32 scale)
	    : Arg(position)
	{
		mScale = scale;
	}
	/**
	 * @reifiedAddress{80107C44}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual const char* getName() // _08 (weak)
	{
		return "ArgScale";
	}

	f32 mScale; // _10
};

enum ChouType {
	CHOU_Yellow = 0,
	CHOU_Red    = 1,
	CHOU_Purple = 2,
};

struct ArgChou : public Arg {
	ArgChou()
	    : Arg()
	{
		mType = CHOU_Yellow;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgChou";
	}

	ChouType mType; // _10
};

struct ArgCursor : public Arg {
	ArgCursor(Vector3f& position, f32 scale)
	    : Arg(position)
	{
		mScale = scale;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgCursor";
	}

	f32 mScale; // _10
};

struct ArgDenkiHiba : public Arg {
	ArgDenkiHiba(Vector3f& position)
	    : Arg(position)
	{
	}

	ArgDenkiHiba(Vector3f ownerPos, Vector3f targetPos)
	    : Arg()
	    , mOwnerPos(ownerPos)
	    , mTargetPos(targetPos)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDenkiHiba";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	Vector3f mOwnerPos;  // _10
	Vector3f mTargetPos; // _1C
	int mType;           // _28
};

struct ArgDir : public Arg {
	ArgDir(Vector3f& position)
	    : Arg(position)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDir";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	Vector3f mAngle; // _10
};

struct ArgDopingSmoke : public Arg {
	ArgDopingSmoke(Vector3f& position, Vector3f& dopepos, u16 type)
	    : Arg(position)
	{
		mDopePos  = dopepos;
		mDopeType = type;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgDopingSmoke";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	Vector3f mDopePos; // _10
	u16 mDopeType;     // _1C
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
	bool mIsUnderground; // _10
};

struct ArgImoEat : public Arg {
	ArgImoEat(Vector3f position)
	    : Arg(position)
	{
	}

	ArgImoEat(Game::EnemyBase* enemy)
	    : Arg(enemy)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgImoEat";
	}

	int mType; // _10
};

struct ArgKchYodare : public Arg {
	ArgKchYodare(Vector3f position)
	    : Arg(position)
	{
	}

	ArgKchYodare(Vector3f position, f32 y)
	    : Arg(position)
	{
		mGroundYPos = y;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgKchYodare";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	f32 mGroundYPos; // _10
};

struct ArgKouhai : public Arg {
	ArgKouhai(Vector3f position, int type)
	    : Arg(position)
	{
		mSize = type;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgKouhai";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	int mSize; // _10
};

struct ArgPelType : public Arg {
	ArgPelType(int type, Vector3f& position)
	    : Arg(position)
	{
		mType = type;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgPelType";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	int mType; // _10
};

struct ArgPosPos : public Arg {
	ArgPosPos(Vector3f position)
	    : Arg(position)
	{
	}

	ArgPosPos(Vector3f pos1, Vector3f pos2)
	    : Arg()
	{
		mPos1 = pos1;
		mPos2 = pos2;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgPosPos";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	Vector3f mPos1; // _10
	Vector3f mPos2; // _1C
};

struct ArgPrmColor : public Arg {
	ArgPrmColor(Vector3f& position)
	    : Arg(position)
	{
		mColor = Color4(255, 255, 255, 255);
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgPrmColor";
	}
	Color4 mColor; // _10
};

struct ArgRotY : public Arg {
	ArgRotY(f32 x, f32 y, f32 z, f32 faceDir)
	    : Arg(x, y, z)
	{
		mFaceDir = faceDir;
	}

	ArgRotY(const Vector3f& position, f32 faceDir)
	    : Arg(position)
	{
		mFaceDir = faceDir;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgRotY";
	}
	f32 mFaceDir; // _10
};

struct ArgRotYScale : public Arg {
	ArgRotYScale(Vector3f position)
	    : Arg(position)
	{
	}

	inline ArgRotYScale(Vector3f& position, f32 faceDir, f32 scale)
	    : Arg(position)
	    , mFaceDir(faceDir)
	    , mScale(scale)
	{
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgRotYScale";
	}

	// _00     = VTBL
	// _00-_10 = Arg
	f32 mFaceDir; // _10
	f32 mScale;   // _14
};

struct ArgType : public Arg {
	ArgType(Vector3f position)
	    : Arg(position)
	{
	}

	inline ArgType(Game::Onyon* onyon);

	inline ArgType(u16 type)
	    : Arg()
	{
		mType = type;
	}

	virtual const char* getName() // _08 (weak)
	{
		return "ArgType";
	}

	u16 mType; // _10, onyon or pikmin
};
} // namespace efx

#endif
