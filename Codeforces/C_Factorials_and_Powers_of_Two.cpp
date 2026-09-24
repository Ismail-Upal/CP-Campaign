#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()


void Solve(){
    ll n; cin >> n;
    vector<ll> v;

    ll fact = 2;
    for(ll i = 3; i <= 20; i++){
        fact *= i; 
        if(fact <= n){ 
            v.push_back(fact);
        }
        else{
            break;
        }
    }

    ll ans = __builtin_popcountll(n);

    for(int mask = 0; mask < (1ll << sz(v)); mask++){
        ll sum = 0;
        ll cnt = 0;
        for(int i = 0; i < sz(v); i++){
            if(mask & (1ll << i)){
                sum += v[i];
                cnt++;
            }
        }
        if(sum > n) continue;

        cnt += __builtin_popcountll(n - sum);
        ans = min(ans, cnt);
    }    

    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}