#ifndef _JSTUDIO_JAUDIO_H
#define _JSTUDIO_JAUDIO_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JStudio/data.h"
#include "JStudio/TAdaptor.h"
#include "JStudio/TCreateObject.h"
#include "JStage/TSystem.h"

struct JAIBasic;
struct JAISound;

namespace JStudio_JAudio {
struct TAdaptor_sound : public JStudio::TAdaptor {
	struct TVVOSetValue_ : public JStudio::TVariableValue::TOutput {
		virtual void operator()(f32, JStudio::TAdaptor*) const; // _08
		virtual ~TVVOSetValue_();                               // _0C (weak)

		// _00 = VTBL
		int _04; // _04
		u32 _08; // _08, unknown
		int _0C; // _0C
		int _10; // _10
	};

	TAdaptor_sound(JAIBasic*, const JStage::TSystem*);

	virtual ~TAdaptor_sound();                                                               // _08
	virtual void adaptor_do_prepare(const JStudio::TObject*);                                // _0C
	virtual void adaptor_do_end(const JStudio::TObject*);                                    // _14
	virtual void adaptor_do_update(const JStudio::TObject*, u32);                            // _18
	virtual void adaptor_do_SOUND(JStudio::data::TEOperationData, const void*, u32);         // _20
	virtual void adaptor_do_BEGIN(JStudio::data::TEOperationData, const void*, u32);         // _24
	virtual void adaptor_do_BEGIN_FADE_IN(JStudio::data::TEOperationData, const void*, u32); // _28
	virtual void adaptor_do_END(JStudio::data::TEOperationData, const void*, u32);           // _2C
	virtual void adaptor_do_END_FADE_OUT(JStudio::data::TEOperationData, const void*, u32);  // _30
	virtual void adaptor_do_PARENT(JStudio::data::TEOperationData, const void*, u32);        // _34
	virtual void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, const void*, u32);   // _38
	virtual void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, const void*, u32); // _3C
	virtual void adaptor_do_LOCATED(JStudio::data::TEOperationData, const void*, u32);       // _40

	void beginSound_fadeIn_(u32);
	void endSound_fadeOut_(u32);

	// _00     = VTBL
	// _00-_0C = JStudio::TAdaptor
	JStudio::TVariableValue _0C[10]; // _0C
	JAIBasic* _D4;                   // _D4
	JAISound* _D8;                   // _D8
	u32 _DC;                         // _DC
	int _E0;                         // _E0
	u32 _E4;                         // _E4
	Vec* _E8;                        // _E8, Vector3f* in ghidra, should be Vec* or JGeometry::TVec3* surely
	Vec _EC;                         // _EC, same as above
	JStage::TSystem* m_system;       // _F8
	JStage::TObject* _FC;            // _FC
	u32 _100;                        // _100
	u8 _104;                         // _104
};

struct TCreateObject : public JStudio::TCreateObject {
	virtual ~TCreateObject();                                                                 // _08
	virtual void create(JStudio::TObject**, const JStudio::stb::data::TParse_TBlock_object&); // _0C

	// _00 = VTBL
	u8 _04[0x8];               // _04, unknown
	JAIBasic* _0C;             // _0C
	JStage::TSystem* m_system; // _10
};
} // namespace JStudio_JAudio

#endif
