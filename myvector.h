#ifndef MYVECTOR_H
#define MYVECTOR_H

#include<string>

using namespace std;

template <typename elemType>
class myVector
{
public:
    myVector();
    ~myVector();

    int size();
    void add(elemType s);
    elemType getAt(int index);

private:
    elemType* arr;
    int numUsed, numAllocated;
    void doubleCapacity();
};

#include "myvector.cpp"

#endif // MYVECTOR_H
