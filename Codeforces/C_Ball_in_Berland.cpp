#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int a, b, k; cin >> a >> b >> k;
    map<int, vector<int>> mp;
    vector<pair<int, int>> v(k);
    vector<int> av;
    for(int i = 0; i < k; i++) cin >> v[i].first;
    for(int i = 0; i < k; i++){
        cin >> v[i].second;
        mp[v[i].first].push_back(v[i].second);
        av.push_back(v[i].first);
    }

    ll ans = 0;
    sort(av.begin(), av.end());
    av.erase(unique(av.begin(), av.end()), av.end());
    reverse(av.begin(), av.end());
    multiset<int> ms;

    for(auto i : av){
        for(auto j : mp[i]){
            ll cnt = sz(ms);
            cnt -= ms.count(j);
            ans += cnt;
        }
        for(auto j : mp[i]){
            ms.insert(j);
        }
    }

    cout << ans << endl;
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