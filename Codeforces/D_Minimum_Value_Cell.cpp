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
    
    ll n, q; cin >> n >> q;
    vector<ll> a(n + 1), b(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) cin >> b[i];
    
    vector<ll> mnrow(n + 1), mncol(n + 1);
    
    vector<ll> tmp = b;
    sort(tmp.begin() + 1, tmp.end());

    for(ll i = 1; i <= n; i++){
        ll x = 0;
        if(tmp[1] >= a[i]) x = abs(a[i] - tmp[1]);
        else if(tmp[n] <= a[i]) x = abs(a[i] - tmp[n]);
        else{
            ll l = 1, r = n, m, ans = -1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(tmp[m] <= a[i]){
                    ans = m;
                    l = m + 1;
                }
                else r = m - 1;
            }

            x = abs(a[i] - tmp[ans]);
            x = min(x, abs(a[i] - tmp[ans + 1]));
        }

        mnrow[i] = x;
    }

    tmp = a;
    sort(tmp.begin() + 1, tmp.end());
    for(ll i = 1; i <= n; i++){
        ll x = 0;
        if(tmp[1] >= b[i]) x = abs(b[i] - tmp[1]);
        else if(tmp[n] <= b[i]) x = abs(b[i] - tmp[n]);
        else{
            ll l = 1, r = n, m, ans = -1;
            while(l <= r){
                m = l + (r - l) / 2;
                if(tmp[m] <= b[i]){
                    ans = m;
                    l = m + 1;
                }
                else r = m - 1;
            }

            x = abs(b[i] - tmp[ans]);
            x = min(x, abs(b[i] - tmp[ans + 1]));
        }

        mncol[i] = x;
    }
    

    vector<ll> qx(q), qy(q);
    for(ll i = 0; i < q; i++) cin >> qx[i];
    for(ll i = 0; i < q; i++) cin >> qy[i];

    for(ll i = 0; i < q; i++){
       cout << min(mnrow[qx[i]], mncol[qy[i]]) << endl;
    }

    
    return 0;
}