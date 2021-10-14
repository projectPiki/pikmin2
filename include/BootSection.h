#ifndef _BOOTSECTION_H
#define _BOOTSECTION_H

struct BootSection {
	BootSection(struct JKRHeap*);
	~BootSection();

	void doDraw(struct Graphics&);
	void doUpdate();

	void drawDolbyLogo(Graphics&);
	void drawEpilepsy(Graphics&);
	void drawNintendoLogo(Graphics&);
	void drawProgressive(Graphics&);
	void drawSetInterlace(Graphics&);
	void drawSetProgressive(Graphics&);

	void forceReset();
	void init();

	void load2DResource();
	void loadBootResource();
	void loadResident();

	void run();
	void runWait(BootSection, bool(const void*, void*));

	void setMode(int);
	void setModeEpilepsy();

	void updateLoadMemoryCard();
	void updateLoadResourceFirst();
	void updateNintendoLogo();
	void updateProgressive();
	void updateWaitProgressive();
	void waitLoadResource();
};

#endif
