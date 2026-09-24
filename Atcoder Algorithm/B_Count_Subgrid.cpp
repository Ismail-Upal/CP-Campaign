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
    
    char a[n + 1][n + 1]; 
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        for(int j = 0; j < n; j++){
           a[i + 1][j + 1] = s[j];
        }
    }
    set<string> se;
    for(int i = 1; i <= n - m + 1; i++){
        for(int j = 1; j <= n - m + 1; j++){
            string s;
            for(int x = i; x <= i + m - 1; x++){
                for(int y = j; y <= j + m - 1; y++){
                    if(a[x][y] == '.') s += '1';
                    else s += '0';
                }
            }
            se.insert(s);
        }
    }

    cout << sz(se) ;
    
    return 0;
}