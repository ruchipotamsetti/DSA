/*
Problem statement: Find the no. of bits that have to be changed to convert a to b. (or)
Find Hamming distance between a and b.
(Hamming distance is the number of bit positions in which the two bits are different.)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<endl;

    int cnt = 0;
    int diffBit = a^b;
    while(diffBit != 0){
        diffBit = diffBit &(diffBit-1);
        cnt++;
    }
    cout<<"Hamming distance between a and b is: "<<cnt;
    return 0;
}
