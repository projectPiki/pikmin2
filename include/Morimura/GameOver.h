#ifndef _MORIMURA_GAMEOVER_H
#define _MORIMURA_GAMEOVER_H

#include "Morimura/Bases.h"
#include "Morimura/mrUtil.h"
#include "P2DScreen.h"

namespace Morimura {
struct TGameOverScreen {
	JKRArchive* _00;              // _00
	P2DScreen::Mgr_tuning* _04;   // _04
	og::Screen::AnimScreen** _08; // _08
	TGXSetPane* _0C;              // _0C
	int _10;                      // _10
	int _14;                      // _14
	P2DScreen::Mgr_tuning* _18;   // _18
	og::Screen::AnimScreen** _1C; //
};

struct TGameOverBase : public TTestBase {
	TGameOverBase();

	virtual ~TGameOverBase();                                // _08 (weak)
	virtual bool doUpdate();                                 // _58
	virtual bool doUpdateFadeout();                          // _60 (weak)
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* m_archive;             // _78
	TGameOverScreen* m_gameOverScreen; // _7C
	u8 _80[0x4];                       // _80, unknown
	u8 _84;                            // _84
	u8 _85;                            // _85
	s16 _86;                           // _86
	u32 _88;                           // _88, unknown
	s16 _8C;                           // _8C
	s16 _8E;                           // _8E
};

struct TGameOver2D : public TGameOverBase {
	virtual ~TGameOver2D();             // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TLujiDown2D : public TGameOverBase {
	virtual ~TLujiDown2D();             // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TOrimaDown2D : public TGameOverBase {
	virtual ~TOrimaDown2D();            // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TPikminDown2D : public TGameOverBase {
	virtual ~TPikminDown2D();           // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TPresidentDown2D : public TGameOverBase {
	virtual ~TPresidentDown2D();        // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TGameOverSceneBase : public THIOScene {
	virtual bool isUseBackupSceneInfo(); // _14 (weak)

	// _00      = VTBL
	// _00-_224 = THIOScene
	// treat _220 as TGameOverBase
};

struct TGameOverScene : public TGameOverSceneBase {
	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual bool isUseBackupSceneInfo();    // _14 (weak)
	virtual const char* getResName() const; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TGameOver2D
};

struct TLujiDownScene : public TGameOverSceneBase {
	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual const char* getResName() const; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TLujiDown2D
};

struct TOrimaDownScene : public TGameOverSceneBase {
	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual const char* getResName() const; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TOrimaDown2D
};

struct TPikminDownScene : public TGameOverSceneBase {
	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual bool isUseBackupSceneInfo();    // _14 (weak)
	virtual const char* getResName() const; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TPikminDown2D
};

struct TPresidentDownScene : public TGameOverSceneBase {
	virtual SceneType getSceneType();       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();     // _0C (weak)
	virtual ScreenMemberID getMemberID();   // _10 (weak)
	virtual const char* getResName() const; // _1C (weak)
	virtual void doCreateObj(JKRArchive*);  // _20 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TPresidentDown2D
};

} // namespace Morimura

#endif
