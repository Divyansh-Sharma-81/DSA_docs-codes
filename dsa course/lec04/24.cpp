/*
pattern:

1234554321
1234**4321
123****321
12******21
1********1

*/

#include <iostream>
using namespace std;
 
int main(){
    
    int n;
    cout<<"enter n: ";
    cin>>n;


    int row=1,col;
    int num;
    char k='*';

    while(row<=n){


        col=1;
        num=1;

        while(col<=2*n){

            if (col<=n-row+1){
                cout<<num;
                num++;
            }
            else if(col>=n+row){
                cout<<num-1;
                num--;
            }
            else cout<<k;

            col++;
        }

        row++;
        cout<<endl;

    }
    
    
    return 0;
}