//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A?csrf_token=f1a4c5361d3554132470c572447524a4
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n, k; cin>>n>>k;
    vector<ll>v(n);
    for(ll &i: v)cin>>i;
    ll sum=0,ans=0, i=0,j=0;
    while(j<n){
        sum+=v[j];
        if(sum<=k){
            ans=max(ans,j-i+1);
            j++;
        }
        if(sum>k){
            while(sum>k){
                sum-=v[i];
                i++;
            }
            if(sum<=k){
                ans=max(ans,j-i+1);
            }
            j++;
        }
    }
    cout<<ans;
    return 0;
}