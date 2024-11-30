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
    map<string, int>mp;
    tc{
        int q; cin>>q;
        if(q==1){
            string n; int m; cin >> n >> m;
            mp[n]+=m;
        }
        else if(q==2){
            string n; cin >> n;
            mp.erase(n);
        }
        else {
            string n; cin >> n;
            if(mp.find(n)!=mp.end())cout<<mp[n]<<endl;
            else cout<<0<<endl;
        }
    }
 
    return 0;
}