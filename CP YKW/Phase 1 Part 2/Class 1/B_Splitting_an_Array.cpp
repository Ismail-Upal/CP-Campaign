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
 
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    auto ok = [&](ll mid){
        for(int i = 0; i < n; i++){
            if(v[i] > mid) return false;
        }
        ll sum = 0, seg = 1;
        for(int i = 0; i < n; i++){
            if(sum + v[i] <= mid){
                sum += v[i];
            }
            else{
                sum = v[i]; seg++; 
            }
        }
        return seg <= k;
    };
    ll l = 0, r = 1e14, mid, ans;
    while(l <= r){
        mid = l + (r - l)/ 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans ;
    return 0;
}