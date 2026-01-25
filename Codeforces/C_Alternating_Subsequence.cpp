#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

ll func(int n, vector<int> &v, int mn, int j){
    ll ans = 0;
    for(int i = j; i <= n; i++){
        if(mn < 0){
            if(v[i] < 0) mn = max(mn, v[i]);
            else ans += mn, mn = v[i];
        }
        else{
            if(v[i] > 0) mn = max(mn, v[i]);
            else ans += mn, mn = v[i];
        }
        if(i == n) ans += mn;
    }   
    return ans;
}

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        ll ans = -1e18;
        ans = func(n, v, v[1], 1);
        
        cout << ans << endl;
    }
    
    return 0;
}