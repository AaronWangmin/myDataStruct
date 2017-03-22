#include "mybst.h"

template<typename elemT>
myBST<elemT>::myBST()
{
    root = NULL;
}

template<typename elemT>
bool myBST<elemT>::contains(node* t,const elemT key)
{
    if(t == NULL) return false;

    if(t->value == key) return true;
    else if(t->value > key) return contains(t->left, key);
    else return contains(t->right,key);
}

template<typename elemT>
void myBST<elemT>::insert(node*& t,const elemT& key)
{
    if(t == NULL){
        t = new node;
        t->value = key;
        t->left = t->right = NULL;
    }
    else if(t->value > key){
        insert(t->left,key);
    }
    else if(t->value < key){
       insert(t->right,key);
    }
    else{
        // do nothing.
    }
}

template<typename elemT>
void myBST<elemT>::printTree(node* root)
{
    if(root ==NULL) return;
    printTree(root->left);
    cout << root->value << endl;
    printTree(root->right);
}

template<typename elemT>
void myBST<elemT>::freeTree(node *root)
{
    if(root == NULL) return;
    free(root->left);
    free(root->right);
    delete root;
}

