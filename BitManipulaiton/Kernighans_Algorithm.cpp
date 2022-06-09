/*
1. You are given a number n.
2. You have to count the number of set bits in the given number.
  */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n!=0)
    {
        int rsb=n&-n;
        n = n-rsb;
        c++;
    }
    cout<<c;
}
