#include <iostream>
using namespace std;
 
int target(int arr[],int size,int targ){

    int s=0;
    int e=size-1;
    int m=s+(e-s)/2;
    int ind=-1;
    while(s<=e){
        // cout<<"the cursor is at index: "<<m<<" and the element at this ind is: "<<arr[m]<<endl;
        //target in upper band
        if(targ>=arr[0]){
            //lower most
            if(arr[m]<=arr[m+1]&&arr[m]<arr[m-1]){
                e=m-1;
            }
            //lower band main part
            if(arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]&&arr[m]<=arr[0]){
                e=m-1;
            }
            
            
            if(targ<arr[m]){
                //upper band main part
                if(arr[m]>=arr[size-1]&&arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]){
                    e=m-1;
                }
                //upper most
                if(arr[m]>arr[m+1]&&arr[m]>=arr[m-1]){
                    e=m-1;
                }
            }

            if(targ==arr[m]){
                //upper band main part
                if(arr[m]>=arr[size-1]&&arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]){
                    return m;
                }
                //upper most
                if(arr[m]>arr[m+1]&&arr[m]>=arr[m-1]){
                    return m;
                }
            }

            if(targ>arr[m]){
                //upper band main part
                if(arr[m]>=arr[size-1]&&arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]){
                    s=m+1;
                }
                
            }

        }

        //target in lower band
        if(targ<=arr[size-1]){
            //upper most
            if(arr[m]>arr[m+1]&&arr[m]>=arr[m-1]){
                s=m+1;
            }
            //upper band main part
            if(arr[m]>=arr[size-1]&&arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]){
                s=m+1;
            }
            
            
            if(targ<arr[m]){
                //low band main part
                if(arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]&&arr[m]<=arr[0]){
                    e=m-1;
                }
                
            }

            if(targ==arr[m]){
                //low band main part
                if(arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]&&arr[m]<=arr[0]){
                    return m;
                }
                //low most
                if(arr[m]<=arr[m+1]&&arr[m]<arr[m-1]){
                    return m;
                }
            }

            if(targ>arr[m]){
                //low band main part
                if(arr[m]>=arr[m-1]&&arr[m]<=arr[m+1]&&arr[m]<=arr[0]){
                    s=m+1;
                }
                //low most
                if(arr[m]<=arr[m+1]&&arr[m]<arr[m-1]){
                    s=m+1;
                }
            }


        }
        //update m
        m=s+(e-s)/2;
        

    }
    return m;


}


int main()
{
    int arr[7]={4,5,6,7,0,1,2};
    int ind=target(arr,7,0);

    cout<<"the target 0 is at index: "<<ind<<endl;
    
    
    return 0;
}