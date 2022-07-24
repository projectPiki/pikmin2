#ifndef _EBI_TITLE_TTITLEMGR_H
#define _EBI_TITLE_TTITLEMGR_H

/*
        __vt__Q33ebi5title9TTitleMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q33ebi5title9TTitleMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q33ebi5title9TTitleMgrFv"
*/

struct CNode {
    virtual ~CNode();             // _08 (inline)
    virtual void getChildCount(); // _0C
};

namespace ebi {
namespace title {
    struct TTitleMgr : public CNode {
        virtual ~TTitleMgr();     // _08 (inline)
        virtual void _10() = 0;   // _10
        virtual void _14() = 0;   // _14
        virtual void @24 @__dt(); // _18 (inline)

        TTitleMgr();
        void globalInstance();
        void Instance();
        void deleteInstance();
        void init();
        void setLogo();
        void loadResource();
        void initAfterLoadRes();
        void setController(Controller*);
        void inField(ebi::title::TObjBase*);
        void inViewField(ebi::title::TObjBase*);
        void isInViewField(ebi::title::TObjBase*);
        void isOutViewField(Vector2<float>&, float);
        void isOutViewField(ebi::title::TObjBase*);
        void getPosOutOfViewField();
        void start();
        void breakup();
        void startKogane();
        void startChappy();
        void boidToAssemble(long);
        void isControllerOK();
        void isPressStart();
        void startState(ebi::title::TTitleMgr::enumState);
        void update();
        void updateState();
        void checkEncounter_();
        void draw();
        void readTitleParam(JKRArchive*, char*);
    };
} // namespace title
} // namespace ebi

#endif
