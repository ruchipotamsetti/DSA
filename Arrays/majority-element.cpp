//Find the element from the given array of N elements, which is present more than N/2 times.

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int *a, int n)// Moore's Voting Algorithm
//returns the majority element if it exists else returns 0
{
    int ansIndex = 0;
    int maxCount = 1;
    for(int i = 1; i<n; i++){
        if(a[i] == a[ansIndex]){
            maxCount++;
        }
        else{
            maxCount--;
        }
        if(maxCount==0){
            ansIndex = i;
            maxCount = 1;
        }

    }
    int cnt=0;
    for(int i=0; i<n;i++){       //iterating through the array and checking if the index is correct
        if(a[ansIndex] == a[i]){
            cnt++;
        }
    }
    if(cnt > n/2){
        return a[ansIndex];
    }
    else
        return 0;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int result = majorityElement(a, n);
    cout<<result;
    return 0;
}

