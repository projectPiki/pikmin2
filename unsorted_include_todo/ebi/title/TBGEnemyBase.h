#ifndef _EBI_TITLE_TBGENEMYBASE_H
#define _EBI_TITLE_TBGENEMYBASE_H

/*
    __vt__Q33ebi5title12TBGEnemyBase:
    .4byte 0
    .4byte 0
    .4byte getCreatureType__Q33ebi5title8TObjBaseFv
    .4byte isCalc__Q33ebi5title8TObjBaseFv
*/

namespace ebi {
namespace title {
struct TObjBase {
	virtual void getCreatureType(); // _08 (inline)
	virtual void isCalc();          // _0C (inline)
};
} // namespace title
} // namespace ebi

namespace ebi {
namespace title {
struct TBGEnemyBase : public TObjBase {

	void setArchive(JKRArchive*);
	void start();
	void update();
};
} // namespace title
} // namespace ebi

#endif
