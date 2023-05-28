/*
pattern needed:

1 2 3....n
n+1 n+2......2n
.
.
.
.
n times

*/

#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;

    int i=1,j,k=1;

    while(i<=n){

        j=1;
        while(j<=n){
            cout<<k<<" ";
            j++;
            k++;
        }

        i++;
        cout<<endl;

    }
}