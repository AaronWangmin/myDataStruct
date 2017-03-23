#include <QCoreApplication>


#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "myvector.h"
#include "mystack.h"
#include "mystack2.h"
#include "myqueue.h"
#include "mymap.h"
#include "mybst.h"
#include "mybst2.h"


/*
//vector<int> sequence;
vector<int> subSequence(vector<int> &sequence, int count)
{
//    if(count <= 1){
//        return sequence;
//   }

    vector<int> sub;
    for(int i = 0; i < sequence.size(); i++){
        int sum = sequence[i];
        int m = count;
        for(int j = i + 1 ; j < sequence.size() && m > 1; j++){
           sum += sequence[j];
           m--;
        }
        sub.push_back(sum);
    }

    return sub;
}


int maxSubSum(vector<int> &sequence)
{


 //   return max;
}

*/

int nameHash(string first, string last)
{
    static const int kLargePrime = 16908799;
    static const int kSmallPrime = 127;

    int hashVal = 0;

    string fullName =  first + last;
    for(string::iterator it = fullName.begin(); it != fullName.end(); it++){
        char ch = tolower(*it);
        hashVal += (kSmallPrime * hashVal + ch) % kLargePrime;
    }
    return hashVal;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "hello" << endl;

    cout << " test: myVector: " << endl;
    myVector<string> v;
    v.add("Jason");
    v.add("Aaron");
    v.add("Mike");

    for(int i = 0; i < v.size(); i++){
       cout << v.getAt(i) << endl;
    }

    myVector<int> v_int;
    for(int i = 0; i < 12; i++){
        v_int.add(i);
    }

    for(int i = 0; i < v_int.size(); i++){
       cout << v_int.getAt(i) << endl;
    }

    cout << " test: myStack: " << endl;
    myStack<string> w;
    w.push("wang");
    w.push("ao");

    for(int i = 0; i < 2; i++){
       cout << w.pop() << endl;
    }

    myStack<int> w1;
    for(int i = 80; i < 90; i++){
        w1.push(i);
    }

    int num = w1.size();
    for(int i = 0; i < num; i++){
       cout << w1.pop() << endl;
    }

    cout << " test: myStack2: " << endl;
    myStack2<int> s2;
    cout << s2.isEmpty() << endl;
    s2.push(100);
    s2.push(200);
    cout << s2.isEmpty() << endl;
    while(!s2.isEmpty()){
        cout << s2.pop() << endl;
    }

    cout << " test: myQueue: " << endl;
    myQueue<int> q2;
    cout << q2.isEmpty() << endl;
    q2.Enqueue(100);
    q2.Enqueue(200);
    cout << q2.isEmpty() << endl;
    while(!q2.isEmpty()){
        cout << q2.dequeue() << endl;
    }

    cout << " test: myMap: " << endl;
    myMap<int> m2;
    m2.add("cat",3);
    cout << m2.getValue("cat") << endl;



    cout << "test: myBST(my binary search tree.) " << endl;
    myBST<int> t;
    t.insert(t.root,7);
    t.insert(t.root,3);
    t.insert(t.root,8);
    t.insert(t.root,1);
    t.insert(t.root,2);
    t.insert(t.root,4);
    t.insert(t.root,5);
    t.insert(t.root,6);
    t.printTree(t.root);

    cout << "test: myBST2(my binary search tree,the cell is a map.) " << endl;
    myBST2<int> t2;
    t2.add("1",100);
    t2.add("2",200);
    t2.printTree();


/*
    cout << "test: maxSubSequence " << endl;
    vector<int> x,x1;
    for(int i = 0; i < 5; i++){
        x.push_back(i);
        cout << x.at(i) << " , ";
    }
    cout << endl;

    x1 = subSequence(x,2);
    for(int i = 0; i < x1.size(); i++){
        cout << x1.at(i) << " , ";
    }
    cout << endl;
*/

    cout << "test: nameHash. " << endl;
    string first, last;
    cout << "pleas enter your first name: " ;
    cin >> first;
    cout << "please enter your last name: ";
    cin >> last;
    cout << "the nameHash is : " << nameHash(first,last) << endl;


    cout << "test: ASCII " << endl;
    cout << int('A') << endl;
    return a.exec();
}
