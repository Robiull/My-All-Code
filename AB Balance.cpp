#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sz=s.size();
        int cntA=0,cntB=0;
        for(int i=0;i<sz;i++){
            if(s[i]=='a'&&s[i+1]=='b')cntA++;
            if(s[i]=='b'&&s[i+1]=='a')cntB++;
        }
        if(cntA>cntB){
            int x=cntA-cntB;
            for(int i=0;i<sz-1;i++){
                if(x==0)break;
                s[i]='b';
                x--;

            }
        }
        else if(cntB>cntA){
            int x=cntB-cntA;
            for(int i=0;i<sz-1;i++){
                if(x==0)break;
                s[i]='a';
                x--;
            }
        }
        cout<<s<<endl;

    }
}
