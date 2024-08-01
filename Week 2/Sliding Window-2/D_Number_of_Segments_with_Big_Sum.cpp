//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
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

    for(ll &i: v)cin>>i;
    ll sum=0, ans=0, i=0, j=0;
    while( i<n  && j<n){
        sum+=v[j];
        if(sum<k && j<n){
            j++;
        }
        if(sum>=k){
            while(sum>=k){
                ans+=(n-j);
                sum-=v[i];
                i++;
            }
            if(j<n)j++;
        }
    }
    
    cout<<ans;
    return 0;
}