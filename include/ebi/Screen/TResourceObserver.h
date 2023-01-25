#ifndef _EBI_SCREEN_TRESOURCEOBSERVER_H
#define _EBI_SCREEN_TRESOURCEOBSERVER_H

namespace ebi {
namespace Screen {

struct TMemoryCard;

struct TResourceObserver : public JKRDisposer {
	TResourceObserver(TMemoryCard*);
	virtual ~TResourceObserver(); // _08

	// _00 = VTBL
	// _00-_18 = JKRDisposer
	TMemoryCard* mOwner; // _18
};
} // namespace Screen
} // namespace ebi

#endif
