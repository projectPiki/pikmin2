#ifndef _OG_SCREEN_ANGLEMGR_H
#define _OG_SCREEN_ANGLEMGR_H
#define TAU     6.2831855f
#define PI      3.1415927f
#define HPI     1.5707964f
#define NEG_HPI -1.5707964f
namespace og {
namespace Screen {
	struct AngleMgr {
		AngleMgr();
		void init(float, float, float);
		void chase(float, float);
		void reverseSpeed(float);
		float calc(void);

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
