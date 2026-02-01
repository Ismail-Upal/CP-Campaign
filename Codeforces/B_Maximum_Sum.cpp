#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()

int32_t main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        vector<ll> v(n + 1), mn(k + 1), mx(k + 1);
        ll sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> v[i]; sum += v[i];
        }
        sort(v.begin() + 1, v.end());
        
        ll tmp = 0;
        for(int i = 1, j = 1; j <= k; j++, i += 2){
            tmp += v[i] + v[i + 1];
            mn[j] = tmp;
        }
        tmp = 0;
        for(int i = n, j = 1; j <= k; j++, i--){
            tmp += v[i];
            mx[j] = tmp;
        }
        
        ll take = min(mn[k], mx[k]);
        for(int i = 1; i <= k; i++){
            take = min({take, mn[i] + mx[k - i]});
        }

        cout << sum - take << endl;
    }
    return 0;
}