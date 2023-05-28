/*

pattern needed:
*
**
***
****
*****
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
    cout<<"enter the number n: ";
    cin>>n;

    int i=1,j;
    while(i<=n){

        j=n-i;
        while(j<n){
            cout<<"*";
            j++;
        }

        i++;
        cout<<endl;

    }

}