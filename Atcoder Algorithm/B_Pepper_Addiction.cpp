#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n, m; cin >> n >> m;
    vector<int> c(m + 1);
    for(int i = 1; i <= m; i++) cin >> c[i];
    vector<int> can(m + 1);
    for(int i = 1; i <= n; i++){
        int a, b; cin >> a >> b;
        can[a] += b;
    }
    ll ans = 0;
    for(int i = 1; i <= m; i++){
        ans += min(can[i], c[i]);
    }
    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}