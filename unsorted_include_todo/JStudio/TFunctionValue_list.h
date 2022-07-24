#ifndef _JSTUDIO_TFUNCTIONVALUE_LIST_H
#define _JSTUDIO_TFUNCTIONVALUE_LIST_H

/*
    __vt__Q27JStudio19TFunctionValue_list:
    .4byte 0
    .4byte 0
    .4byte __dt__Q27JStudio19TFunctionValue_listFv
    .4byte getType__Q27JStudio19TFunctionValue_listCFv
    .4byte getAttributeSet__Q27JStudio19TFunctionValue_listFv
    .4byte initialize__Q27JStudio19TFunctionValue_listFv
    .4byte prepare__Q27JStudio19TFunctionValue_listFv
    .4byte getValue__Q27JStudio19TFunctionValue_listFd
*/

namespace JStudio {
struct TFunctionValue_list {
	virtual ~TFunctionValue_list(); // _08
	virtual void getType() const;   // _0C
	virtual void getAttributeSet(); // _10
	virtual void initialize();      // _14
	virtual void prepare();         // _18
	virtual void getValue(double);  // _1C

	// _00 VTBL
};
} // namespace JStudio

#endif
