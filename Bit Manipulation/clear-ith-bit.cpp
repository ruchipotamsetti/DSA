/*
Problem statement: Clear(change it to 0 if it is 1) ith bit of given number. The position of LSB(or last bit) is 0, second last bit is 1 and so on.


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Enter bit no, you want to clear: ";
    cin>>i;
    cout<<endl;

    cout<<"The new number after clearing the bit is: "<<(n & ~(1<<i));

    return 0;
}
