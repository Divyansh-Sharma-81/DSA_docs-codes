/*
pattern needed:

n n-1 n-2 ..........1
n n-1 n-2 ..........1
n n-1 n-2 ..........1
.
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
    cout<<"enter n";
    cin>>n;

    int i=1,j,k=n;

    while(i<=n){

        j=1;
        k=n;
        while(j<=n){
            j++;
            cout<<k;
            k--;
        }

        i++;
        cout<<endl;
    }

}