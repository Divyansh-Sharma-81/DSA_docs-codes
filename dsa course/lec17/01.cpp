//BUBBLE SORT

#include <iostream>
using namespace std;
 
void print_arr(int arr[],int size){
    cout<<endl;
    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";

    }

}

void bub_sort(int arr[],int size,int ord){

    if(ord==1){

        for(int i=0;i<size-1;i++){

            int maxIND=0;

            for(int j=0;j<size-i-1;j++){

                if(arr[j+1]>arr[j]){
                    maxIND=j+1;
                }

            }
            swap(arr[maxIND],arr[size-i-1]);
            
        }

    }
    else if(ord==-1){

        for(int i=0;i<size-1;i++){

            int minIND=0;
            
            for(int j=0;j<size-i-1;j++){

                if(arr[j+1]<arr[j]){
                    minIND=j+1;
                }

            }
            swap(arr[minIND],arr[size-i-1]);
            
        }

    }


}

int main()
{
    
    int arr[6]={7,1,6,9,14,10};
    int ord;
    cout<<"ord: ";
    cin>>ord;
    bub_sort(arr,6,ord);

    print_arr(arr,6);
    
    return 0;
}