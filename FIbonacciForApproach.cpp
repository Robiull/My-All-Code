//geeksforgeeks :https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1#
// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
int M=1000000007;
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        long long int x=0;
        long long int y=1;
        bool flag=true;
        for(int i=1;i<n;i++){
            if(flag){
                x=x+y;
                flag=false;
                if(x>M)x=x%M;
            }
            else{
                y=x+y;
                flag=true;
                if(y>M)y=y%M;
            }
        }
        if(n%2==0)return x;
        else return y;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
