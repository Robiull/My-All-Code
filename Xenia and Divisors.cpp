#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    faster;
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    vector<int>res;
    int x=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        if(vec[i]!=-1){
            a=vec[i];
            bool flag=false;
            for(int j=i+1;j<n;j++){
                if(!flag&&vec[j]!=-1&&vec[j]%a==0&&vec[j]>a){
                    b=vec[j];
                    flag=true;
                    vec[j]=-1;
                }
                else if(flag&&vec[j]!=-1&&vec[j]%b==0&&vec[j]>b){
                    c=vec[j];
                    vec[j]=-1;
                    x++;
                    res.push_back(a);
                    res.push_back(b);
                    res.push_back(c);
                    break;
                }
            }
        }
    }
    if(x==(n/3)){
        for(int i=0;i<res.size();i++){
           cout<<res[i]<<" ";
           if((i+1)%3==0)cout<<endl;
        }

    }
    else cout<<"-1"<<endl;
}
