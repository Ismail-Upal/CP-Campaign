#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int n, dp[100000];

int rec(int x){
    // pruning

    // base case
    if(x == 0) return 0;

    // cache check
    if(dp[x] != -1) return dp[x];

    // compute
    int ans = 0;
    for(int m = 0; (1 << m) <= x; m++){
        if(rec(x - (1 << m)) == 0) {
            ans = 1; break;
        }
    }

    // save and return
    return dp[x] = ans;
}

int32_t main()
{   
    opt();
    
    cin >> n; 

    memset(dp, -1, sizeof dp) ;

    cout << rec(n);

    // if(n % 3 == 0) cout << "lose" ;
    // else cout << "win" ;

    // there will be an patten in game dp
    
    return 0;
}