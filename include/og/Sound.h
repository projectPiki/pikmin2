#ifndef _OG_SOUND_H
#define _OG_SOUND_H

#include "types.h"

namespace og {
struct Sound {
	void setSE(u32);
	void setLifeDanger();
	void setChimeNoon();
	void setChime();
	void setDecide();
	void setCancel();
	void setCursor();
	void setOpen();
	void setClose();
	void setPause();
	void setPlusMinus(bool);
	void setSMenuLR();
	void setError();
	void setZoomIn();
	void setZoomOut();
	void setScroll();
	void setOpenDoukutu();
	void setSaveCave();
	void setOpenWMapMenu();
	void setOpenTotalPoko();
	void setCloseTotalPoko();
	void setPlusTotalPoko();
	void setOpenFinalMsg();
	void setSprayAdd();
	void setTimeCarry();
	void setSensorSE();
	void setGetSensor();
	void setFloorComplete();
	void setGraySensor();
	void setGetSpray();
	void setItemName();
	void setKanteiExit();
	void setFloorTitle();
	void setVsTitle();
	void setBdamaGet();
	void setNaviChange(int);
	void setVsTitleAbutton();
	void stopSound();
	void setVsWin1P();
	void setVsWin2P();
	void setVsDraw();
	void setWarning();
};
extern Sound* ogSound;
} // namespace og

#endif
