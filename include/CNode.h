#ifndef __CNODE_H
#define __CNODE_H

class CNode {
    CNode* _04;
    CNode* _08;
    CNode* _0C;
    CNode* _10;
    char* name;

public:
    CNode();
    void addHead(CNode*);
    void add(CNode*);
    int calcNextCount();
    void concat(CNode*);
    virtual ~CNode();
    void del();
    virtual int getChildCount();
    CNode* getChildAt(int);
};

#endif