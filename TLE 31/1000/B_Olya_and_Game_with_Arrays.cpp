#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n; cin >> n;
        vector<pair<int,int>> fs;
        int mn = INT_MAX;
        while(n--){
            int m; cin >> m;
            vector<int> v(m);
            for(int i = 0; i < m; i++) cin >> v[i];
            sort(v.begin(), v.end());
            fs.push_back({v[1], v[0]});
            mn = min(mn, v[0]);
        }
        sort(fs.rbegin(), fs.rend());
        ll ans = 0;
        for(auto i : fs){
            ans += i.first;
        }
        ans += mn;
        ans -= fs[(sz(fs)) - 1].first;
        cout << ans << endl;
    }
    
    return 0;
}