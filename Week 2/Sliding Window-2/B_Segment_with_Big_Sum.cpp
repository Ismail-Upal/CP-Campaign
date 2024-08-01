//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n,k; cin>>n>>k;
    vector<ll>v(n);
    for(ll &i:v)cin>>i;
    ll sum=0, ans=INT_MAX, i=0,j=0;
    
    while(j<n){
        sum+=v[j];
        if(sum<k){
            j++;
        }
        if(sum>=k){
            while(sum>=k){
                ans=min(ans,j-i+1);
                sum-=v[i];
                i++;
            }
            if(sum>=k)ans=min(ans,j-i+1);
            j++;
        }
    }
    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
    return 0;
}