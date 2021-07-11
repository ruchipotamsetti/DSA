//Problem statement: Sorting an array using bubble sort.

#include<bits/stdc++.h>
using namespace std;

void swapElements(int arr[], int a, int b){ //to swap elements of the array
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubbleSort(int arr[], int n){ //sorting array by comparing adjacent elements of an array and swapping them if necessary

    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j=0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swapElements(arr, j, j+1);
                swapped = true; //set swapped to true if there is at least one swap in any iteration
            }
        }
        if(!swapped){ // the array is already sorted if there are no swaps in any iteration, so break the loop
            break;
        }
        cout<<endl;
        cout<<"Iteration: "<<i<<endl;
        for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<"After Sorting: ";
    for(int i = 0; i < n; i++){
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
    //n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}
