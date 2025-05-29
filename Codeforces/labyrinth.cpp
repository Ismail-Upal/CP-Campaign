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
    char c[n][m];
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < m; j++) c[i][j] = s[j];
    }
    
    int ans = 0, ok = 0;
    
    int i = n - 1, j = 0;
    for(int step = 1; step <= 1e4 + 3; step++){
        if(i == 0 and j == m - 1){
            ok = 1; break;
        }
        if(c[i][j] == '>') j++;
        else if(c[i][j] == '<') j--;
        else if(c[i][j] == 'v') i++;
        else if(c[i][j] == '^') i--;

        if(i >= 0 and i < n and j >= 0 and j < m) ans++;
        else break;
    }

    if(ok) cout << ans ;
    else cout << - 1;
    
    return 0;
}