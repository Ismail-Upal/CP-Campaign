#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;

    auto ok = [&](ll st, ll d, ll l){
        __int128_t mul = n;
        for(ll i = 1; i <= l; i++){
            mul /= (st + ((i - 1) * d));
            if(mul == 0) return 0;
        }
        return 1;
    };


    ll res = 0;

    for(ll i = 1; i <= n; i++){
        if((__int128_t) i * (i + 1) * (i + 2) > n) break;

        __int128_t lo = 1, hi = 1e9  , ans = 0;
        while(lo <= hi){
            __int128_t mid = lo + (hi - lo) / 2;
            if(ok(i, mid, 3)){
                ans = mid;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        res += ans;
    }

    for(ll d = 1; d <= n; d++){
        ll mul = n;
        mul /= (1 + d);
        mul /= (1 + d + d);
        mul /= (1 + d + d + d);
        if(mul == 0) break;

        for(ll l = 4; l <= n; l++){
            __int128_t lo = 1, hi = 1e9, ans = -1;
            while(lo <= hi){
                __int128_t mid = lo + (hi - lo) / 2;
                if(ok(mid, d, l)){
                    ans = mid;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }

            if(ans == -1) break;
            res += ans;
        }
    }
     
    cout << res;
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


