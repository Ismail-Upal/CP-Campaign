// credit: heisenberg
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n;

bool f(ll x){
    ll cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += min(n, x / i);
        if(x==9)cout << x / i  << endl;
    }
    return cnt >= (n * n) / 2 + 1;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ll l = 0, r = 1e12, ans = 0;
    while(l <= r){
        ll m = (l + r) >> 1;
        if(f(m)){
            ans = m;
            r = m - 1;
        }else l = m + 1;
    }
    cout << ans << '\n';
    return 0;
}