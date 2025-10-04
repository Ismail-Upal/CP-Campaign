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
    
    int n, m; cin >> n >> m;
    vector<int> c(n + 1);
    vector<vector<int>> zoo(n + 1);

    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= m; i++){
        int k; cin >> k;
        for(int j = 1; j <= k; j++){
            int z; cin >> z;
            zoo[z].push_back(i);
        }
    }

    for(int z = 1; z <= n; z++){
        for(int i = z + 1; i <= n; i++){
            for(int j = i + 1; j <= n; j++){
                for(int k = j + 1; k <= n; k++){
                    for()
                }
            }
        }
    }
    
    return 0;
}