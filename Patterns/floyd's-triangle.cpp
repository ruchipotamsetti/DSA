#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    int var = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<var<<" ";
            var++;
        }
        cout<<endl;
    }
    return 0;
}
