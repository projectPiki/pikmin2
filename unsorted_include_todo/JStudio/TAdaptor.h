#ifndef _JSTUDIO_TADAPTOR_H
#define _JSTUDIO_TADAPTOR_H

/*
    __vt__Q27JStudio8TAdaptor:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
*/

namespace JStudio {
struct TAdaptor {
	virtual void _08() = 0;                                                                               // _08
	virtual void adaptor_do_prepare(const TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const TObject*);                                                        // _10
	virtual void adaptor_do_end(const TObject*);                                                          // _14
	virtual void adaptor_do_update(const TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const TObject*, const void*, unsigned long, const void*, unsigned long); // _1C

	void adaptor_setVariableValue(JStudio::TObject*, unsigned long, JStudio::data::TEOperationData, const void*, unsigned long);
	void adaptor_setVariableValue_immediate(const JStudio::TAdaptor::TSetVariableValue_immediate*);
	void adaptor_setVariableValue_Vec(const unsigned long*, const Vec&);
	void adaptor_getVariableValue_Vec(Vec*, const unsigned long*) const;
	void adaptor_setVariableValue_GXColor(const unsigned long*, const _GXColor&);
	void adaptor_getVariableValue_GXColor(_GXColor*, const unsigned long*) const;
	void adaptor_setVariableValue_VOID_(JStudio::TAdaptor*, JStudio::TObject*, unsigned long, const void*, unsigned long);
	void adaptor_setVariableValue_IMMEDIATE_(JStudio::TAdaptor*, JStudio::TObject*, unsigned long, const void*, unsigned long);
	void adaptor_setVariableValue_TIME_(JStudio::TAdaptor*, JStudio::TObject*, unsigned long, const void*, unsigned long);
	void adaptor_setVariableValue_FVR_NAME_(JStudio::TAdaptor*, JStudio::TObject*, unsigned long, const void*, unsigned long);
	void adaptor_setVariableValue_FVR_INDEX_(JStudio::TAdaptor*, JStudio::TObject*, unsigned long, const void*, unsigned long);
};
} // namespace JStudio

#endif
