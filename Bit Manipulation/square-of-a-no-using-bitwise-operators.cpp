/*
Problem statement: Given an integer n, calculate the square of a number without using *, / and pow().

Explanation:
If n is even, it can be written as
  n = 2*x
  n2 = (2*x)2 = 4*x2
If n is odd, it can be written as
  n = 2*x + 1
  n2 = (2*x + 1)2 = 4*x2 + 4*x + 1

  Note: n >> 1 (Right shift) means dividing n by 2^1, similarly n << 2 means dividing n by 2^2 and so on..
        n << 1 (Left shift) means multiplying n by 2^1, similarly n>>2 means multiplying n by 2^2 and so on..
*/

#include<bits/stdc++.h>
using namespace std;

int square(int n){
    if(n == 0) //base case
        return 0;

    if(n < 0) //handling negative number, making it positive
        n = -n;

    int x = n>>1; //diving n by 2 using right shift

    if(n & 1) //if n is odd
        return ((square(x) << 2) + (x << 2) + 1);
    else //if n is even
        return (square(x) << 2);
}

int main(){
    int n;
    cin>>n;
    cout<<"\nSquare of "<<n<<" is: "<<square(n);
    return 0;
}
