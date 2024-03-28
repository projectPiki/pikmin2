#ifndef _JSTUDIO_DATA_H
#define _JSTUDIO_DATA_H

#include "types.h"

namespace JStudio {
namespace data {

extern const char ga8cSignature[8];

enum TEOperationData {
	TEOD_Unknown_00 = 0,
	TEOD_Unknown_01,
	TEOD_Unknown_02,
	TEOD_Unknown_03,
	TEOD_Unknown_04,
	TEOD_Unknown_05,
	TEOD_Unknown_06,
	TEOD_Unknown_07,
	TEOD_Unknown_08,
	TEOD_Unknown_09,
	TEOD_Unknown_0A,
	TEOD_Unknown_0B,
	TEOD_Unknown_0C,
	TEOD_Unknown_0D,
	TEOD_Unknown_0E,
	TEOD_Unknown_0F,
	TEOD_Unknown_10,
	TEOD_Unknown_11,
	TEOD_Unknown_12,
	TEOD_Unknown_13,
	TEOD_Unknown_14,
	TEOD_Unknown_15,
	TEOD_Unknown_16,
	TEOD_Unknown_17,
	TEOD_Unknown_18,
	TEOD_Unknown_19,

};

/** Values are made up. */
enum TE32Block {
	TE32B_ACTOR = 1000,
	TE32B_AMBIENT_LIGHT,
	TE32B_CAMERA,
	TE32B_FOG,
	TE32B_LIGHT,
	TE32B_MESSAGE,
	TE32B_PARTICLE,
	TE32B_SOUND,
};
} // namespace data
} // namespace JStudio

#endif
