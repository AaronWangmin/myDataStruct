#ifndef MYSTACK2_H
#define MYSTACK2_H

template<typename elemT>
class myStack2
{
public:
    myStack2();
    ~myStack2();

    bool isEmpty();
    void push(elemT s);
    elemT pop();

private:
    struct cellT{
        elemT val;
        cellT* next;
    };

    cellT* head;

};

#include "mystack2.cpp"

#endif // MYSTACK2_H
