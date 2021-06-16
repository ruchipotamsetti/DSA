//Reverse the given array
//Time complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

int* reverseArray(int start, int last, int *arr ){
    if (start > last)
        return arr;

    int temp = arr[start];
    arr[start] = arr[last];
    arr[last] = temp;

    reverseArray(start + 1, last - 1, arr); // recursive call
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int *newArray = reverseArray(0, n-1, arr);
    for(int i = 0; i < n; i++){
        cout<<newArray[i]<<" ";
    }
    return 0;

}
