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
        int n; cin >> n;
        vector<pair<int, pair<int, int>>> v(n);
        for(int i = 0; i < n; i++) cin >> v[i].second.first;        
        for(int i = 0; i < n; i++) cin >> v[i].second.second;
        for(int i = 0; i < n; i++){
            v[i].first = v[i].second.first + v[i].second.second;
        }       
        sort(v.rbegin(), v.rend());
        ll ans = v[0].first;
        int ok = 0;
        for(int i = 1; i < n; i++){
            if(i == 1) ans += v[i].second.first;

            if(i > 1 and !ok) ans += v[i].second.first;
            else if(i > 1 and ok) ans += v[i].second.second;

            if(i < n - 1 and v[i].second.second > v[i + 1].second.first){
                ok = 1;
                ans += v[i].second.second;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}