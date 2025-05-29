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
        int n, m; cin >> n >> m;
        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++) cin >> v[i];
        int b; cin >> b;
        int ok = 1;
        v[0] = -1e9;
        for(int i = 1; i <= n; i++){
            int tmp = b - v[i];
            if(v[i - 1] <= min(tmp, v[i])){
                v[i] = min(tmp, v[i]);
            }
            else if(v[i - 1] <= max(tmp, v[i])){
                v[i] = max(tmp, v[i]);
            }
            else{
                ok = 0; break;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
} 