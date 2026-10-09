#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, k; cin >> n >> k;
    vector<vector<ll>> v(n, vector<ll> (3));

    ll init = LLONG_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i][0] >> v[i][1] >> v[i][2];
        ll s = v[i][0] + v[i][1] + v[i][2];
        init = min(init, s); 
    }

    auto ok = [&](ll S){
        ll op = k;

        for(int i = 0; i < n; i++){
            ll a = v[i][0], b = v[i][1], c = v[i][2];

            ll s = a + b + c;

            if(s >= S) continue;
            
            ll nd;
            if(a > b or b > c or a > c){
                nd = S - s;
            }
            else if(!(a == b and b == c)){
                ll ex = min({b - a, c - a, c - b}) + 1;
                nd = S - (s - ex) + ex; 
            }
            else return false;
            
            if(op < nd) return false;

            op -= nd;
        }
        
        return true;
    };

    ll l = init, r = init + k, m, ans = init;

    while(l <= r){
        m = l + (r - l) / 2;
        if(ok(m)){
            ans = m;
            l = m + 1;
        }
        else r = m - 1;
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