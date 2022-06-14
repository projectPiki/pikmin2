#ifndef _OG_NEWSCREEN_CHALLENGEBASE_H
#define _OG_NEWSCREEN_CHALLENGEBASE_H

#include "Screen/Bases.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {
struct DispMemberDayEndCount : public DispMemberBase {
	f32 _08;
	f32 _0C;
};
} // namespace Screen

namespace newScreen {
struct ChallengeBase : public ::Screen::SceneBase {
	ChallengeBase();
	~ChallengeBase();
	void updateCountDown(f32, Screen::DispMemberDayEndCount*);

	virtual SceneType getSceneType()     = 0;                   // _08
	virtual ScreenOwnerID getOwnerID()   = 0;                   // _0C
	virtual ScreenMemberID getMemberID() = 0;                   // _10
	virtual bool isUseBackupSceneInfo();                        // _14
	virtual bool isDrawInDemo() const;                          // _18
	virtual const char* getResName() const = 0;                 // _1C
	virtual void doCreateObj(JKRArchive*)  = 0;                 // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);     // _24
	virtual void setPort(Graphics&);                            // _28
	virtual void doUpdateActive();                              // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);     // _30
	virtual bool doConfirmStartScene(::Screen::StartSceneArg*); // _34
	virtual bool doConfirmEndScene(::Screen::EndSceneArg*&);    // _38
	virtual bool doStart(::Screen::StartSceneArg*);             // _3C
	virtual bool doEnd(::Screen::EndSceneArg*);                 // _40
	virtual bool setDefaultDispMember();                        // _44
	virtual void doSetBackupScene(::Screen::SetSceneArg&);      // _48
	virtual int doGetFinishState();                             // _4C
	virtual void startCountDown() = 0;                          // _50
	// virtual void endCountDown() = 0;   /* speculation */      // _54

	// _00 VTBL

	bool isCountingDown; // _220
};

struct ObjChallengeBase {
	static struct staticValues {
		u32 _00;
		u32 _04;
		u32 _08;
		u32 _0C;
		u32 _10;
	} msBaseVal;
};
} // namespace newScreen
} // namespace og

#endif
