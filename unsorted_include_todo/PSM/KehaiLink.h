#ifndef _PSM_KEHAILINK_H
#define _PSM_KEHAILINK_H

/*
    __vt__Q23PSM9KehaiLink:
    .4byte 0
    .4byte 0
    .4byte kehaiOn__Q23PSM9KehaiLinkFv
    .4byte kehaiOff__Q23PSM9KehaiLinkFv
*/

namespace PSM {
struct KehaiLink {
	virtual void kehaiOn();  // _08
	virtual void kehaiOff(); // _0C
};
} // namespace PSM

#endif
