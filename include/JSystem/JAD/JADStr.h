#ifndef _JSYSTEM_JAD_JADSTR_H
#define _JSYSTEM_JAD_JADSTR_H

#include "types.h"
#include "JSystem/JAD/JADUtility.h"
#include "JSystem/JSupport/JSUStream.h"

namespace JADUtility {

/**
 * @size = 0x30
 */
struct StrPrm : public PrmHio<char*> {
	virtual ~StrPrm();                         // _08 (weak)
	virtual void save(JSUMemoryOutputStream&); // _0C (weak)
	virtual void load(JSUMemoryInputStream&);  // _10 (weak)
};

/**
 * @size = 0x30
 */
struct StrEditBox : public StrPrm {
	virtual ~StrEditBox(); // _08 (weak)
};

} // namespace JADUtility

#endif
