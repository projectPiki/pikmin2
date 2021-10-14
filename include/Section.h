#ifndef _SECTION_H
#define _SECTION_H

struct ISection {
	virtual ~ISection();

	virtual void run()                  = 0;
	virtual void update()               = 0;
	virtual void draw(struct Graphics&) = 0;
};

struct Section : public ISection {
	enum EDrawInitMode { One };

	virtual ~Section();

	virtual void run();
	virtual void update();
	virtual void draw(struct Graphics&);
	virtual void init();
	virtual void drawInit(Graphics&);
	virtual void drawInit(Graphics&, Section::EDrawInitMode);
	virtual void doExit();
	virtual void forceFinish();
	virtual void forceReset();
	virtual void getCurrentSection();
	virtual void doLoadingStart();
	virtual void doLoading();

	virtual bool doUpdate()        = 0;
	virtual void doDraw(Graphics&) = 0;

	virtual void isFinishable();
};

#endif
