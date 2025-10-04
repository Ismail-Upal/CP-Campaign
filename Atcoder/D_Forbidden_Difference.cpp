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
    
    int n, d; cin >> n >> d;
    vector<int> v(n);
    set<int> se;
    map<int, int> mp, taken;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++; 
        se.insert(v[i]);
    }
    

    if(d == 0){
        int ans = 0;
        for(int i : se){
            ans += mp[i] - 1;
        }
        cout << ans << endl; return 0;
    }

    // for(int i : se) cout << i ;

    vector<vector<int>> vc;

    while(!se.empty()){
        vector<int> tmp;

        int j = *se.begin();
    
        while(se.find(j) != se.end() and !taken[j]){
            taken[j] = 1;
            tmp.push_back(j);
            j = j + d;
        }
        for(auto i : tmp) se.erase(se.find(i));
        vc.push_back(tmp);
    }

    int ans = 0;

    for(auto v : vc){
        if(sz(v) == 1) continue;

        int l = 0, r = 0, m = 0;
        for(int i = 0; i < sz(v); i += 2){
            l += mp[v[i]];
            if(i + 1 < sz(v)) r += mp[v[i + 1]];
        }
        for(int i = 1; i < sz(v) - 1; i++) m += mp[v[i]];
        if(m == 0) m = 1e9;
        ans += min({l, r, m});
    }

    cout << ans << endl;
    
    return 0;
}