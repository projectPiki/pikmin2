#ifndef _OG_SCREEN_ANIME_H
#define _OG_SCREEN_ANIME_H

#include "Screen/Bases.h"
#include "types.h"

struct J2DAnmBase;
struct J2DPane;
struct J2DScreen;

namespace og {
namespace Screen {
struct AnimBaseBase {
	AnimBaseBase();

	virtual void start()    = 0; // _08
	virtual void moveAnim() = 0; // _0C

	void init(JKRArchive*, char*);
	void setArea(f32, f32);
	void setAllArea();
	void start(f32);
	bool update();
	bool updateSub();

	// _00 = VTBL
	/* set to 1 by AnimScreen(), 2 by AnimPane() */
	int _04;              // _04
	bool _08;             // _08
	f32 _0C;              // _0C
	u8 _10;               // _10
	u8 _11;               // _11 /* alpha of pane/screen? */
	u8 _12;               // _12
	J2DAnmBase* m_anm;    // _14
	f32 m_frame;          // _18
	f32 m_lastFrame;      // _1C
	f32 _20;              // _20 /* speed */
	f32 _24;              // _24
	f32 _28;              // _28
	f32 _2C;              // _2C
	f32 _30;              // _30
	f32 _34;              // _34
	bool _38;             // _38
	bool _39;             // _39
	char* m_resourcePath; // _3C
};

struct AnimScreen : public AnimBaseBase {
	AnimScreen();

	virtual void start();    // _08
	virtual void moveAnim(); // _0C

	void init(JKRArchive*, J2DScreen*, char*);

	// _00     = VTBL
	// _00-_40 = AnimBaseBase
	J2DScreen* m_screen; // _40
};

struct AnimPane : public AnimBaseBase {
	AnimPane();

	virtual void start();    // _08
	virtual void moveAnim(); // _0C

	void init(JKRArchive*, J2DScreen*, u64, char*);

	// _00     = VTBL
	// _00-_40 = AnimBaseBase
	J2DPane* m_pane; // _40
};

struct AnimGroup {
	AnimGroup(int);

	f32 getFrame();
	f32 getLastFrame();
	void reservAnim(f32, f32, f32);
	void setAllArea();
	void setAlpha(u8);
	void setAnim(AnimBaseBase*);
	void setArea(f32, f32);
	void setFrame(f32);
	void setRepeat(bool);
	void setSpeed(f32);
	void start();
	bool update();

	AnimBaseBase** m_animPanes; // _00
	int m_paneCount;            // _04
	int m_paneLimit;            // _08
	u8 _0C;                     // _0C
	f32 _10;                    // _10
	f32 _14;                    // _14
	f32 _18;                    // _18
};

struct AnimList {
	AnimList(u16);

	void addAnim(AnimScreen*);
	void nextAnim(f32);
	void start();
	void update();
};
} // namespace Screen
} // namespace og

#endif
