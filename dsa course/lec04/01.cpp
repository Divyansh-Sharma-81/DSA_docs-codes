//pattern needed is :
/*
123......n
123......n
123......n
123......n
.
.
.
.
n times
*/

#include <iostream>
using namespace std;
 
int main(){

    int n ;
    cout<<"enter n:";
    cin>>n;

    int k,j,i=1;

    while(i<=n){

        j=1;
        while(j<=n){

            cout<<j;
            j++;
            
        }

        i++;
        cout<<endl;

    }


}