#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 104;
int g[N][N];
int32_t main()
{   
    opt();
    
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int u, k; cin >> u >> k;
        while(k--){
            int v; cin >> v;
            g[u][v] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j != 1) cout << " ";
            cout << g[i][j];
        }
        cout << endl;
    }
    
    return 0;
}