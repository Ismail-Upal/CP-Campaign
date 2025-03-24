#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        sort(b.begin(), b.end());
        int ok = 1, prev = INT_MIN;
        for(int i = 0; i < n; i++){
            int nd = a[i] + prev;
            auto bj = lower_bound(b.begin(), b.end(), nd);
            if(bj != b.end()){
                int vj = *bj;
                if(a[i] < prev) a[i] = vj - a[i];
                else a[i] = min(a[i], vj - a[i]);
            }
            
            if(a[i] < prev){
                ok = 0; break;
            }
            prev = a[i];
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}