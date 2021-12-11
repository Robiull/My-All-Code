/*#pragma GCC optimize("Ofast")
 #pragma GCC optimize ("unroll-loops")
 #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 #pragma comment(linker, "/stack:200000000")*/
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <deque>
#include <iterator>
#include <tuple>
#include <iomanip>
#include <valarray>
#include <limits>
#include <sstream>
#include <cassert>
#include <functional>
#include <numeric>
#define in insert
#define pb push_back
#define mp make_pair
#define int long long
#define fi first
#define double long double
#define se second
//#define endl '\n'
#define pii pair<int,int>
#define pdd pair<double,double>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 998244353
#define MAXN  11
#define all(x) x.begin(),x.end()
using namespace std;
/*using namespace __gnu_pbds;
 typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
 tree_order_statistics_node_update>
 ordered_set;*/
int spf[MAXN];
int fac[MAXN];
void sieve()//sieve
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
    for (int i=3; i*i<MAXN; i++)
    {
        if (spf[i]==i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j]=i;
        }
    }
}//sieve ends
map<int,int> getfactor(int a)//factor prime
{
    map<int,int> m;
    while(a>1)
    {
        m[spf[a]]++;
        a/=spf[a];
    }
    return m;
}//prime factor ends
int power(int x,int y,int p)
{
    int res = 1;
    x = x%p;
    if (x == 0||y < 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x)% p;
        y = y>>1;
        x = (x*x)%p;
    }
    return res;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int inverse(int a, int p)
{
    return power(a, p-2, p);
}
int ncr(int n, int r, int p)
{
    if(r>n)
        return 0;
    if (r==0||r==n)
        return 1;
    return (fac[n]*inverse(fac[r], p) % p *
            inverse(fac[n-r], p) % p) % p;
}
void solve()
{
    int n;
    cin>>n;
    int pos=0;
    int a[n+1];
    for(int i=1;i<n;i+=2)
    {
        cout<<"? 2 "<<i<<" "<<i+1<<" "<<1<<endl;
        int ans=0;
        cin>>ans;
        if(ans==1)
        {
            pos=i;
        }
        else if(ans==2)
        {
            cout<<"? 2 "<<i+1<<" "<<i<<" "<<1<<endl;
            cin>>ans;
            if(ans==1)
            {
                pos=i+1;
                break;
            }
        }
    }
    if(pos==0)
        pos=n;
    for(int i=1;i<=n;i++)
    {
        if(pos==i)
        {
            a[i]=1;
        }
        else{
            cout<<"? 1 "<<pos<<" "<<i<<" "<<n-1<<endl;
            int tempo;
            cin>>tempo;
            a[i]=tempo;
        }
    }
    cout<<"! ";
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
signed main()
{
    fast
    int test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
