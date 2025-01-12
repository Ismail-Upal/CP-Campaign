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
    
    int n, m; cin >> n >> m; 
    vector<int> v(n);
    set<int> se; se.insert(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++) cin >> v[i], se.insert(i);
    int ans = INT_MAX;;
    for(int i = 0, j = 0; j < n; j++){
        mp[v[j]]++;
        if(se.find(v[j]) != se.end()) se.erase(v[j]);
        if(j - i + 1 >= m){
            int val = *se.begin();
            // cout << val << endl;
            ans = min(ans, val);  
            mp[v[i]]--;
            if(mp[v[i]] == 0){
                mp.erase(v[i]);
                se.insert(v[i]);
            }
            i++;
        }
    }
    cout << ans;
    
    return 0;
}