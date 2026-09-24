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
    
    int n; cin >> n;
    vector<string> s(n), t(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cin >> t[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(t[i][j] != s[i][j]) ans++;
        }
    }
    
    
    for(int r = 1; r <= 3; r++){
        vector<string> tmp(n, string(n, '0'));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                tmp[j][n - i - 1] = s[i][j];
            }
        }

        int rot = r;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(t[i][j] != tmp[i][j]) rot++;
            }
        }
        ans = min(ans, rot);
        s = tmp;
    }

    cout << ans << endl;
    
    return 0;
}