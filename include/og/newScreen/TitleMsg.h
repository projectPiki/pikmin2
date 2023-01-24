#ifndef _OG_NEWSCREEN_TITLEMSG_H
#define _OG_NEWSCREEN_TITLEMSG_H

#include "og/Screen/ScaleMgr.h"
#include "JSystem/J2D/J2DPane.h"
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

	virtual ~TitleMessageAnalyzer(); // _08 (weak)
	virtual void do_character(int);  // _10

	// unused/inline
	void set2ByteString(char*, int);

	// _00     = VTBL
	// _00-_38 = P2JME::Analyzer
	int m_currCharIndex;    // _38
	char m_charBuffer[256]; // _3C
};

struct TitleMsg {
	enum EnumCentering { ECM_0, ECM_1, ECM_2 };

	TitleMsg();
	TitleMsg(J2DScreen*, J2DPane*, char*);

	virtual void init() { }   // _08 (weak)
	virtual void update() { } // _0C (weak)
	virtual void start();     // _10 (weak)
	virtual void end() { }    // _14 (weak)

	void setFontPane(J2DPictureEx*, int);
	void setCentering(EnumCentering);
	void setColor(JUtility::TColor&, JUtility::TColor&);

	// unused/inline
	void drawMsgArea(J2DGrafContext&);

	// _00 = VTBL
	TitleMessageAnalyzer m_analyzer; // _04
	J2DPictureEx* m_panes1[128];     // _140
	J2DPictureEx* m_panes2[128];     // _340
	u32 m_stringLength;              // _540
	f32 m_currXpos;                  // _544
	EnumCentering m_centering;       // _548
	J2DPane* m_rootPane;             // _54C
	JUtility::TColor m_panes1White;  // _550
	JUtility::TColor m_panes2White;  // _554
	JUtility::TColor m_panes2Black;  // _558
	u8 m_dropFlags[128];             // _55C
	f32 m_timers[128];               // _5DC
	f32 m_yOffset;                   // _7DC
	f32 m_xScale;                    // _7E0
};

struct TitleMsgClash : public TitleMsg {
	TitleMsgClash(J2DScreen*, J2DPane*, char*);

	virtual void init();   // _08
	virtual void update(); // _0C
	virtual void end();    // _14

	// _00      = VTBL
	// _00-_7E4 = TitleMsg
	f32 m_scaleMod;                     // _7E4
	f32 m_currScale;                    // _7E8
	efx2d::T2DCvnameVs* m_effects[128]; // _7EC
};

struct TitleMsgDrop : public TitleMsg {
	struct Motion {
		Motion();
		~Motion();
		f32 m_yOffset;  // _00
		f32 m_randTime; // _04
		Vector2f m_pos; // _08
		f32 m_timer;    // _10
	};

	TitleMsgDrop(J2DScreen*, J2DPane*, char*);

	virtual void init();   // _08
	virtual void update(); // _0C
	virtual void end();    // _14

	// _00      = VTBL
	// _00-_7E4 = TitleMsg
	Motion m_motions[128];                // _7E4
	efx2d::T2DCvnameCave* m_effects[128]; // _11E4
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
	og::Screen::ScaleMgr* m_scaleMgrs[128]; // _7E4
	f32 m_delayTimer;                       // _9E4
	f32 m_scaleup1;                         // _9E8
	f32 m_scaleup2;                         // _9EC
	f32 m_scaleup3;                         // _9F0
	f32 m_scaleup4;                         // _9F4
	efx2d::T2DCvnameChal* m_effects[128];   // _9F8
};
} // namespace newScreen
} // namespace og

#endif
