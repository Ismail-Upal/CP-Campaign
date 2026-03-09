#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<vector<int>> uni(n + 1);
    vector<int> u(n + 1), s(n + 1);
    for(int i = 1; i <= n; i++) cin >> u[i];
    for(int i = 1; i <= n; i++) cin >> s[i];

    for(int i = 1; i <= n; i++){
        uni[u[i]].push_back(s[i]);
    }
    vector<ll> ans(n + 1, 0);

    for(auto v : uni){
        sort(v.rbegin(), v.rend());
        int m = sz(v);
        vector<ll> pref(m + 1, 0);
        for(int i = 0; i < m; i++){
            pref[i + 1] = pref[i] + v[i]; 
        }
        for(int i = 1; i <= m; i++){
            int r = m % i;
            ans[i] += pref[m - r];
        }
    }

    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}