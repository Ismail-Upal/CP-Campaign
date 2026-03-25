#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    vector<ll> ans(n);

    for(ll i = n - 1; i >= 0; i--){
        sort(v.begin() + i + 1, v.end());
        int up = upper_bound(v.begin() + i + 1, v.end(), v[i]) - v.begin();
        int lo = lower_bound(v.begin() + i + 1, v.end(), v[i]) - v.begin();

        if(lo == up){
            ll l = lo - (i + 1), r = n - lo;;
            ans[i] = max(l, r);
        }
        else{
            ll l = lo - (i + 1), r = n - up;
            ans[i] = max(l, r);
        }
    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}