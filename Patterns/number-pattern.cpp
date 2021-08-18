/*
eg.

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
1 2 3 4 5 6

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<2*n; j++){
            if(j<n-1-i)
                cout<<" ";
        }
        for(int j=0; j<=i; j++){
                cout<<j+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}
