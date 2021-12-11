#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            int indx=(int)(s[i]-'A');
            indx='Z'-indx;
            ans+=(char)indx;
        }
        else if(s[i]>='a'&&s[i]<='z'){
            int indx=(int)(s[i]-'a');
            indx='z'-indx;
            ans+=(char)indx;
        }
    }
    cout<<ans;
}
