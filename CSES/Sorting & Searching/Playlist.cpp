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
    for(int i = 0; i < n; i++) cin >> v[i];

    set<int> se;
    map<int, int> mp;
    int ans = 0;
    for(int l = 0, r = 0; r < n; ){
        se.insert(v[r]);
        mp[v[r]]++;
        if(r - l + 1 == se.size()){
            r++;
            ans = max(ans, (int)se.size());
        }
        else if(r - l + 1 > se.size()){
            mp[v[l]]--;
            if(mp[v[l]] == 0){
                mp.erase(v[l]);
                se.erase(se.find(v[l]));
            }
            l++; r++;
        }
        else if(l >= r) r++;
    }
    cout << ans ;
    
    return 0;
}