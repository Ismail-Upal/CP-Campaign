#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, m, k; cin >> n >> m >> k;
    ll x, y; cin >> x >> y;
    vector<ll> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll> prefa(n, 0);
    prefa[0] = a[0];
    for(int i = 1; i < n; i++){
        prefa[i] = prefa[i - 1] + a[i];
    }

    ll ans = 0;
    ll sum = x + (y * k);
    for(int i = 0; i < n; i++){
        if(sum >= prefa[i]){
            ans = i + 1;
        }
        else break;
    }

    ll sec = 0, ny = y, nx = x;
    for(int i = 0; i < m; i++){
        ll z = (b[i] + k - 1) / k;
        if(ny - z >= 0){
            ny -= z;
            sec++;
            nx += (z * k) - b[i];
        }
        
        ll sm = nx + (ny * k);
        ll l = 0, r = n - 1, md, res = -1;
        while(l <= r){
            md = l + (r - l) / 2;
            if(sm >= prefa[md]){
                res = md;
                l = md + 1;
            }
            else r = md - 1;
        }
        
        ans = max(ans, sec + res + 1);
    }
    cout << ans;
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