//https://codeforces.com/contest/1992/problem/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v(k);
        for(ll &i:v)cin>>i;
        sort(v.begin(), v.end(), greater<int>());
    
        ll ans=0;
        for(ll i=1;i<k;i++){
            if(v[i]!=1){
                ans+=(v[i]-1);
                ans+=v[i];
            }
            else if(v[i]==1){
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}
