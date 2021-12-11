#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    long long int ans=0;
    for(int i=1;i<=n;i++){
        int n=i;
        int digit=0;
        while(n){
            n/=10;
            digit++;
        }
        int revnum=0;
        n=i;
        while(n){
            revnum=revnum*10+(n%10);
            n/=10;
        }
        //cout<<"ren"<<revnum<<endl;
        ans+=(i*pow(10,digit)+revnum);
        //cout<<ans;
    }
    cout<<ans%k<<endl;

}
