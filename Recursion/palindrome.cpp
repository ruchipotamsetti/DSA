#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r)
{
    if(l >= r){ // base case
        return true;
    }
    if(s[l] != s[r]){ // condition for not a palindrome
        return false;
    }
    return isPalindrome(s, l + 1, r - 1); // recursive call
}

int main(){
    string s;
    cin>>s;
    isPalindrome(s, 0, s.length() - 1) ? printf("\nTrue") : printf("\nFalse"); // print True if palindrome otherwise False
    return 0;
}
