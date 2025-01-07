#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
int n, k; 
bool ok(ll mid){
    return (mid - (mid/n)) >= k;
}
 
int32_t main()
{	opt();
 
    tc{
        cin >> n >> k;
        ll l = 1, r = 2e18, mid, ans;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << ans <<endl;
    }
 
    return 0;
}