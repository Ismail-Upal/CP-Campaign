#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1004;
ll pref[N][N];
int32_t main()
{   
    opt();
    
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n ;i++){
        for(int j = 1; j <= n; j++){
            char ch; cin >> ch;
            int cnt = 0;
            if(ch == '*') cnt = 1;
            pref[i][j] = pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1] + cnt; 
        }
    }
    
    while(q--){
        // int a, b, c, d; cin >> a >> b >> c >> d;
        // int ans = pref[c][d] - pref[c][b - 1] - pref[a-1][d] + pref[a-1][b-1];
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int ans = pref[x2][y2] - pref[x2][y1 - 1] - pref[x1 - 1][y2] + pref[x1 - 1][y1 - 1];
        cout << ans << endl;
    }
    
    return 0;
}