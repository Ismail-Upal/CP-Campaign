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
        ll n, m, k; cin >> n >> m >> k;
        ll w; cin >> w;
        vector<ll> v(w);
        for(ll i = 0; i < w; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());

        ll a[n + 5][m + 5]; memset(a, 0, sizeof a);

        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= m; j++){
                ll x1 = i, y1 = j;
                ll x2 = i + k - 1, y2 = j + k - 1;
                if(x2 > n or y2 > m) continue;
                a[x1][y1]++;
                a[x2 + 1][y1]--;
                a[x1][y2 + 1]--;
                a[x2 + 1][y2 + 1]++;
            }
        }
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= m; j++){
                a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
            }
        }
        vector<ll> mx;
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= m; j++){
                mx.push_back(a[i][j]);
            }
        }
        sort(mx.begin(), mx.end());
        ll i = 0, ans = 0;
        while(i < w){
            ans += v[i] * mx.back();
            i++; mx.pop_back();
        }

        cout << ans << endl;
    }
    
    return 0;
}