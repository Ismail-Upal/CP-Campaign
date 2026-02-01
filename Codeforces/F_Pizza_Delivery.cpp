#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const ll N = 2e5 + 6;


int main()
{   
    opt();
    
    tc{
        ll n, ax, ay, bx, by; cin >> n >> ax >> ay >> bx >> by;
        map<int, pair<int, int>> mp;
        vector<int> x(n + 2), y(n + 2);

        x[0] = ax; x[n + 1] = bx;
        mp[ax] = {ay, ay}; mp[bx] = {by, by};

        for(ll i = 1; i <= n; i++){
            cin >> x[i];
            mp[x[i]] = {-1, 1e9};
        }
        for(ll i = 1; i <= n; i++){
            cin >> y[i];
            mp[x[i]].first = max(y[i], mp[x[i]].first);
            mp[x[i]].second = min(y[i], mp[x[i]].second);
        }

        sort(x.begin(), x.end());
        x.erase(unique(x.begin(), x.end()), x.end());
        n = sz(x);

        vector<array<ll, 2>> id(n);
        vector<ll> cost(n);

        for(int i = 0; i < n; i++){
            id[i][0] = mp[x[i]].first;
            id[i][1] = mp[x[i]].second;
            cost[i] = id[i][0] - id[i][1];
        }

        vector<array<ll, 2>> dp(n);
        dp[n - 1][0] = dp[n - 1][1] = 0;

        for(ll i = n - 2; i >= 0; i--){
            for(ll j = 0; j <= 1; j++){
                ll move = llabs(x[i] - x[i + 1]);
                ll other = j ^ 1;
                
                dp[i][j] = min(
                    cost[i] + move + llabs(id[i][other] - id[i+1][0]) + dp[i+1][0],
                    cost[i] + move + llabs(id[i][other] - id[i+1][1]) + dp[i+1][1]
                );
            }
        }
       
        cout << dp[0][0] << endl;
    }
    
    return 0;
}