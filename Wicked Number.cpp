#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,d;
    printf("Enter no\n");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        c++;
        n=n/10;
        cout<<d<<" "<<n<<endl;
    }
    printf("No of digits=>%d\n",c);
}
