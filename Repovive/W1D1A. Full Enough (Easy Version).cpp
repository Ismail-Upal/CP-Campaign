#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, w; cin >> n >> w;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v[i] = {x, i + 1};   
    }

    sort(v.rbegin(), v.rend());
    vector<int> ans;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(sum + v[i].first <= w){
            sum += v[i].first;
        }
        else if(sum + v[i].)
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