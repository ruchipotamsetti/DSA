#include<bits/stdc++.h>
using namespace std;

bool palindrome_number(int n)
{
    int digit = n % 10;
    int palindrome = digit;
    while(n / 10 != 0)
    {
        n = n / 10;
        digit = n % 10;
        palindrome = (palindrome * 10) + digit;
    }
    return n == palindrome;

}

int main(){
    int n;
    cin>>n;
    palindrome_number(n) ? printf("\nYES") : printf("\nNO");
    return 0;
}
