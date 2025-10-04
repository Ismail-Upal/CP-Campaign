#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    unordered_map<int, int> mp;
    int ans = 0, prev;
    for(int i = 0; i < n; i++){
        mp[v[i]] = max(mp[v[i]], mp[v[i] - 1] + 1);

        if(mp[v[i]] > ans){
            ans = mp[v[i]];
            prev = v[i];
        }
    }
    vector<int> res;
    cout << ans << endl;

    for(int i = n - 1; i >= 0; i--){
        if(prev == v[i]){
            res.push_back(i + 1);
            prev--;
        }
    }
    reverse(res.begin(), res.end());
    for(int i = 0; i < sz(res); i++){
        cout << res[i] << " " ;
    }
    cout << endl;
    
    return 0;
}