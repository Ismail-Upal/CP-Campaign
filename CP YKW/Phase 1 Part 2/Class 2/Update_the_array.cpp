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
        int n, u; cin >> n >> u;
        vector<int> a(n, 0);
        while(u--){
            int l, r, v; cin >> l >> r >> v;
            a[l] += v;
            a[r + 1] -= v;
        }
        for(int i = 1; i < n; i++){
            a[i] = a[i] + a[i-1];
        }
        int q; cin >> q;
        while(q--){
            int x; cin >> x;
            cout << a[x] << endl;
        }
    }
    
    return 0;
}