#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define sz(x) (ll)(x).size()

int main()
{   
    ll n, a, b; cin >> n >> a >> b;
    vector<ll> p(n + 1, 0);
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        p[i] = p[i - 1] + x;
    }
    multiset<ll> se;
    ll ans = -1e18;

    int l = 1, r = 1; se.insert(p[l]);
    while(r <= n){
        if(r - l + 1 < a) r++;
        if(r - l + 1 == a){
            ans = max(ans, p[r] - *se.begin());
            se.erase(se.find(p[r - b]))
        }
    }
    
    cout << ans;
    
    return 0;
}
