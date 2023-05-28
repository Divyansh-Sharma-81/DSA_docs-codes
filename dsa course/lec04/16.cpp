/*
pattern:
D
CD
BCD
ABCD
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
        k='A'+n-row;
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