
#include<bits/stdc++.h>
using namespace std;
long long n, x;
long long a[100001];
bool ok=false;

void solve(long long i, long long sum){
    if(i==n){
        if(sum==x)ok=true;
        return;
    }
    solve(i+1, sum+a[i]);
    solve(i+1, sum-a[i]);
}
int main()
{
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    solve(1, a[0]);
    if(ok)cout<<"YES";
    else cout<<"NO";
    return 0;
}