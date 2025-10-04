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
    
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> v(n + 1, vector<int> (m + 1));
    vector<vector<int>> pref(n + 3, vector<int> (m + 3, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) cin >> v[i][j];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + v[i][j];
        }
    }

    while(k--){
        int a, b, x, y; cin >> a >> b >> x >> y;
        cout << pref[x][y] - pref[a - 1][y] - pref[x][b - 1] + pref[a - 1][b - 1] << endl;
    }

    
    return 0;
}