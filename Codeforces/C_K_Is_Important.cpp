#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    ll tot = n - k + 1;
    ll ex = max(0ll, tot - k + 1);
    ll ans = 0;
    for(int i = k; i < k + ex; i++) ans += v[i];

    ll l = tot - ex, r = k + ex;

    while(r <= n){
        ans += max(v[l], v[r]);
        l--, r++;
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
