#ifndef _JMESSAGE_TPARSE_COLOR_H
#define _JMESSAGE_TPARSE_COLOR_H

/*
    __vt__Q28JMessage12TParse_color:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage12TParse_colorFv
    .4byte parseHeader_next__Q28JMessage12TParse_colorFPPCvPUlUl
    .4byte parseBlock_next__Q28JMessage12TParse_colorFPPCvPUlUl
*/

namespace JMessage {
struct TParse_color {
	virtual ~TParse_color();                                                    // _08
	virtual void parseHeader_next(const void**, unsigned long*, unsigned long); // _0C
	virtual void parseBlock_next(const void**, unsigned long*, unsigned long);  // _10

	TParse_color(JMessage::TResourceContainer*);
};
} // namespace JMessage

#endif
