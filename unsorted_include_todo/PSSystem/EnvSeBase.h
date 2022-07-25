#ifndef _PSSYSTEM_ENVSEBASE_H
#define _PSSYSTEM_ENVSEBASE_H

/*
    __vt__Q28PSSystem9EnvSeBase:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem9EnvSeBaseFv
    .4byte play__Q28PSSystem9EnvSeBaseFv
    .4byte getCastType__Q28PSSystem9EnvSeBaseFv
    .4byte setPanAndDolby__Q28PSSystem9EnvSeBaseFP8JAISound
*/

namespace PSSystem {
struct EnvSeBase {
	virtual void exec();                    // _08
	virtual void play();                    // _0C
	virtual void getCastType();             // _10 (inline)
	virtual void setPanAndDolby(JAISound*); // _14 (inline)

	EnvSeBase(unsigned long, float);
};
} // namespace PSSystem

#endif
