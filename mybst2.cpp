#include "mybst2.h"

#include <iostream>

using namespace std;

template<typename valType>
myBST2<valType>::myBST2()
{
    root = NULL;
}

template<typename valType>
myBST2<valType>::~myBST2()
{

}

template<typename valType>
valType myBST2<valType>::getValue(string key)
{
    node* found = treeSearch(root,key);
    if(found == NULL){
        cout << "no data!"<< endl;
    }else{
        return found->value;
    }
}

template<typename valType>
void myBST2<valType>::add(string key, valType val)
{
    treeEnter(root,key,val);
}

template<typename valType>
void myBST2<valType>::printTree()
{
    treeTrans(root);
}

template<typename valType>
typename myBST2<valType>:: node* myBST2<valType>::treeSearch(node *t, string key)
{
    if(t == NULL) return NULL;

    else if(t->key == key) return t->value;

    else if(key < t->key){
        return treeSearch(t->left,key);
    }
    else
        return treeSearch(t->right,key);
}

template<typename valType>
void myBST2<valType>::treeEnter(node *&t, string key, valType val)
{
    if(t == NULL){
        t = new node;
        t->key = key;
        t->value = val;
        t->left = t->right = NULL;
    }else if(key == t->key){
        t->value = val;
    }else if(key < t->key){
        treeEnter(t->left,key,val);
    }else{
        treeEnter(t->right,key,val);
    }
}

template<typename valType>
void myBST2<valType>::treeTrans(node* t)
{
    if(t != NULL){
        cout << t->value << endl;
        treeTrans(t->left);
        treeTrans(t->right);

    }
}
