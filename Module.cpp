#include<bits/stdc++.h>
using namespace std;
int main(){

    long long x = 1,m=11,n=5;
    for (int i = 2; i <= n; i++) {
        x = (x*i)%m;
        cout<<x<<" ";
    }
    cout<<endl;
    cout << x%m << "\n";
}

