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
        int n, m; cin >> n >> m;
        vector<pair<int, int>> v(m + 1);
        for(int i = 1; i <= m; i++){
            cin >> v[i].first >> v[i].second;
        }
        int q; cin >> q;
        vector<int> a(q + 1);
        for(int i = 1; i <= q; i++){
            cin >> a[i];
        }
        auto ok = [&](int k){
            vector<int> one(n + 1);
            for(int i = 1; i <= k; i++){
                one[a[i]] = 1;
            }
            for(int i = 1; i <= n; i++){
                one[i] += one[i - 1];
            }
            for(int i = 1; i <= m; i++){
                int cnt = one[v[i].second] - one[v[i].first - 1];
                int len = v[i].second - v[i].first + 1;
                if(len/2 + 1 <= cnt) return true;
            }
            return false;
        };
        int l = 1, r = q, mid, ans = - 1;
        while(l <= r){
            mid = l + (r - l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}