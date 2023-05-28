/*
LEFT SHIFT AND RIGHT SHIFT OPERATORS:

Left shift

5<<1 means shift 5 once to left.
5 is 000000000....00101
after left shift
it becomes 00000....01010
converting to num we get 2^3 +2^1 ie 10 will be output

eg:3<<2
3 is 000...000011
after ls: 000....001100
this gives 12

so for small numbers usually a single left shift results in multiplying by 2
but not true for larger numbers as it can make a positive num to negative num


Right shift is similar

eg: 5>>2

00000...00101
000000....001

hence we get 1

by obs a num of once right shift gets divided by 2 once and then the result is floored
but again not true in all cases

note that in left and right shift afer shifting the numbers the padding was done by zeros
but that is only the case for positive numbers 
when negative numbers are involved in the shift then their bitwise converted form may be shifted with padding of ones instead of zeros. 
this depends compiler to compiler


*/

#include <iostream>
using namespace std;
 
int main(){
    
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    return 0;
}