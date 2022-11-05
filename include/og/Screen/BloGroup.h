#ifndef _OG_SCREEN_BLOGROUP_H
#define _OG_SCREEN_BLOGROUP_H

#include "P2DScreen.h"

namespace og {
namespace Screen {

/**
 * @size{0x10}
 */
struct BloGroup {
	BloGroup(u16);

	~BloGroup(); // unused/inlined

	void addBlo(char*, P2DScreen::Mgr_tuning*, u32, JKRArchive*);
	void scale(f32);
	void rotate(f32, f32, J2DRotateAxis, f32);
	void update();
	void draw(J2DPerspGraph*);

	// unused/inlined
	void setScissor(int, f32, f32, f32, f32);
	void translate(f32, f32);
	void setAlpha(u8);
	void animation();

	P2DScreen::Mgr_tuning** _00; // _00
	void* _04;                   // _04, unknown
	u16 _08;                     // _08
	u16 _0A;                     // _0A, number of ptrs in _00
};
} // namespace Screen
} // namespace og

#endif
