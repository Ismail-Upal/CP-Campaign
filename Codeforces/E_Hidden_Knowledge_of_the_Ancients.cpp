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
        ll n, k, l, r; cin >> n >> k >> l >> r;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        ll ans = 0;
        set<ll> se, se1;
        map<ll, ll> mp, mp1;
        
        for(ll i = 0, x = 0, y = 0; i < n; i++){
            ll L = i + l - 1, R = i + r - 1;
            while(x < n and x <= R and sz(se) < k){
                mp[v[x]]++;
                se.insert(v[x]);
                x++;
            }
            
            while(y < n and sz(se1) <= k and y <= R){
                mp1[v[y]]++;
                se1.insert(v[y]);
                y++;
                if(sz(se1) > k){
                    y--;
                    mp1[v[y]]--;
                    if(mp1[v[y]] == 0) se1.erase(v[y]); break;
                }
            }
 
            x--; y--;
            // cout << i << " " << x << ' ' << y << " ";
            if(sz(se) == k){
                ll z;
                if(x >= L) z = y - x + 1;
                else z = y - L; 
                ans += max(0LL, z);
                // cout << z << endl;
            }
            // cout << endl;

            mp[v[i]]--; 
            if(mp[v[i]] == 0){
                mp.erase(v[i]); se.erase(v[i]);
            }
            mp1[v[i]]--; 
            if(mp1[v[i]] == 0){
                mp1.erase(v[i]); se1.erase(v[i]);
            }
            x++; y++;
        }

        cout << ans << endl;
    }
    
    return 0;
}