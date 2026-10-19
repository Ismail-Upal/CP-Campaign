#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, q; cin >> n >> q;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<ll> pref(n + 1, 0);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + v[i];
    }

    vector<ll> cont(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cont[i] = cont[i - 1] + pref[i];
    }

    while(q--){
        ll ql, qr; cin >> ql >> qr;
        ll L, R; 
        ql--;

        ll l = 0, r = n, m, ans = 0;
        while(l <= r){
            m = l + (r - l) / 2;
            if((m * (m + 1) / 2) <= ql){
                L = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        l = 0, r = n, m = 0, ans = 0;
        while(l <= r){
            m = l + (r - l) / 2;
            if((m * (m + 1) / 2) <= qr){
                R = m;
                l = m + 1;
            }
            else r = m - 1;
        }
       
        ll SL = cont[L] + pref[ql - (L * (L + 1) / 2)];
        ll SR = cont[R] + pref[qr - (R * (R + 1) / 2)];

        cout << SR - SL << endl;
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