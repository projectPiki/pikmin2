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
		virtual void start()    = 0; // _00
		virtual void moveAnim() = 0; // _04

		void init(JKRArchive*, char*);
		void setArea(float, float);
		void setAllArea();
		void start(float);
		bool update();
		bool updateSub();

		// VTBL _00
		/* set to 1 by AnimScreen(), 2 by AnimPane() */
		int _04;              // _04
		bool _08;             // _08
		float _0C;            // _0C
		u8 _10;               // _10
		u8 _11;            // _11 /* alpha of pane/screen? */
		u8 _12;               // _12
		J2DAnmBase* m_anm;    // _14
		float m_frame;        // _18
		float m_lastFrame;    // _1C
		float _20;            // _20 /* speed */
		float _24;            // _24
		float _28;            // _28
		float _2C;            // _2C
		float _30;            // _30
		float _34;            // _34
		bool _38;             // _38
		bool _39;             // _39
		char* m_resourcePath; // _3C
	};

	struct AnimScreen : public AnimBaseBase {
		AnimScreen();
		virtual void start();    // _00
		virtual void moveAnim(); // _04

		void init(JKRArchive*, J2DScreen*, char*);

		J2DScreen* m_screen; // _40
	};

	struct AnimPane : public AnimBaseBase {
		AnimPane();
		virtual void start();    // _00
		virtual void moveAnim(); // _04

		void init(JKRArchive*, J2DScreen*, u64, char*);

		J2DPane* m_pane;
	};

	struct AnimGroup {
		AnimGroup(int);
		float getFrame();
		float getLastFrame();
		void reservAnim(float, float, float);
		void setAllArea();
		void setAlpha(u8);
		void setAnim(AnimBaseBase*);
		void setArea(float, float);
		void setFrame(float);
		void setRepeat(bool);
		void setSpeed(float);
		void start();
		bool update();

		AnimBaseBase** m_animPanes; // _00
		int m_paneCount;            // _04
		int m_paneLimit;            // _08
		u8 _0C;                     // _0C
		float _10;                  // _10
		float _14;                  // _14
		float _18;                  // _18
	};

	struct AnimList {
		AnimList(u16);
		void addAnim(AnimScreen*);
		void nextAnim(float);
		void start();
		void update();
	};
} // namespace Screen
} // namespace og

#endif
