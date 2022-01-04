#ifndef _EBI_SCREEN_TNINTENDOLOGO_H
#define _EBI_SCREEN_TNINTENDOLOGO_H

#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
struct TNintendoLogo : public TScreenBase {
	virtual void doSetArchive(JKRArchive*); // _1C
	virtual bool doUpdateStateWait();       // _34
	virtual void doDraw();                  // _3C
	virtual char* getName();                // _40

	// _00 VTBL
};
} // namespace Screen
} // namespace ebi

#endif
