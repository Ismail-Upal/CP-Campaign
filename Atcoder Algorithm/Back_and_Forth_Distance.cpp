#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, q; cin >> n >> q;
    vector<ll> l(n + 1), r(n + 1);
    for(int i = 2; i <= n; i++) cin >> l[i];
    for(int i = 1; i < n; i++) cin >> r[i];

    vector<ll> prefR(n + 1), suffL(n + 1);
    prefR[1] = r[1];
    for(int i = 2; i <= n; i++){
        prefR[i] = min(prefR[i - 1], r[i]);
    }

    suffL[n] = l[n];
    for(int i = n - 1; i >= 1; i--){
        suffL[i] = min(suffL[i + 1], l[i]);
    }
    
    while(q--){
        ll s, t; cin >> s >> t;

        if(s < t){
            if(s == 1) cout << r[s] << endl;
            else cout << min(r[s], l[s] + prefR[s - 1]) << endl;
        }
        else{
            if(s == n) cout << l[s] << endl;
            else cout << min(l[s], r[s] + suffL[s + 1]) << endl;
        }
    }
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