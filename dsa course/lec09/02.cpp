#include <iostream>
using namespace std;
 
void printArr(int arr[], int size){

    cout<<"printing the array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int a[15]={2,7};
    printArr(a,15);
    return 0;
}