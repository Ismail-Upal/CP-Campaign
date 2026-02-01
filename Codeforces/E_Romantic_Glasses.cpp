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
        vector<ll> v(n + 1), odd(n + 1, 0), even(n + 1, 0), diff(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        
        for(int i = 1; i <= n; i++){
            if(i % 2) odd[i] = odd[i - 1] + v[i];
            else odd[i] = odd[i - 1];
        }

        for(int i = 1; i <= n; i++){
            if(i % 2 == 0) even[i] = even[i - 1] + v[i];
            else even[i] = even[i - 1];
        }
        map<ll, ll> mp;
        for(int i = 0; i <= n; i++){
            diff[i] = odd[i] - even[i];
            mp[diff[i]]++;
        }

        if(mp.size() < n + 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}