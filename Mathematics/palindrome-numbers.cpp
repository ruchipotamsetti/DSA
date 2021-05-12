#include<bits/stdc++.h>
using namespace std;

bool palindrome_number(int n)
{
    int original = n;
    int digit = n % 10;
    long palindrome = digit;
    while(n / 10 != 0)
    {
        n = n / 10;
        digit = n % 10;
        palindrome = (palindrome * 10) + digit;
    }
    cout<<palindrome;
    return original == palindrome;

}

int main(){
    long n;
    cin>>n;
    palindrome_number(n) ? printf("\nYES") : printf("\nNO");
    return 0;
}
