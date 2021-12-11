#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long sum=1;
        long long tm=0;
        while(sum<n){
            if(sum<=k){
                sum=(sum+sum);
                tm++;
            }
            else{
                int x;
                long long sm=n-sum;
                if(sm%k==0)tm+=sm/k;
                else tm+=sm/k+1;
                break;
            }
        }
        cout<<tm<<endl;
    }
}
