/*
eg.
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;


    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            cout<<"  ";
        }
        for(int j=n-1-i; j<=n-1; j++){
            cout<<n-j<<" ";
        }
        for(int j=n; j<i+n; j++){
            if(i==0)
                continue;
            cout<<j-n+2<<" ";
        }
        cout<<endl;

    }
    return 0;
}
