#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

set<pair<ll, ll>> ans;

void rec(ll l, ll r){
    if(l > r) return;
    if(l == r){
        ans.insert({l, r});
        return;
    }

    ll m = l + (r - l) / 2;
    ans.insert({l, m});
    ans.insert({m, r});

    rec(l + 1, m - 1);
    rec(m + 1, r - 1);
}

void Solve(){
    ans.clear();

    ll n, m; cin >> n >> m;

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    ll k = (n + 1) / 2;
    cout << k << endl;

    for(ll i = 1; i <= k; i++){
        ll l = i + 1;
        ll r = min(i + k, n);
        cout << l << " " << r << endl;
    }
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