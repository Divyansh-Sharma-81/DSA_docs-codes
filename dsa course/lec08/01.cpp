/*
calculator
input-a,b,operation
output-answer

*/

#include <iostream>
using namespace std;
 
int main()
{
    int a,b;
    char op;

    cout<<"enter a: ";
    cin>> a;
    cout<<"\nenter b: ";
    cin>>b;
    cout<<"\nenter operator: ";
    cin>>op;
    cout<<endl;

    switch(op){

        case '+':cout<<a+b<<endl;
                 break;

        case '-':cout<<a-b<<endl;
                 break;
        case '*':cout<<a*b<<endl;
                 break;
        case '/':cout<<float(a/b)<<endl;
                 break;
        case '%': cout<<a%b<<endl;
                 break;
        default:cout<<"wrong operator";

    }

    return 0;
}