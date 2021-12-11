#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vec.push_back(s);
    }

    string t;
    cin>>t;
    int tln=t.size();
    int arr[130]={0};
    for(int i=0;i<tln;i++){
        int r=int(t[i]);
        if(arr[r]==0)arr[r]++;
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        string st=vec[i];
        int ln=st.size();
        int x=0;
        bool found=false;
        for(int j=0;j<ln;j++){
            for(int k=0;k<tln;k++){
                if(st[j]==t[k]){
                    x++;
                    int y=int(st[j]);
                    arr[y]++;
                    break;
                }
            }
            if(x==ln){
                found=true;
                break;
            }
        }
        if(!found){
            flag=true;
            break;
        }
    }
    for(int i=97;i<=122;i++){
        if(arr[i]==1){
            flag=true;
            break;
        }
    }

    if(flag)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
