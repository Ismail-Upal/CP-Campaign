#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

ll f(ll x){
    string s = to_string(x);
    x = 0;
    for(auto k : s){
        x += (k - '0') * (k - '0');
    }
    return x;
}

void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    map<ll, ll> day;

    for(int i = 0; i < n; i++){
        ll x = v[i];
        for(int j = 1; j <= 300; j++){
            x = f(x);
        }
        day[x]++;
    }

    ll ans = 0;

    for(auto [i, j] : day){
        j--;
        ans += (j * (j + 1)) / 2;
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
