#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    int n, m; cin >> n >> m;
    int ok = 1;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        for(int j = 1; j <= m; j++) a[i][j] = s[j - 1] - '0';
    }
    for(int i = 1; i <= n; i++){
        int pre = a[i][1];
        for(int j = 1; j <= m; j++){
            if(a[i][j] != pre) ok = 0;
        }
        if(ok and i > 1 and i < n){
            for(int j = 1; j <= m; j++){
                if(a[i - 1][j] == pre) ok = 0;
            }
        }
        if(!ok) break;
    }

    if(ok) cout << "YES" ;
    else cout << "NO" ;
    
    return 0;
}