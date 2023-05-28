/*
pattern:

   1
  22
 333
4444

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
            if(col<=n-row){
                k=' ';
            }
            else k='1'+row-1;
            

            cout<<k;
            col++;
            
        }
        row++;
        cout<<endl;

    }

}