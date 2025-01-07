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
    ll w, h, n;
    cin >> w >> h >> n;
    
    auto ok = [&](ll l){
        return (l/w)*(l/h) >= n;
    };

    ll l = 1, r = 1, mid , ans ;
    while(!ok(r))r*=2;
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