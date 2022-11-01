#ifndef _EBI_TITLE_TCOORDMGR_H
#define _EBI_TITLE_TCOORDMGR_H

#include "types.h"
#include "CNode.h"
#include "Vector2.h"
#include "Parameters.h"
#include "BaseParm.h"

struct JKRArchive;

namespace ebi {
namespace title {
struct TCoordMgr : public CNode {
	struct LoadParameters : public Parameters {
		inline LoadParameters();

		Parm<f32> m_tga0; // _FD8
		Parm<f32> m_tga1; // _1000
		Parm<f32> m_tga2; // _1028
		Parm<f32> m_tga3; // _1050
	};

	TCoordMgr();

	virtual ~TCoordMgr(); // _08 (weak)

	void copyCoordinate(Vector2f*);
	void readCoordinate(JKRArchive*, char*);
	void readCoordinate(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	u8 _18[0x14];               // _18, unknown
	Vector2f m_coords[500];     // _2C
	LoadParameters m_loadParms; // _FCC
};
} // namespace title
} // namespace ebi

#endif
