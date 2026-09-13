#ifndef _EFX2D_FILESELECT_INL
#define _EFX2D_FILESELECT_INL

// these need to be split out from efx2d/FileSelect.h for sym on weak function ordering

namespace efx2d {
namespace FileSelect {
inline const char* ArgFilecopy::getName()
{
	return "ArgFilecopy";
}

inline T2DFilesel::~T2DFilesel()
{
}
} // namespace FileSelect
} // namespace efx2d

#endif
