#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int Msum=0;
    int out=0;
    for(int i=n-1;i>=0;i--){
        Msum+=vec[i];
        int Lsum=0;
        for(int j=0;j<i;j++){
            Lsum+=vec[j];
        }
        if(Msum>Lsum){
            out=n-i;
            break;
        }
    }
    cout<<out<<endl;
}
