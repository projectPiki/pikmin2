#ifndef _EBI_TITLE_TMAPBASE_H
#define _EBI_TITLE_TMAPBASE_H

/*
    __vt__Q33ebi5title8TMapBase:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q33ebi5title8TObjBaseFv
    .4byte isCalc__Q33ebi5title8TObjBaseFv
*/

namespace ebi {
namespace title {
struct TObjBase {
	virtual void getCreatureType(); // _08
	virtual void isCalc();          // _0C

	// _00 VTBL
};
} // namespace title
} // namespace ebi

namespace ebi {
namespace title {
struct TMapBase : public TObjBase {

	// _00 VTBL
};
} // namespace title
} // namespace ebi

#endif
