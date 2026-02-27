#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        
        ll ans = v[0];
        for(int i = 1; i < n; i++){
            ans = min(ans, v[i] - v[i - 1]);
        }

        if(k >= 3) ans = 0;
        else if(k == 2){
            for(int i = 0; i < n - 1; i++){
                for(int j = i + 1; j < n; j++){
                    ll x = v[j] - v[i];
                    int lo = lower_bound(v.begin(), v.end(), x) - v.begin();

                    if(lo < n) ans = min(ans, v[lo] - x);
                    if(lo > 0) lo--, ans = min(ans, x - v[lo]);
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}