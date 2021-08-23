/*
HARD
Problem statement: You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Example 1:

Input: N = 4
Output: 5
Explanation:
For numbers from 1 to 4.
For 1: 0 0 1 = 1 set bits
For 2: 0 1 0 = 1 set bits
For 3: 0 1 1 = 2 set bits
For 4: 1 0 0 = 1 set bits
Therefore, the total set bits is 5.

*/

#include<bits/stdc++.h>
using namespace std;

int largestPowerof2(int n){ //Here we calculate the power of 2 which is less than or equal to n
    int x =0;
    while((1<<x) <= n){
        x++;
    }
    return x-1;
}

int countBits(int n){
    if(n ==0) //base case
        return 0;
    int x = largestPowerof2(n);
    int setBitLargestPower = x * (1<<x-1); // this will calculate all the set bits for numbers less thank 2^x
    int msbBits = n - (1<<x) + 1; //this will calculate the msb bits for numbers from 2^x to n(inclusive)
    int restNum = n - (1<<x); // this gives the remaining numbers, after calculating their msb bits
    int ans = setBitLargestPower + msbBits + countBits(restNum); //As we calculate the msb bits separately we get new numbers for which we again call the countBits function

}

int main(){
    int n;
    cin>>n;
    cout<<"\nThe total no. of bits are: "<<countBits(n);
    return 0;
}
