#include <iostream>
using namespace std;

int main(){
    int a=123;
    cout << a <<endl ;

    char b='v';
    cout<< b <<endl;

    bool bl= true; 
    cout<< bl << endl;

    float f=1.2;
    cout << f <<endl;
 
    double d=1.23;
    cout<<d  <<endl;

    int size=sizeof(d);
    cout<< "Size of d is:" << size <<endl;


    /*
    how do negative nums gert stored
    example: -5
    step 1 convert to binary for the absolute value of num
    so it will be 00000000000000000000000000000101
    then take 2's complement which is to take 1's complement and then add 1 to the num
    so it will become 11111111111111111111111111111011
    */
}