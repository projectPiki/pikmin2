#ifndef _MORIMURA_TESTBASE_H
#define _MORIMURA_TESTBASE_H

#include "types.h"
#include "Vector3.h"

#include "Dolphin/string.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Screen/Bases.h"
#include "System.h"

namespace Morimura {
struct TTestBase : public Screen::ObjBase {
	TTestBase(char*);

	virtual bool doStart(Screen::StartSceneArg const*);          // _2C
	virtual bool doEnd(Screen::EndSceneArg const*);              // _30
	virtual bool doUpdateFadein();                               // _38
	virtual void doUpdateFadeinFinish();                         // _3C
	virtual void doUpdateFinish();                               // _44
	virtual bool doUpdateFadeout();                              // _48
	virtual og::Screen::DispMemberBase* getDispMemberBase() = 0; // _60

	virtual ~TTestBase();

	static u64 mIsSection;

	float m_timer;        // _38
	float m_timerLength;  // _3C
	float m_fadeFraction; // _40
	u8 m_fadeAlpha;       // _44
	u8 _45;               // _45
	char m_baseName;      // _46
};
} // namespace Morimura

#endif