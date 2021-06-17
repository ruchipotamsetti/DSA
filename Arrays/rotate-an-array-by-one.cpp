#include<bits/stdc++.h>
using namespace std;

void rotatearray(int arr[], int n)
{
    int i = 0, j = n-1;
    int temp;
    while(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
    }

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotatearray(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
