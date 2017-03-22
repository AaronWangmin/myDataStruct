#include <iostream>
#include <string>

using namespace std;

#include "mymap.h"

template<typename elemT>
myMap<elemT>::myMap()
{    

}

template<typename elemT>
myMap<elemT>::~myMap()
{

}

template<typename elemT>
int myMap<elemT>::find(string key)
{
    for(int i = 0; i < entries.size(); i++){
      if(entries[i].key == key) return i;
    }
    return -1;
}

template<typename elemT>
void myMap<elemT>::add(string key, elemT val)
{
    int index = find(key);
    if(index != -1){
        entries[index].value = val;
    }else{
        pairT p;
        p.key = key;
        p.value = val;
        entries.push_back(p);
    }
}

template<typename elemT>
elemT myMap<elemT>::getValue(string key)
{
    int index = find(key);
    if(index != -1){
        return entries[index].value;
    }
    cout << " key not found! " << endl;
    return -1;
}
