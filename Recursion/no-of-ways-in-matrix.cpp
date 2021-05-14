#include<bits/stdc++.h>
using namespace std;

//this function returns the no. of ways in which we can reach the last element in a given (n x m) matrix from the first element
//you can only move to the right or down
int countWays(int n, int m)
{
    if(n==1 || m==1){ //base condition
        return 1;
    }
    return countWays(n, m-1) + countWays(n-1, m);
}

int main(){
    int n,m; // n represents rows, m represents columns of the matrix
    cin>>n>>m;
    int result = countWays(n, m);
    cout<<result;
    return 0;
}
