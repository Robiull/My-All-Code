#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(make_pair(x,i));
    }
    string s;
    cin>>s;
    sort(vec.begin(),vec.end());
    stack<int>stk;
    int i=0;
    for(int k=0;k<2*n;k++){
        if(s[k]=='0'){
            stk.push(vec[i].second);
            cout<<vec[i].second+1<<" ";
            i++;
        }
        else{
            int pp=stk.top();
            stk.pop();
            cout<<pp+1<<" ";
        }
    }
}
