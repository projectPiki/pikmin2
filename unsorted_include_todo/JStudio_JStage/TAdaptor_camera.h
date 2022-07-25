#ifndef _JSTUDIO_JSTAGE_TADAPTOR_CAMERA_H
#define _JSTUDIO_JSTAGE_TADAPTOR_CAMERA_H

/*
    __vt__Q214JStudio_JStage15TAdaptor_camera:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214JStudio_JStage15TAdaptor_cameraFv
    .4byte adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObject
    .4byte adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObject
    .4byte adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObject
    .4byte adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObjectUl
    .4byte adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio7TObjectPCvUlPCvUl
    .4byte adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JStudio_JStage {
struct TAdaptor_camera {
	virtual ~TAdaptor_camera();                                                                                    // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                                      // _0C
	virtual void adaptor_do_begin(const JStudio::TObject*);                                                        // _10
	virtual void adaptor_do_end(const JStudio::TObject*);                                                          // _14
	virtual void adaptor_do_update(const JStudio::TObject*, unsigned long);                                        // _18
	virtual void adaptor_do_data(const JStudio::TObject*, const void*, unsigned long, const void*, unsigned long); // _1C
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, unsigned long);                    // _20
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long);               // _24
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);             // _28
	virtual void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, const void*, unsigned long);           // _2C
	virtual void adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData, const void*, unsigned long);             // _30
	virtual void adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData, const void*, unsigned long);        // _34
	virtual void adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, unsigned long);      // _38
	virtual void _3C() = 0;                                                                                        // _3C
	virtual void _40() = 0;                                                                                        // _40
	virtual void _44() = 0;                                                                                        // _44
	virtual void _48() = 0;                                                                                        // _48
	virtual void _4C() = 0;                                                                                        // _4C
	virtual void _50() = 0;                                                                                        // _50
	virtual void _54() = 0;                                                                                        // _54
	virtual void _58() = 0;                                                                                        // _58
	virtual void _5C() = 0;                                                                                        // _5C
	virtual void _60() = 0;                                                                                        // _60
	virtual void _64() = 0;                                                                                        // _64
	virtual void _68() = 0;                                                                                        // _68
	virtual void _6C() = 0;                                                                                        // _6C
	virtual void _70() = 0;                                                                                        // _70
	virtual void _74() = 0;                                                                                        // _74

	TAdaptor_camera(const JStage::TSystem*, JStage::TCamera*);
	void setJSG_position_(const JStudio::TControl*);
	void getJSG_position_(const JStudio::TControl*);
	void setJSG_targetPosition_(const JStudio::TControl*);
	void getJSG_targetPosition_(const JStudio::TControl*);
};
} // namespace JStudio_JStage

#endif
