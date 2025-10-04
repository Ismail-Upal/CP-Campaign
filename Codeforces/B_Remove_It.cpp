//https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
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
    vector<ll>v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x!=k)v.push_back(x);
    }
    for(ll &i:v)cout<<i<<" ";
    return 0;
}