#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k, t; cin >> n >> k >> t;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    ll prev = v[0], ans = 0, last = -1;

    for(int i = 0; i < n; i++){
        if(v[i] <= t) last = v[i];
        else break;

        if(v[i] <= prev + k){
            prev = v[i];
        }
        else{
            ll d = v[i] - (prev + k);
            ans += (d + k - 1) / k;
            prev = v[i];
        }
    }
    
    if(last != -1){
        ans += (v[0] + k - 1) / k;
        if(last + k < t) ans += (t - (last + k) + k - 1) / k;
    }
    else{
        ans = (t + k - 1) / k;
    }
    
    cout << ans << endl;
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