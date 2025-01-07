#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
const int N = 1e6;
int n, k, a[N];
bool ok(ll mid){
    ll sum = 0;
    for(int i = n/2; i < n; i++)if(a[i] < mid){
        sum += mid-a[i];
    }
    return sum <= k;
}
int32_t main()
{	opt();
 
    cin >> n >> k; 
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll l = 1, r = 2e9, ans, mid;
    while(l <= r){
        mid = l + (r - l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << ans;
 
    return 0;
}