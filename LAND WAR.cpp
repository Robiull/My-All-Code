/*
if we are take one samll and one large value
    each time

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[100];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    int j=t-1;
    int i=0;
    int k=0;
    int rifat=0;
    int karim=0;
    while(j!=0){
        rifat[i++]+=arr[j--];
        karim[k++]+=arr[j--];
    }
    cout<<i<<endl;

}
