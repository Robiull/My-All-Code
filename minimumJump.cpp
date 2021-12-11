/*
N = 10
X = 3
Output:
1
Explanation:
Stone alignment for N = 10 is as follows:
1, (2, 3), (4, 5), (6, 7), (8, 9), 10
To jump on X = 3, you only need one jump (since first stone jump will not be counted)
from India side, and 4 jumps from Srilanka side. So the minimum of 1 and 4 is 1.
*/
#include<bits/stdc++.h>
using namespacestd;
void findJumps(int N, int X){

    // Your code here
    int indx=X/2;
    int dest=N/2;
    int minV=min(indx,dest-indx);
    cout<<minV;
    cout << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long N,X;
        cin>>N>>X;
        findJumps(N,X);
    }
    return 0;
}
