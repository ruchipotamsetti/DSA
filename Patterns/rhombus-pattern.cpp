/*
eg.


          * * * * * *
        * * * * * *
      * * * * * *
    * * * * * *
  * * * * * *
* * * * * *

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
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
