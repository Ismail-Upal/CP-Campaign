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
    sort(v.begin() + 1, v.end());

    ll l = 1, r = n, add = 0, cost = 0, ops = 0;
    while(l < r){
        while(l < r and v[l] + add == v[l + 1] + add) l++;
        while(l < r and v[r] + add == v[r - 1] + add) r--;

        if(l <= n - r + 1){
            ll x = v[l] + add;
            ll y = v[l + 1] + add;
            ll dif = y - x;
            add -= dif;
            cost += dif * l;
            ops += dif;
            l++;
        }
        else{
            ll y = v[r] + add;
            ll x = v[r - 1] + add;
            ll dif = y - x;
            add += dif;
            cost += dif * (n - r + 1);
            ops += dif;
            r--;
        }
    }

    cout << cost << " " << ops << endl;
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