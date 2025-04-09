#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
int dfs(int i, vector<int> &v, vector<int> &vis){
    if(vis[i]) return 0;
    vis[i] = 1;
    return dfs(v[i], v, vis) + 1;  
}
int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> v(n + 1), vis(n + 1, 0);
        for(int i = 1; i <= n; i++) cin >> v[i];
        
        int ans = 0;
        for(int i = 1; i <= n; i++){
            int d; cin >> d;
            ans += dfs(d, v, vis);
            cout << ans << " ";
        }
        cout << endl;
    }
    
    return 0;
}