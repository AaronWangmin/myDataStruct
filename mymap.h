#ifndef MYMAP_H
#define MYMAP_H

#include <string>
#include <vector>

using namespace std;

template<typename elemT>
class myMap
{
public:
    myMap();
    ~myMap();

    void add(string key, elemT val);
    elemT getValue(string key);
    int find(string key);
    void deleteKey(string key);

private:
    struct pairT{
        string key;
        elemT value;
    };

    vector<pairT> entries;

};

#include "mymap.cpp"

#endif // MYMAP_H
