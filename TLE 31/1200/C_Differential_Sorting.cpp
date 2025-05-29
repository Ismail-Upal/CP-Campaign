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
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        if(v[n - 2] > v[n - 1]){
            cout << - 1 << endl;
            continue;
        }
        ll m = 0;
        vector<pair<ll, pair<ll, ll>>> ans;

        for(ll i = n - 3; i >= 0; i--){
            ll d = v[i + 1] - v[n - 1];
            if(v[i] > d){
                v[i] = d;
                ans.push_back({i + 1, {i + 2, n}});
                m++;
            }
        }

        if(!is_sorted(v.begin(), v.end())){
            cout << -1 << endl;
            continue;
        }

        cout << m << endl;
        for(auto i : ans){
            auto j = i.second;
            cout << i.first << " " << j.first << " " << j.second << endl;
        }
    }
    
    return 0;
}