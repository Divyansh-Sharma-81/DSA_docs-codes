//SELECTION SORT

#include <iostream>
using namespace std;
 
void selec_sort(int arr[],int n,int ord){

    for(int i=0;i<n-1;i++){
        int minIND=i;
        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[minIND]){
                minIND=j;
            }

        }
        swap(arr[minIND],arr[i]);
    }
}


int main()
{
    
    int size,ord;
    cout<<"enter size and order(1 for asc, 0 for desc):";
    cin>>size,ord;
    const int len=size;
    int arr[len]; 
    cout<<"\nenter nums of array: "<<endl;
    for(int i=0;i<size;i++){

        cin>>arr[i];

    }

    selec_sort(arr,size,ord);

    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";

    }
    return 0;
}