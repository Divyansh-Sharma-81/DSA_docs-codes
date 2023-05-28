/*
pattern:
A B c.....n times
D E F.....n times
G H I.....n times
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
    cout<<"enter value of n: ";
    cin>>n;

    int row=1,col=1;

    char k='A';
    
    while(row<=n){


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