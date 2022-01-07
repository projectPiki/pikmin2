#ifndef _OG_NEWSCREEN_SMENUPAUSEVS_H
#define _OG_NEWSCREEN_SMENUPAUSEVS_H

#include "Screen/Bases.h"
#include "Screen/Enums.h"

namespace og {
namespace newScreen {
/**
 * @size{0x220}
 */
struct SMenuPauseVS : public ::Screen::SceneBase {
	SMenuPauseVS();
	~SMenuPauseVS(); // unused/inlined

	virtual SceneType getSceneType();                       // _00
	virtual ScreenOwnerID getOwnerID();                     // _04
	virtual ScreenMemberID getMemberID();                   // _08
	virtual bool isUseBackupSceneInfo();                    // _0C
	virtual const char* getResName() const;                 // _14
	virtual void doCreateObj(JKRArchive*);                  // _18
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _1C
	virtual void doUpdateActive();                          // _24
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _28
	virtual void doSetBackupScene(::Screen::SetSceneArg&);  // _40
	virtual int doGetFinishState();                         // _44
	virtual void _48() = 0;                                 // _48
};
} // namespace newScreen
} // namespace og

#endif
