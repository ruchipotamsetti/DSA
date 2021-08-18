/*
eg.
n=4

      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;


    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
    //for first half pattern
        for(int j = 0; j<2*i + 1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--){
        //for space
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        //for second half pattern
        for(int j = 0; j<2*i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
