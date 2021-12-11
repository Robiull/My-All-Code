#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    //output:garbage value

    cout<<endl;
    int b[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout<<b[i]<<" ";
    }
    //output:1 2 3

    cout<<endl;
    int c[3]={1,1,1};
    for(int i=0;i<3;i++){
        cout<<c[i]<<" ";
    }
    //output:1 1 1

    cout<<endl;
    int d[3]={};
    for(int i=0;i<3;i++){
        cout<<d[i]<<" ";
    }
    //output:0 0 0

    cout<<endl;
    int e[3]={0};
    for(int i=0;i<3;i++){
        cout<<e[i]<<" ";
    }
    //output:0 0 0

    cout<<endl;
    int f[3]={1};
    for(int i=0;i<3;i++){
        cout<<f[i]<<" ";
    }
    //output:1 0 0

    cout<<endl;

    // int a[3]={[0...1]=3}; this kind of declaration has been obsolete since GCC 2.5
    int g[3]={[0...1]=3};
    for(int i=0;i<3;i++){
        cout<<g[i]<<" ";
    }
    //output:3 3 0

    cout<<endl;
    int h[]={[0...1]=3};
    for(int i=0;i<3;i++){
        cout<<h[i]<<" ";
    }
    //output:3 3

    int *i;
    int* j;
    int * k;
    int*l;
}
