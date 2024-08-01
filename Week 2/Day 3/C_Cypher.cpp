//https://codeforces.com/problemset/problem/1703/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll>v(n);
        for(ll &i:v)cin>>i;
        for(ll i=0;i<n;i++){
            ll m; cin>>m;
            string s; cin>>s;
            for(ll j=0;j<m;j++){
                if(s[j]=='D'){
                    if(v[i]==9)v[i]=0;
                    else v[i]++;
                }
                if(s[j]=='U'){
                    if(v[i]==0)v[i]=9;
                    else v[i]--;
                }
            }
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}