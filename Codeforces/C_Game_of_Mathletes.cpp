#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, k; cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int nd = k - v[i];
            mp[v[i]]++;
            if(v[i] == nd){
                if(mp[v[i]] >= 2){
                    ans ++;
                    mp[v[i]]--; mp[nd]--;
                    if(mp[v[i]] == 0) mp.erase(v[i]);
                    if(mp[nd] == 0) mp.erase(nd);
                }
            }
            else
                if(mp.find(v[i]) != mp.end() and mp.find(nd) != mp.end()){
                    ans ++;
                    mp[v[i]]--; mp[nd]--;
                    if(mp[v[i]] == 0) mp.erase(v[i]);
                    if(mp[nd] == 0) mp.erase(nd);
                }
        }
        cout << ans << endl;
    }
    
    return 0;
}