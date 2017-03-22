#ifndef MYQUEUE_H
#define MYQUEUE_H

template<typename elemT>
class myQueue
{
public:
    myQueue();
    ~myQueue();

    bool isEmpty();
    void Enqueue(elemT e);
    elemT dequeue();


private:
    struct cellT{
        elemT val;
        cellT* next;
    };

    cellT *head, *tail;

};

#include "myqueue.cpp"

#endif // MYQUEUE_H
