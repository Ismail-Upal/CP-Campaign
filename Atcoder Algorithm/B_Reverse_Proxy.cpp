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
    
    int n, q; cin >> n >> q;
    vector<int> ans(q + 1), v(n + 1, 0);
    set<pair<int, int>> se;
    for(int i = 1; i <= n; i++){
        se.insert({0, i});
    }

    for(int i = 1; i <= q; i++){
        int x; cin >> x;
        if(x > 0){
            ans[i] = x;
            if(se.find({v[x], x}) != se.end()){
                se.erase({v[x], x});
            }
            v[x]++;
            se.insert({v[x], x});
        }
        else{
            auto it = *se.begin();
            ans[i] = it.second;
            se.erase(se.find(it));
            v[it.second]++;
            se.insert({{v[it.second], it.second}});
        }
    }

    for(int i = 1; i <= q; i++) cout << ans[i] << " "; 
    
    return 0;
}