#include <iostream>

using namespace std;

#include "mystack2.h"

template<typename elemT>
myStack2<elemT>::myStack2()
{
    head = NULL;
}

template<typename elemT>
myStack2<elemT>::~myStack2()
{
    // delete the...
}

template<typename elemT>
bool myStack2<elemT>::isEmpty()
{
    return (head == NULL);
}

template<typename elemT>
void myStack2<elemT>::push(elemT s)
{
    cellT* newCell = new cellT;
    newCell->val = s;
    newCell->next = head;
    head = newCell;
}

template<typename elemT>
elemT myStack2<elemT>::pop()
{
    if(isEmpty()) {
        cout << " pop empty stack ! " << endl;
        return -1;
    }
    elemT top = head->val;
    cellT* old = head;
    head = head->next;
    delete old;
    return top;
}
