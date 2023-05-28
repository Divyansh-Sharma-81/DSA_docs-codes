/*
pattern:

    1
   121
  12321
 1234321
123454321

*/

#include <iostream>
using namespace std;
 
int main(){
    
    int n;
    cout<<"enter n: ";
    cin>>n;

    int row=1,col=1;
    int num;
    char k=' ';

    while(row<=n){
        col=1;
        num=1;

        while(col<=2*n-1){
            // this if will scan if the column position of the cursor needs a space or not and then prints
            if(col<n-row+1){
                cout<<k;
            }
            //this elif check and prints spaces to right of pyramid
            else if(col>n+row-1){
                cout<<k;
            }
            //this elif prints the left part of pyramid upto the central maxima line
            else if((col>=n-row+1)&&(col<=n)){
                cout<<num;
                num++;
            }
            //this else prints the right half of the number pyramid
            else {
                --num;
                cout<<num-1;
            }

            col++;
        }

        row++;
        cout<<endl;
    }
    
    
    return 0;
}