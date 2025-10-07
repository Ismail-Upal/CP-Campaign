#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
ll lcm(ll a, ll b){ 
    return a / __gcd(a, b) * b;
}
int main()
{   
    opt();
    
    ll n; cin >> n;
    vector<int> d;
    for(int i = 2; i <= 10; i++) d.push_back(i);
    int k = sz(d);

    ll ans = 0;
    for(int mask = 1; mask < (1 << k); mask++){
        ll L = 1;
        int bits = 0;
        bool over = 0;
        for(int i = 0; i < k; i++){
            if(mask >> i & 1){
                bits++;
                L = lcm(L, d[i]);
                if(L > n){
                    over = 1; break;
                }
            }
        }
        if(over) continue;
        ll cnt = n / L;
        if(bits % 2 == 1) ans += cnt;
        else ans -= cnt;
    }

    cout << n - ans;
    
    return 0;
}