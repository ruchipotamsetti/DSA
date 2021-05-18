#include<bits/stdc++.h>
using namespace std;

void powerSet(string s, int i, string cur)
{
    if(i == s.length()){
        cout<<cur<<endl;
        return;
    }
    powerSet(s, i + 1, cur + s[i]);
    powerSet(s, i + 1, cur);
}

int main(){
    string s;
    cin>>s;
    powerSet(s, 0, ""); // prints th powerset of the given string
    return 0;
}
