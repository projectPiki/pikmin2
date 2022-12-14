#ifndef _CELLMGRPARMS_H
#define _CELLMGRPARMS_H

#include "Parameters.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "BaseParm.h"

struct _CellParms {
	inline _CellParms(Parameters* parameters)
	    : m_p000(parameters, 'p000', "バッファを使う", false, false, true)  // 'use a buffer'
	    , m_p001(parameters, 'p001', "マジックナンバー", true, false, true) // 'magic number'
	    , m_p002(parameters, 'p002', "G-Half", false, false, true)
	    , m_p003(parameters, 'p003', "UpdateMgr", false, false, true)
	{
	}

	Parm<bool> m_p000; // _24, use a buffer?
	Parm<bool> m_p001; // _40, magic number?
	Parm<bool> m_p002; // _5C, G-Half?
	Parm<bool> m_p003; // _78, UpdateMgr?
};

struct CellMgrParms : public Parameters, public JKRDisposer {
	CellMgrParms();

	void globalInstance();

	inline static CellMgrParms* getInstance() { return mInstance; }

	static CellMgrParms* mInstance;

	// _00-_0C = Parameters
	// _0C-_24 = JKRDisposer
	// _94     = VTBL
	_CellParms m_cellParms; // _24

	virtual ~CellMgrParms(); // _08
};

#endif
