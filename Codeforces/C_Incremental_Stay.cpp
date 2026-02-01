#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        vector<ll> v;
        for (ll i = 0; i < 2 * n; i++) {
            ll x; cin >> x; v.push_back(x);
        }
 
        vector<ll> ans(n + 3, 0);
        for (ll i = 0; i < 2 * n; i += 2) ans[1] -= v[i];
        for (ll i = 1; i < 2 * n; i += 2) {
            ans[1] += v[i]; ans[2] -= v[i];
        }
        for (ll i = 2; i < 2 * n; i += 2) ans[2] += v[i];
        ans[2] += 2 * v.back() - v[0];
 
        for (ll i = 3; i <= n; i++) {
            ans[i] = ans[i - 2] + 2 * (v[(ll)v.size() - i + 1] - v[i - 2]);
        }
 
        for (ll i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << endl;
    }
    
    return 0;
}