#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 1e9;
int32_t main()
{   
    opt();
    
    tc{
        ll n, m; cin >> n >> m;
        vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];

        vector<ll> pref(m, N), suff(m, -N);
 

        for(ll i = 0, j = 0; i < n and j < m; i++){
            if(a[i] >= b[j]){
                pref[j] = i;
                j++; 
            }
        }
        for(ll i = n - 1, j = m - 1; i >= 0 and j >= 0; i--){
            if(a[i] >= b[j]){
                suff[j] = i;
                j--;
            }
        }
        // for(ll i : pref) cout << i << " ";
        // cout << endl;
        // for(ll i : suff) cout << i << " ";
        // cout << endl;
        if(pref[m - 1] != N or suff[0] != -N){
            cout << 0 << endl;
            continue;
        }
        ll ans = INT_MAX;
        for(ll i = 1; i < m - 1; i++){
            if(pref[i - 1] < suff[i + 1]){
                ans = min(ans, b[i]);
            }
        }
        if(pref[m - 2] != N) ans = min(ans, b[m - 1]);
        if(suff[1] != -N) ans = min(ans, b[0]);

        if(ans != INT_MAX) cout << ans << endl;
        else cout << - 1 << endl;
    }
    
    return 0;
}