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
    
    tc{
        int n, m; cin >> n >> m;
        vector<pair<int, int>> p(n);
        for(int i = 0; i < n; i++) cin >> p[i].first;
        for(int i = 0; i < n; i++) cin >> p[i].second;
        sort(p.begin(), p.end());
        ll cur = -1e11;
        set<pair<ll, ll>> se;
        for(int i = 0; i < n; i++){
            ll xx = p[i].first, rr = p[i].second;
            cur = max(cur, xx - rr);
            for(ll j = cur; j <= xx + rr; j++){
                ll y = double(sqrt(rr * rr - ( - xx) * (j - xx)));
                for(ll k = -y; k <= y; k++){
                    se.insert({j, k});
                }
            }
            cout << cur << endl;
            cur = xx + rr; 
        }
        cout << sz(se) << endl;
    }
    
    return 0;
}