#include <iostream>
using namespace std;
 
int power(int a, int b){

    for(int i=1;i<b;i++){

        a*=a;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);

    return 0;
}