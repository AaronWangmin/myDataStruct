#include "myvector.h"

#include <iostream>

using namespace std;

template<typename elemType>
myVector<elemType>::myVector()
{
    arr = new elemType[2];
    numAllocated = 2;
    numUsed = 0;
}

template <typename elemType>
myVector<elemType>::~myVector()
{
    delete[] arr;
}

template <typename elemType>
int myVector<elemType>::size()
{
    return numUsed;
}

template <typename elemType>
elemType myVector<elemType>::getAt(int index)
{
    if(index < 0 || index >= size()){
        cout << "out of bounds" << endl;
    }
    return arr[index];
}

template <typename elemType>
void myVector<elemType>::add(elemType s)
{
    if(numUsed == numAllocated){
        //cout << "out of scope !" << endl;
        doubleCapacity();
    }
    arr[numUsed++] = s;
}

template <typename elemType>
void myVector<elemType>::doubleCapacity()
{
    elemType* bigger = new elemType[numAllocated * 2];
    for(int i = 0; i < numUsed; i++){
        bigger[i] = arr[i];
    }
    delete[] arr;
    arr = bigger;
    numAllocated *= 2;
}



