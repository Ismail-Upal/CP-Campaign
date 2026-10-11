#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n + 1), b(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
    }

    vector<ll> pref(n + 2, 0);
    pref[1] = b[1] - a[1] + 1;
    for(int i = 2; i <= n; i++){
        pref[i] = pref[i - 1] + (b[i] - a[i] + 1);
    }

    for(int i = 1; i <= n; i++) cout << pref[i] << " ";
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