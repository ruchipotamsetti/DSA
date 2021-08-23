/*
Problem statement:Check if given no. is a power of 2.

*/

#include<bits/stdc++.h>
using namespace std;


bool isPowerOf2(int n){    //if n is a power of 2 then n & n-1 = 0
        return (n && !(n & (n-1)));
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<isPowerOf2(n);
    return 0;
}
