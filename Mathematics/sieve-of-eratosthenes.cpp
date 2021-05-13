#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(int n) //tells us which nos. are prime in a given range
{
    vector<bool>isPrime;
    isPrime.assign(n + 1, true); //assign new values to the vector elements by replacing old ones. It modifies size of vector if necessary.
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i*i <= n; i++) //looping till i = n^(1/2)
    {
        for(int j = i*2; j <= n; j += i) //assigning false to multiples of i as it is not a prime no.
        {
            isPrime[j] = false;
        }
    }
    for(int i = 0; i <= n; i++ )
    {
        cout<<i<<" "<<isPrime[i]<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    sieveOfEratosthenes(n);
    return 0;
}
