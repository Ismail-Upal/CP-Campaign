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
        int a[n][m];
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            for(int j = 0; j < m; j++){
                a[i][j] = s[j] - '0';
            }
        }
        int r = 0, c = 0, ar = 0, ac = 0;
        for(int i = 0; i < n; i++){
            r = 0;
            for(int j = 0; j < m; j++){
                r ^= a[i][j];
            }
            ar += r;
        }
        for(int i = 0; i < m; i++){
            c = 0;
            for(int j = 0; j < n; j++){
                c ^= a[j][i];
            }
            ac += c;
        }
        // cout << ar << " " << ac << endl;
        cout << max(ar, ac) << endl;
    }
    
    return 0;
}