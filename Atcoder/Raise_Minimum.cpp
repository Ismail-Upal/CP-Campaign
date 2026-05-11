#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k; cin >> n >> k;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    
    auto ok = [&](__int128_t mn){
        __int128_t op = 0;
        for(int i = 1; i <= n; i++){
            if(v[i] < mn){
                __int128_t nd = (mn - v[i] + i - 1) / i;
                op += nd;
            }
        }
        return op <= k;
    };

    __int128_t l = 0, r = 2e19, ans = -1;
    while(l <= r){
        __int128_t m = l + (r - l) / 2;
        if(ok(m)){
            ans = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    string s = "";
    while(ans){ 
        int r = ans % 10; 
        ans /= 10;
        s += to_string(r);
    }
    reverse(s.begin(), s.end());
    cout << s;
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}