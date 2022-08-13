#ifndef _PSM_KEHAILINK_H
#define _PSM_KEHAILINK_H

#include "JSystem/JSupport/JSUList.h"

namespace PSM {
/**
 * @size{0x14}
 */
struct KehaiLink : public JSULink<KehaiLink> {
	virtual void kehaiOn();  // _08
	virtual void kehaiOff(); // _0C

	// VTBL _10
};
} // namespace PSM

#endif
