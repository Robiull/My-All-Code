#include <bits/stdc++.h>
using namespace std;

#define M 2^1000

bool prime[M];

void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
int main()
{
    SieveOfEratosthenes(M);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int j=2;
        for(int i=0;i<n;i++){
            while(1){
                if(prime[j]){
                    cout<<j<<" ";
                    j++;
                    break;
                }
                else j++;
            }
        }
    }
    return 0;
}
