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
        int n; cin >> n;
        vector<ll> v(n);
        map<ll, ll> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!mp[v[i]]) continue;

            ll dup = 0;
            for(ll k = 0; k < 31; k++){ 
                if(!(v[i] & (1ll << k))) dup |= (1ll << k);
            }
            // cout << dup << endl;
            // for(ll k = 0; k < 31; k++){ 
            //     cout << ((v[i] >> k) & 1ll);
            // }
            // cout << endl;

            // for(ll k = 0; k < 31; k++){ 
            //     cout << ((dup >> k) & 1ll);
            // }
            // cout << endl;
            // cout << endl;

            if(mp[dup]){
                mp[dup]--;
            }
            mp[v[i]]--;
            ans++;
        }

        cout << ans << endl;
    }
    
    return 0;
}