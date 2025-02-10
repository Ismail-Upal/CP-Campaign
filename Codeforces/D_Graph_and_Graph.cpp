#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1e3+4;
vector<int> g1[N], g2[N];
int32_t main()
{   
    opt();
    
    tc{
        int n, x, y; cin >> n >> x >> y;
        int m1; cin >> m1;
        while(m1--){
            int u, v; cin >> u >> v;
            g1[u].push_back(v);
            g1[v].push_back(u);
        }
        int m2; cin >> m2;
        while(m2--){
            int u, v; cin >> u >> v;
            g2[u].push_back(v);
            g2[v].push_back(u);
        }
        
    }
    
    return 0;
}