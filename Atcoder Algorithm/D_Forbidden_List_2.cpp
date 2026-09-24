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
    
 
        ll n, q; cin >> n >> q;
        vector<ll> a(n + 1);

        for(ll i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        while(q--){
            ll x, y; cin >> x >> y;
            if(x > a[n]){
                cout << x + y - 1 << endl; continue;
            }

            ll lo = lower_bound(a.begin() + 1, a.end(), x) - a.begin();
            if(x + y - 1 < a[lo]){
                cout << x + y - 1 << endl; continue;
            }
            ll l = lo, r = n, ans = -1, m;
            while(l <= r){
                m = l + (r - l) / 2;
                if(a[m] - x + 1 - (m - lo + 1) < y){
                    ans = m;
                    l = m + 1;
                }
                else r = m - 1;
            }
            
            ll baki = y - (a[ans] - x + 1 - (ans - lo + 1));
            cout << a[ans] + baki << endl; 
        }
    
    
    return 0;
}