/*
ABC...N times
ABC...N times
ABC...N times
.
.
.
.
N times
*/

#include <iostream>
using namespace std;
 
int main(){
    
    int n;
    cout<<"enter number n: ";
    cin>>n;

    int row=1, col=1;
    char k;
    while(row<=n){
        col=1;
        k='A';
        while(col<=n){
            col++;
            cout<<k<<" ";
            k+=1;
            
        }
        row++;
        cout<<endl;
    }

    return 0;
}