/*
Problem statement: Swap two nos. without using third variable (or)
Swap two nos. using bitwise operator
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    cout<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"a: "<<a<<"\n"<<"b: "<<b;


    return 0;
}
