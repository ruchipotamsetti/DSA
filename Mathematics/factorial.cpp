#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for(int i = 2; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int result = factorial(n);
    cout<<endl;
    cout<<result;
    return 0;
}
