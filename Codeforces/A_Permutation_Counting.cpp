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
        ll n, k; cin >> n >> k;

        map<ll, ll> mp;
        for(int i = 1; i <= n; i++){
            ll x; cin >> x; mp[i] += x;
        }

        auto ok = [&](ll m){
            ll need = 0;
            for(int i = 1; i <= n; i++){
                ll dif = max(m - mp[i], 0LL);
                need += dif;
            }

            return need <= k;
        };
        
        ll l = 0, r = 1e18, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        
        ll baki = k; 
        for(int i = 1; i <= n; i++){
            baki -= max(ans - mp[i], 0LL);
            if(mp[i] > ans) mp[i] -= ans;
            else mp[i] = 0;
        }

        ans = (n * ans) - n + 1;

        vector<int> pref(n + 3), suff(n + 3);
        for(int i = 1; i <= n; i++){
            pref[i] += pref[i - 1];
            if(mp[i] == 0) pref[i]++;
        }
        for(int i = n; i >= 1; i--){
            suff[i] += suff[i + 1];
            if(mp[i] == 0) suff[i]++;
        }

        ll mx = 0;
        reverse(suff.begin() + 1, suff.begin() + n + 1);

        for(ll i = 1; i <= n; i++){
            if(pref[i] <= baki){
                ll x = baki - pref[i];
                ll l = 1, r = n - i, m, res = 0;
                while(l <= r){
                    m = l + (r - l) / 2;
                    if(suff[m] <= x){
                        res = m; 
                        l = m + 1;
                    }
                    else r = m - 1;
                }
                mx = max(i, mx);
                if(res != -1) mx = max(mx, res + i);
            }
        }
        for(ll i = 1; i <= n; i++){
            if(suff[i] <= baki){
                ll x = baki - suff[i];
                ll l = 1, r = n - i, m, res = 0;
                while(l <= r){
                    m = l + (r - l) / 2;
                    if(pref[m] <= x){
                        res = m; 
                        l = m + 1;
                    }
                    else r = m - 1;
                }
                mx = max(i, mx);
                if(res != -1) mx = max(mx, res + i);
            }
        }

        for(int i = 1; i <= n; i++) cout << mp[i] << " " ;
        cout << endl;
        for(int i = 1; i <= n; i++) cout << pref[i] << " " ;
        cout << endl;
        for(int i = 1; i <= n; i++) cout << suff[i] << " " ;
        cout << endl;

        cout << ans + mx << endl;
    }
    
    return 0;
}

