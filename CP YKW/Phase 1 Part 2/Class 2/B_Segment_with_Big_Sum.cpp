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
    
    ll n, s; cin >> n >> s;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int ans = n; ll sum = 0;
    for(int i = 0, j = 0; i < n; i++){
        while(j < n and sum + v[j] < s){
            sum += v[j]; j ++;
        }
        if(sum + v[j] >= s) ans = min(ans, j - i + 1);
        if(j == n and sum < s) break;
        sum -= v[i];
    }
    ll tot = accumulate(v.begin(), v.end(), 0LL);
    if(s > tot) ans = -1;
    cout << ans ;
    return 0;
}