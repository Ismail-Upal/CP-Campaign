#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n, h; cin >> n >> h;
    vector<ll> dirt(n + 1);
    for(int i = 1; i <= n; i++) cin >> dirt[i];

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        vector<int> d(n + 1);
        d[i] = h;

        ll H = dirt[i];
        ll l = i - 1, r = i + 1;
        ll sum = h - dirt[i], mx = dirt[i];
        while(l >= 1){
            H = max(H, dirt[l]);    
            mx = max(mx, dirt[l]);
            sum += h - mx;
            if(mx > dirt[l]) d[l] = min(dirt[l], mx);
            else d[l] = h;
            l--;
        }
        mx = dirt[i];
        while(r <= n){
            H = max(H, dirt[r]);
            mx = max(mx, dirt[r]);
            sum += h - mx;

            if(mx > dirt[r]) d[r] = min(mx, dirt[r]);
            else d[r] = h;
            r++;
        }

        ll sum2 = 0;
        
        for(int i = 1; i <= n; i++) cout << d[i] << " ";
        cout << endl;
        ans = max(ans, sum + sum2);
    }
    
    
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}