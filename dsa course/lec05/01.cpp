/*
BITWISE OPERATORS

AND-&
OR-|
NOT-~
XOR-^

these operators work at the bit level.
if a=2,b=3
then a&b will mean :
10      -2 ka bitwise rep
11      -3 ka bitwise rep
----
10(after doing bitwise and)
therefore output will be bits 10 or the num 2

In case of AND:-

   INPUT     OUT
  X  |  Y  |  Z  |
-----|-----|-----|
  0  |  0  |  0  |   
  0  |  1  |  0  | 
  1  |  0  |  0  |  
  1  |  1  |  1  |
------------------

In case of OR:-

   INPUT     OUT
  X  |  Y  |  Z  |
-----|-----|-----|
  0  |  0  |  0  |   
  0  |  1  |  1  | 
  1  |  0  |  1  |  
  1  |  1  |  1  |
------------------

In case of NOT:-

  IN   OUT
  X  |  Z  |
-----|-----|
  0  |  1  |   
  1  |  0  | 
------------

In case of XOR:-

   INPUT     OUT
  X  |  Y  |  Z  |
-----|-----|-----|
  0  |  0  |  0  |   
  0  |  1  |  1  | 
  1  |  0  |  1  |  
  1  |  1  |  0  |
------------------



*/


// examples of bitwise operators
#include <iostream>
using namespace std;
 
int main(){
    
    int a =4;
    int b=6;

    cout<<"a&b will give: "<<(a&b) <<endl;
    cout<<"a|b will give: "<< (a|b) <<endl;
    cout<<"~a will give: "<< ~a <<endl;
    cout<<"a^b will give: "<< (a^b) <<endl;
    
    return 0;
}