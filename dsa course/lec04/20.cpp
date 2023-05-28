/*
pattern:

1111
 222
  33
   4

*/

#include <iostream>
using namespace std;
 
int main(){

    int n;
    cout<<"enter number n: ";
    cin>>n;

    int row=1;
    int col=1;
    char k=' ';


    while(row<=n){
        col=1;
        while(col<=n){
            if(col>=row){
                k='1'+row-1;
            }
            else k=' ';
            

            cout<<k;
            col++;
            
        }
        row++;
        cout<<endl;

    }

}