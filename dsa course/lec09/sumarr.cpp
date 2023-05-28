#include <iostream>
using namespace std;
 
void sumarr(int arr[],int size){

    int sum=0;
    for (int i=0;i<size;i++){

        sum+=arr[i];
    }

    cout<<"\nthe sum is: "<<sum;

}


int main()
{

    int size,arr[100];
    cout<<"enter size: ";
    cin>>size;

    cout<<"\narray elements enter: "<<endl;
    for(int i=0;i<size;i++){

        cin>>arr[i];

    }

    sumarr(arr,size);

    return 0;
}