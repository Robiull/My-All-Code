#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int mx=max(a,b);
        int mn=min(a,b);
        int x=n-((2*mx+1)+mn);
        if(x>=0){
            int sm=1;
            cout<<sm;
            for(int i=1;i<=n;i++){
                if(a>0){

                }
            }
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
