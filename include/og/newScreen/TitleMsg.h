#ifndef _OG_NEWSCREEN_TITLEMSG_H
#define _OG_NEWSCREEN_TITLEMSG_H

namespace og {
namespace newScreen {
struct TitleMsg {
	virtual void init();   // _00
	virtual void update(); // _04
	virtual void start();  // _08
	virtual void end();    // _0C

	// _00 VTBL
	// TODO: non-virtual functions and data members
};

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
} // namespace newScreen
} // namespace og

#endif
