#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n; cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    vector<pair<char, ll>> v;
    for(int i = 0; i < n - 1; i++){
        if(p[i] < p[i + 1]){
            if(v.empty() or v.back().first == '>') v.push_back({'<', 1});
            else v.back().second++;
        }
        else{
            if(v.empty() or v.back().first == '<') v.push_back({'>', 1});
            else v.back().second ++;
        }
    }
    int sz = size(v);
    for(auto i : v) cout << i.first << " " << i.second << endl;
    ll ans = 0;
    for(int i = 1; i < sz - 1; i++){
        if(v[i].first == '>') ans += v[i - 1].second * v[i + 1].second;
    }
    cout << ans << endl;

    
    return 0;
}