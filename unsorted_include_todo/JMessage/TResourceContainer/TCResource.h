#ifndef _JMESSAGE_TRESOURCECONTAINER_TCRESOURCE_H
#define _JMESSAGE_TRESOURCECONTAINER_TCRESOURCE_H

namespace JMessage {
namespace TResourceContainer {
	struct TCResource {
		virtual ~TCResource();               // _00
		virtual void Do_create();            // _04
		virtual void Do_destroy(TResource*); // _08

		// _00 VTBL
	};
} // namespace TResourceContainer
} // namespace JMessage

#endif
