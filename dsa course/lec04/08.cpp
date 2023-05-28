/*
pattern
1
21
321
4321
.
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
    cout<<"enter n: ";
    cin>>n;

    int row=1,col;

    while(row<=n){
        

        col=row;
        while(col>0){

            cout<<col<<" ";
            col--;
        }


        row++;
        cout<<endl;
    }

}

//above solution ive done without use of 3rd variable k