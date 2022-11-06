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
struct CaveTitleMsg {
	u32 id;        // _00
	u32 unk;       // _04
	u64 bmg_tag;   // _08
	bool is_fire;  // _10
	bool is_elec;  // _11
	bool is_water; // _12
	bool is_toxic; // _13
	u32 unk2;      // _14
};

struct TitleMessageAnalyzer : public P2JME::Analyzer {
	virtual ~TitleMessageAnalyzer(); // _08 (weak)
	virtual void do_character(int);  // _10

	// _00     = VTBL
	// _00-_38 = P2JME::Analyzer
	int m_currCharIndex;  // _38
	char charBuffer[256]; // _3C
};

struct TitleMsg {
	struct EnumCentering {
	};

	TitleMsg(J2DScreen*, J2DPane*, char*);

	virtual void init();   // _08 (weak)
	virtual void update(); // _0C (weak)
	virtual void start();  // _10 (weak)
	virtual void end();    // _14 (weak)

	void setFontPane(J2DPictureEx*, int);
	void setCentering(EnumCentering);
	void setColor(JUtility::TColor&, JUtility::TColor&);

	// _00 = VTBL
	TitleMessageAnalyzer m_analyzer;     // _04
	J2DPictureEx* m_glyphPanes1[128];    // _140, first half of char buffer?
	J2DPictureEx* m_glyphPanes2[128];    // _340, second half of char buffer?
	uint m_stringLength;                 // _540
	f32 _544;                            // _544
	EnumCentering m_centering;           // _548
	J2DPane* m_pane;                     // _54C
	JUtility::TColor m_glyphPanes1White; // _550
	JUtility::TColor m_glyphPanes2White; // _554
	JUtility::TColor m_glyphPanes2Black; // _558
	u8 _55C[128];                        // _55C
	f32 _5DC[128];                       // _5DC
	f32 _7DC;                            // _7DC
	f32 _7E0;                            // _7E0
};

struct TitleMsgClash : public TitleMsg {
	TitleMsgClash(J2DScreen*, J2DPane*, char*);

	virtual void init();   // _08
	virtual void update(); // _0C
	virtual void end();    // _14

	// _00      = VTBL
	// _00-_7E4 = TitleMsg
	f32 _7E4;                           // _7E4
	f32 _7E8;                           // _7E8
	efx2d::T2DCvnameVs* m_effects[128]; // _7EC
};

struct TitleMsgDrop : public TitleMsg {
	struct Motion {
		f32 _00;      // _00
		f32 _04;      // _04
		Vector2f _08; // _08
		f32 _10;      // _10
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
	f32 _9E4;                               // _9E4
	f32 _9E8;                               // _9E8
	f32 _9EC;                               // _9EC
	f32 _9F0;                               // _9F0
	f32 _9F4;                               // _9F4
	efx2d::T2DCvnameChal* m_effects[128];   // _9F8
};
} // namespace newScreen
} // namespace og

#endif
