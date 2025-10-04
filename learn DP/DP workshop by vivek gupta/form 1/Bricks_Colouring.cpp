#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'

const int mod = 1e9 + 7;
const int MAX_N = 2003;
const int MAX_K = 2003;
int n, m, k;
ll dp[MAX_N][MAX_K];

ll rec(int i, int pos) {
    if (i == n){
        if(pos == k) return 1;
        else return 0;
    }
    if (pos > k) return 0;
    
    if (dp[i][pos] != -1) return dp[i][pos];

    ll ans = rec(i + 1, pos); // Same color
    if (pos < k) {
        ans = (ans + (ll)(m - 1) * rec(i + 1, pos + 1)) % mod; // Different color
    }
    
    return dp[i][pos] = ans;
}

int32_t main() {
    opt();
    
    tc {
        cin >> n >> m >> k;
        memset(dp, -1, sizeof dp);
        cout << (ll)m * rec(1, 0) % mod << endl;
    }
    
    return 0;
}