#ifndef _JASDISPOSER_H
#define _JASDISPOSER_H

/*
    __vt__11JASDisposer:
    .4byte 0
    .4byte 0
    .4byte onDispose__11JASDisposerFv
*/

struct JASDisposer {
	virtual void onDispose(); // _08 (inline)
};

#endif
