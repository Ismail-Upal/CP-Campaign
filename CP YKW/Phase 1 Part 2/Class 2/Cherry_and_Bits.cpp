#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1005;
char a[N][N];
int d[N][N];
int32_t main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int q; cin >> q;
    while(q--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        d[x1][y1] += 1;
        d[x2+1][y1] -=1;
        d[x1][y2+1] -=1;
        d[x2+1][y2+1] += 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            d[i][j] += d[i-1][j] + d[i][j-1] - d[i-1][j-1];
        }
    }
   
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(d[i][j] % 2){
                if(a[i][j]== '1')cout << 0 ;
                else cout << 1 ;
            }
            else cout << a[i][j];
        }
        cout << endl;
    }
    
    return 0;
}