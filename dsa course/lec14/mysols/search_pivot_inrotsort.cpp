#include <iostream>
using namespace std;
 
int pivot(int arr[],int n){

    int s=0,e=n-1;
    int m=s+(e-s)/2;
    int ans=-1;
    int old_m;
    while(s<=e){
        // cout<<"mid is at ind: "<<m<<" and mid element is: "<<arr[m]<<endl;
        old_m=m;
        if(arr[m]<=arr[m+1]&&arr[m]<arr[m-1]){
            return m;
        }
        if(arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]&&arr[m]<=arr[0]){
            e=m-1;
        }
        if(arr[m]>=arr[n-1]&&arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]){
            s=m+1;
        }
        if(arr[m]>arr[m+1]&&arr[m]>=arr[m-1]){
            s=m+1;
        }
        m=s+(e-s)/2;
        if(old_m==m){
            break;
        }
    }
    return m;

}


int main()
{

    int rot[7]={8,12,1,2,5,6,7};
    int ind=pivot(rot,7);

    cout<<"pivot located at index: "<<ind<<" and it is the num: "<<rot[ind]<<endl;


    return 0;
}