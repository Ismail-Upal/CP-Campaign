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
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    auto ok = [&](ll sum){
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            ll need = sum - a[i];
            int l = 0, r = n-1, mid, ans = -1;
            while(l <= r){
                mid = l + (r - l) / 2;
                if(b[mid] <= need){
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            if(ans != -1) cnt += ans + 1;
        }
        return cnt >= k;
    };

    ll l = 0, r = 2e9, mid, ans;
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