#ifndef _PSM_KEHAILINK_H
#define _PSM_KEHAILINK_H

namespace PSM {
struct KehaiLink {
	virtual void kehaiOn();  // _00
	virtual void kehaiOff(); // _04

	// _00 VTBL
};
} // namespace PSM

#endif
