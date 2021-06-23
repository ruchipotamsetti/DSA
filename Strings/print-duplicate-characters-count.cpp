//Write an efficient program to print all the duplicates and their counts in the input string

#include<bits\stdc++.h>
using namespace std;

void printDups(string S){
    int countChar[26]={0}; //intializing each element of the array to 0
    for(int i=0; i < S.size(); i++ ){ //traversing through each character in the string and increasing its count in countChar array
        countChar[S[i]-'a']++;
    }
    for(int i=0; i < 26; i++){ //traversing through countArray and printing the no. of duplicates of each character in the string
        string letter;
        if(countChar[i] > 1){
            letter = i + 'a';
            cout<<letter<<", count = "<<countChar[i]<<endl;
        }
    }
}

int main(){
    string S = "geeksforgeeks";
    printDups(S);
    return 0;
}
