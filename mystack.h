#ifndef MYSTACK_H
#define MYSTACK_H

#include <string>
#include <vector>

using namespace std;

template<typename elemT>
class myStack
{
public:
    myStack();
    ~myStack();

    int size();
    void push(elemT s);
    elemT pop();

private:
    vector<elemT> elems;
};

#include "mystack.cpp"

#endif // MYSTACK_H
