#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    auto cmp = [&](pair<ll, ll> a, pair<ll, ll> b){
        return a.second < b.second;
    };

    sort(v.begin(), v.end(), cmp);
    // for(auto i : v) cout << i.first << " " << i.second << endl;

    auto ok = [&](ll diff){
        int take = 1, curr = v[0].second;
        for(int i = 1; i < n; i++){
            if(v[i].first - curr >= diff){
                take++;
                curr = v[i].second;
            }
        }
        return take >= k;
    };

    ll l = 1, r = 1e9, mid, ans = -1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans ;
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