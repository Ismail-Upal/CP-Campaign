#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const ll N = 1e9 + 0ll;
vector<string> v;
vector<ll> ans;

void dfs(string s){
    if(sz(s) > 0){
        ll x = stoll(s);
        if(x <= N) ans.push_back(x);
        else return;
    }

    for(int i = 0; i < sz(v); i++){
        if(sz(s) + sz(v[i]) <= 10){
            dfs(s + v[i]);
        }
    }
}

void Solve(){
    for(ll i = 1; i <= N; i *= 2){
        v.push_back(to_string(i));
    }

    dfs("");
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    ll n; cin >> n;
    cout << ans[n - 1];
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