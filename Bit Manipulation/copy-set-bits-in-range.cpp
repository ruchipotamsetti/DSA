/*
Problem statement:Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32. Find the set bits of y in range [l, r] and set these bits in x also.

Example 1:

Input:
X = 44, Y = 3
L = 1,  R = 5
Output: 47
Explaination: presentation of 44 and 3 are
101100 and 11. So in the range 1 to 5 there
are two set bits. If those are set in 44
it will become 101111 = 47.

*/

#include<bits/stdc++.h>
using namespace std;

int setSetBit(int x, int y, int l, int r){
        // code here
        int i = l-1;
        while(i<r){
            if(y & (1<<i)){ //checking if the ith bit is set in y
                x = (x | (1<<i)); //if ith bit is set in y then setting it in x
            }
            i++;
        }
        return x;
    }

int main(){
    int x,y,l,r;
    cout<<"\nEnter x and y: ";
    cin>>x>>y;
    cout<<"\nEnter l and r: ";
    cin>>l>>r;
    cout<<setSetBit(x, y, l, r);
    return 0;
}
