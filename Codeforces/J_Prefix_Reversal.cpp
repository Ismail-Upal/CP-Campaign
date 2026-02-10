#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n + 1), real(n + 2, 0);
        ll tot = 0;
        for(ll i = 1; i <= n; i++){
            cin >> v[i];
            tot += v[i] * i;
        }

        ll tmp = 0;
        for(ll i = 1; i <= n; i++){
            real[i] = tot - tmp;
            tmp += v[i] * i;
        }
        vector<pair<ll, ll>> ans;
        vector<ll> add(n + 1, 0);
        ll sum = 0;
        for(ll i = 1; i <= n; i++){
            add[i] = add[i - 1] + v[i] + sum;
            sum += v[i];
            ans.push_back({add[i] + real[i + 1], i});
        }

        sort(ans.begin(), ans.end());
        for(auto [i, j] : ans) cout << j << " " ;
        cout << endl;
    }
    
    return 0;
}