#ifndef _JSYSTEM_JAD_JADSTR_H
#define _JSYSTEM_JAD_JADSTR_H

#include "types.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JSupport/JSUStream.h"

namespace JADUtility {
struct DataMgrBase;

/**
 * @size = 0x3C
 */
struct StrPrm : public PrmHio<char*> {
	typedef void (*Callback)(void*, u32);
	StrPrm()
	    : PrmHio<char*>()
	    , _30(0)
	    , _34(0)
	    , _38(0)
	{
	}
	virtual ~StrPrm() { } // _08 (weak)
	virtual void save(JSUMemoryOutputStream& output)
	{
		if (_30 > 0) {
			output.write(mValue, _30);
		} else {
			output.write(mValue);
		}
		PrmBase::save(output);
	} // _0C (weak)
	virtual void load(JSUMemoryInputStream& input)
	{
		if (_30 > 0) {
			input.read(mValue, _30);
		} else {
			input.read(mValue);
		}
		PrmBase::load(input);
		if (_34 != nullptr && _38) {
			_34(this, _38);
		}
	} // _10 (weak)

	s32 _30;
	Callback _34;
	u32 _38;
};

/**
 * @size = 0x3C
 */
struct StrEditBox : public StrPrm {
	virtual ~StrEditBox(); // _08 (weak)
};

} // namespace JADUtility

#endif
