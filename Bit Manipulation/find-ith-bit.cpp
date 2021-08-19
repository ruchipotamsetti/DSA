/*
Problem statement: Find(0 or 1) ith bit of given number. The position of LSB(or last bit) is 0, second last bit is 1 and so on.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Enter bit no, you want to find: ";
    cin>>i;
    cout<<endl;
    if((n & (1 << i)) != 0)
        cout<<i<<" bit is: "<<1;
    else
        cout<<i<<" bit is: "<<0;

    return 0;
}
