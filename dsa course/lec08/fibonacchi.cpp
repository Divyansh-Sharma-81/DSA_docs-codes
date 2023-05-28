#include <iostream>
using namespace std;
 
void fibo(int n){

    int a=0,b=1,c;
    if (n==1){
        cout<<n<<"th term is: "<<a;
    }
    else if (n==2){
        cout<<n<<"th term is: "<<b;
    }
    else {

        for(int i=3;i<=n;i++){
            c=b;
            b=a+b;
            a=c;
        }
        cout<<n<<"th term is: "<<b;
    }

}

int main()
{
    
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    fibo(n);

    return 0;
}