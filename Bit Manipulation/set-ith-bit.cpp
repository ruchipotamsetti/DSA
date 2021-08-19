/*
Problem statement: Set(change it to 1 if it is 0) ith bit of given number. The position of LSB(or last bit) is 0, second last bit is 1 and so on.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Enter bit no, you want to set: ";
    cin>>i;
    cout<<endl;

    cout<<"The new number after setting the bit is: "<<((1<<i)|n);

    return 0;
}
