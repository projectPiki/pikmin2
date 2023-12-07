#ifndef _JSYSTEM_JAD_JADSTR_H
#define _JSYSTEM_JAD_JADSTR_H

#include "types.h"
#include "JSystem/JAudio/JAD/JADUtility.h"
#include "JSystem/JSupport/JSUStream.h"
#include "stl/string.h"

namespace JADUtility {
struct DataMgrBase;

/**
 * @size = 0x3C
 */
struct StrPrm : public PrmHio<char*> {
	typedef void (*Callback)(void*, u32);

	StrPrm(u32 p1)
	    : PrmHio<char*>()
	    , _30(p1)
	    , _34(nullptr)
	    , _38(0)
	{
	}

	virtual ~StrPrm() { }                            // _08 (weak)
	virtual void save(JSUMemoryOutputStream& output) // _0C (weak)
	{
		if (_30 > 0) {
			output.write(mValue, _30);
		} else {
			output.write(mValue);
		}
		PrmBase::save(output);
	}
	virtual void load(JSUMemoryInputStream& input) // _10 (weak)
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
	}

	// _00      = VTABLE
	// _04-_30  = Prm
	s32 _30;      // _30
	Callback _34; // _34
	u32 _38;      // _38
};

/**
 * @size = 0x3C
 */
struct StrEditBox : public StrPrm {
	StrEditBox()
	    : StrPrm(8)
	{
		mValue = new char[8];
		strcpy(mValue, "\0");
	}

	virtual ~StrEditBox() // _08 (weak)
	{
		delete[] mValue;
	}
};

} // namespace JADUtility

#endif
