#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        n-=2;
        m-=2;
        int cnt=(ceil(n/3.0))*(ceil(m/3.0));
        cout<<cnt<<endl;

    }
}
