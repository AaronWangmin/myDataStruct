#include "mystack.h"

template<typename elemT>
myStack<elemT>::myStack()
{
}

template<typename elemT>
myStack<elemT>::~myStack()
{
}

template<typename elemT>
int myStack<elemT>::size()
{
    return elems.size();
}

template<typename elemT>
void myStack<elemT>::push(elemT s)
{
    elems.push_back(s);
}

template<typename elemT>
elemT myStack<elemT>::pop()
{
   if(!elems.empty()){
      elemT top = elems.at(elems.size()-1);
      elems.pop_back();
      return top;
   }
   cout << "no elem in the myStack! " << endl;
}
