//Reversing an array

#include <iostream>
using namespace std;

void revArr(int arr[],int size){

    int k;
    for(int i=0;i<size/2;i++){
        k=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=k;
        
    }

}

int main()
{
    
    int arr[9]={3,-7,5,25,97,54,6,-2,3};

    //printing original array
    cout<<"array is:"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    revArr(arr,9);

    //printing reversed array
    cout<<"\narray reversed is:"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}