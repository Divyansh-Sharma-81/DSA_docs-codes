#include <iostream>
using namespace std;
 
void dupli(int arr[],int size){


    int t,k=0;
    for(int i=0;i<size;i++){
        t=2;
        for(int j=0;j<size;j++){
            if((j!=i)&&(arr[j]==arr[i])){
                t=1;
                break;
            }
            else if (j!=i) {
                t=0;
            }
        }

        if (t==1){
            cout<<arr[i]<<"is  duplicate "<<endl;
            k+=1;
        }
        

    }
    cout<<"total num of duplicate nums is: "<<k<<endl;

}

int main()
{
    
    int arr[100],size;
    cout<<"enter size: ";
    cin>>size;
    cout<<"\nenter elements: "<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    dupli(arr,size);
    
    return 0;
}