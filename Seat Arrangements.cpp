#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<char>>vec;
    int cnt=0;
    for(int i=0;i<n;i++){
            vector<char>v1;
        for(int j=0;j<m;j++){
            char ch;
            cin>>ch;
            v1.push_back(ch);
        }
        vec.push_back(v1);
    }
    for(int i=0;i<n;i++){
        int totcol=0;
        for(int j=0;j<m;j++){
            if(vec[i][j]=='.'){
                totcol++;
                if(totcol>=k){
                    cnt++;
                }
            }
            else{
                totcol=0;
            }
        }
    }
    if(n==1||k==1){
        cout<<cnt<<endl;
        return 0;
    }
    if(m==1){
        cnt=0;
    }
    for(int i=0;i<m;i++){
        int totrow=0;
        for(int j=0;j<n;j++){
            if(vec[j][i]=='.'){
                totrow++;
                if(totrow>=k){
                    cnt++;
                }
            }
            else{
                totrow=0;
            }
        }
    }


    cout<<cnt<<endl;

}
