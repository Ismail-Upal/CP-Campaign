#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll mx = 0;
    for(int i = 0; i < n - 1; i++){
        mx = max(mx, abs(v[i] - v[i + 1]));
    }
    

    auto ok = [&](ll m){
        ll bad = 0;
        for(int i = 1; i < n; i++){
            if(abs(v[i] - v[i - 1]) > m) bad++;
        }

        if(bad > 2) return 0;
        if(bad == 0) return 1;

        if(bad == 2){
            ll l = -1, r = -1;
            for(int i = 1; i < n; i++){
                if(abs(v[i] - v[i - 1]) > m){
                    if(l == -1) l = i;
                    else r = i - 1;
                }
            }  
            if(abs(v[l - 1] - 2 * v[r]) > m) return 0;
            if(abs(2 * v[l] - v[r + 1]) > m) return 0;
            for(int i = l; i <= r - 1; i++){
                if(abs(2 * v[i] - 2 * v[i + 1]) > m) return 0;
            }
            return 1;
        }

        if(bad == 1){
            ll l, r;
            for(int i = 1; i < n; i++){
                if(abs(v[i] - v[i - 1]) > m){
                    l = i - 1, r = i;
                }
            }

            for(int i = r; i < n; i++){
                if(i == r){
                    bool a = abs(2 * v[i] - v[l]) <= m;
                    bool b = 1;
                    if(i != n - 1) b = abs(2 * v[i] - v[i + 1]) <= m;
                    if(a and b) return 1;
                }
                else{
                    if(abs(2 * v[i] - 2 * v[i - 1]) > m) break;

                    bool a = abs(2 * v[i] - v[l]) <= m;
                    bool b = 1;
                    if(i != n - 1) b = abs(2 * v[l + 1] - v[i + 1]) <= m;
                    if(a and b) return 1;   
                }
            }

            for(int i = l; i >= 0; i--){
                if(i == l){
                    bool a = abs(2 * v[i] - v[r]) <= m;
                    bool b = 1;
                    if(i != 0) b = abs(2 * v[i] - v[i - 1]) <= m;
                    if(a and b) return 1;
                }
                else{
                    if(abs(2 * v[i] - 2 * v[i + 1]) > m) break;

                    bool a = abs(2 * v[i] - v[r]) <= m;
                    bool b = 1;
                    if(i != 0) b = abs(2 * v[r - 1] - v[i - 1]) <= m;
                    if(a and b) return 1;
                }
            }
        }

        return 0;
    };
    
    ll l = 0, r = mx, m, ans = mx;
    while(l <= r){
        m = l + (r - l) / 2;
        if(ok(m)){
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
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