#ifndef MYBST2_H
#define MYBST2_H

#include <string>

using namespace std;

template<typename valType>
class myBST2
{
public:
    myBST2();
    ~myBST2();

    valType getValue(string key);
    void add(string key,valType val);
    void printTree();

private:
    struct node{
        string key;
        valType value;
        node* left;
        node* right;
    };
    node* root;

   node* treeSearch(node* t, string key);
   void treeEnter(node* &t,string key,valType val);
   void treeTrans(node* t);
};

#include "mybst2.cpp"

#endif // MYBST2_H
