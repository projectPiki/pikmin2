#ifndef _PSM_CLUSTERFACTORY_H
#define _PSM_CLUSTERFACTORY_H

/*
    __vt__Q23PSM14ClusterFactory:
    .4byte 0
    .4byte 0
    .4byte constructPart__Q38PSSystem9ClusterSe7FactoryFv
    .4byte identifyPart__Q23PSM14ClusterFactoryFUc
*/

namespace PSSystem {
namespace ClusterSe {
struct Factory {
	virtual void constructPart(); // _08

	// _00 VTBL
};
} // namespace ClusterSe
} // namespace PSSystem

namespace PSM {
struct ClusterFactory : public Factory {
	virtual void identifyPart(unsigned char); // _0C

	// _00 VTBL
};
} // namespace PSM

#endif
