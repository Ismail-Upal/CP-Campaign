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
    
    int n, k; cin >> n >> k;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    map<int, int> mp;
    ll ans = 0;
    for(int i = 1, j = 1; i <= n; i++){
        while(j <= n){
            mp[v[j]]++;
            if(sz(mp) > k){
                mp[v[j]]--;
                if(v[j] == 0) mp.erase(v[j]);
                break;
            }
            ans += j - i + 1;
            j++;
        }
        mp[v[i]]--;
        if(mp[v[i]] == 0) mp.erase(v[i]);
    }
    cout << ans ;
    
    return 0;
}