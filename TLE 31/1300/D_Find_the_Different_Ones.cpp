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
        vector<int> v(n + 1), near_idx(n + 1, - 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        int idx = 1;
        for(int i = 1; i <= n; i++){
            if(v[i] == v[idx]) near_idx[i] = -1;
            else break;
            idx = i;
        }

        for(int i = idx + 1; i <= n; i++){
            if(v[i] != v[i - 1]){
                near_idx[i] = i - 1;
                idx = i - 1;
            }
            else if(v[i] == v[i - 1]){
                near_idx[i] = idx;
            }
        }

        // for(int i = 1; i <= n; i++) cout << near_idx[i] << " ";
        // cout << endl;
        int q; cin >> q;
        while(q--){
            int l, r; cin >> l >> r;
            if(near_idx[r] >= l) cout << near_idx[r] << " " << r << endl;
            else cout << - 1 << " " << -1 << endl;
        }
        cout << endl;
    }
    
    return 0;
}