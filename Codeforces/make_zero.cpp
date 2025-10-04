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
        int n; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        ll sum = 0;
        for(int i = 0; i < n; i++){
            if(v[i] >= 0) sum += v[i];
            else{
                ll diff = sum - abs(v[i]);
                if(diff >= 0) v[i] = 0, sum = diff;
                else sum = 0, v[i] = diff;
            }
        }

        ll ans = 0;
        for(auto i : v){
            if(i <= 0) ans += abs(i);
        }

        cout << ans << endl;
    }
    
    return 0;
}