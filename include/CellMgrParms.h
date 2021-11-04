#ifndef _CELLMGRPARMS_H
#define _CELLMGRPARMS_H

#include "Parameters.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "BaseParm.h"

struct CellMgrParms : public Parameters, JKRDisposer {
private:
	CellMgrParms();
public:
	virtual ~CellMgrParms();

	static CellMgrParms* getInstance();
	void globalInstance();

	// 00-0C: Parameters
	// 0C-24: JKRDisposer
	// JKRDisposer m_disposer;
	Parm<bool> m_p000; // _24
	Parm<bool> m_p001; // _40
	Parm<bool> m_p002; // _5C  /* G-Half */
	Parm<bool> m_p003; // _78  /* UpdateMgr */
	// __vt  // _94
	void*      m_end;  // _98

	static CellMgrParms* mInstance;
};

#endif
