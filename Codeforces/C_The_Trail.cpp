#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
const int N = 1005;
ll a[N][N];
int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        string s; cin >> s;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        int cr = 1, cc = 1;
        for(int i = 0; i < sz(s); i ++){
            if(s[i] == 'D'){
                ll sum = 0;
                for(int i = 1; i <= m; i++) sum += a[cr][i];
                a[cr][cc] = a[cr][cc] - sum;
                cr++;
            }
            else{
                ll sum = 0;
                for(int i = 1; i <= n; i++) sum += a[i][cc];
                a[cr][cc] = a[cr][cc] - sum;
                cc++;
            }
        }

        if(s[sz(s) - 1] == 'D'){
            ll sum = 0;
            for(int i = 1; i <= m; i++) sum += a[cr][i];
            a[cr][cc] = a[cr][cc] - sum;
        }
        else if(s[sz(s) - 1] == 'R'){
            ll sum = 0;
            for(int i = 1; i <= n; i++) sum += a[i][cc];
            a[cr][cc] = a[cr][cc] - sum;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
       
    }
    
    return 0;
}