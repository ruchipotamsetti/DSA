#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b)
{
    if (b == 0)
        return a;
    return findGcd(b, a%b); //recursive function executing Euclid's thm

}

int main(){
    int a,b;
    cin>>a>>b;
    int result = findGcd(a, b); //prints GCD
    cout<<result;
    return 0;
}
