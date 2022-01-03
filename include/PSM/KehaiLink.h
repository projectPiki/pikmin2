#ifndef _PSM_KEHAILINK_H
#define _PSM_KEHAILINK_H

#include "JSystem/JSU/JSUList.h"

namespace PSM {
struct KehaiLink : public JSUPtrLink {
	virtual void kehaiOn();  // _00
	virtual void kehaiOff(); // _04

	// VTBL _10
};
} // namespace PSM

#endif
