/*
pattern
A B C...n times
B C D...n times
C D E...n times
.
.
.
n times
*/

#include <iostream>
using namespace std;
 
int main(){
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int row=0,col=1;
    char k;
    
    while(row<n){
        k= row+'A';
        col=1;
        while(col<=n){

            cout<<k<<" ";
            k+=1;
            col++;
        }

        row++;
        cout<<endl;

    }

    return 0;
}