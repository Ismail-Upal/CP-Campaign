#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        unordered_map<int, vector<int>> mp;
        
        vector<int> a(n + 1), ans(n + 1);
        int mn = 1e9;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            mp[a[i]].push_back(i);
            mn = min(mn, a[i]);
        }
        if(sz(mp[mn]) == 1 and mp[mn][0] == mn){
            cout << -1 << endl; continue;
        }
        
        vector<pair<int, int>> se;
        int y = 0;
        for(auto [i, v] : mp){
            if(sz(v) > 1){
                sort(v.begin(), v.end()); y += sz(v);
            }
            else{
                v.clear();
                se.push_back({i, v[0]});
            }
        }

        sort(se.begin(), se.end());

        for(int i = 1; i <= n; i++){
            if(sz(mp[a[i]]) > 0){
                ans[i] = mp[a[i]].back();
                mp[a[i]].pop_back();
            }
            else{
                pair<int, int> x = {a[i], i};
                int lo = lower_bound(se.begin(), se.end(), x) - se.begin();
                if(lo == 0){
                    ans[i] = se.back().second;
                }
                else{
                    ans[i] = se[lo + 1].second;
                }
                
            }
        }   
        cout << y + sz(se) - 1 << endl;
        for(int i = 1; i <= n; i++){
            cout << ans[i] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}