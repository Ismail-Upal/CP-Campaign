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
    map<string, ll>mp;
    int n,m ;cin>>n>>m;
    while(n--){
        string s; ll n; cin>>s>>n;
        mp[s]=n;
    }
    while(m--){
        ll ans=0;
        string w;
        while(cin>>w){
            if(w ==".")break;
            if(mp.find(w)!=mp.end())ans+=mp[w]; 
        }
        cout<<ans<<endl;
    }
    return 0;
}