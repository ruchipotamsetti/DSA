//Find the maximum and minimum element in the given array
//Time complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

// structure is used to return
// two values from minMax()
struct Pair{
    int mini;
    int maxi;
};

struct Pair findMinMax(int low, int high, int arr[] ){
    struct Pair minimax;

    //If there is only one element
    if(low == high){
        minimax.mini = arr[low];
        minimax.maxi = arr[low];
        return minimax;
        }

    //If there are two elements
    if(low == high - 1){
        if(arr[low] > arr[high]){
            minimax.maxi = arr[low];
            minimax.mini = arr[high];
        }
        else{
            minimax.maxi = arr[high];
            minimax.mini = arr[low];
        }
        return minimax;
    }

    //if there are more than two elements
    int mid = (low + high)/2;
    struct Pair mml = findMinMax(low, mid, arr);
    struct Pair mmr = findMinMax(mid + 1, high, arr);

    //Compare minimum of 2 parts
    if(mml.mini < mmr.mini){
        minimax.mini = mml.mini;
    }
    else
       minimax.mini = mmr.mini;

    //Compare maximum of two parts
    if(mml.maxi < mmr.maxi){
        minimax.maxi = mmr.maxi;
    }
    else
       minimax.maxi = mml.maxi;

    return minimax;

}


int main(){
    int arr[] = {13, 23, 56, 21, 1, 61, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Pair mm = findMinMax(0, n-1, arr);
    cout<<"Maximum: "<<mm.maxi<<endl;
    cout<<"Minimum: "<<mm.mini<<endl;
    return 0;

}

