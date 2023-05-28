/*
decimal and binary system
decimal to binary steps:
div by 2
store remainder
continue above 2 steps till division quotient gives 0
then reverse the order of remainders;



m2 to convert deci to bi

we use fact that num&1 returns 0 if even num and 1 if odd num
hence using this the last digit of binary rep of a number can be found to be one or zer
then after getting this bit, we do right shift and then check the next bit using &1
similarly all 32 bits can be extracted

after enough right shifts the number will become zero
so while(n!=0){
    bit=n&1;
    n=n>>1;
    answer=pow(10,(iteration num -1))*bit+answer;
}
*/

#include <iostream>
#include<math.h>

using namespace std;
 
int main(){

    int n;
    cin>>n;
    int ans=0,i=0;

    while(n!=0){

        int dig=n&1;

        ans=(dig*pow(10,i))+ans;

        n=n>>1;
        i++;
    }

    cout<<"Answer is : " <<ans <<endl;

    return 0;
}

/*
Homework
*/