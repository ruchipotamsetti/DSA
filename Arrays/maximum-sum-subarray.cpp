//Find the greatest possible sum of a subarray of the given array
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int *a, int n){ //Iterating through each element and adding it to the sum variable (finding sum of that subarray).
                                //Discarding that subarray if sum is -ve.
                                //Kaden's Algorithm
    int curSum = 0;
    int maxSum = 0;
    for(int i = 0; i < n; i++){
        curSum = curSum + a[i];
        if(curSum > maxSum){
            maxSum = curSum;
        }
        if(curSum < 0){ //if curSum is negative discard that subarray and set curSum = 0
            curSum = 0;
        }

    }
    return maxSum;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int result = maxSubarray(a, n);
    cout<<result;
    return 0;
}
