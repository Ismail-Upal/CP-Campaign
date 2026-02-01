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
    
    
        int n, q; cin >> n >> q;
        ll sum = 0;
        map<ll, ll> mp;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            mp[i] = x;
            sum += x;
        }
        
        ll all = -1;

        while(q--){
            int t; cin >> t;
            if(t == 1){
                ll i, x; cin >> i >> x;
                i--;
                if(mp[i]){
                    sum -= mp[i];
                    sum += x;
                    mp[i] = x;
                }
                else{
                    sum -= all;
                    sum += x;
                    mp[i] = x;
                }
            }
            else{
                ll x; cin >> x;
                all = x;
                sum = x * n;
                mp.clear();
            }
            cout << sum << endl;
        }
    
    
    return 0;
}