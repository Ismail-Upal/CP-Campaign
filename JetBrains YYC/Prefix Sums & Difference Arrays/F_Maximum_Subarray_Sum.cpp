#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    ll cur = v[1], mx = v[1];
    for(int i = 2; i <= n; i++){
        cur = max(v[i], cur + v[i]);
        mx = max(mx, cur);
    }

    cout << mx;
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