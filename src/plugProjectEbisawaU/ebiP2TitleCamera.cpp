#include "ebi/title/TTitleCameraMgr.h"

extern float lbl_8051F890; // 0.0
extern float lbl_8051F894; // -1.0
extern float lbl_8051F898; // 1.0

namespace ebi {
namespace title {
	/*
	 * --INFO--
	 * Address:	803C1EBC
	 * Size:	000074
	 */
	// TODO: match
	// void TTitleCameraMgr::update()
	// {
	// 	float178 += float1BC;
	// 	float18C = lbl_8051F890;
	// 	float190 = lbl_8051F890;
	// 	float194 = lbl_8051F894;
	// 	float180 = float174;
	// 	float184 = float178;
	// 	float188 = float17C;
	// 	float184 -= lbl_8051F898;
	// 	float28 = float1E4;
	// 	Camera::update();
	// }

} // namespace title
} // namespace ebi

/*
 * --INFO--
 * Address:	803C1F30
 * Size:	000028
 */
// // clang-format off
// asm void __sinit_ebiP2TitleCamera_cpp(void)
// {
// 	nofralloc
// 	  lis       r4, 0x8051
// 	  li        r0, -0x1
// 	  lfs       f0, 0x48B0(r4)
// 	  lis       r3, 0x804E
// 	  stw       r0, -0x65C0(r13)
// 	  stfsu     f0, 0x79C8(r3)
// 	  stfs      f0, -0x65BC(r13)
// 	  stfs      f0, 0x4(r3)
// 	  stfs      f0, 0x8(r3)
// 	  blr
// }
// // clang-format on
