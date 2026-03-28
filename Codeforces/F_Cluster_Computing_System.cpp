#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<int> pref(n + 1), post(n + 1, 1);
    for(int i = 1; i <= n; i++){
        pref[i] = __gcd(v[i], pref[i - 1]);
    }
    for(int i = n; i >= 1; i--){
        post[i] = __gcd(v[i], post[i + 1]);
    }

    int ans = pref[n];
    for(int i = 1; i < n; i++) ans += min(pref[i], post[i]);

    cout << ans;
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