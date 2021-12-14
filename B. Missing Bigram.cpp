#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>vec;
        bool flag=false;
        ll temp=0;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x==temp)flag=true;
            temp=x;
            vec.push_back(x);
        }
        if(flag)cout<<"0"<<endl;
        else if(n==2)cout<<vec[1]<<endl;
        else{
            ll digit=0;
            for(int i=0;i<n;i++){
                int div=0;
                for(int j=0;j<n;j++){
                    if(vec[j]%vec[i]==0){
                        div++;
                    }
                }
                if(div<n&&div>1){
                    digit=vec[i];
                    break;
                }
            }
            cout<<digit<<endl;
        }

    }
}
