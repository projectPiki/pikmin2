#ifndef _EBI_TITLE_TTITLECAMERAMGR_H
#define _EBI_TITLE_TTITLECAMERAMGR_H

#include "types.h"
#include "Camera.h"
#include "Parameters.h"
#include "BaseParm.h"

namespace ebi {
namespace title {
	// Is Camera really parent class ?
	struct TTitleCameraMgr : public LookAtCamera {
		struct Parms : public Parameters {
			inline Parms();
			Parm<float> m_cam1;
			Parm<float> m_cam2;
			void* end;
		};

		void update();

		Parms m_parms;
	};
} // namespace title
} // namespace ebi

#endif
