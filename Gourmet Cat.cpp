#include<bits/stdc++.h>
using namespace std;
int setValue[14]={2,0,2,1,0,0,1,2,0,2,1,0,0,1};
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int minValue=min(a/3,min(b/2,c/2));
    int totalDay=minValue*7;
    int arr[3]={};
    arr[0]=a-minValue*3;
    arr[1]=b-minValue*2;
    arr[2]=c-minValue*2;
    int cnt=0;
    for(int i=0;i<14;i++){
        int tot=0;
        arr[0]=a-minValue*3;
        arr[1]=b-minValue*2;
        arr[2]=c-minValue*2;
        for(int j=i;j<14;j++){
            if(arr[setValue[j]]>0){
                tot++;
                arr[setValue[j]]--;
            }
            else break;
        }
        if(tot>cnt)cnt=tot;
    }
    cout<<totalDay+cnt<<endl;
}
