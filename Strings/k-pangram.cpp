//Given a string str and an integer K, find whether the string can be changed into a pangram after at most k operations.
//A pangram is a sentence containing every letter in the english alphabet.
//A single operation can be used to swap an existing alphabetic character with any other alphabetic character.//

#include<bits/stdc++.h>
using namespace std;

bool kPangram(string str, int k){
    set<char>s;
    int cnt = 0; //to count no. of letters in given string

    for(int i = 0; i<str.length(); i++){
        if(str[i] >= 'a' & str[i]<= 'z'){
            s.insert(str[i]); //insert only letters not in set
            cnt++; //increment if the char is letter
        }
    }

    if(cnt >= 26 & 26-s.size() <= k) //check if the string is greater or equal in length with 26 and no. of letters that need to be changed are less than or equal to k
        return true;
    return false;

}

int main(){
    int t,k;
    cin>>t;
    string str;
    while(t--){
        cin.ignore();
        getline(cin, str);
        cin>>k;
        cout<<kPangram(str, k)<<endl;
    }
    return 0;
}
