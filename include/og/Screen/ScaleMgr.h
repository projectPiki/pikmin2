#ifndef _OG_SCREEN_SCALEMGR_H
#define _OG_SCREEN_SCALEMGR_H

namespace og {
namespace Screen {
	struct ScaleMgr {
		enum State {
			SCM_Unknown_0 = 0,
			SCM_Growing,
			SCM_Shrinking,
			SCM_OtherGrowingMaybe,

			// Force the compiler to use an int to represent the enum
			DONT_USE_1 = -1,
			DONT_USE_2 = 0xFFFFFFFF
		};

		~ScaleMgr() { }
		ScaleMgr();
		void up();
		void down();
		void up(float, float, float, float);
		void down(float, float, float);
		void setParam(float, float, float);
		float calc();

		State m_state;             // _00
		float m_elapsedSeconds;    // _04
		float m_scale;             // _08
		float _0C;                 // _0C
		float m_periodModifier;    // _10 sin(elapsedSeconds*periodModifier).
		                           // Larger = shorter periods.
		float m_durationInSeconds; // _14
		float _18;                 // _18
	};
} // namespace Screen
} // namespace og

#endif
