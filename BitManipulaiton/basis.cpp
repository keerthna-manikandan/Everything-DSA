/*
1. You are given a number n.
2. Print the number produced on setting its i-th bit.
3. Print the number produced on unsetting its j-th bit.
4. Print the number produced on toggling its k-th bit.
5. Also, Check if its m-th bit is on or off. Print 'true' if it is on, otherwise print 'false'.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,m,n;
    cin>>n>>i>>j>>k>>m;
    
    int x=1;x=x<<i;
    x=x|n;
    cout<<x;
    x=1;x=~(x<<j);x=n&x;
    cout<<x;
    x=1;x=x<<k;
    x=x^n;
    cout<<x;
    x=1;x=x<<m;
    if(n&x!=0)cout<<"true";
    else cout<<"false";
}
