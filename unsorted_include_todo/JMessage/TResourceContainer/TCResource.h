#ifndef _JMESSAGE_TRESOURCECONTAINER_TCRESOURCE_H
#define _JMESSAGE_TRESOURCECONTAINER_TCRESOURCE_H

/*
    __vt__Q38JMessage18TResourceContainer10TCResource:
    .4byte 0
    .4byte 0
    .4byte __dt__Q38JMessage18TResourceContainer10TCResourceFv
    .4byte Do_create__Q38JMessage18TResourceContainer10TCResourceFv
    .4byte Do_destroy__Q38JMessage18TResourceContainer10TCResourceFPQ28JMessage9TResource
*/

namespace JMessage {
namespace TResourceContainer {
struct TCResource {
	virtual ~TCResource();               // _08
	virtual void Do_create();            // _0C
	virtual void Do_destroy(TResource*); // _10

	// _00 VTBL
};
} // namespace TResourceContainer
} // namespace JMessage

#endif
