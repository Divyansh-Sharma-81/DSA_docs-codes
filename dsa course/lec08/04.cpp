#include <iostream>
using namespace std;
 
void nCr(){

    int n,r;
    cout<<"enter n and r: "<<endl;
    cin>>n>>r;
    int nfac=1,rfac=1,diff_fac=1;
    for(int i=1;i<=n;i++){
        nfac*=i;
    }
    for(int i=1;i<=r;i++){
        rfac*=i;
    }    
    for(int i=1;i<=n-r;i++){
        diff_fac*=i;
    }
    if(n==0){
        nfac=1;
    }
    if(r==0){
        rfac=1;
    }
    if(n==r){
        diff_fac=1;
    }

    cout<<"\nthe nCr is: "<<((nfac)/(rfac*diff_fac));
}

int main()
{
    
    nCr();
    
    return 0;
}