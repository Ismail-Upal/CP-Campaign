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
    
    tc{
        int n, h; cin >> n >> h;
        vector<pair<double, int>> v;
        for(int i = 0; i < n; i++){
            double s, d; cin >> s >> d;
            v.push_back({double(d / s), s});
        }
        sort(v.rbegin(), v.rend());
        // for(auto i : v) cout << i.first << " ";
        // cout << endl;

        auto ok = [&](ll sec){
            double dam = 0;
            for(auto i : v){
                if(i.second == 1 and sec >= 1){
                    dam += i.first * sec;
                    sec = 0;
                }
                else if(i.second == 2 and sec >= 2){
                    if(sec % 2) dam += i.first * (sec - 1), sec = 1;
                    else dam += i.first * sec, sec = 0;
                }
                if(sec == 0) break;
            }
            return dam >= h;
        };


        ll l = 0, r = 1e14, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        cout << ans << endl;
    }
    
    return 0;
}