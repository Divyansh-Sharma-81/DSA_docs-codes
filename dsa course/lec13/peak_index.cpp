#include <iostream>
using namespace std;
 
int peak(int arr[],int size){

    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;

    while(s<=e){
        // cout<<"mid is: "<<m<<" arr[mid] is: "<<arr[m]<<endl;
        if(arr[m-1]<arr[m]&&arr[m]>arr[m+1]){
            return m;
        }
        else if(arr[m-1]<=arr[m]&&arr[m]<=arr[m+1]){
            s=m+1;
        }
        else if(arr[m-1]>=arr[m]&&arr[m]>=arr[m+1]){
            e=m-1;
        }
        m=s+(e-s)/2;
        
    }
    return m;



}

int main()
{
    
    int arr[10]={1,4,52,60,63,786,2002,20,11,9};

    int peakind=peak(arr,10);

    cout<<"the peak is at index number: "<<peakind<<"and its value is: "<<arr[peakind]<<endl;
    
    return 0;
}