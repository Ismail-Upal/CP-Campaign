#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> v(n);
        ll sum = 0, cnt = 0, mn = 1e9;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] <= 0) cnt++;
            mn = min(mn, abs(v[i]));
            sum += abs(v[i]);
        }

        if(cnt % 2) sum -= 2 * mn;
        cout << sum << endl;
    }
    
    return 0;
}