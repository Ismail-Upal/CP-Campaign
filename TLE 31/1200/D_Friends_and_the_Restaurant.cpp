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
        vector<ll> x(n), y(n), neg, pos;
        ll zro = 0;
        for(ll i = 0; i < n; i++) cin >> x[i];
        for(ll i = 0; i < n; i++){
            cin >> y[i];
            ll d = y[i] - x[i];
            if(d < 0) neg.push_back(d);
            else if(d > 0) pos.push_back(d);
            else zro++;
        }
        if(neg.empty()){
            cout << n / 2 << endl; continue;
        }
        ll ans = 0;
        sort(neg.begin(), neg.end()); 
        sort(pos.rbegin(), pos.rend());

        ll j = 0;
        for(ll i = 0; i < sz(neg) and j < sz(pos); i++){
            ll nd = neg[i];
            if(nd + pos[j] >= 0){
                j++;
                ans++;
            }
        }
        ans += (sz(pos) - j + zro) / 2;
        ans = max(ans, (sz(pos) + zro) / 2);
        cout << ans << endl;
    }
    
    return 0;
}