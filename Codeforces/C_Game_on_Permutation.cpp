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
        vector<int> v(n + 1), dp(n + 3, 0);
        for(int i = 0; i < n; i++) cin >> v[i];

        vector<int> lis;
        for(int i = 0; i < n; i++){
            auto it = lower_bound(lis.begin(), lis.end(), v[i]);
            if(it == lis.end()){
                dp[i] = it - lis.begin();
                lis.push_back(v[i]);
            }
            else{
                dp[i] = it - lis.begin();
                *it = v[i];
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(dp[i] == 1) ans++;
            // cout << dp[i] << " " ;
        }
        cout << ans << endl;
    }
    
    return 0;
}