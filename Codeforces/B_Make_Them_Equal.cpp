#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n; cin >> n;
    vector<ll> v(n + 1);
    ll sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        sum += v[i];
    }

    ll x = sum / n;

    if(sum % n){
        cout << -1 << endl;
        return;
    }

    vector<vector<ll>> ans;

    for(int i = 2; i <= n; i++){
        if(v[i] % i){
            ll need = i - (v[i] % i);
            ans.push_back({1, i, need});
            v[1] -= need;
            v[i] += need;
        }

        ll d = v[i] / i;
        if(d > 0){
            ans.push_back({i, 1, d});
            v[i] -= i * d;
            v[1] += i * d;
        }
    }


    for(int i = 2; i <= n; i++){
        ll need = x - v[i];
        if(need > 0){
            ans.push_back({1, i, need});
            v[1] -= need;
            v[i] += need;
        }
    }

    for(int i = 1; i <= n; i++){
        if(v[i] != v[1]){
            cout << -1 << endl;
            return;
        }
    }
    
  
    cout << sz(ans) << endl;
    for(auto a : ans){
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
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