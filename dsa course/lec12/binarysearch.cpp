#include <iostream>
using namespace std;

int binarysearch(int arr[],int size, int key){

    int start=0,end=size-1;
    int mid=(start+end)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        // this isnt optimised --> mid=(start+end)/2; so we do:
        mid=start+(end-start)/2;


    }
    return -1;

}


int main()
{
    
    int oddarr[7]={1,2,3,4,5,6,7};
    int evenarr[6]={5,6,7,8,9,10};

    int oddind=binarysearch(oddarr,7,2);
    int evenind=binarysearch(evenarr,6,10);

    cout<<"oddind is: "<<oddind;
    cout<<"evenind is: "<<evenind;

    
    return 0;
}