#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    float p,t,a,q;
    cin>>p>>t>>a>>q;
    int n;
    while(p<=q){
        float sum=p*(t/100);
        p=p+sum+a;
        n++;
    }
    cout<<n<<endl;

}
