#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    ll n, m; cin >> n >> m;
    ll a[n + 1][m + 1], dp[n + 2][m + 2];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector<ll> p(n + m - 1);
    ll sum = 0;
    for(ll i = 0; i < n + m - 1; i++){
        cin >> p[i]; sum += p[i];
    }
    memset(dp, 0, sizeof dp);

    vector<ll> path; 

    for(ll i = n - 1; i >= 0; i--){
        for(ll j = m - 1; j >= 0; j--){
            ll ans = a[i][j];
            ans += max(dp[i + 1][j], dp[i][j + 1]);
            dp[i][j] = ans;
        }
    }
    ll i = 0, j = 0;
    while(i < n and j < m){
        path.push_back(a[i][j]);
        if(i == n - 1) j++;
        else if(j == m - 1) i++;
        else if(dp[i + 1][j] > dp[i][j + 1]) i++;
        else j++;
    }

    ll coin = 0, nd = 0;
    for(ll i = 0; i < n + m - 1; i++){
        coin += path[i];
        if(coin < p[i]){
            nd += p[i] - coin;
            p[i] = coin;
        }
        else coin -= p[i];
    }
    cout << nd << endl;
    
    return 0;
}