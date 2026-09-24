#include<bits/stdc++.h>
using namespace std;
#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'

ll extgcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) { x = 1; y = 0; return a; }
    ll x1, y1;
    ll g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

ll ceil_div(ll a, ll b) {
    // b > 0
    if (a >= 0) return (a + b - 1) / b;
    return a / b;
}

ll floor_div(ll a, ll b) {
    // b > 0
    if (a >= 0) return a / b;
    return -((-a + b - 1) / b);
}

void Solve(){
    ll N; cin >> N;
    string s; cin >> s;
    ll n = count(s.begin(), s.end(), '+');
    ll m = N - n;

    ll q; cin >> q;
    while(q--){
        ll x, y; cin >> x >> y;

        ll c1 = y - x;
        ll c2 = x - y;
        ll k  = x * (m - n);

        bool ok = false;

        if(c1 == 0 && c2 == 0){
            // x == y
            ok = (n == m);
        }
        else {
            ll b0, d0;
            ll g = extgcd(c1, c2, b0, d0);

            if(k % g == 0){
                ll bp = b0 * (k / g);
                ll dp = d0 * (k / g);

                ll sdb = c2 / g;
                ll sdd = -c1 / g;

                ll tlo = LLONG_MIN, thi = LLONG_MAX;

                // b in [0, n]
                if(sdb != 0){
                    ll lo_b = min(ceil_div(0 - bp, sdb), floor_div(n - bp, sdb));
                    ll hi_b = max(ceil_div(0 - bp, sdb), floor_div(n - bp, sdb));
                    tlo = max(tlo, lo_b);
                    thi = min(thi, hi_b);
                } else if(bp < 0 || bp > n){
                    tlo = 1; thi = 0;
                }

                // d in [0, m]
                if(sdd != 0){
                    ll lo_d = min(ceil_div(0 - dp, sdd), floor_div(m - dp, sdd));
                    ll hi_d = max(ceil_div(0 - dp, sdd), floor_div(m - dp, sdd));
                    tlo = max(tlo, lo_d);
                    thi = min(thi, hi_d);
                } else if(dp < 0 || dp > m){
                    tlo = 1; thi = 0;
                }

                ok = (tlo <= thi);
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) Solve();
    return 0;
}