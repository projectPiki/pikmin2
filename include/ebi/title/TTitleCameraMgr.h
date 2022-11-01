#ifndef _EBI_TITLE_TTITLECAMERAMGR_H
#define _EBI_TITLE_TTITLECAMERAMGR_H

#include "types.h"
#include "Camera.h"
#include "Parameters.h"
#include "BaseParm.h"

namespace ebi {
namespace title {
struct TTitleCameraMgr : public LookAtCamera {
	struct Parms : public Parameters {
		inline Parms();

		Parm<f32> m_cam1;
		Parm<f32> m_cam2;
	};

	virtual ~TTitleCameraMgr(); // _08 (weak)
	virtual void read(Stream&); // _38 (weak)

	void update();

	Parms m_parms;
};
} // namespace title
} // namespace ebi

#endif
