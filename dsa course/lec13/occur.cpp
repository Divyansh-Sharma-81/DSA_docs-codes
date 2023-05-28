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
int occurence(int arr[],int size,int key){

    int occ=1+lastind(arr,size,key)-firstind(arr,size,key);
    return occ;
}


int main()
{
    
    int arr[9]={1,2,2,3,3,3,3,4,5};

    int freq=occurence(arr,9,3);
    cout<<"the frequency of 3 is: "<<freq<<endl;
    
    return 0;
}