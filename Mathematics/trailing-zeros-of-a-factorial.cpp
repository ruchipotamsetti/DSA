#include<bits/stdc++.h>
using namespace std;

int trailing_zeros(int n)
{
    int result = 0;
    for(int i = 5; i <= n; i = i*5)
    {
        result = result + n/i;
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    int result = trailing_zeros(n);
    cout<<endl;
    cout<<result;
    return 0;
}

