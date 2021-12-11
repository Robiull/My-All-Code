#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        bool flag=false;
        for(int i=1;i<n-1;i++){
            if(vec[n-1]-vec[0]>=vec[i]){
                cout<<"1 "<<i+1<<" "<<n<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)cout<<"-1"<<endl;
    }
}
