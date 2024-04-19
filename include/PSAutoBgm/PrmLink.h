#ifndef _PSAUTOBGM_PRMLINK_H
#define _PSAUTOBGM_PRMLINK_H

namespace PSAutoBgm {

template <typename T>
struct PrmLink : public JSULink<T> {
	PrmLink()
	    : JSULink(&_10)
	{
	}

	~PrmLink() { }

	// _00-_10 = JSULink
	T _10; // _10
};
} // namespace PSAutoBgm

#endif
