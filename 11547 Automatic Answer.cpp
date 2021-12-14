#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int sm=5*((n*63)+7492)-498;

        int digit=sm%100;
        if(digit>0)cout<<digit/10<<endl;
        else cout<<(digit/10)*(-1)<<endl;

    }
}

