#include <iostream>
using namespace std;
 
int firstind(int arr[],int size,int key){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;

}

int lastind(int arr[],int size,int key){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){

        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return ans;

}

int main()
{

    int arr[9]={2,2,2,2,3,4,5,6,7};
    
    int Pair[]={firstind(arr,9,2),lastind(arr,9,2)};

    cout<<"the first ind and last ind of num 2 is: "<<endl;

    for(int i=0;i<2;i++){
        cout<<Pair[i]<<" ";

    }

    return 0;
}