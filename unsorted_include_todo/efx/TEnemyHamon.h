#ifndef _EFX_TENEMYHAMON_H
#define _EFX_TENEMYHAMON_H

/*
    __vt__Q23efx11TEnemyHamon:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx11TEnemyHamonFPQ23efx3Arg
    .4byte forceKill__Q23efx11TEnemyHamonFv
    .4byte fade__Q23efx11TEnemyHamonFv
*/

namespace efx {
struct TEnemyHamon {
	virtual void create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)

	void update(Vector3<float>&);
	void getLimitDepth_();
};
} // namespace efx

#endif
