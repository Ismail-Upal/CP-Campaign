#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        vector<pair<ll, ll>> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i].first;
        for(ll i = 0; i < n; i++) cin >> a[i].second;

        ll ans = 0;
        for(ll i = 0; i < n; i++){
            if(a[i].first > a[i].second) swap(a[i].first, a[i].second);
            ans += abs(a[i].first - a[i].second);
        }

        sort(a.begin(), a.end());

        int ok = 0;
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1].first <= a[i].second){
                ok = 1; break;
            }
        }

        if(ok){
            cout << ans << endl; continue;
        }
        
        ll sum = 1e18;
        for(int i = 0; i < n - 1; i ++){
            if(a[i + 1].first > a[i].second){
                sum = min(sum, 2 * (a[i + 1].first - a[i].second));
            }
        }

        cout << sum + ans << endl;
    }
    
    return 0;
}