#ifndef _PSSYSTEM_DIRECTORBASE_H
#define _PSSYSTEM_DIRECTORBASE_H

namespace PSSystem {
struct SeqTrackBase;

struct DirectorBase {
	DirectorBase(int, const char*);
	~DirectorBase();

	void directOff();
	void directOffInner();
	void directOn();
	void directOnInner();
	void doUpdateRequest();
	void exec();
	void execInner();
	void isUnderDirection();
	void onDirectOff();
	void onDirectOn();
	void onPlayInit(struct JASTrack*);
	void powerOn();
	void setTrack(unsigned char, PSSystem::SeqTrackBase*);
	void underDirection();
};
} // namespace PSSystem

#endif