#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, q; cin >> n >> q;
    map<int, vector<pair<int, int>>> mp;

    while(q--){
        int l, r, x; cin >> l >> r >> x;
        mp[x].push_back({l, r});
    }

    vector<int> ans(n + 2);

    for(auto [i, v] : mp){
        vector<int> t(n + 2, 0);
        for(auto j : v){
            ans[j.first] ^= i;
            ans[j.second + 1] ^= i;
        }
    }

    for(int i = 1; i <= n; i++){
        ans[i] = ans[i - 1] ^ ans[i];
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
}  

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}


