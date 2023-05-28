#include <iostream>
#include<array>
using namespace std;
 
int main()
{
    
    array<int,4> a={1,2,3,4};
    
    //size operation
    int size=a.size();
    for (int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    // at operation
    cout<<"element at 2nd index: "<<a.at(2)<<endl;

    //empty operation
    cout<<"empty or not: "<<a.empty()<<endl;

    //front and back
    cout<<"first: "<<a.front()<<" last: "<<a.back()<<endl;

    

    return 0;

}