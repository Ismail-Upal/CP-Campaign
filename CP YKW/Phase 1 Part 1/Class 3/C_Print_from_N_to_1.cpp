 
#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0) return;
    cout<<n;
    if(n>1)cout<<" ";
    solve(n-1);
}
int main()
{
    
    int n; cin>>n;
    solve(n);
    return 0;
}