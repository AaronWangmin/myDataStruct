#ifndef MYBST_H
#define MYBST_H

#include <string>

using namespace std;

template<typename elemT>
class myBST
{
public:
    myBST();

private:
    struct node{
        elemT value;
        node* left;     // smaller value
        node* right;    // bigger value
    };



public:

    node* root;     // question ?
    bool contains(node* root, const elemT key);
    void insert(node*& root, const elemT& key);
    void printTree(node* root);
    void freeTree(node* root);

 //   node *treeSearch(node *t, string key);
 //   void treeEnter(node *t, string key, T val);

};

#include "mybst.cpp"

#endif // MYBST_H
