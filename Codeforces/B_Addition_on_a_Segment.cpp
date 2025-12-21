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
    
    tc{
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());

        ll sum = accumulate(v.begin(), v.end(), 0ll);
        ll tak = 0, ans = 1, mx = v[0] - 1;
        for(ll i = 0; i < n; i++){
            if(v[i] == 0) break;
            tak++;
            if(n - 1 <= sum - tak) ans = tak;
        }
        cout << ans << endl;
    }
    
    return 0;
}