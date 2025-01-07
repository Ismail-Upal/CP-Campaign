#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{	opt();
 
    int m, n; cin >> m >> n;
    vector<int> t(n), z(n), y(n), baloon(n);
    for(int i=0; i<n; i++){
        cin >> t[i] >> z[i] >> y[i];
    }
    
    auto ok = [&](int T){
        ll total_balloon = 0;
        ll left_baloon = m;
        for(int i=0; i<n; i++){
            int block_time = t[i]*z[i] + y[i];
            int cnt_block = T / block_time;
            int partial_block_time = T % block_time;

            ll m1 = 1LL * cnt_block * z[i];
            m1 += min(z[i], partial_block_time / t[i]);

            total_balloon += m1;

            baloon[i] = min(m1, left_baloon);
            left_baloon -= baloon[i];
        }
        return total_balloon >= m;
    };


    int l = 0, r = 1e8, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << endl;
    ok(ans);
    for(int i=0; i<n; i++) cout << baloon[i] << " ";
    cout << endl;
    
    return 0;
}