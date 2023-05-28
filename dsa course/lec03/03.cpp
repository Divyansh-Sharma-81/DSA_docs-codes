//pattern qn 

#include <iostream>
using namespace std;
 
int main(){


    // MY SOL
    // int n,i=1,j=1;
    // cout<<"Enter the side length:";
    // cin>>n;
    // while(i<=n){
    //     if(j<=n){ 
    //         while(j<=n){
    //             j++;
    //             cout<<"*";
    //         }
    //         j=1;
    //     }
    //     i++;
    //}
    //     cout<<endl;
    

    //BABBAR WAY
    int n,i=1,j;
    cout<<"enter the num of stars in a side";
    cin>>n;

    while(i<=n){

        j=1;

        while(j<=n){
            j++;
            cout<<i;
        }    
    
        i++;
        cout<<endl;
    
    }


    

}