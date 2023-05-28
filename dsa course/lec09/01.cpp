#include <iostream>
using namespace std;
 
int main()
{
    int a[10];
    int value;

    cout<<"enter value for whole array: ";
    cin>>value;
    cout<<endl;

    for(int i=0;i<10;i++){
        a[i]=value;
        cout<<a[i]<<" ";
    }
    
    return 0;
}