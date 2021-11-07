#ifndef _EFX2D_FILESELECT_T2DFILEDECIDE_H
#define _EFX2D_FILESELECT_T2DFILEDECIDE_H

namespace efx2d {
struct TSimple2 {
	virtual void create(Arg*); // _00
	virtual void kill();       // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
struct TBase {
	virtual void _00() = 0;               // _00
	virtual void _04() = 0;               // _04
	virtual void _08() = 0;               // _08
	virtual void setGroup(unsigned char); // _0C

	// _00 VTBL
};
} // namespace efx2d

namespace efx2d {
namespace FileSelect {
	struct T2DFiledecide : public TSimple2, public TBase {
		virtual void create(Arg*);            // _00
		virtual void kill();                  // _04
		virtual void fade();                  // _08
		virtual void setGroup(unsigned char); // _0C

		// _00 VTBL
	};
} // namespace FileSelect
} // namespace efx2d

#endif
