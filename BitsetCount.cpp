#include<bits/stdc++.h>
using namespace std;

int BitSetCount(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        int x=i;
        while(x){
            cnt+=x&1;
            x>>=1;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<BitSetCount(n);
}
