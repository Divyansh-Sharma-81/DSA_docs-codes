/*
pattern
1
23
456
78910
*/

#include <iostream>
using namespace std;
 
int main(){

    int n;
    cout<<"enter the value of n:";
    cin>>n;

    int row=1,col,k=1;

    while(row<=n){

        col=n-row;
        while(col<n){
            
            cout<<k<<" ";
            k++;
            col++;

        }

        row++;
        cout<<endl;

    }

}