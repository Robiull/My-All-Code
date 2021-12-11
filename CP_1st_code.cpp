#include<bits/stdc++.h>
using namespace std;
int main(){
    //make input and output more efficient:
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    string st;
    //at least one space or
    //newline between each element in the input
    cin>>a>>b>>st;
    //scanf and printf are bit faster
    scanf("%d%d",&a,&b);
    printf("%d%d\n",a,b)
    cout<<a<<" "<<b<<" "<<st;
    //"\n" works faster than endl
    //read a whole line from the input
    string x;
    getline(cin,x);
    //If the amount of data is unknown
    while(cin>>x){

    }
    //files are used for input and output.
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //int, which is a 32-bit
    //type with a value range of -2^31 ...2^31-1 or about -2*10^9 ...2*10^9
    ///the 64-bit type long long can be used. It has a value range of
    ///-2^63 ...2^63-1 or about -9*10^18 ...9*10^18.
    long long x=123456789123456789LL;
//    g++ compiler also provides a 128-bit type ///__int128_t
//with a value range of -2^127 ...2^127-1 or about -10^38 ...10^38
    __int128_t x=0;
    //problem in code
    int a=123456789;
    long long b=a*a;//long long b=(long long)a*a it is right
    printf("%d",b);
}
