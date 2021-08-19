/*
Problem statement: Check if no. is ever or odd using bit masking.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n & 1 != 0){
        cout<<"Odd"<<endl;
    }
    else{
       cout<<"Even"<<endl;
    }
    return 0;
}
