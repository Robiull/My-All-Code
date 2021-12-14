#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<ll>vec;
        int a,b,c;
        for(int i=0;i<7;i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        a=vec[0];
        b=vec[1];
        for(int i=2;i<6;i++){
            if(vec[6]==(a+b+vec[i])){
                c=vec[i];
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
