/*

pattern
1
23
345
4567
.
.
.
.
n times

*/


//following commented code is a soln that i found. it works

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter num n: ";
//     cin>>n;
//     int row=1,col,k;
//     while(row<=n){
//         k=row;
//         col=n-row+1;
//         while(col<=n){
//             cout<<k<<" ";
//             col++;
//             k++;
//         }
//         row++;
//         cout<<endl;
//     }
// }


//solving without isng 4th vairable k used in above code

#include <iostream>
using namespace std;
 
int main(){


    int n;
    cout<<"enter n: ";
    cin>>n;

    int row=1,col;

    while(row<=n){

        col=row;
        while(col<=2*row-1){
            cout<<col<<" ";
            col++;

        }
    
        row++;
        cout<<endl;


    }
}