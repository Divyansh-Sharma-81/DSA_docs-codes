//dequeue or doubly ended queue
//this means that push and pop can be done at both the ends of the structure
//also of dyanmic type
//random element access possible using at method
#include <iostream>
#include <deque>
using namespace std;
 
int main()
{

    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){

        cout<<i<<" ";

    }

    d.pop_back();
    cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    return 0;
}