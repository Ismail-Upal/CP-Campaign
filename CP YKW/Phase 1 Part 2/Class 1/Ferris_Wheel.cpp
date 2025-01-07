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
    
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    auto ok = [&](ll mid){
        ll g = 0;
        int i = 0, j = n - 1;
        while(i <= j){
            if(v[i] + v[j] <= x){
                g++;
                i++; j--;
            }
            else{
                g++;
                i++;
            }
        }
        return g <= mid;
    };
    ll l = 1, r = 1e14, mid, ans = -1;
    while(l <= r){
        mid = l + (r - l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans ;
    return 0;
}