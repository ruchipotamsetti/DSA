/*
Problem statement: Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit.
If there are 0 or more than 1 set bit the answer should be -1.
Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.

*/

#include<bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n){
    return n && !(n & n-1);
}

int findPosition(int n){
    if (!isPowerOf2(n)) //only powers of 2 have 1 set bit so check for if n is a power of 2 otherwise return -1
        return -1;
    int position = 1;
    while(n>1){
        n = n>>1; //right shifting the only set bit present in n and incrementing position
        position++;
    }
    return position;
}

int main(){
    int n;
    cin>>n;
    cout<<findPosition(n);
    return 0;
}
