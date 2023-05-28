#include <iostream>
using namespace std;

int getmax(int num[],int n){

    int max=INT_MIN; //INT_MIN stores min size wala int datatype value ie -2^31
    for(int i=0;i<n;i++){
        if (num[i]>max){
            max=num[i];
        }
    }
    //returning max value
    return max;

}

int getmin(int num[],int n){

    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if (num[i]<min){
            min=num[i];
        }
    }
    //returning min value
    return min;

}

int main(){
    
    int size;
    cin>>size;

    //int num[size] is bad practice

    int num[100];

    //taking input in array
    for(int i=0;i<size;i++){
        cin>>num[i];

    }

    cout<<"max value is :"<<getmax(num,size)<<endl;
    cout<<"min value is :"<<getmin(num,size)<<endl;
    
    return 0;
}