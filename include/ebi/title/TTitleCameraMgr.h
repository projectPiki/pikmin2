#ifndef _EBI_TITLE_TTITLECAMERAMGR_H
#define _EBI_TITLE_TTITLECAMERAMGR_H

#include "types.h"
#include "Camera.h"

namespace ebi {
namespace title {
	// Is Camera really parent class ?
	struct TTitleCameraMgr : public Camera {
		float float174; // _174
		float float178; // _178
		float float17C; // _17C
		float float180; // _180
		float float184; // _184
		float float188; // _188
		float float18C; // _18C
		float float190; // _190
		float float194; // _194
		u8 gap198[36];  // _198
		float float1BC; // _1BC
		u8 gap1C0[36];  // _1C0
		float float1E4; // _1E4

		void update();
	};
} // namespace title
} // namespace ebi

#endif
