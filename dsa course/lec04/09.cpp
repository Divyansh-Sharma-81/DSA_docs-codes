/*
pattern:
AAA. . .n times
BBB. . . 
CCC. . .
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

    int row=1;
    char col='A';
    int k;


    while(row<=n){


        k=1;
        while(k<=n){
            
            cout<<col<<" ";
            k++;
    
        }
        col=col+1;
        row++;
        cout<<endl;

    }

}