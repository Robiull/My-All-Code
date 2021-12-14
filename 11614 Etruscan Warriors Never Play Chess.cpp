#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int x=sqrt(1+(8*n));
        cout<<(x-1)/2<<endl;
    }
}
