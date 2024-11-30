
#include<bits/stdc++.h>
using namespace std;
long long n;
long long solve(long long n){
    if(n==1) return 1;
    if(n&1) return solve(3*n+1)+1;
    else return solve(n/2)+1;
}
    
int main()
{
    cin>>n;
    cout<<solve(n);
    return 0;
}