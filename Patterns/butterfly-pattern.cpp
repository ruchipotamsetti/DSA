#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i = 0; i<n; i++){
        for(int j=0; j<2*n; j++){
            if(j<=i || j>=(2*n-1-i))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
        for(int j=0; j<2*n; j++){
            if(j<=(n-i-1) || j>=(i+n))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
