#ifndef _OG_NEWSCREEN_TITLEMSG_H
#define _OG_NEWSCREEN_TITLEMSG_H

#include "og/Screen/ScaleMgr.h"
#include "JSystem/J2D/J2DPicture.h"
#include "P2JME/Analyzer.h"
#include "Vector2.h"

namespace efx2d {
struct T2DCvnameVs;
struct T2DCvnameCave;
struct T2DCvnameChal;
} // namespace efx2d

namespace og {
namespace newScreen {
struct CaveTitleMsgEntry {
	u32 id;        // _00
	u32 _04;       // _04
	u64 bmg_tag;   // _08
	bool is_fire;  // _10
	bool is_elec;  // _11
	bool is_water; // _12
	bool is_toxic; // _13
	u32 _14;       // _14
};

struct TitleMessageAnalyzer : public ::P2JME::Analyzer {
	TitleMessageAnalyzer(const JMessage::TReference* ref);

	virtual ~TitleMessageAnalyzer() { } // _08 (weak)
	virtual void do_character(int);     // _10

	// unused/inline
	void set2ByteString(char*, int);

	// _00     = VTBL
	// _00-_38 = P2JME::Analyzer
	int mCurrCharIndex;    // _38
	char mCharBuffer[256]; // _3C
};

struct TitleMsg {
	enum EnumCentering { ECM_0, ECM_1, ECM_2 };

	TitleMsg();
	TitleMsg(J2DScreen*, J2DPane*, char*);

	virtual void init() { }   // _08 (weak)
	virtual void update() { } // _0C (weak)
	virtual void start() { }  // _10 (weak)
	virtual void end() { }    // _14 (weak)

	void setFontPane(J2DPictureEx*, int);
	void setCentering(EnumCentering);
	void setColor(JUtility::TColor&, JUtility::TColor&);

	// unused/inline
	void drawMsgArea(J2DGrafContext&);

	// _00 = VTBL
	TitleMessageAnalyzer mAnalyzer; // _04
	J2DPictureEx* mPanes1[128];     // _140
	J2DPictureEx* mPanes2[128];     // _340
	u32 mStringLength;              // _540
	f32 mCurrXpos;                  // _544
	EnumCentering mCentering;       // _548
	J2DPane* mRootPane;             // _54C
	JUtility::TColor mPanes1White;  // _550
	JUtility::TColor mPanes2White;  // _554
	JUtility::TColor mPanes2Black;  // _558
	u8 mDropFlags[128];             // _55C
	f32 mTimers[128];               // _5DC
	f32 mYOffset;                   // _7DC
	f32 mXScale;                    // _7E0
};

struct TitleMsgClash : public TitleMsg {
	TitleMsgClash(J2DScreen*, J2DPane*, char*);

	virtual void init();   // _08
	virtual void update(); // _0C
	virtual void end();    // _14

	// _00      = VTBL
	// _00-_7E4 = TitleMsg
	f32 mScaleMod;                     // _7E4
	f32 mCurrScale;                    // _7E8
	efx2d::T2DCvnameVs* mEffects[128]; // _7EC
};

struct TitleMsgDrop : public TitleMsg {
	struct Motion {
		Motion()
		{
			mYOffset  = 100.0f;
			mRandTime = 0.0f;
			mPos.y    = 0.0f;
			mTimer    = 0.0f;
		}
		~Motion() { }

		f32 mYOffset;  // _00
		f32 mRandTime; // _04
		Vector2f mPos; // _08
		f32 mTimer;    // _10
	};

	TitleMsgDrop(J2DScreen*, J2DPane*, char*);

	virtual void init();   // _08
	virtual void update(); // _0C
	virtual void end();    // _14

	// _00      = VTBL
	// _00-_7E4 = TitleMsg
	Motion mMotions[128];                // _7E4
	efx2d::T2DCvnameCave* mEffects[128]; // _11E4
};

struct TitleMsgWave : public TitleMsg {
	TitleMsgWave(J2DScreen*, J2DPane*, char*);

	virtual void init();                       // _08
	virtual void update();                     // _0C
	virtual void start();                      // _10
	virtual void end();                        // _14
	virtual void setParam(f32, f32, f32, f32); // _18

	// _00      = VTBL
	// _00-_7E4 = TitleMsg
	og::Screen::ScaleMgr* mScaleMgrs[128]; // _7E4
	f32 mDelayTimer;                       // _9E4
	f32 mScaleup1;                         // _9E8
	f32 mScaleup2;                         // _9EC
	f32 mScaleup3;                         // _9F0
	f32 mScaleup4;                         // _9F4
	efx2d::T2DCvnameChal* mEffects[128];   // _9F8
};
} // namespace newScreen
} // namespace og

#endif
