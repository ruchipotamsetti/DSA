/*
*Persistent Coding round question*

John misses his bus and has to walk all his way from home to school. The distance between his school and home is D units. He starts his journey with an initial energy of K units. His energy decreases by 1 unit for every unit of distance walked. On his way to school, there are N juice stalls. Each stall has a specific amount of juice in liters. His energy increases by 1 unit for every liter of juice he consumes. Note that in order to keep him walking he should have non-zero energy.
Write an algorithm to help John figure out the minimum number of juice stalls at which he should stop to: successfully reach the school. In case he can't reach the school, the output will be -1.

Question:
The first line of the input consists of an integer -numStalls, representing the number of juice stalls (N). The second line consists of N space separated integers - disto, dist1,....,distN-1, representing the distance of the ith stall from John's home.
The third line consists of an integer nums, representing the number of stalls for available Juices (M is always equal to N).
The fourth line consists of M space separated integers-lit0, lit1,.....,litM-1 representing litres of juice available at the ith stall.
The fifth line consists of an integer distance, representing the distance of the school from John's home (D).
The last line consists of an integer initEnergy, representing the initial energy of John (K).

Output:
Print an integer representing the minimum number of juice stalls at which John should stop to reach the school successfully.

Example:
Input:
3
5 7 10
3
2 3 5
15
5

Output:
3

Explanation:

The Johan's initial energy is 5 units, with which he can reach the first juice stalls. At this point, his energy is 0. He can get 2 liters of juice to get 2 unit of energy.
With this 2 units of energy, he can move to the second juice stalls.
Now his energy becomes 0. He get 3 liters of juice from this stalls. With 3 units of energy, he can reach to the third stalls.
Here his energy is zero. He can get 5 units of energy from this stalls. This energy is enough to reach the school.
Johan has to stop 3 stalls.
*/

#include <bits/stdc++.h>
using namespace std;

int stalls(int n, vector<int>dist, int m, vector<int>lit, int distance, int initEnergy){

    if(initEnergy >= distance)
        return 0;

    if(initEnergy < dist[0])
        return -1;
    int covered = 0;
    int curEnergy = initEnergy;
    int i=0, stall = 0;
    int actualDist = 0;
    while(i<n){
        actualDist = dist[i]-covered;
        curEnergy -= actualDist;
        curEnergy += lit[i];
        covered += actualDist;
        stall++;
        i++;
        if(curEnergy >= distance-covered)
            return stall;
    }
    if(curEnergy < distance-covered)
        return -1;
}

int main(){
    int n,m;
    vector<int>dist;
    vector<int>lit;
    int distance;
    int initEnergy;
    cin>>n;
    int a, i;
    for(i=0;i<n;i++){
        cin>>a;
        dist.push_back(a);
    }
    cin>>m;
    for(i=0;i<n;i++){
        cin>>a;
        lit.push_back(a);
    }
    cin>>distance;
    cin>>initEnergy;
    int result = stalls(n, dist, m, lit, distance, initEnergy);
    cout<<result;
    return 0;
}
