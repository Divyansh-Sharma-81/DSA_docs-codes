/*
a raised to pow of b
*/

#include <iostream>
using namespace std;
 
int main()
{
    int a,b;

    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;

    for(int i=2;i<b;i++){

        a*=a;
    }

    cout<<a;
    
    
    return 0;
}