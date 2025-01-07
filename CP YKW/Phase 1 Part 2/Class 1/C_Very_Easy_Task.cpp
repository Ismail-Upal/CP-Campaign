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
 
    ll n, x, y; cin >> n >> x >> y;
    ll l = 0, r = 1e10, mid, ans; 

    auto ok = [&](ll time){
        ll copy1 = 0, copy2 = 0;
        time-=min(x,y);
        if(time == 0) return 1 >= n;
        else if(time < 0) return false;
        copy1 += time/x;
        copy2 += time/y;
        return copy1+copy2+1 >= n;
    };

    while(l <= r){
        mid = l + (r - l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
    return 0;
}