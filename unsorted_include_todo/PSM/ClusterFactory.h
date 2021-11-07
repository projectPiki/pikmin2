#ifndef _PSM_CLUSTERFACTORY_H
#define _PSM_CLUSTERFACTORY_H

namespace PSSystem {
namespace ClusterSe {
	struct Factory {
		virtual void constructPart(); // _00

		// _00 VTBL
	};
} // namespace ClusterSe
} // namespace PSSystem

namespace PSM {
struct ClusterFactory : public Factory {
	virtual void constructPart();             // _00
	virtual void identifyPart(unsigned char); // _04

	// _00 VTBL
};
} // namespace PSM

#endif
