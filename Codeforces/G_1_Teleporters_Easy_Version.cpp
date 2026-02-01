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
        int n, k; cin >> n >> k;
        vector<ll> cost(n + 1);
        for(int i = 1; i <= n; i++){
            ll x; cin >> x;
            cost[i] = x + i;
        }
        sort(cost.begin(), cost.end());
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(k >= cost[i]){
                ans++;
                k -= cost[i];
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}