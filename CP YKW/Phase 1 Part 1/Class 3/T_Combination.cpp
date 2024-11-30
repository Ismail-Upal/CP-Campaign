
#include<bits/stdc++.h>
using namespace std;
int n, r;
int solve(int n, int r){
    if(n<r or r<0 or n<0)return 0;
    if(n==0)return 1;
    return solve(n-1, r) + solve(n-1, r-1);
}
    
int main()
{
    cin>>n>>r;
    cout<<solve(n, r);
    return 0;
}