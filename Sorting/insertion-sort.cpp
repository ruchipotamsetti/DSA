//Problem Statement: Sort elements of an array using insertion sort

#include<bits/stdc++.h>
using namespace std;

// the array is divided into two parts -sorted array and unsorted array
// the first element is picked from the unsorted array and compared with the each element of sorted array in reverse manner
// it is then inserted into sorted array when its right position is found in the sorted array

void insertionSort(int arr[], int n){ //insertion sort using two for loops
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int flag = 0;
        for(int j = i-1; j >= 0; j--){
            if(temp < arr[j]){
                arr[j+1] = arr[j];
            }
            if(temp >= arr[j]){
                flag = 1;
                arr[j+1] = temp;
                break;
            }
        }
        if(flag == 0){
            arr[0] = temp;
        }
        cout<<endl;
        for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    }

    cout<<"\nAfter Sorting: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort2(int arr[], int n){ // insertion sort using one for loop and one while loop
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        while(temp < arr[j] && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout<<"\nAfter Sorting: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    //insertionSort2(arr, n);
    return 0;
}
