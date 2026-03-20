#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    ll n; cin >> n;
    vector<ll> a(n + 1), b(n + 1);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) cin >> b[i];

    vector<ll> pref(n + 1);
    for(ll i = 1; i <= n; i++) pref[i] = b[i] + pref[i - 1];

    vector<ll> diff(n + 1), res(n + 1);

    for(ll i = 1; i <= n; i++){
        ll l = i, r = n, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(pref[m] - pref[i - 1] < a[i]){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        if(ans == -1) ans = i;
        else if(ans < n) ans++;

        if(ans > i){
            diff[i]++;
            diff[ans]--;
            ll baki = a[i] - (pref[ans - 1] - pref[i - 1]);
            res[ans] += min(baki, b[ans]);
        }
        else{ 
            res[i] += min(b[i], a[i]);
        }
    }

    for(ll i = 1; i <= n; i++) diff[i] += diff[i - 1];
    for(ll i = 1; i <= n; i++){
        res[i] += b[i] * diff[i];
        cout << res[i] << " ";
    }
    cout << endl;
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