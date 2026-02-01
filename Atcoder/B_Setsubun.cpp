#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, k; cin >> n >> k;
    ll l = 0, r = 1e9, m, ans = 0;
    while(l <= r){
        m = l + (r - l) / 2;
        if((m * (m + 1) / 2) + (m + 1) * n >= k){
            ans = m; 
            r = m - 1;
        }
        else l = m + 1;
    }
    cout << ans;
    
    return 0;
}