#ifndef _PSAUTOBGM_PRMLINK_H
#define _PSAUTOBGM_PRMLINK_H

namespace PSAutoBgm {

template <typename T>
struct PrmLink : public JSUPtrLink {
	PrmLink()
	    : JSUPtrLink(_10)
	{
	}

	~PrmLink() { }

	int _10;
};
} // namespace PSAutoBgm

#endif
