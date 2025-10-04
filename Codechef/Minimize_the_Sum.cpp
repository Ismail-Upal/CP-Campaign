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
        int n; cin >> n;
        vector<vector<ll>> v(n, vector<ll> (n));
        int same = 1, cur = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
                if(i + j > 0){
                    if(v[i][j] != cur) same = 0;
                }
                if(i + j == 0) cur = v[i][j];
            }
        }
        if(same){
            cout << cur << endl;
            continue;
        }

        ll scr1 = 0;
            ll sum1 = 0;
            for(int i = 0; i < n; i++){
                ll sum2 = 0;
                for(int j = 0; j < n; j++){
                    sum2 += v[i][j];
                }
                if(i == 0){
                    sum1 = sum2; 
                }
                else{
                    if(sum2 > sum1) scr1++;
                }
            }

        auto ok = [&](ll k){
            ll scr = 0;
            ll sum1 = 0;
            for(int i = 0; i < n; i++){
                ll sum2 = 0;
                for(int j = 0; j < n; j++){
                    if(v[i][j] > k) sum2 += k;
                    else sum2 += v[i][j];
                }
                if(i == 0){
                    sum1 = sum2; 
                }
                else{
                    if(sum2 > sum1) scr++;
                }
            }
            if(scr >= scr1){
                scr1 = scr;
                return true;
            }
            else return false;
        };

        ll l = 0, r = 1e16, mid, ans = -1;
        while(l <= r){
            mid = l + (r - l) / 2;
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