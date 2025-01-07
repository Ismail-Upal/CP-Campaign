#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    int n, t; cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    auto ok = [&](ll time){
        ll prod = 0;
        for(int i = 0; i < n; i++){
            if(prod >= t) return true;
            prod += time / v[i];
        }
        return prod >= t;
    };
    ll l = 0, r = 1e18, mid, ans = 0;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans ;
    return 0;
}