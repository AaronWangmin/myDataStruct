#include <iostream>

using namespace std;

#include "myqueue.h"

template<typename elemT>
myQueue<elemT>::myQueue()
{
    head = tail = NULL;
}

template<typename elemT>
myQueue<elemT>::~myQueue()
{
    // delete ....
}

template<typename elemT>
bool myQueue<elemT>::isEmpty()
{
    return (head == NULL);
}

template<typename elemT>
void myQueue<elemT>::Enqueue(elemT e)
{
    cellT* newCell = new cellT;
    newCell->val = e;
    newCell->next = NULL;
    if(isEmpty()){
        head = tail = newCell;
    }else{
        tail->next = newCell;
        tail = newCell;
    }
}

template<typename elemT>
elemT myQueue<elemT>::dequeue()
{
    if(isEmpty()){
        cout << " dequeue empty queu! " << endl;
        return -1;
    }
    elemT front = head->val;
    cellT* old = head;
    head = head->next;
    delete old;

    return front;

}
