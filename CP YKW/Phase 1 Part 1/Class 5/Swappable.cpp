#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    int n ; cin>>n;
    map<int,int>mp;
    ll ans=0;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        ans += i-mp[x];
        mp[x]++;
    }
    cout<<ans;
    return 0;
}