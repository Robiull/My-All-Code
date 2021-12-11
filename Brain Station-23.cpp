/*
at first sort and check every posible solution
complexity:O(n^3)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[8]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]++;
    }
    if((arr[1]==arr[2]+arr[3])&& arr[1]==(arr[4]+arr[6])&&arr[1]>0&&arr[6]>=arr[3]&&arr[2]>=arr[4]&&arr[5]==0&&arr[7]==0){
       for(int i=0;i<arr[1];i++){
            if(arr[2]>0&&arr[4]>0){
                cout<<"1 2 4"<<endl;
                arr[2]--;
                arr[4]--;
                continue;
            }
            if(arr[2]>0&&arr[6]>0){
                cout<<"1 2 6"<<endl;
                arr[2]--;
                arr[6]--;
                continue;
            }
            if(arr[3]>0&&arr[6]>0){
                cout<<"1 3 6"<<endl;
                arr[3]--;
                arr[6]--;
                continue;
            }

       }

    }
    else cout<<"-1"<<endl;
}
