/*
pattern:
A
BC
DEF
GHIJ
.
.
.
.
.   
SO ON N TIMES
*/

#include <iostream>
using namespace std;
 
int main(){
    
    int n;
    cout<<"enter n: ";
    cin>>n;

    int row=1, col;

    char k='A';

    while(row<=n){
        
        col=n-row;

        while(col<n){

            cout<<k<<" ";
            col++;
            k+=1;
        }

        row++;
        cout<<endl;
    }
    
    return 0;
}