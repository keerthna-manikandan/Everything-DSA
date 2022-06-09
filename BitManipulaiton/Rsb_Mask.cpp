/*
1. You are given a number n.
2. You have to print the right-most set bit mask.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n = n&-n;
    cout<<n;
}
