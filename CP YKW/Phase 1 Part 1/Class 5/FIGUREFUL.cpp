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
    map<pair<int,int>, string> mp;
    tc{
        int x, y;string s; cin>>x>>y>>s;
        mp[{x,y}]=s;
    }
    int n; cin >> n;
    while(n--){
        int x, y; cin>>x>>y;
        cout<<mp[{x,y}]<<endl;
    }
    return 0;
}