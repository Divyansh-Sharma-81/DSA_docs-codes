#include <iostream>
using namespace std;
 
int sqrt(int x) {

    const int n=x;
    
    int arr[10000];
    for(int i=0;i<=x;i++){

        arr[i]=i+1;
        
    }


    int s=0,e=x-1;
    int m=s+(e-s)/2;
    int ans=-1;
    int oldm;
    while(s<=e){
        oldm=m;
        
        if((x-(arr[m]*arr[m])>=0)&&(x-(arr[m+1]*arr[m+1])<0)){
            ans=m;
            
        }
        if((x-(arr[m]*arr[m])>0)&&(x-(arr[m+1]*arr[m+1])>0)){
            s=m+1;
        }
        if((x-(arr[m]*arr[m])<0)&&(x-(arr[m-1]*arr[m-1])<0)){
            e=m-1;
        }
        
        m=s+(e-s)/2;
        if(oldm==m){
            break;
        }
        
    }
    // if(x-arr[m]*arr[m]>=0 && x-arr[m+1]*arr[m+1]<0){
    //     ans =m;
    // }
    // if(x-arr[m]*arr[m]>0 && x-arr[m+1]*arr[m+1]>0){
    //     ans=m+1;
    // }
    // if(x-arr[m]*arr[m]<0 && x-arr[m-1]*arr[m-1]<0){
    //     ans=m-1;
    // }
    cout<<"arr[ans]: "<<arr[ans];
    return arr[ans];    

}

double deci(int num,int k){
    


    double t=1.0;
    double out=double(sqrt(num));
    
    for(int i=0;i<k;i++){

        t/=10;
        
        for(int j=0;j<9;j++){
            out=out+(t);
            cout<<"\nout is: "<<out;
            if(num-out*out<0){
                out=out-(t);
                cout<<"FINAL OUT IS:"<<out;
                break;
                
            }

        }

    }
    return out;

}

int main()
{
    
    int num,k;
    cout<<"enter num and num of decimal places: ";
    cin>>num;
    cin>>k;
    

    float root=deci(num,k);
    cout<<"\nrequired sqrt is: "<<root<<endl;



    return 0;
}