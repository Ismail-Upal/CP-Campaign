#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
vector<int> factor(int n){
    vector<int> fact;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i > 1) fact.push_back(i);
            if(n / i != i){
                fact.push_back(n / i);
            }
        }
    }
    return fact;
}
int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n), dp(n + 1, 1e9);
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            dp[v[i]] = 1;
            mp[v[i]] = 1;
        }
        
        for(int i = 1; i <= n; i++){
            if(mp[i] and dp[i] == 1) continue;

            vector<int> fact = factor(i);
            for(int f : fact){
                if(mp[f]){
                    dp[i] = min(dp[i], 1 + dp[i / f]);
                }
            }
        }

        for(int i = 1; i <= n; i++){
            if(dp[i] == 1e9) dp[i] = -1;
            cout << dp[i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}