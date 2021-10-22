#ifndef _OG_SCREEN_ANGLEMGR_H
#define _OG_SCREEN_ANGLEMGR_H

namespace og {
namespace Screen {
	struct AngleMgr {
		AngleMgr();
		void init(float, float, float);
		void chase(float, float);
		void reverseSpeed(float);
		double calc(void);

		float _00;
		float _04;
		float _08;
		float _0C;
		float _10;
		int _14;
	};
} // namespace Screen
} // namespace og

#endif
