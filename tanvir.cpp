#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,l,r;
    cin>>n>>h>>l>>r;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if((arr[i]>=l&&arr[i]<=r)||(arr[i])>=l-1&&arr[i]<=r-1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
