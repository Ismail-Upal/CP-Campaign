#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, q; cin >> n >> q;
        vector<ll> v(n + 2, 0);
        map<int, int> mp;
        while(q--){
            int l, r; cin >> l >> r;
            v[l]++;
            v[r + 1]--;
            int d = r - l + 1;
            mp[r + 1] -= d;
        }
        for(int i = 1; i <= n; i++) v[i] += v[i - 1];
        for(int i = 1; i <= n; i++){
            v[i] += v[i - 1];
            v[i] += mp[i];
        }
        for(int i = 1; i <= n; i++) cout << v[i] << " ";
        cout << endl;
    }
    
    return 0;
}